/* Include files */

#include "blascompat32.h"
#include "FDIBenchMark_BLW_66_71_sfun.h"
#include "c1_FDIBenchMark_BLW_66_71.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "FDIBenchMark_BLW_66_71_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c1_debug_family_names[32] = { "AK1", "BK1", "CK1", "DK1",
  "AK2", "BK2", "CK2", "DK2", "AK3", "BK3", "CK3", "DK3", "AK4", "BK4", "CK4",
  "DK4", "wind_velocity_min", "wind_velocity_max", "theta_min", "theta_max",
  "denominator", "rou1", "rou2", "rou3", "rou4", "nargin", "nargout", "vr",
  "theta", "AK", "BK", "CK" };

/* Function Declarations */
static void initialize_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void initialize_params_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void enable_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void disable_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void set_sim_state_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance, const mxArray
   *c1_st);
static void finalize_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void sf_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void c1_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_d_sf_marshall(void *chartInstanceVoid, void *c1_u);
static const mxArray *c1_e_sf_marshall(void *chartInstanceVoid, void *c1_u);
static void c1_info_helper(c1_ResolvedFunctionInfo c1_info[19]);
static const mxArray *c1_f_sf_marshall(void *chartInstanceVoid, void *c1_u);
static void c1_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_AK, const char_T *c1_name, real_T c1_y[36]);
static void c1_b_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_BK, const char_T *c1_name, real_T c1_y[12]);
static void c1_c_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_CK, const char_T *c1_name, real_T c1_y[12]);
static uint8_T c1_d_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_FDIBenchMark_BLW_66_71, const
  char_T *c1_name);
static void init_dsm_address_info(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c1_is_active_c1_FDIBenchMark_BLW_66_71 = 0U;
}

static void initialize_params_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
}

static void enable_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c1_update_debugger_state_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
}

static const mxArray *get_sim_state_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  int32_T c1_i0;
  real_T c1_hoistedGlobal[36];
  int32_T c1_i1;
  real_T c1_u[36];
  const mxArray *c1_b_y = NULL;
  int32_T c1_i2;
  real_T c1_b_hoistedGlobal[12];
  int32_T c1_i3;
  real_T c1_b_u[12];
  const mxArray *c1_c_y = NULL;
  int32_T c1_i4;
  real_T c1_c_hoistedGlobal[12];
  int32_T c1_i5;
  real_T c1_c_u[12];
  const mxArray *c1_d_y = NULL;
  uint8_T c1_d_hoistedGlobal;
  uint8_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  real_T (*c1_CK)[12];
  real_T (*c1_BK)[12];
  real_T (*c1_AK)[36];
  c1_CK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 3);
  c1_BK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_AK = (real_T (*)[36])ssGetOutputPortSignal(chartInstance->S, 1);
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellarray(4));
  for (c1_i0 = 0; c1_i0 < 36; c1_i0 = c1_i0 + 1) {
    c1_hoistedGlobal[c1_i0] = (*c1_AK)[c1_i0];
  }

  for (c1_i1 = 0; c1_i1 < 36; c1_i1 = c1_i1 + 1) {
    c1_u[c1_i1] = c1_hoistedGlobal[c1_i1];
  }

  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 1U, 0U, 2, 6, 6));
  sf_mex_setcell(c1_y, 0, c1_b_y);
  for (c1_i2 = 0; c1_i2 < 12; c1_i2 = c1_i2 + 1) {
    c1_b_hoistedGlobal[c1_i2] = (*c1_BK)[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 12; c1_i3 = c1_i3 + 1) {
    c1_b_u[c1_i3] = c1_b_hoistedGlobal[c1_i3];
  }

  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 0, 0U, 1U, 0U, 2, 6, 2));
  sf_mex_setcell(c1_y, 1, c1_c_y);
  for (c1_i4 = 0; c1_i4 < 12; c1_i4 = c1_i4 + 1) {
    c1_c_hoistedGlobal[c1_i4] = (*c1_CK)[c1_i4];
  }

  for (c1_i5 = 0; c1_i5 < 12; c1_i5 = c1_i5 + 1) {
    c1_c_u[c1_i5] = c1_c_hoistedGlobal[c1_i5];
  }

  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 0, 0U, 1U, 0U, 2, 2, 6));
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = chartInstance->c1_is_active_c1_FDIBenchMark_BLW_66_71;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c1_y, 3, c1_e_y);
  sf_mex_assign(&c1_st, c1_y);
  return c1_st;
}

static void set_sim_state_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance, const mxArray
   *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv0[36];
  int32_T c1_i6;
  real_T c1_dv1[12];
  int32_T c1_i7;
  real_T c1_dv2[12];
  int32_T c1_i8;
  real_T (*c1_AK)[36];
  real_T (*c1_BK)[12];
  real_T (*c1_CK)[12];
  c1_CK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 3);
  c1_BK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_AK = (real_T (*)[36])ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c1_doneDoubleBufferReInit = TRUE;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "AK",
                      c1_dv0);
  for (c1_i6 = 0; c1_i6 < 36; c1_i6 = c1_i6 + 1) {
    (*c1_AK)[c1_i6] = c1_dv0[c1_i6];
  }

  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)), "BK",
                        c1_dv1);
  for (c1_i7 = 0; c1_i7 < 12; c1_i7 = c1_i7 + 1) {
    (*c1_BK)[c1_i7] = c1_dv1[c1_i7];
  }

  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)), "CK",
                        c1_dv2);
  for (c1_i8 = 0; c1_i8 < 12; c1_i8 = c1_i8 + 1) {
    (*c1_CK)[c1_i8] = c1_dv2[c1_i8];
  }

  chartInstance->c1_is_active_c1_FDIBenchMark_BLW_66_71 = c1_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 3)),
     "is_active_c1_FDIBenchMark_BLW_66_71");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_FDIBenchMark_BLW_66_71(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
}

