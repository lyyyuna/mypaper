%%%%%%%%%%%%%%%%%%%%%%%%%%
%======parameter==========
%%%%%%%%%%%%%%%%%%%%%%%%%%
% drive train model
B_dt = 775.49;
B_r = 7.11;
B_g = 45.6;
N_g = 95;
K_dt = 2.7e9;
eta_dt = 0.97;
J_g = 390;
J_r = 55e6;

% pitch and blade model
omega_n = 11.11;
zeta = 0.6;

% fault model
zeta3 = 0.9;
omega_n3 = 3.42;

% loop shape filter
zeta_ome = 0.5321;
ome_ome = 0.608223;
ome_pw = ome_ome * ome_ome;
omega_3p = 0.6083 * 3;
p3 = 1.764 * omega_3p;
z3 = 10.44 * omega_3p;
%%%%%%%%%%%%%%%%%%%%%%%%%%
%======parameter end======
%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%======scheduling parameter range======
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% build the convex space
v1 = [13; 0];
v2 = [13; 1];
v3 = [25; 0];
v4 = [25; 1];
pv = pvec('pol', [v1 v2 v3 v4]);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%======scheduling parameter range end==
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%========build the plant matrix========
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% the state x is as follows
% [beta', beta, theta, omega_g, omega_r, x_ome, x_omega_g1, x_omega_g2, x_b_ref1, x_b_ref2]
% x' = A *x + B1 *w + B2 *u
% z = c1 *x + D11 *w + D12 *u
% y = C2 *x + D21 *w + D22 *u

% first a
a34 = -(1/N_g);
a43 = K_dt/(J_g*N_g);
a44 = -(B_dt / (J_g*N_g*N_g) + B_g/J_g);
a45 = B_dt/(N_g*J_g);
a53 = -K_dt/J_r;
a54 = B_dt/(N_g*J_r);
% affine parameter
a51 = 9.0/16/J_r;
a55 = -(B_dt+B_r)/J_r + 8.75/J_r;

A0 = [0, 123.4321, 0, 0, 0, 0, 0, 0, 0, 0;
       -1, -13.332, 0, 0, 0, 0, 0, 0, 0, 0;
       0, 0, 0, -1/N_g, 1, 0, 0, 0, 0, 0;
       0, 0, a43, a44, a45, 0, 0, 0, 0, 0;
       a51, 0, a53, a54, a55, 0, 0, 0, 0, 0;
       %%%%%%
       0, 0, 0, 1, 0, 0, 0, 0, 0, 0;
       0, 0, 0, 0, 0, 0, 0, 1, 0, 0;
       0, 0, 0, 1, 0, 0, 0, -2*zeta_ome*ome_ome, 0, 0;
       0, 0, 0, 0, 0, 0, 0, 0, -p3, 0;
       0, 0, 0, 0, 0, 0, 0, 0, 0, -p3];
% it is wind velocity turbulance
B1_0 = [0; 0; 0; 0; 0.375/J_r; 0; 0; 0; 0; 0];
% /beta_ref as control input
B2 = [0, 0;
      1, 1;  % beta_ref1 + beta_ref2, as the P & I control
      0, 0;
      0, 0;
      0, 0;
      0, 0;
      0, 0;
      0, 0;
      1, 0;     % filter for beta_ref
      0, 1];    % filter for beta_ref
% observor   observe [omega_g y_omega_i]
C2 = [0, 0, 0, 1, 0, 0, 0, 0, 0, 0;
      0, 0, 0, 0.84621, 0, 1, 0, 0, 0, 0];
% plant output [z_omega_g, z_beta_ref1, z_beta_ref2]
C1 = [0, 0, 0, 0, 0, 0, ome_pw, 0, 0, 0;
      0, 0, 0, 0, 0, 0, 0, 0, z3-p3, 0;
      0, 0, 0, 0, 0, 0, 0, 0, 0, z3-p3]; 
% D is zero


% second a
A1_a51 = -1/16/J_r;
A1_a55 = 0.023/J_r;       
A1 = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        A1_a51, 0, 0, 0, A1_a55, 0, 0, 0, 0, 0;
        %%%%%%%
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0];   
% wind turbulance        
B1_1 = [0; 0; 0; 0; -0.023/J_r; 0; 0; 0; 0; 0];    

% third a
A2_a12 = -111.7337;
A2_a22 = 7.176;
A2  = [0, A2_a12, 0, 0, 0, 0, 0, 0, 0, 0;
        0, A2_a22, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        %%%%%%
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0;
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0];   

% affine model
s0 = ltisys(A0, [B1_0, B2], [C1; C2], zeros(5, 3));        
s1 = ltisys(A1, [B1_1, zeros(10,2)], zeros(5,10), zeros(5,3), 0); % affine wind velocity
s2 = ltisys(A2, zeros(10,3), zeros(5,10), zeros(5,3), 0); % affine fault

pdP = psys(pv, [s0, s1, s2]);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%========build the plant matrix end====
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%========compute the LPV controller====
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% number of measure, number of control
r = [2, 2];
% compute the LPV controller
Paug = pdP;
[gopt, pdK] = hinfgs(Paug, r);

% fetch the four coordinate controllers
SK1 = psinfo(pdK, 'sys', 1);
[SK1_AK1, SK1_BK1, SK1_CK1, SK1_DK1] = ltiss(SK1)

SK2 = psinfo(pdK, 'sys', 2);
[SK2_AK1, SK2_BK1, SK2_CK1, SK2_DK1] = ltiss(SK2)

SK3 = psinfo(pdK, 'sys', 3);
[SK3_AK1, SK3_BK1, SK3_CK1, SK3_DK1] = ltiss(SK3)

SK4 = psinfo(pdK, 'sys', 4);
[SK4_AK1, SK4_BK1, SK4_CK1, SK4_DK1] = ltiss(SK4)