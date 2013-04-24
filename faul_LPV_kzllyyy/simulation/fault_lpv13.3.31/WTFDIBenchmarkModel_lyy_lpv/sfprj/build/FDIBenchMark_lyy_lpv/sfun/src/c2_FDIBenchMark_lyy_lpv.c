/* Include files */
#include "FDIBenchMark_lyy_lpv_sfun.h"
#include "c2_FDIBenchMark_lyy_lpv.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "FDIBenchMark_lyy_lpv_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD           (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc2_FDIBenchMark_lyy_lpvInstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c2_FDIBenchMark_lyy_lpv(void);
static void initialize_params_c2_FDIBenchMark_lyy_lpv(void);
static void enable_c2_FDIBenchMark_lyy_lpv(void);
static void disable_c2_FDIBenchMark_lyy_lpv(void);
static void finalize_c2_FDIBenchMark_lyy_lpv(void);
static void sf_c2_FDIBenchMark_lyy_lpv(void);
static real_T *c2_vr(void);
static real_T *c2_AK(void);
static real_T *c2_theta(void);
static real_T *c2_BK(void);
static real_T *c2_CK(void);
static real_T *c2_DK(void);
static void init_dsm_address_info(void);
static void sf_save_state_c2_FDIBenchMark_lyy_lpv(FILE *c2_file);
static void sf_load_state_c2_FDIBenchMark_lyy_lpv(FILE *c2_file);

/* Function Definitions */
static void initialize_c2_FDIBenchMark_lyy_lpv(void)
{
  chartInstance.c2_is_active_c2_FDIBenchMark_lyy_lpv = 0U;
}

static void initialize_params_c2_FDIBenchMark_lyy_lpv(void)
{
}

static void enable_c2_FDIBenchMark_lyy_lpv(void)
{
}

static void disable_c2_FDIBenchMark_lyy_lpv(void)
{
}

static void finalize_c2_FDIBenchMark_lyy_lpv(void)
{
}

