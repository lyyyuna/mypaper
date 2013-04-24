/* Include files */

#include "blascompat32.h"
#include "BenchMark_sfun.h"
#include "c2_BenchMark.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "BenchMark_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const char *c2_debug_family_names[9] = { "nargin", "nargout", "P_g",
  "P_r", "Omega_g", "LastControlZone", "Omega_nom", "Omega_delta", "ControlZone"
};

/* Function Declarations */
static void initialize_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance);
static void initialize_params_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance);
static void enable_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance);
static void disable_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance);
static void c2_update_debugger_state_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance);
static void set_sim_state_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance, const mxArray *c2_st);
static void finalize_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance);
static void sf_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u);
static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u);
static real_T c2_emlrt_marshallIn(SFc2_BenchMarkInstanceStruct *chartInstance,
  const mxArray *c2_ControlZone, const char_T *c2_name);
static uint8_T c2_b_emlrt_marshallIn(SFc2_BenchMarkInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_BenchMark, const char_T *c2_name);
static void init_dsm_address_info(SFc2_BenchMarkInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c2_is_active_c2_BenchMark = 0U;
}

static void initialize_params_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance)
{
}

static void enable_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c2_update_debugger_state_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance)
{
}

static const mxArray *get_sim_state_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance)
{
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  real_T c2_hoistedGlobal;
  real_T c2_u;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_b_hoistedGlobal;
  uint8_T c2_b_u;
  const mxArray *c2_c_y = NULL;
  real_T *c2_ControlZone;
  c2_ControlZone = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellarray(2));
  c2_hoistedGlobal = *c2_ControlZone;
  c2_u = c2_hoistedGlobal;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_b_hoistedGlobal = chartInstance->c2_is_active_c2_BenchMark;
  c2_b_u = c2_b_hoistedGlobal;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_b_u, 3, 0U, 0U, 0U, 0));
  sf_mex_setcell(c2_y, 1, c2_c_y);
  sf_mex_assign(&c2_st, c2_y);
  return c2_st;
}

static void set_sim_state_c2_BenchMark(SFc2_BenchMarkInstanceStruct
  *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T *c2_ControlZone;
  c2_ControlZone = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c2_doneDoubleBufferReInit = TRUE;
  c2_u = sf_mex_dup(c2_st);
  *c2_ControlZone = c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 0)), "ControlZone");
  chartInstance->c2_is_active_c2_BenchMark = c2_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 1)),
    "is_active_c2_BenchMark");
  sf_mex_destroy(&c2_u);
  c2_update_debugger_state_c2_BenchMark(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance)
{
}

