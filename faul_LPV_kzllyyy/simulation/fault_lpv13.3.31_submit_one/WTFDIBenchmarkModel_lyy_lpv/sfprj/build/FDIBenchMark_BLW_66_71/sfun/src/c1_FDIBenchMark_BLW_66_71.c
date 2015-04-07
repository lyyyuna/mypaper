/* Include files */
#include "FDIBenchMark_BLW_66_71_sfun.h"
#include "c1_FDIBenchMark_BLW_66_71.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "FDIBenchMark_BLW_66_71_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD           (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc1_FDIBenchMark_BLW_66_71InstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c1_FDIBenchMark_BLW_66_71(void);
static void initialize_params_c1_FDIBenchMark_BLW_66_71(void);
static void enable_c1_FDIBenchMark_BLW_66_71(void);
static void disable_c1_FDIBenchMark_BLW_66_71(void);
static void finalize_c1_FDIBenchMark_BLW_66_71(void);
static void sf_c1_FDIBenchMark_BLW_66_71(void);
static real_T *c1_vr(void);
static real_T *c1_AK(void);
static real_T *c1_theta(void);
static real_T *c1_BK(void);
static real_T *c1_CK(void);
static void init_dsm_address_info(void);
static void sf_save_state_c1_FDIBenchMark_BLW_66_71(FILE *c1_file);
static void sf_load_state_c1_FDIBenchMark_BLW_66_71(FILE *c1_file);

/* Function Definitions */
static void initialize_c1_FDIBenchMark_BLW_66_71(void)
{
  chartInstance.c1_is_active_c1_FDIBenchMark_BLW_66_71 = 0U;
}

static void initialize_params_c1_FDIBenchMark_BLW_66_71(void)
{
}

static void enable_c1_FDIBenchMark_BLW_66_71(void)
{
}

static void disable_c1_FDIBenchMark_BLW_66_71(void)
{
}

static void finalize_c1_FDIBenchMark_BLW_66_71(void)
{
}

