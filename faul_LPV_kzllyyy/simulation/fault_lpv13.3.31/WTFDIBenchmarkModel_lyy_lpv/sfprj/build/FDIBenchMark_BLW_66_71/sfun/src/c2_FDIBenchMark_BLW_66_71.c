/* Include files */
#include "FDIBenchMark_BLW_66_71_sfun.h"
#include "c2_FDIBenchMark_BLW_66_71.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "FDIBenchMark_BLW_66_71_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD           (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc2_FDIBenchMark_BLW_66_71InstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c2_FDIBenchMark_BLW_66_71(void);
static void initialize_params_c2_FDIBenchMark_BLW_66_71(void);
static void enable_c2_FDIBenchMark_BLW_66_71(void);
static void disable_c2_FDIBenchMark_BLW_66_71(void);
static void finalize_c2_FDIBenchMark_BLW_66_71(void);
static void sf_c2_FDIBenchMark_BLW_66_71(void);
static real_T *c2_P_g(void);
static real_T *c2_ControlZone(void);
static real_T *c2_P_r(void);
static real_T *c2_Omega_g(void);
static real_T *c2_LastControlZone(void);
static real_T *c2_Omega_nom(void);
static real_T *c2_Omega_delta(void);
static void init_dsm_address_info(void);
static void sf_save_state_c2_FDIBenchMark_BLW_66_71(FILE *c2_file);
static void sf_load_state_c2_FDIBenchMark_BLW_66_71(FILE *c2_file);

/* Function Definitions */
static void initialize_c2_FDIBenchMark_BLW_66_71(void)
{
  chartInstance.c2_is_active_c2_FDIBenchMark_BLW_66_71 = 0U;
}

static void initialize_params_c2_FDIBenchMark_BLW_66_71(void)
{
}

static void enable_c2_FDIBenchMark_BLW_66_71(void)
{
}

static void disable_c2_FDIBenchMark_BLW_66_71(void)
{
}

static void finalize_c2_FDIBenchMark_BLW_66_71(void)
{
}

static void sf_c2_FDIBenchMark_BLW_66_71(void)
{
  uint8_T c2_previousEvent;
  real_T c2_b_P_g;
  real_T c2_b_P_r;
  real_T c2_b_Omega_g;
  real_T c2_b_LastControlZone;
  real_T c2_b_Omega_nom;
  real_T c2_b_Omega_delta;
  real_T c2_b_ControlZone;
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_DATA_RANGE_CHECK(*c2_P_g(), 6U);
  _SFD_DATA_RANGE_CHECK(*c2_ControlZone(), 4U);
  _SFD_DATA_RANGE_CHECK(*c2_P_r(), 1U);
  _SFD_DATA_RANGE_CHECK(*c2_Omega_g(), 5U);
  _SFD_DATA_RANGE_CHECK(*c2_LastControlZone(), 0U);
  _SFD_DATA_RANGE_CHECK(*c2_Omega_nom(), 2U);
  _SFD_DATA_RANGE_CHECK(*c2_Omega_delta(), 3U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,1);
  c2_b_P_g = *c2_P_g();
  c2_b_P_r = *c2_P_r();
  c2_b_Omega_g = *c2_Omega_g();
  c2_b_LastControlZone = *c2_LastControlZone();
  c2_b_Omega_nom = *c2_Omega_nom();
  c2_b_Omega_delta = *c2_Omega_delta();
  sf_debug_push_symbol_scope(7U, 0U);
  sf_debug_symbol_scope_add_symbol("ControlZone", 0, 0U, 0U, 0U, 0U, 1.0, 0,
   0.0, 0U, 0, 0U, 0, &c2_b_ControlZone, 0);
  sf_debug_symbol_scope_add_symbol("Omega_delta", 0, 0U, 0U, 0U, 0U, 1.0, 0,
   0.0, 0U, 0, 0U, 0, &c2_b_Omega_delta, 0);
  sf_debug_symbol_scope_add_symbol("Omega_nom", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
   0U, 0, 0U, 0, &c2_b_Omega_nom, 0);
  sf_debug_symbol_scope_add_symbol("LastControlZone", 0, 0U, 0U, 0U, 0U, 1.0, 0,
   0.0, 0U, 0, 0U, 0, &c2_b_LastControlZone, 0);
  sf_debug_symbol_scope_add_symbol("Omega_g", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
   0U, 0, 0U, 0, &c2_b_Omega_g, 0);
  sf_debug_symbol_scope_add_symbol("P_r", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_P_r, 0);
  sf_debug_symbol_scope_add_symbol("P_g", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_P_g, 0);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,3);
  if(CV_EML_IF(0, 0, c2_b_LastControlZone == 0.0)) {
    _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,4);
    if(CV_EML_COND(0, 0, c2_b_P_g >= c2_b_P_r) || CV_EML_COND(0, 1, c2_b_Omega_g
      >= c2_b_Omega_nom)) {
      CV_EML_MCDC(0, 0, true);
      CV_EML_IF(0, 1, true);
      _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,5);
      c2_b_ControlZone = 1.0;
    } else {
      CV_EML_MCDC(0, 0, false);
      CV_EML_IF(0, 1, false);
      _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,7);
      c2_b_ControlZone = 0.0;
    }
  } else {
    _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,10);
    if(CV_EML_IF(0, 2, c2_b_Omega_g < c2_b_Omega_nom - c2_b_Omega_delta)) {
      _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,11);
      c2_b_ControlZone = 0.0;
    } else {
      _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,13);
      c2_b_ControlZone = 1.0;
    }
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,-13);
  sf_debug_pop_symbol_scope();
  *c2_ControlZone() = c2_b_ControlZone;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency();
}