static void sf_c2_BenchMark(SFc2_BenchMarkInstanceStruct *chartInstance)
{
  int32_T c2_previousEvent;
  real_T c2_hoistedGlobal;
  real_T c2_b_hoistedGlobal;
  real_T c2_c_hoistedGlobal;
  real_T c2_d_hoistedGlobal;
  real_T c2_e_hoistedGlobal;
  real_T c2_f_hoistedGlobal;
  real_T c2_P_g;
  real_T c2_P_r;
  real_T c2_Omega_g;
  real_T c2_LastControlZone;
  real_T c2_Omega_nom;
  real_T c2_Omega_delta;
  uint32_T c2_debug_family_var_map[9];
  real_T c2_nargin = 6.0;
  real_T c2_nargout = 1.0;
  real_T c2_ControlZone;
  real_T *c2_b_P_g;
  real_T *c2_b_ControlZone;
  real_T *c2_b_P_r;
  real_T *c2_b_Omega_g;
  real_T *c2_b_LastControlZone;
  real_T *c2_b_Omega_nom;
  real_T *c2_b_Omega_delta;
  c2_b_Omega_delta = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
  c2_b_Omega_nom = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
  c2_b_LastControlZone = (real_T *)ssGetInputPortSignal(chartInstance->S, 3);
  c2_b_Omega_g = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
  c2_b_P_r = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
  c2_b_ControlZone = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c2_b_P_g = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK(*c2_b_P_g, 0U);
  _SFD_DATA_RANGE_CHECK(*c2_b_ControlZone, 1U);
  _SFD_DATA_RANGE_CHECK(*c2_b_P_r, 2U);
  _SFD_DATA_RANGE_CHECK(*c2_b_Omega_g, 3U);
  _SFD_DATA_RANGE_CHECK(*c2_b_LastControlZone, 4U);
  _SFD_DATA_RANGE_CHECK(*c2_b_Omega_nom, 5U);
  _SFD_DATA_RANGE_CHECK(*c2_b_Omega_delta, 6U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c2_hoistedGlobal = *c2_b_P_g;
  c2_b_hoistedGlobal = *c2_b_P_r;
  c2_c_hoistedGlobal = *c2_b_Omega_g;
  c2_d_hoistedGlobal = *c2_b_LastControlZone;
  c2_e_hoistedGlobal = *c2_b_Omega_nom;
  c2_f_hoistedGlobal = *c2_b_Omega_delta;
  c2_P_g = c2_hoistedGlobal;
  c2_P_r = c2_b_hoistedGlobal;
  c2_Omega_g = c2_c_hoistedGlobal;
  c2_LastControlZone = c2_d_hoistedGlobal;
  c2_Omega_nom = c2_e_hoistedGlobal;
  c2_Omega_delta = c2_f_hoistedGlobal;
  sf_debug_symbol_scope_push_eml(0U, 9U, 9U, c2_debug_family_names,
    c2_debug_family_var_map);
  sf_debug_symbol_scope_add_eml(&c2_nargin, c2_sf_marshall, 0U);
  sf_debug_symbol_scope_add_eml(&c2_nargout, c2_sf_marshall, 1U);
  sf_debug_symbol_scope_add_eml(&c2_P_g, c2_sf_marshall, 2U);
  sf_debug_symbol_scope_add_eml(&c2_P_r, c2_sf_marshall, 3U);
  sf_debug_symbol_scope_add_eml(&c2_Omega_g, c2_sf_marshall, 4U);
  sf_debug_symbol_scope_add_eml(&c2_LastControlZone, c2_sf_marshall, 5U);
  sf_debug_symbol_scope_add_eml(&c2_Omega_nom, c2_sf_marshall, 6U);
  sf_debug_symbol_scope_add_eml(&c2_Omega_delta, c2_sf_marshall, 7U);
  sf_debug_symbol_scope_add_eml(&c2_ControlZone, c2_sf_marshall, 8U);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0,3);
  if (CV_EML_IF(0, 0, c2_LastControlZone == 0.0)) {
    _SFD_EML_CALL(0,4);
    if (CV_EML_COND(0, 0, c2_P_g >= c2_P_r)) {
    } else if (CV_EML_COND(0, 1, c2_Omega_g >= c2_Omega_nom)) {
    } else {
      CV_EML_MCDC(0, 0, FALSE);
      CV_EML_IF(0, 1, FALSE);
      _SFD_EML_CALL(0,7);
      c2_ControlZone = 0.0;
      goto label_1;
    }

    CV_EML_MCDC(0, 0, TRUE);
    CV_EML_IF(0, 1, TRUE);
    _SFD_EML_CALL(0,5);
    c2_ControlZone = 1.0;
   label_1:
    ;
  } else {
    _SFD_EML_CALL(0,10);
    if (CV_EML_IF(0, 2, c2_Omega_g < c2_Omega_nom - c2_Omega_delta)) {
      _SFD_EML_CALL(0,11);
      c2_ControlZone = 0.0;
    } else {
      _SFD_EML_CALL(0,13);
      c2_ControlZone = 1.0;
    }
  }

  _SFD_EML_CALL(0,-13);
  sf_debug_symbol_scope_pop();
  *c2_b_ControlZone = c2_ControlZone;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_BenchMarkMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

static const mxArray *c2_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  real_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BenchMarkInstanceStruct *chartInstance;
  chartInstance = (SFc2_BenchMarkInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((real_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 0, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

const mxArray *sf_c2_BenchMark_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_ResolvedFunctionInfo c2_info[4];
  c2_ResolvedFunctionInfo (*c2_b_info)[4];
  const mxArray *c2_m0 = NULL;
  int32_T c2_i0;
  c2_ResolvedFunctionInfo *c2_r0;
  c2_nameCaptureInfo = NULL;
  c2_b_info = (c2_ResolvedFunctionInfo (*)[4])c2_info;
  (*c2_b_info)[0].context = "";
  (*c2_b_info)[0].name = "eq";
  (*c2_b_info)[0].dominantType = "double";
  (*c2_b_info)[0].resolved = "[B]eq";
  (*c2_b_info)[0].fileLength = 0U;
  (*c2_b_info)[0].fileTime1 = 0U;
  (*c2_b_info)[0].fileTime2 = 0U;
  (*c2_b_info)[1].context = "";
  (*c2_b_info)[1].name = "ge";
  (*c2_b_info)[1].dominantType = "double";
  (*c2_b_info)[1].resolved = "[B]ge";
  (*c2_b_info)[1].fileLength = 0U;
  (*c2_b_info)[1].fileTime1 = 0U;
  (*c2_b_info)[1].fileTime2 = 0U;
  (*c2_b_info)[2].context = "";
  (*c2_b_info)[2].name = "minus";
  (*c2_b_info)[2].dominantType = "double";
  (*c2_b_info)[2].resolved = "[B]minus";
  (*c2_b_info)[2].fileLength = 0U;
  (*c2_b_info)[2].fileTime1 = 0U;
  (*c2_b_info)[2].fileTime2 = 0U;
  (*c2_b_info)[3].context = "";
  (*c2_b_info)[3].name = "lt";
  (*c2_b_info)[3].dominantType = "double";
  (*c2_b_info)[3].resolved = "[B]lt";
  (*c2_b_info)[3].fileLength = 0U;
  (*c2_b_info)[3].fileTime1 = 0U;
  (*c2_b_info)[3].fileTime2 = 0U;
  sf_mex_assign(&c2_m0, sf_mex_createstruct("nameCaptureInfo", 1, 4));
  for (c2_i0 = 0; c2_i0 < 4; c2_i0 = c2_i0 + 1) {
    c2_r0 = &c2_info[c2_i0];
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->context, 15,
      0U, 0U, 0U, 2, 1, strlen(c2_r0->context)), "context",
                    "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->name, 15, 0U,
      0U, 0U, 2, 1, strlen(c2_r0->name)), "name",
                    "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->dominantType,
      15, 0U, 0U, 0U, 2, 1, strlen(c2_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", c2_r0->resolved, 15,
      0U, 0U, 0U, 2, 1, strlen(c2_r0->resolved)), "resolved"
                    , "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileLength,
      7, 0U, 0U, 0U, 0), "fileLength", "nameCaptureInfo",
                    c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileTime1, 7,
      0U, 0U, 0U, 0), "fileTime1", "nameCaptureInfo", c2_i0);
    sf_mex_addfield(c2_m0, sf_mex_create("nameCaptureInfo", &c2_r0->fileTime2, 7,
      0U, 0U, 0U, 0), "fileTime2", "nameCaptureInfo", c2_i0);
  }

  sf_mex_assign(&c2_nameCaptureInfo, c2_m0);
  return c2_nameCaptureInfo;
}