static void sf_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
  int32_T c1_i9;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_previousEvent;
  real_T *c1_vr;
  real_T *c1_theta;
  real_T (*c1_CK)[12];
  real_T (*c1_BK)[12];
  real_T (*c1_AK)[36];
  c1_CK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 3);
  c1_BK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_theta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_AK = (real_T (*)[36])ssGetOutputPortSignal(chartInstance->S, 1);
  c1_vr = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK(*c1_vr, 0U);
  for (c1_i9 = 0; c1_i9 < 36; c1_i9 = c1_i9 + 1) {
    _SFD_DATA_RANGE_CHECK((*c1_AK)[c1_i9], 1U);
  }

  _SFD_DATA_RANGE_CHECK(*c1_theta, 2U);
  for (c1_i10 = 0; c1_i10 < 12; c1_i10 = c1_i10 + 1) {
    _SFD_DATA_RANGE_CHECK((*c1_BK)[c1_i10], 3U);
  }

  for (c1_i11 = 0; c1_i11 < 12; c1_i11 = c1_i11 + 1) {
    _SFD_DATA_RANGE_CHECK((*c1_CK)[c1_i11], 4U);
  }

  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  c1_c1_FDIBenchMark_BLW_66_71(chartInstance);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_FDIBenchMark_BLW_66_71MachineNumber_,
    chartInstance->chartNumber, chartInstance->
    instanceNumber);
}