static real_T *c2_P_g(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
}

static real_T *c2_ControlZone(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
}

static real_T *c2_P_r(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
}

static real_T *c2_Omega_g(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 2);
}

static real_T *c2_LastControlZone(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 3);
}

static real_T *c2_Omega_nom(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 4);
}

static real_T *c2_Omega_delta(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 5);
}

static void init_dsm_address_info(void)
{
}

static void sf_save_state_c2_FDIBenchMark_BLW_66_71(FILE *c2_file)
{
  fwrite(&chartInstance.c2_is_active_c2_FDIBenchMark_BLW_66_71, 1,
   sizeof(chartInstance.c2_is_active_c2_FDIBenchMark_BLW_66_71),
   c2_file);
}

static void sf_load_state_c2_FDIBenchMark_BLW_66_71(FILE *c2_file)
{
  fread(&chartInstance.c2_is_active_c2_FDIBenchMark_BLW_66_71, 1,
   sizeof(chartInstance.c2_is_active_c2_FDIBenchMark_BLW_66_71),
   c2_file);
}

/* SFunction Glue Code */
void sf_c2_FDIBenchMark_BLW_66_71_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3090306840U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3416156735U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2934429608U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(26674582U);
}

mxArray *sf_c2_FDIBenchMark_BLW_66_71_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(2368188717U);
    pr[1] = (double)(2900341231U);
    pr[2] = (double)(3920570731U);
    pr[3] = (double)(2713536654U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);
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
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
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
      pr[1] = (double)(1);
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
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
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
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,5,"type",mxType);
    }
    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }
  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,mxREAL));
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);
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
         2,
         1,
         1,
         7,
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

          _SFD_SET_DATA_PROPS(6,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"P_g",0);
          _SFD_SET_DATA_PROPS(4,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"ControlZone",0);
          _SFD_SET_DATA_PROPS(1,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"P_r",0);
          _SFD_SET_DATA_PROPS(5,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Omega_g",0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"LastControlZone",0);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Omega_nom",0);
          _SFD_SET_DATA_PROPS(3,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Omega_delta",0);
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
        _SFD_CV_INIT_EML(0,1,3,0,0,0,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,340);
        _SFD_CV_INIT_EML_IF(0,0,95,117,222,334);
        _SFD_CV_INIT_EML_IF(0,1,122,158,186,221);
        _SFD_CV_INIT_EML_IF(0,2,231,266,295,330);
        {
          static int condStart[] = {126,139};
          static int condEnd[] = {134,157};
          static int pfixExpr[] = {0,1,-2};
          _SFD_CV_INIT_EML_MCDC(0,0,126,157,2,0,&(condStart[0]),&(condEnd[0]),3,&(pfixExpr[0]));
        }
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           1,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_SET_DATA_VALUE_PTR(6U, c2_P_g());
        _SFD_SET_DATA_VALUE_PTR(4U, c2_ControlZone());
        _SFD_SET_DATA_VALUE_PTR(1U, c2_P_r());
        _SFD_SET_DATA_VALUE_PTR(5U, c2_Omega_g());
        _SFD_SET_DATA_VALUE_PTR(0U, c2_LastControlZone());
        _SFD_SET_DATA_VALUE_PTR(2U, c2_Omega_nom());
        _SFD_SET_DATA_VALUE_PTR(3U, c2_Omega_delta());
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_FDIBenchMark_BLW_66_71MachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c2_FDIBenchMark_BLW_66_71(void
 *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S);
  initialize_params_c2_FDIBenchMark_BLW_66_71();
  initialize_c2_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_enable_c2_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  enable_c2_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_disable_c2_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  disable_c2_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_gateway_c2_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  sf_c2_FDIBenchMark_BLW_66_71();
}