static void sf_c1_FDIBenchMark_BLW_66_71(void)
{
  int32_T c1_em_i0;
  int32_T c1_em_i1;
  int32_T c1_em_i2;
  int32_T c1_em_i3;
  int32_T c1_em_i4;
  int32_T c1_em_i5;
  uint8_T c1_previousEvent;
  real_T c1_b_vr;
  real_T c1_b_theta;
  real_T c1_rou4;
  real_T c1_rou3;
  real_T c1_rou2;
  real_T c1_rou1;
  real_T c1_denominator;
  real_T c1_theta_max;
  real_T c1_theta_min;
  real_T c1_wind_velocity_max;
  real_T c1_wind_velocity_min;
  real_T c1_DK4[2][2];
  real_T c1_CK4[6][2];
  real_T c1_BK4[2][6];
  real_T c1_AK4[6][6];
  real_T c1_DK3[2][2];
  real_T c1_CK3[6][2];
  real_T c1_BK3[2][6];
  real_T c1_AK3[6][6];
  real_T c1_DK2[2][2];
  real_T c1_CK2[6][2];
  real_T c1_BK2[2][6];
  real_T c1_AK2[6][6];
  real_T c1_DK1[2][2];
  real_T c1_CK1[6][2];
  real_T c1_BK1[2][6];
  real_T c1_AK1[6][6];
  real_T c1_b_CK[6][2];
  real_T c1_b_BK[2][6];
  real_T c1_b_AK[6][6];
  int32_T c1_em_i6;
  int32_T c1_em_i7;
  static real_T c1_em_dv0[6][6] = { { -4.58, 0.0, -5.615, 0.0, 0.118,
      -5.703E+002 },
    { 0.0, -19.696, 0.0, -5.814, -0.019, 18.62 },
    { -0.852, 0.002, -7.279, 0.0, -3.578E+002, 2.400151E+006 },
    { 0.0, 42.76, 0.0, -24.84, -0.013, -82.94 },
    { 0.0, 0.0027, 1.131, -0.0511, -1.152, 1.011E+002 },
    { 0.226, -0.002, -4.9501E+003, 0.223, -106.62, -1044.0 } };
  int32_T c1_em_i8;
  int32_T c1_em_i9;
  static real_T c1_em_dv1[2][6] = { { 1.794, -0.0004, -9.444, 0.0001,
      -7.5199E+002, 5.049188E+006 },
    { -4.583, 0.0, -5.617, 0.0003, 0.0462, -83.48 } };
  int32_T c1_em_i10;
  int32_T c1_em_i11;
  static real_T c1_em_dv2[6][2] = { { 0.0, 0.0 },
    { -0.0388, -0.0388 },
    { 0.0001, 0.0001 },
    { 5.275, 5.275 },
    { 0.0086, 0.0086 },
    { 0.0203, 0.0203 } };
  int32_T c1_em_i12;
  int32_T c1_em_i13;
  int32_T c1_em_i14;
  int32_T c1_em_i15;
  static real_T c1_em_dv3[6][6] = { { -4.583, 0.0, -5.615, 0.0003, 0.118, -570.0
    },
    { 0.0, -1.86, 0.0, -0.67, -0.0045, 18.65 },
    { -0.852, 0.0, -7.27, -0.00111, -357.0, 2.400151E+006 },
    { 0.0, 5.849, -0.001, -35.503, -0.0441, -8.301E+001 },
    { 0.0, 0.0027, 1.131, -0.0512, -1.152, 1.011E+002 },
    { 0.226, -0.0022, -4950.0, 0.223, -1.066E+002, -1044.0 } };
  int32_T c1_em_i16;
  int32_T c1_em_i17;
  static real_T c1_em_dv4[2][6] = { { 1.794, -0.0008, -9.444, 0.0001, -751.0,
      5.049188E+006 },
    { -4.583, 0.0, -5.6171, 0.0, 0.0462, -83.48 } };
  int32_T c1_em_i18;
  int32_T c1_em_i19;
  static real_T c1_em_dv5[6][2] = { { 0.0, 0.0 },
    { -0.0388, -0.0388 },
    { 0.00018, 0.00018 },
    { 5.275, 5.275 },
    { 0.0086, 0.0086 },
    { 0.0203, 0.0203 } };
  int32_T c1_em_i20;
  int32_T c1_em_i21;
  int32_T c1_em_i22;
  int32_T c1_em_i23;
  int32_T c1_em_i24;
  int32_T c1_em_i25;
  int32_T c1_em_i26;
  int32_T c1_em_i27;
  int32_T c1_em_i28;
  int32_T c1_em_i29;
  int32_T c1_em_i30;
  int32_T c1_em_i31;
  int32_T c1_em_i32;
  int32_T c1_em_i33;
  int32_T c1_em_i34;
  int32_T c1_em_i35;
  int32_T c1_em_i36;
  int32_T c1_em_i37;
  real_T c1_A;
  real_T c1_B;
  real_T c1_x;
  real_T c1_y;
  real_T c1_em_d0;
  real_T c1_b_y;
  real_T c1_b_A;
  real_T c1_b_B;
  real_T c1_b_x;
  real_T c1_c_y;
  real_T c1_em_d1;
  real_T c1_d_y;
  real_T c1_c_A;
  real_T c1_c_B;
  real_T c1_c_x;
  real_T c1_e_y;
  real_T c1_em_d2;
  real_T c1_f_y;
  real_T c1_d_A;
  real_T c1_d_B;
  real_T c1_d_x;
  real_T c1_g_y;
  real_T c1_em_d3;
  real_T c1_h_y;
  int32_T c1_em_i38;
  int32_T c1_em_i39;
  int32_T c1_em_i40;
  int32_T c1_em_i41;
  int32_T c1_em_i42;
  int32_T c1_em_i43;
  int32_T c1_em_i44;
  int32_T c1_em_i45;
  int32_T c1_em_i46;
  int32_T c1_em_i47;
  int32_T c1_em_i48;
  int32_T c1_em_i49;
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_DATA_RANGE_CHECK(*c1_vr(), 1U);
  for(c1_em_i0 = 0; c1_em_i0 < 6; c1_em_i0 = c1_em_i0 + 1) {
    for(c1_em_i1 = 0; c1_em_i1 < 6; c1_em_i1 = c1_em_i1 + 1) {
      _SFD_DATA_RANGE_CHECK(c1_AK()[6 * c1_em_i0 + c1_em_i1], 2U);
    }
  }
  _SFD_DATA_RANGE_CHECK(*c1_theta(), 4U);
  for(c1_em_i2 = 0; c1_em_i2 < 2; c1_em_i2 = c1_em_i2 + 1) {
    for(c1_em_i3 = 0; c1_em_i3 < 6; c1_em_i3 = c1_em_i3 + 1) {
      _SFD_DATA_RANGE_CHECK(c1_BK()[6 * c1_em_i2 + c1_em_i3], 0U);
    }
  }
  for(c1_em_i4 = 0; c1_em_i4 < 6; c1_em_i4 = c1_em_i4 + 1) {
    for(c1_em_i5 = 0; c1_em_i5 < 2; c1_em_i5 = c1_em_i5 + 1) {
      _SFD_DATA_RANGE_CHECK(c1_CK()[(c1_em_i4 << 1) + c1_em_i5], 3U);
    }
  }
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c1_b_vr = *c1_vr();
  c1_b_theta = *c1_theta();
  sf_debug_push_symbol_scope(30U, 0U);
  sf_debug_symbol_scope_add_symbol("rou4", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c1_rou4, 0);
  sf_debug_symbol_scope_add_symbol("rou3", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c1_rou3, 0);
  sf_debug_symbol_scope_add_symbol("rou2", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c1_rou2, 0);
  sf_debug_symbol_scope_add_symbol("rou1", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c1_rou1, 0);
  sf_debug_symbol_scope_add_symbol("denominator", 0, 0U, 0U, 0U, 0U, 1.0, 0,
   0.0, 0U, 0, 0U, 0, &c1_denominator, 0);
  sf_debug_symbol_scope_add_symbol("theta_max", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
   0U, 0, 0U, 0, &c1_theta_max, 0);
  sf_debug_symbol_scope_add_symbol("theta_min", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
   0U, 0, 0U, 0, &c1_theta_min, 0);
  sf_debug_symbol_scope_add_symbol("wind_velocity_max", 0, 0U, 0U, 0U, 0U, 1.0,
   0, 0.0, 0U, 0, 0U, 0, &c1_wind_velocity_max, 0);
  sf_debug_symbol_scope_add_symbol("wind_velocity_min", 0, 0U, 0U, 0U, 0U, 1.0,
   0, 0.0, 0U, 0, 0U, 0, &c1_wind_velocity_min, 0);
  sf_debug_symbol_scope_add_symbol("DK4", 0, 2U, 2U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_DK4, 0);
  sf_debug_symbol_scope_add_symbol("CK4", 0, 2U, 2U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_CK4, 0);
  sf_debug_symbol_scope_add_symbol("BK4", 0, 2U, 6U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_BK4, 0);
  sf_debug_symbol_scope_add_symbol("AK4", 0, 2U, 6U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_AK4, 0);
  sf_debug_symbol_scope_add_symbol("DK3", 0, 2U, 2U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_DK3, 0);
  sf_debug_symbol_scope_add_symbol("CK3", 0, 2U, 2U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_CK3, 0);
  sf_debug_symbol_scope_add_symbol("BK3", 0, 2U, 6U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_BK3, 0);
  sf_debug_symbol_scope_add_symbol("AK3", 0, 2U, 6U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_AK3, 0);
  sf_debug_symbol_scope_add_symbol("DK2", 0, 2U, 2U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_DK2, 0);
  sf_debug_symbol_scope_add_symbol("CK2", 0, 2U, 2U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_CK2, 0);
  sf_debug_symbol_scope_add_symbol("BK2", 0, 2U, 6U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_BK2, 0);
  sf_debug_symbol_scope_add_symbol("AK2", 0, 2U, 6U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_AK2, 0);
  sf_debug_symbol_scope_add_symbol("DK1", 0, 2U, 2U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_DK1, 0);
  sf_debug_symbol_scope_add_symbol("CK1", 0, 2U, 2U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_CK1, 0);
  sf_debug_symbol_scope_add_symbol("BK1", 0, 2U, 6U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_BK1, 0);
  sf_debug_symbol_scope_add_symbol("AK1", 0, 2U, 6U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_AK1, 0);
  sf_debug_symbol_scope_add_symbol("CK", 0, 2U, 2U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_b_CK, 0);
  sf_debug_symbol_scope_add_symbol("BK", 0, 2U, 6U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_b_BK, 0);
  sf_debug_symbol_scope_add_symbol("AK", 0, 2U, 6U, 6U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c1_b_AK, 0);
  sf_debug_symbol_scope_add_symbol("theta", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c1_b_theta, 0);
  sf_debug_symbol_scope_add_symbol("vr", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c1_b_vr, 0);
  CV_EML_FCN(0, 0);
  /* the four polytope controllers */
  /* the first */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,4);
  for(c1_em_i6 = 0; c1_em_i6 < 6; c1_em_i6 = c1_em_i6 + 1) {
    for(c1_em_i7 = 0; c1_em_i7 < 6; c1_em_i7 = c1_em_i7 + 1) {
      c1_AK1[c1_em_i6][c1_em_i7] = c1_em_dv0[c1_em_i6][c1_em_i7];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,11);
  for(c1_em_i8 = 0; c1_em_i8 < 2; c1_em_i8 = c1_em_i8 + 1) {
    for(c1_em_i9 = 0; c1_em_i9 < 6; c1_em_i9 = c1_em_i9 + 1) {
      c1_BK1[c1_em_i8][c1_em_i9] = c1_em_dv1[c1_em_i8][c1_em_i9];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,18);
  for(c1_em_i10 = 0; c1_em_i10 < 6; c1_em_i10 = c1_em_i10 + 1) {
    for(c1_em_i11 = 0; c1_em_i11 < 2; c1_em_i11 = c1_em_i11 + 1) {
      c1_CK1[c1_em_i10][c1_em_i11] = c1_em_dv2[c1_em_i10][c1_em_i11];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,21);
  for(c1_em_i12 = 0; c1_em_i12 < 2; c1_em_i12 = c1_em_i12 + 1) {
    for(c1_em_i13 = 0; c1_em_i13 < 2; c1_em_i13 = c1_em_i13 + 1) {
      c1_DK1[c1_em_i12][c1_em_i13] = 0.0;
    }
  }
  /* the second */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,26);
  for(c1_em_i14 = 0; c1_em_i14 < 6; c1_em_i14 = c1_em_i14 + 1) {
    for(c1_em_i15 = 0; c1_em_i15 < 6; c1_em_i15 = c1_em_i15 + 1) {
      c1_AK2[c1_em_i14][c1_em_i15] = c1_em_dv3[c1_em_i14][c1_em_i15];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,33);
  for(c1_em_i16 = 0; c1_em_i16 < 2; c1_em_i16 = c1_em_i16 + 1) {
    for(c1_em_i17 = 0; c1_em_i17 < 6; c1_em_i17 = c1_em_i17 + 1) {
      c1_BK2[c1_em_i16][c1_em_i17] = c1_em_dv4[c1_em_i16][c1_em_i17];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,40);
  for(c1_em_i18 = 0; c1_em_i18 < 6; c1_em_i18 = c1_em_i18 + 1) {
    for(c1_em_i19 = 0; c1_em_i19 < 2; c1_em_i19 = c1_em_i19 + 1) {
      c1_CK2[c1_em_i18][c1_em_i19] = c1_em_dv5[c1_em_i18][c1_em_i19];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,43);
  for(c1_em_i20 = 0; c1_em_i20 < 2; c1_em_i20 = c1_em_i20 + 1) {
    for(c1_em_i21 = 0; c1_em_i21 < 2; c1_em_i21 = c1_em_i21 + 1) {
      c1_DK2[c1_em_i20][c1_em_i21] = 0.0;
    }
  }
  /* the third */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,48);
  for(c1_em_i22 = 0; c1_em_i22 < 6; c1_em_i22 = c1_em_i22 + 1) {
    for(c1_em_i23 = 0; c1_em_i23 < 6; c1_em_i23 = c1_em_i23 + 1) {
      c1_AK3[c1_em_i22][c1_em_i23] = c1_em_dv0[c1_em_i22][c1_em_i23];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,55);
  for(c1_em_i24 = 0; c1_em_i24 < 2; c1_em_i24 = c1_em_i24 + 1) {
    for(c1_em_i25 = 0; c1_em_i25 < 6; c1_em_i25 = c1_em_i25 + 1) {
      c1_BK3[c1_em_i24][c1_em_i25] = c1_em_dv1[c1_em_i24][c1_em_i25];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,62);
  for(c1_em_i26 = 0; c1_em_i26 < 6; c1_em_i26 = c1_em_i26 + 1) {
    for(c1_em_i27 = 0; c1_em_i27 < 2; c1_em_i27 = c1_em_i27 + 1) {
      c1_CK3[c1_em_i26][c1_em_i27] = c1_em_dv2[c1_em_i26][c1_em_i27];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,65);
  for(c1_em_i28 = 0; c1_em_i28 < 2; c1_em_i28 = c1_em_i28 + 1) {
    for(c1_em_i29 = 0; c1_em_i29 < 2; c1_em_i29 = c1_em_i29 + 1) {
      c1_DK3[c1_em_i28][c1_em_i29] = 0.0;
    }
  }
  /* the forth */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,71);
  for(c1_em_i30 = 0; c1_em_i30 < 6; c1_em_i30 = c1_em_i30 + 1) {
    for(c1_em_i31 = 0; c1_em_i31 < 6; c1_em_i31 = c1_em_i31 + 1) {
      c1_AK4[c1_em_i30][c1_em_i31] = c1_em_dv3[c1_em_i30][c1_em_i31];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,78);
  for(c1_em_i32 = 0; c1_em_i32 < 2; c1_em_i32 = c1_em_i32 + 1) {
    for(c1_em_i33 = 0; c1_em_i33 < 6; c1_em_i33 = c1_em_i33 + 1) {
      c1_BK4[c1_em_i32][c1_em_i33] = c1_em_dv4[c1_em_i32][c1_em_i33];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,85);
  for(c1_em_i34 = 0; c1_em_i34 < 6; c1_em_i34 = c1_em_i34 + 1) {
    for(c1_em_i35 = 0; c1_em_i35 < 2; c1_em_i35 = c1_em_i35 + 1) {
      c1_CK4[c1_em_i34][c1_em_i35] = c1_em_dv5[c1_em_i34][c1_em_i35];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,88);
  for(c1_em_i36 = 0; c1_em_i36 < 2; c1_em_i36 = c1_em_i36 + 1) {
    for(c1_em_i37 = 0; c1_em_i37 < 2; c1_em_i37 = c1_em_i37 + 1) {
      c1_DK4[c1_em_i36][c1_em_i37] = 0.0;
    }
  }
  /* =================================================================================== */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,93);
  c1_wind_velocity_min = 13.0;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,94);
  c1_wind_velocity_max = 25.0;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,95);
  c1_theta_min = 0.0;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,96);
  c1_theta_max = 1.0;
  /*  */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,98);
  c1_denominator = 12.0;
  /*  */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,100);
  c1_A = (c1_b_vr - c1_wind_velocity_min) * (c1_b_theta - c1_theta_min);
  c1_B = 12.0;
  c1_x = c1_A;
  c1_y = c1_B;
  c1_em_d0 = c1_x / c1_y;
  c1_b_y = c1_em_d0;
  c1_rou1 = c1_b_y;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,101);
  c1_b_A = (c1_b_vr - c1_wind_velocity_min) * (c1_theta_max - c1_b_theta);
  c1_b_B = 12.0;
  c1_b_x = c1_b_A;
  c1_c_y = c1_b_B;
  c1_em_d1 = c1_b_x / c1_c_y;
  c1_d_y = c1_em_d1;
  c1_rou2 = c1_d_y;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,102);
  c1_c_A = (c1_wind_velocity_max - c1_b_vr) * (c1_b_theta - c1_theta_min);
  c1_c_B = 12.0;
  c1_c_x = c1_c_A;
  c1_e_y = c1_c_B;
  c1_em_d2 = c1_c_x / c1_e_y;
  c1_f_y = c1_em_d2;
  c1_rou3 = c1_f_y;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,103);
  c1_d_A = (c1_wind_velocity_max - c1_b_vr) * (c1_theta_max - c1_b_theta);
  c1_d_B = 12.0;
  c1_d_x = c1_d_A;
  c1_g_y = c1_d_B;
  c1_em_d3 = c1_d_x / c1_g_y;
  c1_h_y = c1_em_d3;
  c1_rou4 = c1_h_y;
  /* here is the controller */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,106);
  for(c1_em_i38 = 0; c1_em_i38 < 6; c1_em_i38 = c1_em_i38 + 1) {
    for(c1_em_i39 = 0; c1_em_i39 < 6; c1_em_i39 = c1_em_i39 + 1) {
      c1_b_AK[c1_em_i38][c1_em_i39] = ((c1_rou1 * c1_AK1[c1_em_i38][c1_em_i39] +
        c1_rou2 * c1_AK2[c1_em_i38][c1_em_i39]) + c1_rou3 *
        c1_AK3[c1_em_i38][c1_em_i39]) + c1_rou4 * c1_AK4[c1_em_i38][c1_em_i39];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,107);
  for(c1_em_i40 = 0; c1_em_i40 < 2; c1_em_i40 = c1_em_i40 + 1) {
    for(c1_em_i41 = 0; c1_em_i41 < 6; c1_em_i41 = c1_em_i41 + 1) {
      c1_b_BK[c1_em_i40][c1_em_i41] = ((c1_rou1 * c1_BK1[c1_em_i40][c1_em_i41] +
        c1_rou2 * c1_BK2[c1_em_i40][c1_em_i41]) + c1_rou3 *
        c1_BK3[c1_em_i40][c1_em_i41]) + c1_rou4 * c1_BK4[c1_em_i40][c1_em_i41];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,108);
  for(c1_em_i42 = 0; c1_em_i42 < 6; c1_em_i42 = c1_em_i42 + 1) {
    for(c1_em_i43 = 0; c1_em_i43 < 2; c1_em_i43 = c1_em_i43 + 1) {
      c1_b_CK[c1_em_i42][c1_em_i43] = ((c1_rou1 * c1_CK1[c1_em_i42][c1_em_i43] +
        c1_rou2 * c1_CK2[c1_em_i42][c1_em_i43]) + c1_rou3 *
        c1_CK3[c1_em_i42][c1_em_i43]) + c1_rou4 * c1_CK4[c1_em_i42][c1_em_i43];
    }
  }
  /* DK = rou1*DK1 + rou2*DK2 + rou3*DK3 + rou4*DK4; */
  /* DK = DK1; */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,-108);
  sf_debug_pop_symbol_scope();
  for(c1_em_i44 = 0; c1_em_i44 < 6; c1_em_i44 = c1_em_i44 + 1) {
    for(c1_em_i45 = 0; c1_em_i45 < 6; c1_em_i45 = c1_em_i45 + 1) {
      c1_AK()[6 * c1_em_i44 + c1_em_i45] = c1_b_AK[c1_em_i44][c1_em_i45];
    }
  }
  for(c1_em_i46 = 0; c1_em_i46 < 2; c1_em_i46 = c1_em_i46 + 1) {
    for(c1_em_i47 = 0; c1_em_i47 < 6; c1_em_i47 = c1_em_i47 + 1) {
      c1_BK()[6 * c1_em_i46 + c1_em_i47] = c1_b_BK[c1_em_i46][c1_em_i47];
    }
  }
  for(c1_em_i48 = 0; c1_em_i48 < 6; c1_em_i48 = c1_em_i48 + 1) {
    for(c1_em_i49 = 0; c1_em_i49 < 2; c1_em_i49 = c1_em_i49 + 1) {
      c1_CK()[(c1_em_i48 << 1) + c1_em_i49] = c1_b_CK[c1_em_i48][c1_em_i49];
    }
  }
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency();
}