static void sf_c2_FDIBenchMark_lyy_lpv(void)
{
  int32_T c2_em_i0;
  int32_T c2_em_i1;
  int32_T c2_em_i2;
  int32_T c2_em_i3;
  int32_T c2_em_i4;
  int32_T c2_em_i5;
  uint8_T c2_previousEvent;
  real_T c2_b_vr;
  real_T c2_b_theta;
  real_T c2_rou4;
  real_T c2_rou3;
  real_T c2_rou2;
  real_T c2_rou1;
  real_T c2_denominator;
  real_T c2_theta_max;
  real_T c2_theta_min;
  real_T c2_wind_velocity_max;
  real_T c2_wind_velocity_min;
  real_T c2_DK4[2][1];
  real_T c2_CK4[5][1];
  real_T c2_BK4[2][5];
  real_T c2_AK4[5][5];
  real_T c2_DK3[2][1];
  real_T c2_CK3[5][1];
  real_T c2_BK3[2][5];
  real_T c2_AK3[5][5];
  real_T c2_DK2[2][1];
  real_T c2_CK2[5][1];
  real_T c2_BK2[2][5];
  real_T c2_AK2[5][5];
  real_T c2_DK1[2][1];
  real_T c2_CK1[5][1];
  real_T c2_BK1[2][5];
  real_T c2_AK1[5][5];
  real_T c2_b_DK[2][1];
  real_T c2_b_CK[5][1];
  real_T c2_b_BK[2][5];
  real_T c2_b_AK[5][5];
  int32_T c2_em_i6;
  int32_T c2_em_i7;
  static real_T c2_em_dv0[5][5] = { { -92.4228, 0.0, -1.63717E+002, -0.0022,
      5.3787 },
    { 0.0, -53.5268, 0.0001, 9.673562E+002, 1.2434082160599999E+007 },
    { 20.1769, 0.0, -19.185, -0.0004, -1.6661 },
    { 0.0, -0.3863, -0.0006, -0.7853, 88.3111 },
    { -0.0004, -2.758602E+003, 0.0028, -155.0111, -4.0425288480000000E+005 } };
  int32_T c2_em_i8;
  int32_T c2_em_i9;
  static real_T c2_em_dv1[2][5] = { { 7.78024E+001, 0.0, 1.620236E+002, 0.0023,
      0.1894 },
    { 0.0, 95.9773, -0.0001, -1.7390603E+003, -2.2340125540600002E+007 } };
  int32_T c2_em_i10;
  static real_T c2_em_dv2[5][1] = { { 0.0475 },
    { 0.0 },
    { -4.499 },
    { -0.0001 },
    { -0.0003 } };
  int32_T c2_em_i11;
  int32_T c2_em_i12;
  int32_T c2_em_i13;
  static real_T c2_em_dv3[5][5] = { { -35.794, 0.0, -113.8964, -0.0004, 5.3787 },
    { 0.0, -43.742, 0.0001, 9.669712E+002, 1.2424378434000000E+007 },
    { 1.7817, 0.0, -27.8457, -0.0008, -1.6654 },
    { 0.0, 0.3863, -0.0006, -0.7853, 88.2454 },
    { -0.0004, -2.7589201E+003, 0.0028, -1.549986E+002, -4.0393740149999998E+005
    } };
  int32_T c2_em_i14;
  int32_T c2_em_i15;
  static real_T c2_em_dv4[2][5] = { { 35.8963, 0.0, 118.3728, 0.0008, 0.1854 },
    { 0.0, 78.3972, -0.0001, -1738.3686, -2.2322691002700001E+007 } };
  int32_T c2_em_i16;
  int32_T c2_em_i17;
  int32_T c2_em_i18;
  int32_T c2_em_i19;
  static real_T c2_em_dv5[5][5] = { { -92.3485, 0.0, -162.2321, -0.0022, 5.3788
    },
    { 0.0, -53.2154, 0.0001, 967.3904, 1.2434323728000000E+007 },
    { 20.179, 0.0, -19.1436, -0.0004, -1.6661 },
    { 0.0, 0.3863, -0.0006, -0.7853, 88.3128 },
    { -0.0004, -2.7586121E+003, 0.0028, -1.550122E+002, -4.0426073859999998E+005
    } };
  int32_T c2_em_i20;
  int32_T c2_em_i21;
  static real_T c2_em_dv6[2][5] = { { 77.724, 0.0, 160.4581, 0.0023, 0.1894 },
    { 0.0, 95.4178, -0.0001, -1.7391218E+003, -2.2340559561000001E+007 } };
  int32_T c2_em_i22;
  int32_T c2_em_i23;
  int32_T c2_em_i24;
  int32_T c2_em_i25;
  static real_T c2_em_dv7[5][5] = { { -36.4478, 0.0, -116.2555, -0.0004, 5.3775
    },
    { 0.0, -43.8122, 0.0001, 9.670985E+002, 1.2425923738500001E+007 },
    { 1.7635, 0.0, -27.9115, -0.0008, -1.6657 },
    { 0.0, 0.3863, -0.0006, -0.7853, 88.2534 },
    { -0.0004, -2.7589178E+003, 0.0028, -155.0027, -4.0398764169999998E+005 } };
  int32_T c2_em_i26;
  int32_T c2_em_i27;
  static real_T c2_em_dv8[2][5] = { { 36.5856, 0.0, 120.86, 0.0009, 0.1876 },
    { 0.0, 78.5232, -0.0001, -1.7385973E+003, -2.2325467427299999E+007 } };
  int32_T c2_em_i28;
  int32_T c2_em_i29;
  real_T c2_A;
  real_T c2_B;
  real_T c2_x;
  real_T c2_y;
  real_T c2_em_d0;
  real_T c2_b_y;
  real_T c2_b_A;
  real_T c2_b_B;
  real_T c2_b_x;
  real_T c2_c_y;
  real_T c2_em_d1;
  real_T c2_d_y;
  real_T c2_c_A;
  real_T c2_c_B;
  real_T c2_c_x;
  real_T c2_e_y;
  real_T c2_em_d2;
  real_T c2_f_y;
  real_T c2_d_A;
  real_T c2_d_B;
  real_T c2_d_x;
  real_T c2_g_y;
  real_T c2_em_d3;
  real_T c2_h_y;
  int32_T c2_em_i30;
  int32_T c2_em_i31;
  int32_T c2_em_i32;
  int32_T c2_em_i33;
  int32_T c2_em_i34;
  int32_T c2_em_i35;
  int32_T c2_em_i36;
  int32_T c2_em_i37;
  int32_T c2_em_i38;
  int32_T c2_em_i39;
  int32_T c2_em_i40;
  int32_T c2_em_i41;
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_DATA_RANGE_CHECK(*c2_vr(), 3U);
  for(c2_em_i0 = 0; c2_em_i0 < 5; c2_em_i0 = c2_em_i0 + 1) {
    for(c2_em_i1 = 0; c2_em_i1 < 5; c2_em_i1 = c2_em_i1 + 1) {
      _SFD_DATA_RANGE_CHECK(c2_AK()[5 * c2_em_i0 + c2_em_i1], 2U);
    }
  }
  _SFD_DATA_RANGE_CHECK(*c2_theta(), 1U);
  for(c2_em_i2 = 0; c2_em_i2 < 2; c2_em_i2 = c2_em_i2 + 1) {
    for(c2_em_i3 = 0; c2_em_i3 < 5; c2_em_i3 = c2_em_i3 + 1) {
      _SFD_DATA_RANGE_CHECK(c2_BK()[5 * c2_em_i2 + c2_em_i3], 4U);
    }
  }
  for(c2_em_i4 = 0; c2_em_i4 < 5; c2_em_i4 = c2_em_i4 + 1) {
    _SFD_DATA_RANGE_CHECK(c2_CK()[c2_em_i4], 0U);
  }
  for(c2_em_i5 = 0; c2_em_i5 < 2; c2_em_i5 = c2_em_i5 + 1) {
    _SFD_DATA_RANGE_CHECK(c2_DK()[c2_em_i5], 5U);
  }
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c2_b_vr = *c2_vr();
  c2_b_theta = *c2_theta();
  sf_debug_push_symbol_scope(31U, 0U);
  sf_debug_symbol_scope_add_symbol("rou4", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c2_rou4, 0);
  sf_debug_symbol_scope_add_symbol("rou3", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c2_rou3, 0);
  sf_debug_symbol_scope_add_symbol("rou2", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c2_rou2, 0);
  sf_debug_symbol_scope_add_symbol("rou1", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c2_rou1, 0);
  sf_debug_symbol_scope_add_symbol("denominator", 0, 0U, 0U, 0U, 0U, 1.0, 0,
   0.0, 0U, 0, 0U, 0, &c2_denominator, 0);
  sf_debug_symbol_scope_add_symbol("theta_max", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
   0U, 0, 0U, 0, &c2_theta_max, 0);
  sf_debug_symbol_scope_add_symbol("theta_min", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
   0U, 0, 0U, 0, &c2_theta_min, 0);
  sf_debug_symbol_scope_add_symbol("wind_velocity_max", 0, 0U, 0U, 0U, 0U, 1.0,
   0, 0.0, 0U, 0, 0U, 0, &c2_wind_velocity_max, 0);
  sf_debug_symbol_scope_add_symbol("wind_velocity_min", 0, 0U, 0U, 0U, 0U, 1.0,
   0, 0.0, 0U, 0, 0U, 0, &c2_wind_velocity_min, 0);
  sf_debug_symbol_scope_add_symbol("DK4", 0, 2U, 1U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_DK4, 0);
  sf_debug_symbol_scope_add_symbol("CK4", 0, 2U, 1U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_CK4, 0);
  sf_debug_symbol_scope_add_symbol("BK4", 0, 2U, 5U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_BK4, 0);
  sf_debug_symbol_scope_add_symbol("AK4", 0, 2U, 5U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_AK4, 0);
  sf_debug_symbol_scope_add_symbol("DK3", 0, 2U, 1U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_DK3, 0);
  sf_debug_symbol_scope_add_symbol("CK3", 0, 2U, 1U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_CK3, 0);
  sf_debug_symbol_scope_add_symbol("BK3", 0, 2U, 5U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_BK3, 0);
  sf_debug_symbol_scope_add_symbol("AK3", 0, 2U, 5U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_AK3, 0);
  sf_debug_symbol_scope_add_symbol("DK2", 0, 2U, 1U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_DK2, 0);
  sf_debug_symbol_scope_add_symbol("CK2", 0, 2U, 1U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_CK2, 0);
  sf_debug_symbol_scope_add_symbol("BK2", 0, 2U, 5U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_BK2, 0);
  sf_debug_symbol_scope_add_symbol("AK2", 0, 2U, 5U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_AK2, 0);
  sf_debug_symbol_scope_add_symbol("DK1", 0, 2U, 1U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_DK1, 0);
  sf_debug_symbol_scope_add_symbol("CK1", 0, 2U, 1U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_CK1, 0);
  sf_debug_symbol_scope_add_symbol("BK1", 0, 2U, 5U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_BK1, 0);
  sf_debug_symbol_scope_add_symbol("AK1", 0, 2U, 5U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_AK1, 0);
  sf_debug_symbol_scope_add_symbol("DK", 0, 2U, 1U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_b_DK, 0);
  sf_debug_symbol_scope_add_symbol("CK", 0, 2U, 1U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_b_CK, 0);
  sf_debug_symbol_scope_add_symbol("BK", 0, 2U, 5U, 2U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_b_BK, 0);
  sf_debug_symbol_scope_add_symbol("AK", 0, 2U, 5U, 5U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 1, &c2_b_AK, 0);
  sf_debug_symbol_scope_add_symbol("theta", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
   0, 0U, 0, &c2_b_theta, 0);
  sf_debug_symbol_scope_add_symbol("vr", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_vr, 0);
  CV_EML_FCN(0, 0);
  /* the four polytope controllers */
  /* the first */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,4);
  for(c2_em_i6 = 0; c2_em_i6 < 5; c2_em_i6 = c2_em_i6 + 1) {
    for(c2_em_i7 = 0; c2_em_i7 < 5; c2_em_i7 = c2_em_i7 + 1) {
      c2_AK1[c2_em_i6][c2_em_i7] = c2_em_dv0[c2_em_i6][c2_em_i7];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,9);
  for(c2_em_i8 = 0; c2_em_i8 < 2; c2_em_i8 = c2_em_i8 + 1) {
    for(c2_em_i9 = 0; c2_em_i9 < 5; c2_em_i9 = c2_em_i9 + 1) {
      c2_BK1[c2_em_i8][c2_em_i9] = c2_em_dv1[c2_em_i8][c2_em_i9];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,14);
  for(c2_em_i10 = 0; c2_em_i10 < 5; c2_em_i10 = c2_em_i10 + 1) {
    c2_CK1[c2_em_i10][0] = c2_em_dv2[c2_em_i10][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,15);
  for(c2_em_i11 = 0; c2_em_i11 < 2; c2_em_i11 = c2_em_i11 + 1) {
    c2_DK1[c2_em_i11][0] = 0.0;
  }
  /* the second */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,18);
  for(c2_em_i12 = 0; c2_em_i12 < 5; c2_em_i12 = c2_em_i12 + 1) {
    for(c2_em_i13 = 0; c2_em_i13 < 5; c2_em_i13 = c2_em_i13 + 1) {
      c2_AK2[c2_em_i12][c2_em_i13] = c2_em_dv3[c2_em_i12][c2_em_i13];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,23);
  for(c2_em_i14 = 0; c2_em_i14 < 2; c2_em_i14 = c2_em_i14 + 1) {
    for(c2_em_i15 = 0; c2_em_i15 < 5; c2_em_i15 = c2_em_i15 + 1) {
      c2_BK2[c2_em_i14][c2_em_i15] = c2_em_dv4[c2_em_i14][c2_em_i15];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,28);
  for(c2_em_i16 = 0; c2_em_i16 < 5; c2_em_i16 = c2_em_i16 + 1) {
    c2_CK2[c2_em_i16][0] = c2_em_dv2[c2_em_i16][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,29);
  for(c2_em_i17 = 0; c2_em_i17 < 2; c2_em_i17 = c2_em_i17 + 1) {
    c2_DK2[c2_em_i17][0] = 0.0;
  }
  /* the third */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,32);
  for(c2_em_i18 = 0; c2_em_i18 < 5; c2_em_i18 = c2_em_i18 + 1) {
    for(c2_em_i19 = 0; c2_em_i19 < 5; c2_em_i19 = c2_em_i19 + 1) {
      c2_AK3[c2_em_i18][c2_em_i19] = c2_em_dv5[c2_em_i18][c2_em_i19];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,37);
  for(c2_em_i20 = 0; c2_em_i20 < 2; c2_em_i20 = c2_em_i20 + 1) {
    for(c2_em_i21 = 0; c2_em_i21 < 5; c2_em_i21 = c2_em_i21 + 1) {
      c2_BK3[c2_em_i20][c2_em_i21] = c2_em_dv6[c2_em_i20][c2_em_i21];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,42);
  for(c2_em_i22 = 0; c2_em_i22 < 5; c2_em_i22 = c2_em_i22 + 1) {
    c2_CK3[c2_em_i22][0] = c2_em_dv2[c2_em_i22][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,43);
  for(c2_em_i23 = 0; c2_em_i23 < 2; c2_em_i23 = c2_em_i23 + 1) {
    c2_DK3[c2_em_i23][0] = 0.0;
  }
  /* the forth */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,46);
  for(c2_em_i24 = 0; c2_em_i24 < 5; c2_em_i24 = c2_em_i24 + 1) {
    for(c2_em_i25 = 0; c2_em_i25 < 5; c2_em_i25 = c2_em_i25 + 1) {
      c2_AK4[c2_em_i24][c2_em_i25] = c2_em_dv7[c2_em_i24][c2_em_i25];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,51);
  for(c2_em_i26 = 0; c2_em_i26 < 2; c2_em_i26 = c2_em_i26 + 1) {
    for(c2_em_i27 = 0; c2_em_i27 < 5; c2_em_i27 = c2_em_i27 + 1) {
      c2_BK4[c2_em_i26][c2_em_i27] = c2_em_dv8[c2_em_i26][c2_em_i27];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,56);
  for(c2_em_i28 = 0; c2_em_i28 < 5; c2_em_i28 = c2_em_i28 + 1) {
    c2_CK4[c2_em_i28][0] = c2_em_dv2[c2_em_i28][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,57);
  for(c2_em_i29 = 0; c2_em_i29 < 2; c2_em_i29 = c2_em_i29 + 1) {
    c2_DK4[c2_em_i29][0] = 0.0;
  }
  /* =================================================================================== */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,60);
  c2_wind_velocity_min = 18.0;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,61);
  c2_wind_velocity_max = 25.0;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,62);
  c2_theta_min = 0.0;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,63);
  c2_theta_max = 1.0;
  /*  */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,65);
  c2_denominator = 7.0;
  /*  */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,67);
  c2_A = (c2_b_vr - c2_wind_velocity_min) * (c2_b_theta - c2_theta_min);
  c2_B = 7.0;
  c2_x = c2_A;
  c2_y = c2_B;
  c2_em_d0 = c2_x / c2_y;
  c2_b_y = c2_em_d0;
  c2_rou1 = c2_b_y;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,68);
  c2_b_A = (c2_b_vr - c2_wind_velocity_min) * (c2_theta_max - c2_b_theta);
  c2_b_B = 7.0;
  c2_b_x = c2_b_A;
  c2_c_y = c2_b_B;
  c2_em_d1 = c2_b_x / c2_c_y;
  c2_d_y = c2_em_d1;
  c2_rou2 = c2_d_y;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,69);
  c2_c_A = (c2_wind_velocity_max - c2_b_vr) * (c2_b_theta - c2_theta_min);
  c2_c_B = 7.0;
  c2_c_x = c2_c_A;
  c2_e_y = c2_c_B;
  c2_em_d2 = c2_c_x / c2_e_y;
  c2_f_y = c2_em_d2;
  c2_rou3 = c2_f_y;
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,70);
  c2_d_A = (c2_wind_velocity_max - c2_b_vr) * (c2_theta_max - c2_b_theta);
  c2_d_B = 7.0;
  c2_d_x = c2_d_A;
  c2_g_y = c2_d_B;
  c2_em_d3 = c2_d_x / c2_g_y;
  c2_h_y = c2_em_d3;
  c2_rou4 = c2_h_y;
  /* here is the controller */
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,73);
  for(c2_em_i30 = 0; c2_em_i30 < 5; c2_em_i30 = c2_em_i30 + 1) {
    for(c2_em_i31 = 0; c2_em_i31 < 5; c2_em_i31 = c2_em_i31 + 1) {
      c2_b_AK[c2_em_i30][c2_em_i31] = ((c2_rou1 * c2_AK1[c2_em_i30][c2_em_i31] +
        c2_rou2 * c2_AK2[c2_em_i30][c2_em_i31]) + c2_rou3 *
        c2_AK3[c2_em_i30][c2_em_i31]) + c2_rou4 * c2_AK4[c2_em_i30][c2_em_i31];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,74);
  for(c2_em_i32 = 0; c2_em_i32 < 2; c2_em_i32 = c2_em_i32 + 1) {
    for(c2_em_i33 = 0; c2_em_i33 < 5; c2_em_i33 = c2_em_i33 + 1) {
      c2_b_BK[c2_em_i32][c2_em_i33] = ((c2_rou1 * c2_BK1[c2_em_i32][c2_em_i33] +
        c2_rou2 * c2_BK2[c2_em_i32][c2_em_i33]) + c2_rou3 *
        c2_BK3[c2_em_i32][c2_em_i33]) + c2_rou4 * c2_BK4[c2_em_i32][c2_em_i33];
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,75);
  for(c2_em_i34 = 0; c2_em_i34 < 5; c2_em_i34 = c2_em_i34 + 1) {
    c2_b_CK[c2_em_i34][0] = ((c2_rou1 * c2_CK1[c2_em_i34][0] + c2_rou2 *
      c2_CK2[c2_em_i34][0]) + c2_rou3 * c2_CK3[c2_em_i34][0]) +
      c2_rou4 * c2_CK4[c2_em_i34][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,76);
  for(c2_em_i35 = 0; c2_em_i35 < 2; c2_em_i35 = c2_em_i35 + 1) {
    c2_b_DK[c2_em_i35][0] = ((c2_rou1 * c2_DK1[c2_em_i35][0] + c2_rou2 *
      c2_DK2[c2_em_i35][0]) + c2_rou3 * c2_DK3[c2_em_i35][0]) +
      c2_rou4 * c2_DK4[c2_em_i35][0];
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,-76);
  sf_debug_pop_symbol_scope();
  for(c2_em_i36 = 0; c2_em_i36 < 5; c2_em_i36 = c2_em_i36 + 1) {
    for(c2_em_i37 = 0; c2_em_i37 < 5; c2_em_i37 = c2_em_i37 + 1) {
      c2_AK()[5 * c2_em_i36 + c2_em_i37] = c2_b_AK[c2_em_i36][c2_em_i37];
    }
  }
  for(c2_em_i38 = 0; c2_em_i38 < 2; c2_em_i38 = c2_em_i38 + 1) {
    for(c2_em_i39 = 0; c2_em_i39 < 5; c2_em_i39 = c2_em_i39 + 1) {
      c2_BK()[5 * c2_em_i38 + c2_em_i39] = c2_b_BK[c2_em_i38][c2_em_i39];
    }
  }
  for(c2_em_i40 = 0; c2_em_i40 < 5; c2_em_i40 = c2_em_i40 + 1) {
    c2_CK()[c2_em_i40] = c2_b_CK[c2_em_i40][0];
  }
  for(c2_em_i41 = 0; c2_em_i41 < 2; c2_em_i41 = c2_em_i41 + 1) {
    c2_DK()[c2_em_i41] = c2_b_DK[c2_em_i41][0];
  }
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency();
}

static real_T *c2_vr(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
}

static real_T *c2_AK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
}

static real_T *c2_theta(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
}

static real_T *c2_BK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 2);
}