static void sf_opaque_terminate_c2_FDIBenchMark_BLW_66_71(void *chartInstanceVar)
{
  finalize_c2_FDIBenchMark_BLW_66_71();
}

static void mdlProcessParameters_c2_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  initialize_params_c2_FDIBenchMark_BLW_66_71();
}

static void mdlSetWorkWidths_c2_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("FDIBenchMark_BLW_66_71",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("FDIBenchMark_BLW_66_71",2,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"FDIBenchMark_BLW_66_71",2,6);
      sf_mark_chart_reusable_outputs(S,"FDIBenchMark_BLW_66_71",2,1);
    }
    if (!sf_is_chart_instance_optimized_out("FDIBenchMark_BLW_66_71",2)) {
      int dtId;
      char *chartInstanceTypedefName =
        sf_chart_instance_typedef_name("FDIBenchMark_BLW_66_71",2);
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

  ssSetChecksum0(S,(3090306840U));
  ssSetChecksum1(S,(3416156735U));
  ssSetChecksum2(S,(2934429608U));
  ssSetChecksum3(S,(26674582U));

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "FDIBenchMark_BLW_66_71", 2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void
sf_save_debug_c2_FDIBenchMark_BLW_66_71(SFc2_FDIBenchMark_BLW_66_71InstanceStruct*
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
sf_load_debug_c2_FDIBenchMark_BLW_66_71(SFc2_FDIBenchMark_BLW_66_71InstanceStruct*
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
static void sf_c2_FDIBenchMark_BLW_66_71_sim_ctx_io(SimStruct* S, const char io,
 FILE* file)
{
  if(io == 'r') {
    sf_load_state_c2_FDIBenchMark_BLW_66_71(file);
    sf_load_debug_c2_FDIBenchMark_BLW_66_71(&chartInstance, file);
  } else {
    sf_save_state_c2_FDIBenchMark_BLW_66_71(file);
    sf_save_debug_c2_FDIBenchMark_BLW_66_71(&chartInstance, file);
  }
}
static void mdlStart_c2_FDIBenchMark_BLW_66_71(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.initializeChart =
    sf_opaque_initialize_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.terminateChart =
    sf_opaque_terminate_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.enableChart =
    sf_opaque_enable_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.disableChart =
    sf_opaque_disable_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.mdlStart = mdlStart_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_FDIBenchMark_BLW_66_71;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */
  ssSetmdlSimulationContextIO(S, sf_c2_FDIBenchMark_BLW_66_71_sim_ctx_io);
  if(!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }
}

void c2_FDIBenchMark_BLW_66_71_method_dispatcher(SimStruct *S, int_T method,
 void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_FDIBenchMark_BLW_66_71(S);
    break;
   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_FDIBenchMark_BLW_66_71(S);
    break;
   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_FDIBenchMark_BLW_66_71(S);
    break;
   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
     "Error calling c2_FDIBenchMark_BLW_66_71_method_dispatcher.\n"
     "Can't handle method %d.\n", method);
    break;
  }
}