static real_T *c1_vr(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
}

static real_T *c1_AK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
}

static real_T *c1_theta(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
}

static real_T *c1_BK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 2);
}

static real_T *c1_CK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 3);
}

static void init_dsm_address_info(void)
{
}

static void sf_save_state_c1_FDIBenchMark_BLW_66_71(FILE *c1_file)
{
  fwrite(&chartInstance.c1_is_active_c1_FDIBenchMark_BLW_66_71, 1,
   sizeof(chartInstance.c1_is_active_c1_FDIBenchMark_BLW_66_71),
   c1_file);
}

static void sf_load_state_c1_FDIBenchMark_BLW_66_71(FILE *c1_file)
{
  fread(&chartInstance.c1_is_active_c1_FDIBenchMark_BLW_66_71, 1,
   sizeof(chartInstance.c1_is_active_c1_FDIBenchMark_BLW_66_71),
   c1_file);
}

/* SFunction Glue Code */
void sf_c1_FDIBenchMark_BLW_66_71_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3452206441U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2099399914U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1144800399U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3630666605U);
}

mxArray *sf_c1_FDIBenchMark_BLW_66_71_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(465246494U);
    pr[1] = (double)(2544634210U);
    pr[2] = (double)(4197479289U);
    pr[3] = (double)(567198839U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }
    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }
  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,mxREAL));
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      pr[1] = (double)(6);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }
    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }
  return(mxAutoinheritanceInfo);
}