static void c1_c1_FDIBenchMark_BLW_66_71
  (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance)
{
  real_T c1_hoistedGlobal;
  real_T c1_b_hoistedGlobal;
  real_T c1_vr;
  real_T c1_theta;
  uint32_T c1_debug_family_var_map[32];
  static const char *c1_sv0[32] = { "AK1", "BK1", "CK1", "DK1", "AK2", "BK2",
    "CK2", "DK2", "AK3", "BK3", "CK3", "DK3", "AK4", "BK4",
    "CK4", "DK4", "wind_velocity_min", "wind_velocity_max", "theta_min",
    "theta_max", "denominator",
    "rou1", "rou2", "rou3", "rou4", "nargin", "nargout", "vr", "theta", "AK",
    "BK", "CK" };

  real_T c1_AK1[36];
  real_T c1_BK1[12];
  real_T c1_CK1[12];
  real_T c1_DK1[4];
  real_T c1_AK2[36];
  real_T c1_BK2[12];
  real_T c1_CK2[12];
  real_T c1_DK2[4];
  real_T c1_AK3[36];
  real_T c1_BK3[12];
  real_T c1_CK3[12];
  real_T c1_DK3[4];
  real_T c1_AK4[36];
  real_T c1_BK4[12];
  real_T c1_CK4[12];
  real_T c1_DK4[4];
  real_T c1_wind_velocity_min;
  real_T c1_wind_velocity_max;
  real_T c1_theta_min;
  real_T c1_theta_max;
  real_T c1_denominator;
  real_T c1_rou1;
  real_T c1_rou2;
  real_T c1_rou3;
  real_T c1_rou4;
  real_T c1_nargin = 2.0;
  real_T c1_nargout = 3.0;
  real_T c1_AK[36];
  real_T c1_BK[12];
  real_T c1_CK[12];
  int32_T c1_i12;
  static real_T c1_dv3[36] = { -4.58, -0.0, -5.615, 0.0, 0.118, -5.703E+002,
    -0.0, -19.696, -0.0, -5.814, -0.019, 18.62, -0.852, 0.002
    , -7.279, -0.0, -3.578E+002, 2.400151E+006, 0.0, 42.76, -0.0, -24.84, -0.013,
    -82.94, -0.0, 0.0027,
    1.131, -0.0511, -1.152, 1.011E+002, 0.226, -0.002, -4.9501E+003, 0.223,
    -106.62, -1044.0 };

  int32_T c1_i13;
  static real_T c1_dv4[12] = { 1.794, -0.0004, -9.444, 0.0001, -7.5199E+002,
    5.049188E+006, -4.583, -0.0, -5.617, 0.0003, 0.0462,
    -83.48 };

  int32_T c1_i14;
  static real_T c1_dv5[12] = { -0.0, -0.0, -0.0388, -0.0388, 0.0001, 0.0001,
    5.275, 5.275, 0.0086, 0.0086, 0.0203, 0.0203 };

  int32_T c1_i15;
  int32_T c1_i16;
  static real_T c1_dv6[36] = { -4.583, -0.0, -5.615, 0.0003, 0.118, -570.0, -0.0,
    -1.86, -0.0, -0.67, -0.0045, 18.65, -0.852, -0.0,
    -7.27, -0.00111, -357.0, 2.400151E+006, 0.0, 5.849, -0.001, -35.503, -0.0441,
    -8.301E+001, -0.0, 0.0027
    , 1.131, -0.0512, -1.152, 1.011E+002, 0.226, -0.0022, -4950.0, 0.223,
    -1.066E+002, -1044.0 };

  int32_T c1_i17;
  static real_T c1_dv7[12] = { 1.794, -0.0008, -9.444, 0.0001, -751.0,
    5.049188E+006, -4.583, -0.0, -5.6171, 0.0, 0.0462, -83.48 };

  int32_T c1_i18;
  static real_T c1_dv8[12] = { -0.0, -0.0, -0.0388, -0.0388, 0.00018, 0.00018,
    5.275, 5.275, 0.0086, 0.0086, 0.0203, 0.0203 };

  int32_T c1_i19;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  real_T c1_a;
  real_T c1_b;
  real_T c1_y;
  real_T c1_A;
  real_T c1_x;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_b_a;
  real_T c1_b_b;
  real_T c1_b_y;
  real_T c1_b_A;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_c_a;
  real_T c1_c_b;
  real_T c1_c_y;
  real_T c1_c_A;
  real_T c1_g_x;
  real_T c1_h_x;
  real_T c1_i_x;
  real_T c1_d_a;
  real_T c1_d_b;
  real_T c1_d_y;
  real_T c1_d_A;
  real_T c1_j_x;
  real_T c1_k_x;
  real_T c1_l_x;
  real_T c1_e_a;
  int32_T c1_i28;
  real_T c1_e_y[36];
  real_T c1_f_a;
  int32_T c1_i29;
  real_T c1_f_y[36];
  real_T c1_g_a;
  int32_T c1_i30;
  real_T c1_g_y[36];
  real_T c1_h_a;
  int32_T c1_i31;
  real_T c1_h_y[36];
  int32_T c1_i32;
  real_T c1_i_a;
  int32_T c1_i33;
  real_T c1_i_y[12];
  real_T c1_j_a;
  int32_T c1_i34;
  real_T c1_j_y[12];
  real_T c1_k_a;
  int32_T c1_i35;
  real_T c1_k_y[12];
  real_T c1_l_a;
  int32_T c1_i36;
  real_T c1_l_y[12];
  int32_T c1_i37;
  real_T c1_m_a;
  int32_T c1_i38;
  real_T c1_m_y[12];
  real_T c1_n_a;
  int32_T c1_i39;
  real_T c1_n_y[12];
  real_T c1_o_a;
  int32_T c1_i40;
  real_T c1_o_y[12];
  real_T c1_p_a;
  int32_T c1_i41;
  real_T c1_p_y[12];
  int32_T c1_i42;
  int32_T c1_i43;
  int32_T c1_i44;
  int32_T c1_i45;
  real_T *c1_b_vr;
  real_T *c1_b_theta;
  real_T (*c1_b_AK)[36];
  real_T (*c1_b_BK)[12];
  real_T (*c1_b_CK)[12];
  c1_b_CK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 3);
  c1_b_BK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 2);
  c1_b_theta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c1_b_AK = (real_T (*)[36])ssGetOutputPortSignal(chartInstance->S, 1);
  c1_b_vr = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c1_hoistedGlobal = *c1_b_vr;
  c1_b_hoistedGlobal = *c1_b_theta;
  c1_vr = c1_hoistedGlobal;
  c1_theta = c1_b_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 32U, 32U, c1_sv0, c1_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c1_AK1, c1_c_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c1_BK1, c1_b_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c1_CK1, c1_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c1_DK1, c1_e_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c1_AK2, c1_c_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c1_BK2, c1_b_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c1_CK2, c1_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c1_DK2, c1_e_sf_marshall, 7U);
  sf_debug_symbol_scope_add_eml(&c1_AK3, c1_c_sf_marshall, 8U);
  sf_debug_symbol_scope_add_eml(&c1_BK3, c1_b_sf_marshall, 9U);
  sf_debug_symbol_scope_add_eml(&c1_CK3, c1_sf_marshall, 10U);
  sf_debug_symbol_scope_add_eml(&c1_DK3, c1_e_sf_marshall, 11U);
  sf_debug_symbol_scope_add_eml(&c1_AK4, c1_c_sf_marshall, 12U);
  sf_debug_symbol_scope_add_eml(&c1_BK4, c1_b_sf_marshall, 13U);
  sf_debug_symbol_scope_add_eml(&c1_CK4, c1_sf_marshall, 14U);
  sf_debug_symbol_scope_add_eml(&c1_DK4, c1_e_sf_marshall, 15U);
  sf_debug_symbol_scope_add_eml(&c1_wind_velocity_min, c1_d_sf_marshall, 16U);
  sf_debug_symbol_scope_add_eml(&c1_wind_velocity_max, c1_d_sf_marshall, 17U);
  sf_debug_symbol_scope_add_eml(&c1_theta_min, c1_d_sf_marshall, 18U);
  sf_debug_symbol_scope_add_eml(&c1_theta_max, c1_d_sf_marshall, 19U);
  sf_debug_symbol_scope_add_eml(&c1_denominator, c1_d_sf_marshall, 20U);
  sf_debug_symbol_scope_add_eml(&c1_rou1, c1_d_sf_marshall, 21U);
  sf_debug_symbol_scope_add_eml(&c1_rou2, c1_d_sf_marshall, 22U);
  sf_debug_symbol_scope_add_eml(&c1_rou3, c1_d_sf_marshall, 23U);
  sf_debug_symbol_scope_add_eml(&c1_rou4, c1_d_sf_marshall, 24U);
  sf_debug_symbol_scope_add_eml(&c1_nargin, c1_d_sf_marshall, 25U);
  sf_debug_symbol_scope_add_eml(&c1_nargout, c1_d_sf_marshall, 26U);
  sf_debug_symbol_scope_add_eml(&c1_vr, c1_d_sf_marshall, 27U);
  sf_debug_symbol_scope_add_eml(&c1_theta, c1_d_sf_marshall, 28U);
  sf_debug_symbol_scope_add_eml(&c1_AK, c1_c_sf_marshall, 29U);
  sf_debug_symbol_scope_add_eml(&c1_BK, c1_b_sf_marshall, 30U);
  sf_debug_symbol_scope_add_eml(&c1_CK, c1_sf_marshall, 31U);
  CV_EML_FCN(0, 0);

  /* the four polytope controllers */
  /* the first */
  _SFD_EML_CALL(0,4);
  for (c1_i12 = 0; c1_i12 < 36; c1_i12 = c1_i12 + 1) {
    c1_AK1[c1_i12] = c1_dv3[c1_i12];
  }

  _SFD_EML_CALL(0,11);
  for (c1_i13 = 0; c1_i13 < 12; c1_i13 = c1_i13 + 1) {
    c1_BK1[c1_i13] = c1_dv4[c1_i13];
  }

  _SFD_EML_CALL(0,18);
  for (c1_i14 = 0; c1_i14 < 12; c1_i14 = c1_i14 + 1) {
    c1_CK1[c1_i14] = c1_dv5[c1_i14];
  }

  _SFD_EML_CALL(0,21);
  for (c1_i15 = 0; c1_i15 < 4; c1_i15 = c1_i15 + 1) {
    c1_DK1[c1_i15] = 0.0;
  }

  /* the second */
  _SFD_EML_CALL(0,26);
  for (c1_i16 = 0; c1_i16 < 36; c1_i16 = c1_i16 + 1) {
    c1_AK2[c1_i16] = c1_dv6[c1_i16];
  }

  _SFD_EML_CALL(0,33);
  for (c1_i17 = 0; c1_i17 < 12; c1_i17 = c1_i17 + 1) {
    c1_BK2[c1_i17] = c1_dv7[c1_i17];
  }

  _SFD_EML_CALL(0,40);
  for (c1_i18 = 0; c1_i18 < 12; c1_i18 = c1_i18 + 1) {
    c1_CK2[c1_i18] = c1_dv8[c1_i18];
  }

  _SFD_EML_CALL(0,43);
  for (c1_i19 = 0; c1_i19 < 4; c1_i19 = c1_i19 + 1) {
    c1_DK2[c1_i19] = 0.0;
  }

  /* the third */
  _SFD_EML_CALL(0,48);
  for (c1_i20 = 0; c1_i20 < 36; c1_i20 = c1_i20 + 1) {
    c1_AK3[c1_i20] = c1_dv3[c1_i20];
  }

  _SFD_EML_CALL(0,55);
  for (c1_i21 = 0; c1_i21 < 12; c1_i21 = c1_i21 + 1) {
    c1_BK3[c1_i21] = c1_dv4[c1_i21];
  }

  _SFD_EML_CALL(0,62);
  for (c1_i22 = 0; c1_i22 < 12; c1_i22 = c1_i22 + 1) {
    c1_CK3[c1_i22] = c1_dv5[c1_i22];
  }

  _SFD_EML_CALL(0,65);
  for (c1_i23 = 0; c1_i23 < 4; c1_i23 = c1_i23 + 1) {
    c1_DK3[c1_i23] = 0.0;
  }

  /* the forth */
  _SFD_EML_CALL(0,71);
  for (c1_i24 = 0; c1_i24 < 36; c1_i24 = c1_i24 + 1) {
    c1_AK4[c1_i24] = c1_dv6[c1_i24];
  }

  _SFD_EML_CALL(0,78);
  for (c1_i25 = 0; c1_i25 < 12; c1_i25 = c1_i25 + 1) {
    c1_BK4[c1_i25] = c1_dv7[c1_i25];
  }

  _SFD_EML_CALL(0,85);
  for (c1_i26 = 0; c1_i26 < 12; c1_i26 = c1_i26 + 1) {
    c1_CK4[c1_i26] = c1_dv8[c1_i26];
  }

  _SFD_EML_CALL(0,88);
  for (c1_i27 = 0; c1_i27 < 4; c1_i27 = c1_i27 + 1) {
    c1_DK4[c1_i27] = 0.0;
  }

  /* =================================================================================== */
  _SFD_EML_CALL(0,93);
  c1_wind_velocity_min = 13.0;
  _SFD_EML_CALL(0,94);
  c1_wind_velocity_max = 25.0;
  _SFD_EML_CALL(0,95);
  c1_theta_min = 0.0;
  _SFD_EML_CALL(0,96);
  c1_theta_max = 1.0;

  /*  */
  _SFD_EML_CALL(0,98);
  c1_denominator = 12.0;

  /*  */
  _SFD_EML_CALL(0,100);
  c1_a = c1_vr - c1_wind_velocity_min;
  c1_b = c1_theta - c1_theta_min;
  c1_y = c1_a * c1_b;
  c1_A = c1_y;
  c1_x = c1_A;
  c1_b_x = c1_x;
  c1_c_x = c1_b_x;
  c1_rou1 = c1_c_x / 12.0;
  _SFD_EML_CALL(0,101);
  c1_b_a = c1_vr - c1_wind_velocity_min;
  c1_b_b = c1_theta_max - c1_theta;
  c1_b_y = c1_b_a * c1_b_b;
  c1_b_A = c1_b_y;
  c1_d_x = c1_b_A;
  c1_e_x = c1_d_x;
  c1_f_x = c1_e_x;
  c1_rou2 = c1_f_x / 12.0;
  _SFD_EML_CALL(0,102);
  c1_c_a = c1_wind_velocity_max - c1_vr;
  c1_c_b = c1_theta - c1_theta_min;
  c1_c_y = c1_c_a * c1_c_b;
  c1_c_A = c1_c_y;
  c1_g_x = c1_c_A;
  c1_h_x = c1_g_x;
  c1_i_x = c1_h_x;
  c1_rou3 = c1_i_x / 12.0;
  _SFD_EML_CALL(0,103);
  c1_d_a = c1_wind_velocity_max - c1_vr;
  c1_d_b = c1_theta_max - c1_theta;
  c1_d_y = c1_d_a * c1_d_b;
  c1_d_A = c1_d_y;
  c1_j_x = c1_d_A;
  c1_k_x = c1_j_x;
  c1_l_x = c1_k_x;
  c1_rou4 = c1_l_x / 12.0;

  /* here is the controller */
  _SFD_EML_CALL(0,106);
  c1_e_a = c1_rou1;
  for (c1_i28 = 0; c1_i28 < 36; c1_i28 = c1_i28 + 1) {
    c1_e_y[c1_i28] = c1_e_a * c1_dv3[c1_i28];
  }

  c1_f_a = c1_rou2;
  for (c1_i29 = 0; c1_i29 < 36; c1_i29 = c1_i29 + 1) {
    c1_f_y[c1_i29] = c1_f_a * c1_dv6[c1_i29];
  }

  c1_g_a = c1_rou3;
  for (c1_i30 = 0; c1_i30 < 36; c1_i30 = c1_i30 + 1) {
    c1_g_y[c1_i30] = c1_g_a * c1_dv3[c1_i30];
  }

  c1_h_a = c1_rou4;
  for (c1_i31 = 0; c1_i31 < 36; c1_i31 = c1_i31 + 1) {
    c1_h_y[c1_i31] = c1_h_a * c1_dv6[c1_i31];
  }

  for (c1_i32 = 0; c1_i32 < 36; c1_i32 = c1_i32 + 1) {
    c1_AK[c1_i32] = ((c1_e_y[c1_i32] + c1_f_y[c1_i32]) + c1_g_y[c1_i32]) +
      c1_h_y[c1_i32];
  }

  _SFD_EML_CALL(0,107);
  c1_i_a = c1_rou1;
  for (c1_i33 = 0; c1_i33 < 12; c1_i33 = c1_i33 + 1) {
    c1_i_y[c1_i33] = c1_i_a * c1_dv4[c1_i33];
  }

  c1_j_a = c1_rou2;
  for (c1_i34 = 0; c1_i34 < 12; c1_i34 = c1_i34 + 1) {
    c1_j_y[c1_i34] = c1_j_a * c1_dv7[c1_i34];
  }

  c1_k_a = c1_rou3;
  for (c1_i35 = 0; c1_i35 < 12; c1_i35 = c1_i35 + 1) {
    c1_k_y[c1_i35] = c1_k_a * c1_dv4[c1_i35];
  }

  c1_l_a = c1_rou4;
  for (c1_i36 = 0; c1_i36 < 12; c1_i36 = c1_i36 + 1) {
    c1_l_y[c1_i36] = c1_l_a * c1_dv7[c1_i36];
  }

  for (c1_i37 = 0; c1_i37 < 12; c1_i37 = c1_i37 + 1) {
    c1_BK[c1_i37] = ((c1_i_y[c1_i37] + c1_j_y[c1_i37]) + c1_k_y[c1_i37]) +
      c1_l_y[c1_i37];
  }

  _SFD_EML_CALL(0,108);
  c1_m_a = c1_rou1;
  for (c1_i38 = 0; c1_i38 < 12; c1_i38 = c1_i38 + 1) {
    c1_m_y[c1_i38] = c1_m_a * c1_dv5[c1_i38];
  }

  c1_n_a = c1_rou2;
  for (c1_i39 = 0; c1_i39 < 12; c1_i39 = c1_i39 + 1) {
    c1_n_y[c1_i39] = c1_n_a * c1_dv8[c1_i39];
  }

  c1_o_a = c1_rou3;
  for (c1_i40 = 0; c1_i40 < 12; c1_i40 = c1_i40 + 1) {
    c1_o_y[c1_i40] = c1_o_a * c1_dv5[c1_i40];
  }

  c1_p_a = c1_rou4;
  for (c1_i41 = 0; c1_i41 < 12; c1_i41 = c1_i41 + 1) {
    c1_p_y[c1_i41] = c1_p_a * c1_dv8[c1_i41];
  }

  for (c1_i42 = 0; c1_i42 < 12; c1_i42 = c1_i42 + 1) {
    c1_CK[c1_i42] = ((c1_m_y[c1_i42] + c1_n_y[c1_i42]) + c1_o_y[c1_i42]) +
      c1_p_y[c1_i42];
  }

  /* DK = rou1*DK1 + rou2*DK2 + rou3*DK3 + rou4*DK4; */
  /* DK = DK1; */
  _SFD_EML_CALL(0,-108);
  sf_debug_symbol_scope_pop();
  for (c1_i43 = 0; c1_i43 < 36; c1_i43 = c1_i43 + 1) {
    (*c1_b_AK)[c1_i43] = c1_AK[c1_i43];
  }

  for (c1_i44 = 0; c1_i44 < 12; c1_i44 = c1_i44 + 1) {
    (*c1_b_BK)[c1_i44] = c1_BK[c1_i44];
  }

  for (c1_i45 = 0; c1_i45 < 12; c1_i45 = c1_i45 + 1) {
    (*c1_b_CK)[c1_i45] = c1_CK[c1_i45];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

static const mxArray *c1_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i46;
  int32_T c1_i47;
  int32_T c1_i48;
  real_T c1_b_u[12];
  const mxArray *c1_b_y = NULL;
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_i46 = 0;
  for (c1_i47 = 0; c1_i47 < 6; c1_i47 = c1_i47 + 1) {
    for (c1_i48 = 0; c1_i48 < 2; c1_i48 = c1_i48 + 1) {
      c1_b_u[c1_i48 + c1_i46] = (*((real_T (*)[12])c1_u))[c1_i48 + c1_i46];
    }

    c1_i46 = c1_i46 + 2;
  }

  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 1U, 0U, 2, 2, 6));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_b_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i49;
  int32_T c1_i50;
  int32_T c1_i51;
  real_T c1_b_u[12];
  const mxArray *c1_b_y = NULL;
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_i49 = 0;
  for (c1_i50 = 0; c1_i50 < 2; c1_i50 = c1_i50 + 1) {
    for (c1_i51 = 0; c1_i51 < 6; c1_i51 = c1_i51 + 1) {
      c1_b_u[c1_i51 + c1_i49] = (*((real_T (*)[12])c1_u))[c1_i51 + c1_i49];
    }

    c1_i49 = c1_i49 + 6;
  }

  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 1U, 0U, 2, 6, 2));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_c_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i52;
  int32_T c1_i53;
  int32_T c1_i54;
  real_T c1_b_u[36];
  const mxArray *c1_b_y = NULL;
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_i52 = 0;
  for (c1_i53 = 0; c1_i53 < 6; c1_i53 = c1_i53 + 1) {
    for (c1_i54 = 0; c1_i54 < 6; c1_i54 = c1_i54 + 1) {
      c1_b_u[c1_i54 + c1_i52] = (*((real_T (*)[36])c1_u))[c1_i54 + c1_i52];
    }

    c1_i52 = c1_i52 + 6;
  }

  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 1U, 0U, 2, 6, 6));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_d_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static const mxArray *c1_e_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  int32_T c1_i55;
  int32_T c1_i56;
  int32_T c1_i57;
  real_T c1_b_u[4];
  const mxArray *c1_b_y = NULL;
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_i55 = 0;
  for (c1_i56 = 0; c1_i56 < 2; c1_i56 = c1_i56 + 1) {
    for (c1_i57 = 0; c1_i57 < 2; c1_i57 = c1_i57 + 1) {
      c1_b_u[c1_i57 + c1_i55] = (*((real_T (*)[4])c1_u))[c1_i57 + c1_i55];
    }

    c1_i55 = c1_i55 + 2;
  }

  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 0, 0U, 1U, 0U, 2, 2, 2));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