static real_T *c2_CK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 3);
}

static real_T *c2_DK(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 4);
}

static void init_dsm_address_info(void)
{
}

static void sf_save_state_c2_FDIBenchMark_lyy_lpv(FILE *c2_file)
{
  fwrite(&chartInstance.c2_is_active_c2_FDIBenchMark_lyy_lpv, 1,
   sizeof(chartInstance.c2_is_active_c2_FDIBenchMark_lyy_lpv), c2_file);
}

static void sf_load_state_c2_FDIBenchMark_lyy_lpv(FILE *c2_file)
{
  fread(&chartInstance.c2_is_active_c2_FDIBenchMark_lyy_lpv, 1,
   sizeof(chartInstance.c2_is_active_c2_FDIBenchMark_lyy_lpv), c2_file);
}

/* SFunction Glue Code */
void sf_c2_FDIBenchMark_lyy_lpv_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(590480535U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1465856248U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2990132848U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2291440482U);
}

mxArray *sf_c2_FDIBenchMark_lyy_lpv_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(1744598203U);
    pr[1] = (double)(1790635811U);
    pr[2] = (double)(932856713U);
    pr[3] = (double)(321207828U);
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
    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(5);
      pr[1] = (double)(5);
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
      pr[0] = (double)(5);
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
      pr[0] = (double)(1);
      pr[1] = (double)(5);
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
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(2);
      mxSetField(mxData,3,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }
    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
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
          sf_debug_initialize_chart(_FDIBenchMark_lyy_lpvMachineNumber_,
         2,
         1,
         1,
         6,
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
          sf_debug_set_chart_disable_implicit_casting(_FDIBenchMark_lyy_lpvMachineNumber_,chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds(_FDIBenchMark_lyy_lpvMachineNumber_,
           chartInstance.chartNumber,
           0,
           0,
           0);

          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"vr",0);
          {
            unsigned int dimVector[2];
            dimVector[0]= 5;
            dimVector[1]= 5;
            _SFD_SET_DATA_PROPS(2,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"AK",0);
          }
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"theta",0);
          {
            unsigned int dimVector[2];
            dimVector[0]= 5;
            dimVector[1]= 2;
            _SFD_SET_DATA_PROPS(4,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"BK",0);
          }
          {
            unsigned int dimVector[2];
            dimVector[0]= 1;
            dimVector[1]= 5;
            _SFD_SET_DATA_PROPS(0,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"CK",0);
          }
          {
            unsigned int dimVector[2];
            dimVector[0]= 1;
            dimVector[1]= 2;
            _SFD_SET_DATA_PROPS(5,2,0,1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,1.0,0,"DK",0);
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,2628);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           1,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_SET_DATA_VALUE_PTR(3U, c2_vr());
        _SFD_SET_DATA_VALUE_PTR(2U, c2_AK());
        _SFD_SET_DATA_VALUE_PTR(1U, c2_theta());
        _SFD_SET_DATA_VALUE_PTR(4U, c2_BK());
        _SFD_SET_DATA_VALUE_PTR(0U, c2_CK());
        _SFD_SET_DATA_VALUE_PTR(5U, c2_DK());
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_FDIBenchMark_lyy_lpvMachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c2_FDIBenchMark_lyy_lpv(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S);
  initialize_params_c2_FDIBenchMark_lyy_lpv();
  initialize_c2_FDIBenchMark_lyy_lpv();
}