static void chart_debug_initialization(SimStruct *S)
{
  if(ssIsFirstInitCond(S)) {
    /* do this only if simulation is starting */
    if(!sim_mode_is_rtw_gen(S)) {
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent =
          sf_debug_initialize_chart(_FDIBenchMark_BLW_66_71MachineNumber_,
         1,
         1,
         1,
         5,
         0,
         0,
         0,
         0,
         &(chartInstance.chartNumber),
         &(chartInstance.instanceNumber),
         ssGetPath(S),
         (void *)S);
        if(chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting(_FDIBenchMark_BLW_66_71MachineNumber_,chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds(_FDIBenchMark_BLW_66_71MachineNumber_,
           chartInstance.chartNumber,
           0,
           0,
           0);

          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"vr",0);
          {
            unsigned int dimVector[2];
            dimVector[0]= 6;
            dimVector[1]= 6;
            _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"AK",0);
          }
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"theta",0);
          {
            unsigned int dimVector[2];
            dimVector[0]= 6;
            dimVector[1]= 2;
            _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"BK",0);
          }
          {
            unsigned int dimVector[2];
            dimVector[0]= 2;
            dimVector[1]= 6;
            _SFD_SET_DATA_PROPS(3,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"CK",0);
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
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,2756);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           1,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_SET_DATA_VALUE_PTR(1U, c1_vr());
        _SFD_SET_DATA_VALUE_PTR(2U, c1_AK());
        _SFD_SET_DATA_VALUE_PTR(4U, c1_theta());
        _SFD_SET_DATA_VALUE_PTR(0U, c1_BK());
        _SFD_SET_DATA_VALUE_PTR(3U, c1_CK());
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_FDIBenchMark_BLW_66_71MachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c1_FDIBenchMark_BLW_66_71(void
 *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S);
  initialize_params_c1_FDIBenchMark_BLW_66_71();
  initialize_c1_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_enable_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  enable_c1_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_disable_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  disable_c1_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_gateway_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  sf_c1_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_terminate_c1_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  finalize_c1_FDIBenchMark_BLW_66_71();
}