const mxArray *sf_c1_FDIBenchMark_BLW_66_71_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_ResolvedFunctionInfo c1_info[19];
  const mxArray *c1_m0 = NULL;
  int32_T c1_i58;
  c1_ResolvedFunctionInfo *c1_r0;
  c1_nameCaptureInfo = NULL;
  c1_info_helper(c1_info);
  sf_mex_assign(&c1_m0, sf_mex_createstruct("nameCaptureInfo", 1, 19));
  for (c1_i58 = 0; c1_i58 < 19; c1_i58 = c1_i58 + 1) {
    c1_r0 = &c1_info[c1_i58];
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->context)), "context",
                    "nameCaptureInfo", c1_i58);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c1_r0->name)), "name",
                    "nameCaptureInfo", c1_i58);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c1_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c1_i58);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", c1_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c1_r0->resolved)), "resolved"
                    , "nameCaptureInfo", c1_i58);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c1_i58);
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTime1, 7,
      0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo", c1_i58
                    );
    sf_mex_addfield(c1_m0, sf_mex_create("nameCaptureInfo", &c1_r0->fileTime2, 7,
      0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo", c1_i58
                    );
  }

  sf_mex_assign(&c1_nameCaptureInfo, c1_m0);
  return c1_nameCaptureInfo;
}