static const mxArray *c2_b_sf_marshall(void *chartInstanceVoid, void *c2_u)
{
  const mxArray *c2_y = NULL;
  boolean_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  SFc2_BenchMarkInstanceStruct *chartInstance;
  chartInstance = (SFc2_BenchMarkInstanceStruct *)chartInstanceVoid;
  c2_y = NULL;
  c2_b_u = *((boolean_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", &c2_b_u, 11, 0U, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

static real_T c2_emlrt_marshallIn(SFc2_BenchMarkInstanceStruct *chartInstance,
  const mxArray *c2_ControlZone, const char_T *c2_name)
{
  real_T c2_y;
  real_T c2_d0;
  sf_mex_import(c2_name, sf_mex_dup(c2_ControlZone), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d0;
  sf_mex_destroy(&c2_ControlZone);
  return c2_y;
}

static uint8_T c2_b_emlrt_marshallIn(SFc2_BenchMarkInstanceStruct *chartInstance,
  const mxArray *c2_b_is_active_c2_BenchMark, const
  char_T *c2_name)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  sf_mex_import(c2_name, sf_mex_dup(c2_b_is_active_c2_BenchMark), &c2_u0, 1, 3,
                0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_b_is_active_c2_BenchMark);
  return c2_y;
}

static void init_dsm_address_info(SFc2_BenchMarkInstanceStruct *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c2_BenchMark_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(422186107U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1260960335U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1928025138U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4047902893U);
}

mxArray *sf_c2_BenchMark_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2499212502U);
    pr[1] = (double)(2813077928U);
    pr[2] = (double)(3565880461U);
    pr[3] = (double)(2289159239U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static mxArray *sf_get_sim_state_info_c2_BenchMark(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"ControlZone\",},{M[8],M[0],T\"is_active_c2_BenchMark\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_BenchMark_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_BenchMarkInstanceStruct *chartInstance;
    chartInstance = (SFc2_BenchMarkInstanceStruct *) ((ChartInfoStruct *)
      (ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart(_BenchMarkMachineNumber_,
          2,
          1,
          1,
          7,
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
          init_script_number_translation(_BenchMarkMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_BenchMarkMachineNumber_,
            chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(_BenchMarkMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"P_g",0,
                              (MexFcnForType)c2_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "ControlZone",0,(MexFcnForType)c2_sf_marshall);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"P_r",0,
                              (MexFcnForType)c2_sf_marshall);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Omega_g",
                              0,(MexFcnForType)c2_sf_marshall);
          _SFD_SET_DATA_PROPS(4,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "LastControlZone",0,(MexFcnForType)c2_sf_marshall);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Omega_nom",0,(MexFcnForType)c2_sf_marshall);
          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,
                              "Omega_delta",0,(MexFcnForType)c2_sf_marshall);
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
        _SFD_CV_INIT_EML(0,1,3,0,0,0,0,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,341);
        _SFD_CV_INIT_EML_IF(0,0,95,116,223,335);
        _SFD_CV_INIT_EML_IF(0,1,122,159,187,222);
        _SFD_CV_INIT_EML_IF(0,2,232,268,296,331);

        {
          static int condStart[] = { 126, 140 };

          static int condEnd[] = { 134, 158 };

          static int pfixExpr[] = { 0, 1, -2 };

          _SFD_CV_INIT_EML_MCDC(0,0,125,159,2,0,&(condStart[0]),&(condEnd[0]),3,
                                &(pfixExpr[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c2_P_g;
          real_T *c2_ControlZone;
          real_T *c2_P_r;
          real_T *c2_Omega_g;
          real_T *c2_LastControlZone;
          real_T *c2_Omega_nom;
          real_T *c2_Omega_delta;
          c2_Omega_delta = (real_T *)ssGetInputPortSignal(chartInstance->S, 5);
          c2_Omega_nom = (real_T *)ssGetInputPortSignal(chartInstance->S, 4);
          c2_LastControlZone = (real_T *)ssGetInputPortSignal(chartInstance->S,
            3);
          c2_Omega_g = (real_T *)ssGetInputPortSignal(chartInstance->S, 2);
          c2_P_r = (real_T *)ssGetInputPortSignal(chartInstance->S, 1);
          c2_ControlZone = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          c2_P_g = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_P_g);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_ControlZone);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_P_r);
          _SFD_SET_DATA_VALUE_PTR(3U, c2_Omega_g);
          _SFD_SET_DATA_VALUE_PTR(4U, c2_LastControlZone);
          _SFD_SET_DATA_VALUE_PTR(5U, c2_Omega_nom);
          _SFD_SET_DATA_VALUE_PTR(6U, c2_Omega_delta);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(_BenchMarkMachineNumber_,
        chartInstance->chartNumber,chartInstance->instanceNumber);
    }
  }
}

static void sf_opaque_initialize_c2_BenchMark(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_BenchMarkInstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c2_BenchMark((SFc2_BenchMarkInstanceStruct*)
    chartInstanceVar);
  initialize_c2_BenchMark((SFc2_BenchMarkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_BenchMark(void *chartInstanceVar)
{
  enable_c2_BenchMark((SFc2_BenchMarkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_BenchMark(void *chartInstanceVar)
{
  disable_c2_BenchMark((SFc2_BenchMarkInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_BenchMark(void *chartInstanceVar)
{
  sf_c2_BenchMark((SFc2_BenchMarkInstanceStruct*) chartInstanceVar);
}

static mxArray* sf_internal_get_sim_state_c2_BenchMark(SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c2_BenchMark((SFc2_BenchMarkInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
  prhs[3] = sf_get_sim_state_info_c2_BenchMark();/* state var info */
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

static void sf_internal_set_sim_state_c2_BenchMark(SimStruct* S, const mxArray
  *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c2_BenchMark();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c2_BenchMark((SFc2_BenchMarkInstanceStruct*)
    chartInfo->chartInstance, mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static mxArray* sf_opaque_get_sim_state_c2_BenchMark(SimStruct* S)
{
  return sf_internal_get_sim_state_c2_BenchMark(S);
}

static void sf_opaque_set_sim_state_c2_BenchMark(SimStruct* S, const mxArray *st)
{
  sf_internal_set_sim_state_c2_BenchMark(S, st);
}

static void sf_opaque_terminate_c2_BenchMark(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_BenchMarkInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c2_BenchMark((SFc2_BenchMarkInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_BenchMark(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_BenchMark((SFc2_BenchMarkInstanceStruct*)
      (((ChartInfoStruct *)ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c2_BenchMark(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("BenchMark","BenchMark",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("BenchMark","BenchMark",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("BenchMark","BenchMark",2,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"BenchMark","BenchMark",2,6);
      sf_mark_chart_reusable_outputs(S,"BenchMark","BenchMark",2,1);
    }

    sf_set_rtw_dwork_info(S,"BenchMark","BenchMark",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2258503651U));
  ssSetChecksum1(S,(833553220U));
  ssSetChecksum2(S,(2729334786U));
  ssSetChecksum3(S,(3048831881U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_BenchMark(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "BenchMark", "BenchMark",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_BenchMark(SimStruct *S)
{
  SFc2_BenchMarkInstanceStruct *chartInstance;
  chartInstance = (SFc2_BenchMarkInstanceStruct *)malloc(sizeof
    (SFc2_BenchMarkInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc2_BenchMarkInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_BenchMark;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_BenchMark;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c2_BenchMark;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_BenchMark;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_BenchMark;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_BenchMark;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_BenchMark;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_BenchMark;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_BenchMark;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_BenchMark;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_BenchMark;
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

void c2_BenchMark_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_BenchMark(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_BenchMark(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_BenchMark(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_BenchMark_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