static void mdlProcessParameters_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  initialize_params_c1_FDIBenchMark_BLW_66_71();
}

static void mdlSetWorkWidths_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("FDIBenchMark_BLW_66_71",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("FDIBenchMark_BLW_66_71",1,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"FDIBenchMark_BLW_66_71",1,2);
      sf_mark_chart_reusable_outputs(S,"FDIBenchMark_BLW_66_71",1,3);
    }
    if (!sf_is_chart_instance_optimized_out("FDIBenchMark_BLW_66_71",1)) {
      int dtId;
      char *chartInstanceTypedefName =
        sf_chart_instance_typedef_name("FDIBenchMark_BLW_66_71",1);
      dtId = ssRegisterDataType(S, chartInstanceTypedefName);
      if (dtId == INVALID_DTYPE_ID ) return;
      /* Register the size of the udt */
      if (!ssSetDataTypeSize(S, dtId, 8)) return;
      if(!ssSetNumDWork(S,1)) return;
      ssSetDWorkDataType(S, 0, dtId);
      ssSetDWorkWidth(S, 0, 1);
      ssSetDWorkName(S, 0, "ChartInstance"); /*optional name, less than 16 chars*/
      sf_set_rtw_identifier(S);
    }
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(3452206441U));
  ssSetChecksum1(S,(2099399914U));
  ssSetChecksum2(S,(1144800399U));
  ssSetChecksum3(S,(3630666605U));

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "FDIBenchMark_BLW_66_71", 1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void
sf_save_debug_c1_FDIBenchMark_BLW_66_71(SFc1_FDIBenchMark_BLW_66_71InstanceStruct*
 chartInstance, FILE* file)
{
  int machineNumber = _FDIBenchMark_BLW_66_71MachineNumber_;
  int chartNumber = chartInstance->chartNumber;
  int instanceNumber = chartInstance->instanceNumber;
  int bufferSize = sf_debug_get_state_vectors_data_size(machineNumber,
   chartNumber, instanceNumber);
  unsigned char* buffer = (unsigned char*) malloc(bufferSize);
  unsigned int chartActive = sf_debug_get_chart_active(machineNumber,
   chartNumber, instanceNumber);
  fwrite(&chartActive, sizeof(chartActive),1,file);
  sf_debug_get_state_vectors_data(machineNumber, chartNumber, instanceNumber,
   buffer, bufferSize);
  fwrite(&bufferSize, sizeof(bufferSize), 1, file); /* Write number of bytes */
  fwrite(buffer, 1, bufferSize,file);   /* Write buffer */
  free(buffer);
}
static void
sf_load_debug_c1_FDIBenchMark_BLW_66_71(SFc1_FDIBenchMark_BLW_66_71InstanceStruct*
 chartInstance,FILE* file)
{
  int machineNumber = _FDIBenchMark_BLW_66_71MachineNumber_;
  int chartNumber = chartInstance->chartNumber;
  int instanceNumber = chartInstance->instanceNumber;
  int bufferSize = 0;
  unsigned char* buffer = NULL;
  unsigned int chartActive = 0;
  fread(&chartActive, sizeof(chartActive),1,file);
  sf_debug_set_chart_active(machineNumber, chartNumber, instanceNumber,
   chartActive);
  fread(&bufferSize, sizeof(bufferSize), 1, file);
  buffer = (unsigned char*) malloc(bufferSize);
  fread(buffer, 1, bufferSize, file);
  sf_debug_set_state_vectors_data(machineNumber, chartNumber, instanceNumber,
   buffer, bufferSize);
  free(buffer);
}
static void sf_c1_FDIBenchMark_BLW_66_71_sim_ctx_io(SimStruct* S, const char io,
 FILE* file)
{
  if(io == 'r') {
    sf_load_state_c1_FDIBenchMark_BLW_66_71(file);
    sf_load_debug_c1_FDIBenchMark_BLW_66_71(&chartInstance, file);
  } else {
    sf_save_state_c1_FDIBenchMark_BLW_66_71(file);
    sf_save_debug_c1_FDIBenchMark_BLW_66_71(&chartInstance, file);
  }
}
static void mdlStart_c1_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.initializeChart =
    sf_opaque_initialize_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.terminateChart =
    sf_opaque_terminate_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.enableChart =
    sf_opaque_enable_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.disableChart =
    sf_opaque_disable_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.mdlStart = mdlStart_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */
  ssSetmdlSimulationContextIO(S, sf_c1_FDIBenchMark_BLW_66_71_sim_ctx_io);
  if(!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }
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