static void c1_info_helper(c1_ResolvedFunctionInfo c1_info[19])
{
  c1_info[0].context = "";
  c1_info[0].name = "uminus";
  c1_info[0].dominantType = "double";
  c1_info[0].resolved = "[B]uminus";
  c1_info[0].fileLength = 0U;
  c1_info[0].fileTime1 = 0U;
  c1_info[0].fileTime2 = 0U;
  c1_info[1].context = "";
  c1_info[1].name = "minus";
  c1_info[1].dominantType = "double";
  c1_info[1].resolved = "[B]minus";
  c1_info[1].fileLength = 0U;
  c1_info[1].fileTime1 = 0U;
  c1_info[1].fileTime2 = 0U;
  c1_info[2].context = "";
  c1_info[2].name = "mtimes";
  c1_info[2].dominantType = "double";
  c1_info[2].resolved = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[2].fileLength = 3425U;
  c1_info[2].fileTime1 = 1250651166U;
  c1_info[2].fileTime2 = 0U;
  c1_info[3].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[3].name = "nargin";
  c1_info[3].dominantType = "";
  c1_info[3].resolved = "[B]nargin";
  c1_info[3].fileLength = 0U;
  c1_info[3].fileTime1 = 0U;
  c1_info[3].fileTime2 = 0U;
  c1_info[4].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[4].name = "gt";
  c1_info[4].dominantType = "double";
  c1_info[4].resolved = "[B]gt";
  c1_info[4].fileLength = 0U;
  c1_info[4].fileTime1 = 0U;
  c1_info[4].fileTime2 = 0U;
  c1_info[5].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[5].name = "isa";
  c1_info[5].dominantType = "double";
  c1_info[5].resolved = "[B]isa";
  c1_info[5].fileLength = 0U;
  c1_info[5].fileTime1 = 0U;
  c1_info[5].fileTime2 = 0U;
  c1_info[6].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[6].name = "isinteger";
  c1_info[6].dominantType = "double";
  c1_info[6].resolved = "[B]isinteger";
  c1_info[6].fileLength = 0U;
  c1_info[6].fileTime1 = 0U;
  c1_info[6].fileTime2 = 0U;
  c1_info[7].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[7].name = "isscalar";
  c1_info[7].dominantType = "double";
  c1_info[7].resolved = "[B]isscalar";
  c1_info[7].fileLength = 0U;
  c1_info[7].fileTime1 = 0U;
  c1_info[7].fileTime2 = 0U;
  c1_info[8].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[8].name = "strcmp";
  c1_info[8].dominantType = "char";
  c1_info[8].resolved = "[B]strcmp";
  c1_info[8].fileLength = 0U;
  c1_info[8].fileTime1 = 0U;
  c1_info[8].fileTime2 = 0U;
  c1_info[9].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[9].name = "size";
  c1_info[9].dominantType = "double";
  c1_info[9].resolved = "[B]size";
  c1_info[9].fileLength = 0U;
  c1_info[9].fileTime1 = 0U;
  c1_info[9].fileTime2 = 0U;
  c1_info[10].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[10].name = "eq";
  c1_info[10].dominantType = "double";
  c1_info[10].resolved = "[B]eq";
  c1_info[10].fileLength = 0U;
  c1_info[10].fileTime1 = 0U;
  c1_info[10].fileTime2 = 0U;
  c1_info[11].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[11].name = "class";
  c1_info[11].dominantType = "double";
  c1_info[11].resolved = "[B]class";
  c1_info[11].fileLength = 0U;
  c1_info[11].fileTime1 = 0U;
  c1_info[11].fileTime2 = 0U;
  c1_info[12].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c1_info[12].name = "not";
  c1_info[12].dominantType = "logical";
  c1_info[12].resolved = "[B]not";
  c1_info[12].fileLength = 0U;
  c1_info[12].fileTime1 = 0U;
  c1_info[12].fileTime2 = 0U;
  c1_info[13].context = "";
  c1_info[13].name = "mrdivide";
  c1_info[13].dominantType = "double";
  c1_info[13].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c1_info[13].fileLength = 800U;
  c1_info[13].fileTime1 = 1238412690U;
  c1_info[13].fileTime2 = 0U;
  c1_info[14].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c1_info[14].name = "ge";
  c1_info[14].dominantType = "double";
  c1_info[14].resolved = "[B]ge";
  c1_info[14].fileLength = 0U;
  c1_info[14].fileTime1 = 0U;
  c1_info[14].fileTime2 = 0U;
  c1_info[15].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c1_info[15].name = "rdivide";
  c1_info[15].dominantType = "double";
  c1_info[15].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c1_info[15].fileLength = 403U;
  c1_info[15].fileTime1 = 1244713952U;
  c1_info[15].fileTime2 = 0U;
  c1_info[16].context = "[ILX]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c1_info[16].name = "eml_div";
  c1_info[16].dominantType = "double";
  c1_info[16].resolved =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  c1_info[16].fileLength = 4269U;
  c1_info[16].fileTime1 = 1228068626U;
  c1_info[16].fileTime2 = 0U;
  c1_info[17].context =
    "[ILX]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m/eml_fldiv";
  c1_info[17].name = "isreal";
  c1_info[17].dominantType = "double";
  c1_info[17].resolved = "[B]isreal";
  c1_info[17].fileLength = 0U;
  c1_info[17].fileTime1 = 0U;
  c1_info[17].fileTime2 = 0U;
  c1_info[18].context = "";
  c1_info[18].name = "plus";
  c1_info[18].dominantType = "double";
  c1_info[18].resolved = "[B]plus";
  c1_info[18].fileLength = 0U;
  c1_info[18].fileTime1 = 0U;
  c1_info[18].fileTime2 = 0U;
}