static void sf_opaque_enable_c2_FDIBenchMark_lyy_lpv(void *chartInstanceVar)
{
  enable_c2_FDIBenchMark_lyy_lpv();
}

static void sf_opaque_disable_c2_FDIBenchMark_lyy_lpv(void *chartInstanceVar)
{
  disable_c2_FDIBenchMark_lyy_lpv();
}

static void sf_opaque_gateway_c2_FDIBenchMark_lyy_lpv(void *chartInstanceVar)
{
  sf_c2_FDIBenchMark_lyy_lpv();
}

static void sf_opaque_terminate_c2_FDIBenchMark_lyy_lpv(void *chartInstanceVar)
{
  finalize_c2_FDIBenchMark_lyy_lpv();
}

static void mdlProcessParameters_c2_FDIBenchMark_lyy_lpv(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  initialize_params_c2_FDIBenchMark_lyy_lpv();
}

static void mdlSetWorkWidths_c2_FDIBenchMark_lyy_lpv(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("FDIBenchMark_lyy_lpv",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("FDIBenchMark_lyy_lpv",2,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"FDIBenchMark_lyy_lpv",2,2);
      sf_mark_chart_reusable_outputs(S,"FDIBenchMark_lyy_lpv",2,4);
    }
    if (!sf_is_chart_instance_optimized_out("FDIBenchMark_lyy_lpv",2)) {
      int dtId;
      char *chartInstanceTypedefName =
        sf_chart_instance_typedef_name("FDIBenchMark_lyy_lpv",2);
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

  ssSetChecksum0(S,(590480535U));
  ssSetChecksum1(S,(1465856248U));
  ssSetChecksum2(S,(2990132848U));
  ssSetChecksum3(S,(2291440482U));

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_FDIBenchMark_lyy_lpv(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "FDIBenchMark_lyy_lpv", 2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void
sf_save_debug_c2_FDIBenchMark_lyy_lpv(SFc2_FDIBenchMark_lyy_lpvInstanceStruct*
 chartInstance, FILE* file)
{
  int machineNumber = _FDIBenchMark_lyy_lpvMachineNumber_;
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
sf_load_debug_c2_FDIBenchMark_lyy_lpv(SFc2_FDIBenchMark_lyy_lpvInstanceStruct*
 chartInstance,FILE* file)
{
  int machineNumber = _FDIBenchMark_lyy_lpvMachineNumber_;
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
static void sf_c2_FDIBenchMark_lyy_lpv_sim_ctx_io(SimStruct* S, const char io,
 FILE* file)
{
  if(io == 'r') {
    sf_load_state_c2_FDIBenchMark_lyy_lpv(file);
    sf_load_debug_c2_FDIBenchMark_lyy_lpv(&chartInstance, file);
  } else {
    sf_save_state_c2_FDIBenchMark_lyy_lpv(file);
    sf_save_debug_c2_FDIBenchMark_lyy_lpv(&chartInstance, file);
  }
}
static void mdlStart_c2_FDIBenchMark_lyy_lpv(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.initializeChart =
    sf_opaque_initialize_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.terminateChart =
    sf_opaque_terminate_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.disableChart =
    sf_opaque_disable_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.mdlStart = mdlStart_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_FDIBenchMark_lyy_lpv;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */
  ssSetmdlSimulationContextIO(S, sf_c2_FDIBenchMark_lyy_lpv_sim_ctx_io);
  if(!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }
}

void c2_FDIBenchMark_lyy_lpv_method_dispatcher(SimStruct *S, int_T method, void
 *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_FDIBenchMark_lyy_lpv(S);
    break;
   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_FDIBenchMark_lyy_lpv(S);
    break;
   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_FDIBenchMark_lyy_lpv(S);
    break;
   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
     "Error calling c2_FDIBenchMark_lyy_lpv_method_dispatcher.\n"
     "Can't handle method %d.\n", method);
    break;
  }
}