static const mxArray *c1_f_sf_marshall(void *chartInstanceVoid, void *c1_u)
{
  const mxArray *c1_y = NULL;
  boolean_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)chartInstanceVoid;
  c1_y = NULL;
  c1_b_u = *((boolean_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

static void c1_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_AK, const char_T *
  c1_name, real_T c1_y[36])
{
  real_T c1_dv9[36];
  int32_T c1_i59;
  sf_mex_import(c1_name, sf_mex_dup(c1_AK), &c1_dv9, 1, 0, 0U, 1, 0U, 2, 6, 6);
  for (c1_i59 = 0; c1_i59 < 36; c1_i59 = c1_i59 + 1) {
    c1_y[c1_i59] = c1_dv9[c1_i59];
  }

  sf_mex_destroy(&c1_AK);
}

static void c1_b_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_BK, const char_T *
  c1_name, real_T c1_y[12])
{
  real_T c1_dv10[12];
  int32_T c1_i60;
  sf_mex_import(c1_name, sf_mex_dup(c1_BK), &c1_dv10, 1, 0, 0U, 1, 0U, 2, 6, 2);
  for (c1_i60 = 0; c1_i60 < 12; c1_i60 = c1_i60 + 1) {
    c1_y[c1_i60] = c1_dv10[c1_i60];
  }

  sf_mex_destroy(&c1_BK);
}

static void c1_c_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *c1_CK, const char_T *
  c1_name, real_T c1_y[12])
{
  real_T c1_dv11[12];
  int32_T c1_i61;
  sf_mex_import(c1_name, sf_mex_dup(c1_CK), &c1_dv11, 1, 0, 0U, 1, 0U, 2, 2, 6);
  for (c1_i61 = 0; c1_i61 < 12; c1_i61 = c1_i61 + 1) {
    c1_y[c1_i61] = c1_dv11[c1_i61];
  }

  sf_mex_destroy(&c1_CK);
}

static uint8_T c1_d_emlrt_marshallIn(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance, const mxArray *
  c1_b_is_active_c1_FDIBenchMark_BLW_66_71, const char_T *c1_name)
{
  uint8_T c1_y;
  uint8_T c1_u0;
  sf_mex_import(c1_name, sf_mex_dup(c1_b_is_active_c1_FDIBenchMark_BLW_66_71),
                &c1_u0, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u0;
  sf_mex_destroy(&c1_b_is_active_c1_FDIBenchMark_BLW_66_71);
  return c1_y;
}

static void init_dsm_address_info(SFc1_FDIBenchMark_BLW_66_71InstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c1_FDIBenchMark_BLW_66_71_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2548708936U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2916600812U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3261024326U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2378750778U);
}

mxArray *sf_c1_FDIBenchMark_BLW_66_71_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1937428531U);
    pr[1] = (double)(1101900516U);
    pr[2] = (double)(13223481U);
    pr[3] = (double)(3869978401U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      pr[1] = (double)(6);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      pr[1] = (double)(2);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(6);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c1_FDIBenchMark_BLW_66_71(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x4'type','srcId','name','auxInfo'{{M[1],M[5],T\"AK\",},{M[1],M[7],T\"BK\",},{M[1],M[8],T\"CK\",},{M[8],M[0],T\"is_active_c1_FDIBenchMark_BLW_66_71\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 4, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_FDIBenchMark_BLW_66_71_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
    chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_FDIBenchMark_BLW_66_71MachineNumber_,
           1,
           1,
           1,
           5,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_FDIBenchMark_BLW_66_71MachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_FDIBenchMark_BLW_66_71MachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_FDIBenchMark_BLW_66_71MachineNumber_,
             chartInstance->chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"vr",0,
                              (MexFcnForType)c1_d_sf_marshall);

          {
            unsigned int dimVector[2];
            dimVector[0]= 6;
            dimVector[1]= 6;
            _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"AK",0,(MexFcnForType)c1_c_sf_marshall);
          }

          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"theta",0,
                              (MexFcnForType)c1_d_sf_marshall);

          {
            unsigned int dimVector[2];
            dimVector[0]= 6;
            dimVector[1]= 2;
            _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"BK",0,(MexFcnForType)c1_b_sf_marshall);
          }

          {
            unsigned int dimVector[2];
            dimVector[0]= 2;
            dimVector[1]= 6;
            _SFD_SET_DATA_PROPS(4,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
                                1.0,0,"CK",0,(MexFcnForType)c1_sf_marshall);
          }

          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,2756);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c1_vr;
          real_T (*c1_AK)[36];
          real_T *c1_theta;
          real_T (*c1_BK)[12];
          real_T (*c1_CK)[12];
          c1_CK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 3);
          c1_BK = (real_T (*)[12])ssGetOutputPortSignal(chartInstance->S, 2);
          c1_theta = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c1_AK = (real_T (*)[36])ssGetOutputPortSignal(chartInstance->S, 1);
          c1_vr = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_vr);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_AK);
          _SFD_SET_DATA_VALUE_PTR(2U, c1_theta);
          _SFD_SET_DATA_VALUE_PTR(3U, c1_BK);
          _SFD_SET_DATA_VALUE_PTR(4U, c1_CK);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_FDIBenchMark_BLW_66_71MachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c1_FDIBenchMark_BLW_66_71(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_FDIBenchMark_BLW_66_71
    ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*) chartInstanceVar);
  initialize_c1_FDIBenchMark_BLW_66_71
    ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  enable_c1_FDIBenchMark_BLW_66_71((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  disable_c1_FDIBenchMark_BLW_66_71((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  sf_c1_FDIBenchMark_BLW_66_71((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)
    chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c1_FDIBenchMark_BLW_66_71(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c1_FDIBenchMark_BLW_66_71
    ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c1_FDIBenchMark_BLW_66_71();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

static void sf_internal_set_sim_state_c1_FDIBenchMark_BLW_66_71(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c1_FDIBenchMark_BLW_66_71();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c1_FDIBenchMark_BLW_66_71
    ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c1_FDIBenchMark_BLW_66_71(SimStruct* S)
{
  return sf_internal_get_sim_state_c1_FDIBenchMark_BLW_66_71(S);
}

static void sf_opaque_set_sim_state_c1_FDIBenchMark_BLW_66_71(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c1_FDIBenchMark_BLW_66_71(S, st);
}

static void sf_opaque_terminate_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c1_FDIBenchMark_BLW_66_71
      ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_FDIBenchMark_BLW_66_71
      ((SFc1_FDIBenchMark_BLW_66_71InstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("FDIBenchMark_BLW_66_71",
      "FDIBenchMark_BLW_66_71",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("FDIBenchMark_BLW_66_71",
                "FDIBenchMark_BLW_66_71",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("FDIBenchMark_BLW_66_71",
      "FDIBenchMark_BLW_66_71",1,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"FDIBenchMark_BLW_66_71",
        "FDIBenchMark_BLW_66_71",1,2);
      sf_mark_chart_reusable_outputs(S,"FDIBenchMark_BLW_66_71",
        "FDIBenchMark_BLW_66_71",1,3);
    }

    sf_set_rtw_dwork_info(S,"FDIBenchMark_BLW_66_71","FDIBenchMark_BLW_66_71",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2660477810U));
  ssSetChecksum1(S,(992130110U));
  ssSetChecksum2(S,(811519518U));
  ssSetChecksum3(S,(2460978266U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "FDIBenchMark_BLW_66_71",
      "FDIBenchMark_BLW_66_71",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  SFc1_FDIBenchMark_BLW_66_71InstanceStruct *chartInstance;
  chartInstance = (SFc1_FDIBenchMark_BLW_66_71InstanceStruct *)malloc(sizeof
    (SFc1_FDIBenchMark_BLW_66_71InstanceStruct));
  memset(chartInstance, 0, sizeof(SFc1_FDIBenchMark_BLW_66_71InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_FDIBenchMark_BLW_66_71;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  if (!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info(chartInstance);
  }

  chart_debug_initialization(S,1);
}

void c1_FDIBenchMark_BLW_66_71_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_FDIBenchMark_BLW_66_71(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_FDIBenchMark_BLW_66_71(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_FDIBenchMark_BLW_66_71(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_FDIBenchMark_BLW_66_71_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
