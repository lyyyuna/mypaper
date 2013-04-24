#if 0

This file is not available for use in any application other than as a
  MATLAB(R) MEX file for use with the Simulink(R) Accelerator product.
  If you do not have the Real-Time Workshop licensed, this file contains
  encrypted block names, etc. If you purchase the Real-Time Workshop,
  this file will contain full block descriptions and improved variable
  names.
#endif

/*
 * FDIBenchMark_acc.c
 *
 * Real-Time Workshop code generation for Simulink model "FDIBenchMark_acc.mdl".
 *
 * Model Version              : 1.113
 * Real-Time Workshop version : 7.0  (R2007b)  02-Aug-2007
 * C source code generated on : Tue Jun 29 16:44:11 2010
 */
#include <math.h>
#include "FDIBenchMark_acc.h"
#include "FDIBenchMark_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat                     S-Function
#define AccDefine1                     Accelerator_S-Function

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  /* local block i/o variables */
  real_T B_19_4_0[3];
  real_T B_19_68_0[2];
  real_T B_19_85_0;
  real_T B_19_173_0;
  real_T B_19_193_0[2];
  real_T B_19_25_0;
  real_T B_19_26_0;
  real_T B_19_28_0;
  real_T B_19_82_0[2];
  real_T B_19_87_0;
  real_T B_19_148_0;
  real_T B_19_187_0[2];
  real_T B_19_239_0;
  real_T B_19_257_0;
  real_T B_19_250_0;

  /* register function-calls */
  if (ssIsFirstInitCond(S)) {
    SimStruct *childS;
    SysOutputFcn *callSysFcns;

    /* Level2 S-Function Block: '<S15>/B_7_0' (stateflow) */
    childS = ssGetSFunction(S, 0);
    callSysFcns = ssGetCallSystemOutputFcnList(childS);

    /* Unconnected function-call */
    callSysFcns[3 + 0] = (SysOutputFcn) NULL;
  }

  {
    real_T B_19_184_0_idx;
    real_T B_19_184_0_idx_0;
    real_T B_19_186_0_idx;
    real_T B_19_186_0_idx_0;

    /* TransferFcn Block: '<S4>/B_19_0' */
    ((BlockIO *) _ssGetBlockIO(S))->B_19_0_0 = ((Parameters *) ssGetDefaultParam
      (S))->P_2*((ContinuousStates *) ssGetContStates(S))->TransferFcn_CSTATE;

    /* FromWorkspace: '<Root>/From Workspace7' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 1, SS_CALL_MDL_OUTPUTS);
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch_Mode = (((BlockIO *) _ssGetBlockIO
        (S))->B_19_1_0 >= ((Parameters *) ssGetDefaultParam(S))->P_5);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch_Mode == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_3_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_0_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_12_0_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_0_0 + ((Parameters *) ssGetDefaultParam(S))->P_158;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_3_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_12_0_0;
    }

    /* Integrator: '<S3>/Integrator' */
    B_19_4_0[0] = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE[0];
    B_19_4_0[1] = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE[1];
    B_19_4_0[2] = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE[2];

    /* Gain Block: '<S3>/Gain2'
     * About '<S3>/Gain2 :'
     *   Gain value: Cddt


     */
    {
      static const int_T dims[3] = { 2, 3, 1 };

      rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_19_5_0,
                       (real_T *)&((Parameters *) ssGetDefaultParam(S))->P_7[0],
                       (real_T *)B_19_4_0, &dims[0]);
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_7_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_3_0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_5_0[1] * ((Parameters *)
      ssGetDefaultParam(S))->P_8;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 8, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope1' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 9, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S19>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_10_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput;
    }

    /* FromWorkspace: '<Root>/From Workspace3' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 11, SS_CALL_MDL_OUTPUTS);
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_12_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_12;
    }

    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch_Mode_o = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_11_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_13);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch_Mode_o == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_15_0_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_10_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_5_0[0];
      ((BlockIO *) _ssGetBlockIO(S))->B_19_14_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_15_0_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_14_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_12_0;
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope10' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 15, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S19>/Random Number1' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_16_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_b;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_17_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_5_0[0] + ((BlockIO *) _ssGetBlockIO(S))->B_19_16_0;

    /* FromWorkspace: '<Root>/From Workspace4' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 18, SS_CALL_MDL_OUTPUTS);
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch1_Mode = (((BlockIO *) _ssGetBlockIO
        (S))->B_19_18_0 >= ((Parameters *) ssGetDefaultParam(S))->P_17);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch1_Mode == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_20_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_17_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_14_0_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_160 * ((BlockIO *) _ssGetBlockIO(S))->B_19_17_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_20_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_14_0_0;
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope11' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 21, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S18>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_22_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_p;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_23_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_22_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_5_0[1];
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope12' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 24, SS_CALL_MDL_OUTPUTS);
    }

    /* Integrator: '<S40>/Integrator' */
    B_19_25_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE_g;

    /* Integrator: '<S34>/Integrator' */
    B_19_26_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE_k;

    /* FromWorkspace: '<Root>/From Workspace9' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 27, SS_CALL_MDL_OUTPUTS);
    B_19_28_0 = (B_19_25_0 + B_19_26_0) + ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_27_0;
    if (ssIsSampleHit(S, 2, 0)) {
      /* RandomNumber: '<S25>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_29_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_k;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_30_0 = B_19_28_0 + ((BlockIO *)
      _ssGetBlockIO(S))->B_19_29_0;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope13' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 31, SS_CALL_MDL_OUTPUTS);
      ((BlockIO *) _ssGetBlockIO(S))->B_19_32_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_23_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_33_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_26;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_35_0 = 1.0 / ((BlockIO *)
        _ssGetBlockIO(S))->B_19_32_0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_33_0
        * ((Parameters *) ssGetDefaultParam(S))->P_27;

      /* RandomNumber: '<S20>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_36_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_h;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_37_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_7_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_36_0;
    if (ssIsSampleHit(S, 2, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_38_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_37_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_39_0 = ((D_Work *) ssGetRootDWork(S)
        )->UnitDelay_DSTATE;
    }

    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_40_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_32;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_41_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_33;

      /* Level2 S-Function Block: '<S15>/B_7_0' (stateflow) */
      /* Call into Simulink for MEX-version of S-function */
      ssCallAccelRunBlock(S, 7, 0, SS_CALL_MDL_OUTPUTS);
    }

    if (ssIsSampleHit(S, 2, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_44_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_32_0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_32_0 * ((Parameters *)
        ssGetDefaultParam(S))->P_34;
    }

    if (ssIsSampleHit(S, 1, 0)) {
      if (((BlockIO *) _ssGetBlockIO(S))->B_7_0_1 >= ((Parameters *)
           ssGetDefaultParam(S))->P_35) {
        ((BlockIO *) _ssGetBlockIO(S))->B_19_45_0 = ((BlockIO *) _ssGetBlockIO(S))
          ->B_19_35_0;
      } else {
        ((BlockIO *) _ssGetBlockIO(S))->B_19_45_0 = ((BlockIO *) _ssGetBlockIO(S))
          ->B_19_44_0;
      }
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope14' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 46, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S18>/Random Number1' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_47_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_hp;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_48_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_5_0[1] + ((BlockIO *) _ssGetBlockIO(S))->B_19_47_0;
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch1_Mode_p = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_18_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_39);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch1_Mode_p == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_50_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_48_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_13_0_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_159 * ((BlockIO *) _ssGetBlockIO(S))->B_19_48_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_50_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_13_0_0;
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope15' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 51, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S24>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_52_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_o;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_53_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_3_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_52_0;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope16' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 54, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope17' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 55, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S21>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_56_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_m;
    }

    /* TransferFcn Block: '<S9>/B_19_32' */
    ((BlockIO *) _ssGetBlockIO(S))->B_19_57_0 = ((Parameters *)
      ssGetDefaultParam(S))->P_48*((ContinuousStates *) ssGetContStates(S))
      ->TransferFcn_CSTATE_h[1];

    /* FromWorkspace: '<Root>/From Workspace' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 58, SS_CALL_MDL_OUTPUTS);
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_59_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_51;
    }

    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch_Mode_h = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_58_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_52);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch_Mode_h == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_16_0_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_56_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_57_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_61_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_16_0_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_61_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_59_0;
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope18' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 62, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S21>/Random Number1' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_63_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_i;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_64_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_57_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_63_0;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope19' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 65, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope2' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 66, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S22>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_67_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_c;
    }

    /* Integrator: '<S10>/Integrator' */
    B_19_68_0[0] = ((ContinuousStates *) ssGetContStates(S))
      ->Integrator_CSTATE_e[0];
    B_19_68_0[1] = ((ContinuousStates *) ssGetContStates(S))
      ->Integrator_CSTATE_e[1];

    /* FromWorkspace: '<Root>/From Workspace5' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 69, SS_CALL_MDL_OUTPUTS);
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch3_Mode = (((BlockIO *) _ssGetBlockIO
        (S))->B_19_69_0 >= ((Parameters *) ssGetDefaultParam(S))->P_60);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch3_Mode == 1) {
      /* Gain Block: '<S10>/Gain2'
       * About '<S10>/Gain2 :'
       *   Gain value: Cpb


       */
      {
        static const int_T dims[3] = { 1, 2, 1 };

        rt_MatMultRR_Dbl((real_T *)&((BlockIO *) _ssGetBlockIO(S))->B_1_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_148[0],
                         (real_T *)B_19_68_0, &dims[0]);
      }

      ((BlockIO *) _ssGetBlockIO(S))->B_19_72_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_1_0_0;
    } else {
      /* Gain Block: '<S10>/Gain5'
       * About '<S10>/Gain5 :'
       *   Gain value: Cpb1


       */
      {
        static const int_T dims[3] = { 1, 2, 1 };

        rt_MatMultRR_Dbl((real_T *)&((BlockIO *) _ssGetBlockIO(S))->B_0_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_147[0],
                         (real_T *)B_19_68_0, &dims[0]);
      }

      ((BlockIO *) _ssGetBlockIO(S))->B_19_72_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_0_0_0;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_73_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_67_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_72_0;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope20' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 74, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S22>/Random Number1' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_75_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_ix;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_76_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_72_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_75_0;

    /* FromWorkspace: '<Root>/From Workspace1' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 77, SS_CALL_MDL_OUTPUTS);
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch_Mode_e = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_77_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_64);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch_Mode_e == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_79_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_76_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_17_0_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_161 * ((BlockIO *) _ssGetBlockIO(S))->B_19_76_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_79_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_17_0_0;
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope21' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 80, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S23>/Random Number' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_81_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_e;
    }

    /* Integrator: '<S11>/Integrator' */
    B_19_82_0[0] = ((ContinuousStates *) ssGetContStates(S))
      ->Integrator_CSTATE_c[0];
    B_19_82_0[1] = ((ContinuousStates *) ssGetContStates(S))
      ->Integrator_CSTATE_c[1];

    /* Gain Block: '<S11>/Gain2'
     * About '<S11>/Gain2 :'
     *   Gain value: Cpb


     */
    {
      static const int_T dims[3] = { 1, 2, 1 };

      rt_MatMultRR_Dbl((real_T *)&B_19_87_0, (real_T *)&((Parameters *)
        ssGetDefaultParam(S))->P_69[0],
                       (real_T *)B_19_82_0, &dims[0]);
    }

    /* FromWorkspace: '<Root>/From Workspace6' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 84, SS_CALL_MDL_OUTPUTS);
    B_19_85_0 = B_19_87_0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_84_0;
    B_19_87_0 = ((Parameters *) ssGetDefaultParam(S))->P_70 * ((BlockIO *)
      _ssGetBlockIO(S))->B_19_84_0 + ((Parameters *) ssGetDefaultParam(S))->P_71;

    /* Gain Block: '<S11>/Gain5'
     * About '<S11>/Gain5 :'
     *   Gain value: Cpb2


     */
    {
      static const int_T dims[3] = { 1, 2, 1 };

      rt_MatMultRR_Dbl((real_T *)&B_19_148_0, (real_T *)&((Parameters *)
        ssGetDefaultParam(S))->P_72[0],
                       (real_T *)B_19_82_0, &dims[0]);
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_90_0 = B_19_87_0 * B_19_148_0 +
      B_19_85_0;

    /* FromWorkspace: '<Root>/From Workspace2' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 91, SS_CALL_MDL_OUTPUTS);
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_92_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_73;
    }

    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch_Mode_ec = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_91_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_74);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch_Mode_ec == 1) {
      ((BlockIO *) _ssGetBlockIO(S))->B_18_0_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_81_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_90_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_94_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_18_0_0;
    } else {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_94_0 = ((BlockIO *) _ssGetBlockIO(S)
        )->B_19_92_0;
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope22' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 95, SS_CALL_MDL_OUTPUTS);

      /* RandomNumber: '<S23>/Random Number1' */
      ((BlockIO *) _ssGetBlockIO(S))->B_19_96_0 = ((D_Work *) ssGetRootDWork(S)
        )->NextOutput_f;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_97_0 = ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_90_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_96_0;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope23' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 98, SS_CALL_MDL_OUTPUTS);
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_101_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_57_0 - (((BlockIO *) _ssGetBlockIO(S))->B_19_61_0 + ((BlockIO *)
      _ssGetBlockIO(S))->B_19_64_0) * ((Parameters *) ssGetDefaultParam(S))
      ->P_78;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope24' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 102, SS_CALL_MDL_OUTPUTS);
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_105_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_72_0 - (((BlockIO *) _ssGetBlockIO(S))->B_19_73_0 + ((BlockIO *)
      _ssGetBlockIO(S))->B_19_79_0) * ((Parameters *) ssGetDefaultParam(S))
      ->P_79;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope25' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 106, SS_CALL_MDL_OUTPUTS);
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_109_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_90_0 - (((BlockIO *) _ssGetBlockIO(S))->B_19_94_0 + ((BlockIO *)
      _ssGetBlockIO(S))->B_19_97_0) * ((Parameters *) ssGetDefaultParam(S))
      ->P_80;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope26' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 110, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope3' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 111, SS_CALL_MDL_OUTPUTS);
    }

    /* Integrator: '<S6>/Integrator' */
    B_19_148_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE_d;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_113_0 = B_19_148_0 -
      muDoubleScalarFloor(B_19_148_0 / 6.2831853071795862E+000) * 2.0 *
      3.1415926535897931;
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Saturation2_MODE = ((BlockIO *)
        _ssGetBlockIO(S))->B_19_113_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_82 ? 1 : ((BlockIO *) _ssGetBlockIO(S))->B_19_113_0 > ((Parameters *)
        ssGetDefaultParam(S))->P_83 ? 0 : -1;
    }

    B_19_239_0 = ((D_Work *) ssGetRootDWork(S))->Saturation2_MODE == 1 ?
      ((Parameters *) ssGetDefaultParam(S))->P_82 : ((D_Work *) ssGetRootDWork(S))
      ->Saturation2_MODE == -1 ? ((Parameters *) ssGetDefaultParam(S))->P_83 :
      ((BlockIO *) _ssGetBlockIO(S))->B_19_113_0;
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[0] = ((Parameters *)
        ssGetDefaultParam(S))->P_84[0];
      ((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[1] = ((Parameters *)
        ssGetDefaultParam(S))->P_84[1];
      ((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[2] = ((Parameters *)
        ssGetDefaultParam(S))->P_84[2];
    }

    B_19_239_0 = (muDoubleScalarPower(2.2000000000000002, 2.0) * 2.0 *
                  (muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[0], 2.0) - muDoubleScalarPower(1.5, 2.0)) /
                  ((muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[0], 2.0) + muDoubleScalarPower(1.5, 2.0)) *
                   muDoubleScalarPower(muDoubleScalarSin(B_19_239_0), 2.0) + 2.0
                   * muDoubleScalarPower(4.7000000000000002, 2.0)) + 2.0 *
                  muDoubleScalarPower(2.2000000000000002, 2.0) *
                  muDoubleScalarPower(4.7000000000000002, 2.0) *
                  (muDoubleScalarPower(1.5, 2.0) - muDoubleScalarPower(((BlockIO
      *) _ssGetBlockIO(S))->B_19_115_0[0], 2.0)) / ((muDoubleScalarPower
      (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[0], 2.0) * muDoubleScalarPower
                    (muDoubleScalarSin(B_19_239_0), 2.0) + muDoubleScalarPower
      (4.7000000000000002, 2.0)) * (muDoubleScalarPower(1.5, 2.0) *
      muDoubleScalarPower(muDoubleScalarSin(B_19_239_0), 2.0) +
      muDoubleScalarPower(4.7000000000000002, 2.0)))) * (0.99508583531510109 *
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0 / (3.0 * muDoubleScalarPower
      (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[0], 2.0)));
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_85;
    }

    B_19_257_0 = ((muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[0], 4.0) / 4.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 *
                   (((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 - 1.0) / (2.0 *
      muDoubleScalarPower(87.0, 2.0)) * muDoubleScalarPower(muDoubleScalarCos
      (B_19_148_0), 2.0) + muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[0], 3.0) / 3.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 /
                   87.0 * muDoubleScalarCos(B_19_148_0)) + muDoubleScalarPower
                  (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[0], 5.0) / 5.0 *
                  ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 * (((BlockIO *)
      _ssGetBlockIO(S))->B_19_117_0 - 1.0) * (((BlockIO *) _ssGetBlockIO(S))
      ->B_19_117_0 - 2.0) / (6.0 * muDoubleScalarPower(87.0, 3.0)) *
                  muDoubleScalarPower(muDoubleScalarCos(B_19_148_0), 3.0)) *
      (2.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0 / (3.0 *
        muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[0], 2.0)));
    ((BlockIO *) _ssGetBlockIO(S))->B_19_120_0 = (B_19_239_0 + B_19_257_0) +
      B_19_28_0;
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_126_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_91;
    }

    B_19_257_0 = B_19_148_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_126_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_128_0 = B_19_257_0 -
      muDoubleScalarFloor(B_19_257_0 / 6.2831853071795862E+000) * 2.0 *
      3.1415926535897931;
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Saturation1_MODE = ((BlockIO *)
        _ssGetBlockIO(S))->B_19_128_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_92 ? 1 : ((BlockIO *) _ssGetBlockIO(S))->B_19_128_0 > ((Parameters *)
        ssGetDefaultParam(S))->P_93 ? 0 : -1;
    }

    B_19_257_0 = ((D_Work *) ssGetRootDWork(S))->Saturation1_MODE == 1 ?
      ((Parameters *) ssGetDefaultParam(S))->P_92 : ((D_Work *) ssGetRootDWork(S))
      ->Saturation1_MODE == -1 ? ((Parameters *) ssGetDefaultParam(S))->P_93 :
      ((BlockIO *) _ssGetBlockIO(S))->B_19_128_0;
    B_19_257_0 = (muDoubleScalarPower(2.2000000000000002, 2.0) * 2.0 *
                  (muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[1], 2.0) - muDoubleScalarPower(1.5, 2.0)) /
                  ((muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[1], 2.0) + muDoubleScalarPower(1.5, 2.0)) *
                   muDoubleScalarPower(muDoubleScalarSin(B_19_257_0), 2.0) + 2.0
                   * muDoubleScalarPower(4.7000000000000002, 2.0)) + 2.0 *
                  muDoubleScalarPower(2.2000000000000002, 2.0) *
                  muDoubleScalarPower(4.7000000000000002, 2.0) *
                  (muDoubleScalarPower(1.5, 2.0) - muDoubleScalarPower(((BlockIO
      *) _ssGetBlockIO(S))->B_19_115_0[1], 2.0)) / ((muDoubleScalarPower
      (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[1], 2.0) * muDoubleScalarPower
                    (muDoubleScalarSin(B_19_257_0), 2.0) + muDoubleScalarPower
      (4.7000000000000002, 2.0)) * (muDoubleScalarPower(1.5, 2.0) *
      muDoubleScalarPower(muDoubleScalarSin(B_19_257_0), 2.0) +
      muDoubleScalarPower(4.7000000000000002, 2.0)))) * (0.99508583531510109 *
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0 / (3.0 * muDoubleScalarPower
      (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[1], 2.0)));
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_131_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_94;
    }

    B_19_239_0 = B_19_148_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_131_0;
    B_19_239_0 = ((muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[1], 4.0) / 4.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 *
                   (((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 - 1.0) / (2.0 *
      muDoubleScalarPower(87.0, 2.0)) * muDoubleScalarPower(muDoubleScalarCos
      (B_19_239_0), 2.0) + muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[1], 3.0) / 3.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 /
                   87.0 * muDoubleScalarCos(B_19_239_0)) + muDoubleScalarPower
                  (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[1], 5.0) / 5.0 *
                  ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 * (((BlockIO *)
      _ssGetBlockIO(S))->B_19_117_0 - 1.0) * (((BlockIO *) _ssGetBlockIO(S))
      ->B_19_117_0 - 2.0) / (6.0 * muDoubleScalarPower(87.0, 3.0)) *
                  muDoubleScalarPower(muDoubleScalarCos(B_19_239_0), 3.0)) *
      (2.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0 / (3.0 *
        muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[1], 2.0)));
    ((BlockIO *) _ssGetBlockIO(S))->B_19_135_0 = (B_19_257_0 + B_19_239_0) +
      B_19_28_0;
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_141_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_100;
    }

    B_19_257_0 = B_19_148_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_141_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_143_0 = B_19_257_0 -
      muDoubleScalarFloor(B_19_257_0 / 6.2831853071795862E+000) * 2.0 *
      3.1415926535897931;
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Saturation_MODE = ((BlockIO *)
        _ssGetBlockIO(S))->B_19_143_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_101 ? 1 : ((BlockIO *) _ssGetBlockIO(S))->B_19_143_0 > ((Parameters *)
        ssGetDefaultParam(S))->P_102 ? 0 : -1;
    }

    B_19_257_0 = ((D_Work *) ssGetRootDWork(S))->Saturation_MODE == 1 ?
      ((Parameters *) ssGetDefaultParam(S))->P_101 : ((D_Work *) ssGetRootDWork
      (S))->Saturation_MODE == -1 ? ((Parameters *) ssGetDefaultParam(S))->P_102
      : ((BlockIO *) _ssGetBlockIO(S))->B_19_143_0;
    B_19_257_0 = (muDoubleScalarPower(2.2000000000000002, 2.0) * 2.0 *
                  (muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[2], 2.0) - muDoubleScalarPower(1.5, 2.0)) /
                  ((muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[2], 2.0) + muDoubleScalarPower(1.5, 2.0)) *
                   muDoubleScalarPower(muDoubleScalarSin(B_19_257_0), 2.0) + 2.0
                   * muDoubleScalarPower(4.7000000000000002, 2.0)) + 2.0 *
                  muDoubleScalarPower(2.2000000000000002, 2.0) *
                  muDoubleScalarPower(4.7000000000000002, 2.0) *
                  (muDoubleScalarPower(1.5, 2.0) - muDoubleScalarPower(((BlockIO
      *) _ssGetBlockIO(S))->B_19_115_0[2], 2.0)) / ((muDoubleScalarPower
      (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[2], 2.0) * muDoubleScalarPower
                    (muDoubleScalarSin(B_19_257_0), 2.0) + muDoubleScalarPower
      (4.7000000000000002, 2.0)) * (muDoubleScalarPower(1.5, 2.0) *
      muDoubleScalarPower(muDoubleScalarSin(B_19_257_0), 2.0) +
      muDoubleScalarPower(4.7000000000000002, 2.0)))) * (0.99508583531510109 *
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0 / (3.0 * muDoubleScalarPower
      (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[2], 2.0)));
    if (ssIsSampleHit(S, 1, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_146_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_103;
    }

    B_19_148_0 += ((BlockIO *) _ssGetBlockIO(S))->B_19_146_0;
    B_19_148_0 = ((muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[2], 4.0) / 4.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 *
                   (((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 - 1.0) / (2.0 *
      muDoubleScalarPower(87.0, 2.0)) * muDoubleScalarPower(muDoubleScalarCos
      (B_19_148_0), 2.0) + muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))
      ->B_19_115_0[2], 3.0) / 3.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 /
                   87.0 * muDoubleScalarCos(B_19_148_0)) + muDoubleScalarPower
                  (((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[2], 5.0) / 5.0 *
                  ((BlockIO *) _ssGetBlockIO(S))->B_19_117_0 * (((BlockIO *)
      _ssGetBlockIO(S))->B_19_117_0 - 1.0) * (((BlockIO *) _ssGetBlockIO(S))
      ->B_19_117_0 - 2.0) / (6.0 * muDoubleScalarPower(87.0, 3.0)) *
                  muDoubleScalarPower(muDoubleScalarCos(B_19_148_0), 3.0)) *
      (2.0 * ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0 / (3.0 *
        muDoubleScalarPower(((BlockIO *) _ssGetBlockIO(S))->B_19_115_0[2], 2.0)));
    ((BlockIO *) _ssGetBlockIO(S))->B_19_150_0 = (B_19_257_0 + B_19_148_0) +
      B_19_28_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_156_0 = (rt_Lookup2D_Normal
      (&((Parameters *) ssGetDefaultParam(S))->P_87[0], 25, &((Parameters *)
      ssGetDefaultParam(S))->P_88[0], 33, &((Parameters *) ssGetDefaultParam(S)
       )->P_89[0], 1.0 / ((BlockIO *) _ssGetBlockIO(S))->B_19_120_0 *
       (((Parameters *) ssGetDefaultParam(S))->P_86 * ((BlockIO *) _ssGetBlockIO
      (S))->B_19_5_0[0]), ((BlockIO *) _ssGetBlockIO(S))->B_19_57_0) *
      (((BlockIO *) _ssGetBlockIO(S))->B_19_120_0 * ((BlockIO *) _ssGetBlockIO(S))
       ->B_19_120_0) * ((Parameters *) ssGetDefaultParam(S))->P_90 +
      rt_Lookup2D_Normal(&((Parameters *) ssGetDefaultParam(S))->P_96[0], 25,
                         &((Parameters *) ssGetDefaultParam(S))->P_97[0], 33,
                         &((Parameters *) ssGetDefaultParam(S))->P_98[0], 1.0 /
                         ((BlockIO *) _ssGetBlockIO(S))->B_19_135_0 *
                         (((Parameters *) ssGetDefaultParam(S))->P_95 *
                          ((BlockIO *) _ssGetBlockIO(S))->B_19_5_0[0]),
                         ((BlockIO *) _ssGetBlockIO(S))->B_19_72_0) * (((BlockIO
      *) _ssGetBlockIO(S))->B_19_135_0 * ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_135_0) * ((Parameters *) ssGetDefaultParam(S))->P_99) +
      rt_Lookup2D_Normal(&((Parameters *) ssGetDefaultParam(S))->P_105[0], 25,
                         &((Parameters *) ssGetDefaultParam(S))->P_106[0], 33,
                         &((Parameters *) ssGetDefaultParam(S))->P_107[0], 1.0 /
                         ((BlockIO *) _ssGetBlockIO(S))->B_19_150_0 *
                         (((Parameters *) ssGetDefaultParam(S))->P_104 *
                          ((BlockIO *) _ssGetBlockIO(S))->B_19_5_0[0]),
                         ((BlockIO *) _ssGetBlockIO(S))->B_19_90_0) * (((BlockIO
      *) _ssGetBlockIO(S))->B_19_150_0 * ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_150_0) * ((Parameters *) ssGetDefaultParam(S))->P_108;
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope4' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 157, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope5' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 158, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope6' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 159, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope7' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 160, SS_CALL_MDL_OUTPUTS);

      /* Scope: '<Root>/Scope8' */

      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 161, SS_CALL_MDL_OUTPUTS);
      ((BlockIO *) _ssGetBlockIO(S))->B_19_162_0 = ((BlockIO *) _ssGetBlockIO(S))
        ->B_19_32_0 + ((Parameters *) ssGetDefaultParam(S))->P_109;
      B_19_28_0 = ((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE;
      if (((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE >=
          ((Parameters *) ssGetDefaultParam(S))->P_113) {
        B_19_28_0 = ((Parameters *) ssGetDefaultParam(S))->P_113;
      } else if (((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE <=
                 ((Parameters *) ssGetDefaultParam(S))->P_114) {
        B_19_28_0 = ((Parameters *) ssGetDefaultParam(S))->P_114;
      }

      B_19_28_0 = ((Parameters *) ssGetDefaultParam(S))->P_110 * ((BlockIO *)
        _ssGetBlockIO(S))->B_19_162_0 + ((Parameters *) ssGetDefaultParam(S))
        ->P_115 * B_19_28_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_167_0 = rt_SATURATE(B_19_28_0,
        ((Parameters *) ssGetDefaultParam(S))->P_117, ((Parameters *)
        ssGetDefaultParam(S))->P_116);
    }

    if (ssIsSampleHit(S, 1, 0)) {
      if (((BlockIO *) _ssGetBlockIO(S))->B_7_0_1 >= ((Parameters *)
           ssGetDefaultParam(S))->P_118) {
        ((BlockIO *) _ssGetBlockIO(S))->B_19_169_0 = ((BlockIO *) _ssGetBlockIO
          (S))->B_19_167_0;
      } else {
        ((BlockIO *) _ssGetBlockIO(S))->B_19_169_0 = ((Parameters *)
          ssGetDefaultParam(S))->P_153;
      }
    }

    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<Root>/Scope9' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 170, SS_CALL_MDL_OUTPUTS);
    }

    B_19_257_0 = ((BlockIO *) _ssGetBlockIO(S))->B_19_169_0 + ((BlockIO *)
      _ssGetBlockIO(S))->B_19_109_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_172_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_169_0 + ((BlockIO *) _ssGetBlockIO(S))->B_19_101_0;
    B_19_173_0 = ((BlockIO *) _ssGetBlockIO(S))->B_19_169_0 + ((BlockIO *)
      _ssGetBlockIO(S))->B_19_105_0;
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch1_Mode_d = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_69_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_119);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch1_Mode_d == 1) {
      /* Gain Block: '<S10>/Gain1'
       * About '<S10>/Gain1 :'
       *   Gain value: Bpb


       */
      {
        static const int_T dims[3] = { 2, 1, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_5_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_152[0],
                         (real_T *)&B_19_173_0, &dims[0]);
      }

      B_19_28_0 = ((BlockIO *) _ssGetBlockIO(S))->B_5_0_0[0];
      B_19_85_0 = ((BlockIO *) _ssGetBlockIO(S))->B_5_0_0[1];
    } else {
      /* Gain Block: '<S10>/Gain4'
       * About '<S10>/Gain4 :'
       *   Gain value: Bpb1


       */
      {
        static const int_T dims[3] = { 2, 1, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_4_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_151[0],
                         (real_T *)&B_19_173_0, &dims[0]);
      }

      B_19_28_0 = ((BlockIO *) _ssGetBlockIO(S))->B_4_0_0[0];
      B_19_85_0 = ((BlockIO *) _ssGetBlockIO(S))->B_4_0_0[1];
    }

    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch2_Mode = (((BlockIO *) _ssGetBlockIO
        (S))->B_19_69_0 >= ((Parameters *) ssGetDefaultParam(S))->P_120);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch2_Mode == 1) {
      /* Gain Block: '<S10>/Gain'
       * About '<S10>/Gain :'
       *   Gain value: Apb


       */
      {
        static const int_T dims[3] = { 2, 2, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_3_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_150[0],
                         (real_T *)B_19_68_0, &dims[0]);
      }

      B_19_187_0[0] = ((BlockIO *) _ssGetBlockIO(S))->B_3_0_0[0];
      B_19_187_0[1] = ((BlockIO *) _ssGetBlockIO(S))->B_3_0_0[1];
    } else {
      /* Gain Block: '<S10>/Gain3'
       * About '<S10>/Gain3 :'
       *   Gain value: Apb1


       */
      {
        static const int_T dims[3] = { 2, 2, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_2_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_149[0],
                         (real_T *)B_19_68_0, &dims[0]);
      }

      B_19_187_0[0] = ((BlockIO *) _ssGetBlockIO(S))->B_2_0_0[0];
      B_19_187_0[1] = ((BlockIO *) _ssGetBlockIO(S))->B_2_0_0[1];
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_180_0[0] = B_19_28_0 + B_19_187_0[0];
    ((BlockIO *) _ssGetBlockIO(S))->B_19_180_0[1] = B_19_85_0 + B_19_187_0[1];

    /* Gain Block: '<S11>/Gain1'
     * About '<S11>/Gain1 :'
     *   Gain value: Bpb


     */
    {
      static const int_T dims[3] = { 2, 1, 1 };

      rt_MatMultRR_Dbl((real_T *)B_19_187_0, (real_T *)&((Parameters *)
        ssGetDefaultParam(S))->P_121[0],
                       (real_T *)&B_19_257_0, &dims[0]);
    }

    B_19_28_0 = B_19_187_0[0] * ((BlockIO *) _ssGetBlockIO(S))->B_19_84_0;
    B_19_85_0 = B_19_187_0[1] * ((BlockIO *) _ssGetBlockIO(S))->B_19_84_0;

    /* Gain Block: '<S11>/Gain4'
     * About '<S11>/Gain4 :'
     *   Gain value: Bpb2


     */
    {
      static const int_T dims[3] = { 2, 1, 1 };

      rt_MatMultRR_Dbl((real_T *)B_19_187_0, (real_T *)&((Parameters *)
        ssGetDefaultParam(S))->P_122[0],
                       (real_T *)&B_19_257_0, &dims[0]);
    }

    B_19_184_0_idx = B_19_87_0 * B_19_187_0[0];
    B_19_184_0_idx_0 = B_19_87_0 * B_19_187_0[1];

    /* Gain Block: '<S11>/Gain3'
     * About '<S11>/Gain3 :'
     *   Gain value: Apb2


     */
    {
      static const int_T dims[3] = { 2, 2, 1 };

      rt_MatMultRR_Dbl((real_T *)B_19_187_0, (real_T *)&((Parameters *)
        ssGetDefaultParam(S))->P_123[0],
                       (real_T *)B_19_82_0, &dims[0]);
    }

    B_19_186_0_idx = B_19_87_0 * B_19_187_0[0];
    B_19_186_0_idx_0 = B_19_87_0 * B_19_187_0[1];

    /* Gain Block: '<S11>/Gain'
     * About '<S11>/Gain :'
     *   Gain value: Apb


     */
    {
      static const int_T dims[3] = { 2, 2, 1 };

      rt_MatMultRR_Dbl((real_T *)B_19_187_0, (real_T *)&((Parameters *)
        ssGetDefaultParam(S))->P_124[0],
                       (real_T *)B_19_82_0, &dims[0]);
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_189_0[0] = ((B_19_28_0 + B_19_184_0_idx)
      + B_19_186_0_idx) + B_19_187_0[0] * ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_84_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_189_0[1] = ((B_19_85_0 +
      B_19_184_0_idx_0) + B_19_186_0_idx_0) + B_19_187_0[1] * ((BlockIO *)
      _ssGetBlockIO(S))->B_19_84_0;

    /* Scope: '<S8>/Scope1' */

    /* Call into Simulink for Scope */
    ssCallAccelRunBlock(S, 19, 190, SS_CALL_MDL_OUTPUTS);

    /* Scope: '<S8>/Scope3' */

    /* Call into Simulink for Scope */
    ssCallAccelRunBlock(S, 19, 191, SS_CALL_MDL_OUTPUTS);
    if (ssIsSampleHit(S, 2, 0)) {
      /* Scope: '<S2>/Scope3' */
      /* Call into Simulink for Scope */
      ssCallAccelRunBlock(S, 19, 192, SS_CALL_MDL_OUTPUTS);
    }

    B_19_193_0[0] = ((BlockIO *) _ssGetBlockIO(S))->B_19_156_0;
    B_19_193_0[1] = ((BlockIO *) _ssGetBlockIO(S))->B_19_3_0;

    /* FromWorkspace: '<Root>/From Workspace8' */

    /* Call into Simulink for From Workspace */
    ssCallAccelRunBlock(S, 19, 194, SS_CALL_MDL_OUTPUTS);
    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch1_Mode_b = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_194_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_125);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch1_Mode_b == 1) {
      /* Gain Block: '<S3>/Gain1'
       * About '<S3>/Gain1 :'
       *   Gain value: Bddt


       */
      {
        static const int_T dims[3] = { 3, 2, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_11_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_157[0],
                         (real_T *)B_19_193_0, &dims[0]);
      }

      B_19_28_0 = ((BlockIO *) _ssGetBlockIO(S))->B_11_0_0[0];
      B_19_85_0 = ((BlockIO *) _ssGetBlockIO(S))->B_11_0_0[1];
      B_19_184_0_idx = ((BlockIO *) _ssGetBlockIO(S))->B_11_0_0[2];
    } else {
      /* Gain Block: '<S3>/Gain4'
       * About '<S3>/Gain4 :'
       *   Gain value: Bddt2


       */
      {
        static const int_T dims[3] = { 3, 2, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_10_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_156[0],
                         (real_T *)B_19_193_0, &dims[0]);
      }

      B_19_28_0 = ((BlockIO *) _ssGetBlockIO(S))->B_10_0_0[0];
      B_19_85_0 = ((BlockIO *) _ssGetBlockIO(S))->B_10_0_0[1];
      B_19_184_0_idx = ((BlockIO *) _ssGetBlockIO(S))->B_10_0_0[2];
    }

    if (ssIsMajorTimeStep(S)) {
      ((D_Work *) ssGetRootDWork(S))->Switch2_Mode_d = (((BlockIO *)
        _ssGetBlockIO(S))->B_19_194_0 >= ((Parameters *) ssGetDefaultParam(S))
        ->P_126);
    }

    if (((D_Work *) ssGetRootDWork(S))->Switch2_Mode_d == 1) {
      /* Gain Block: '<S3>/Gain'
       * About '<S3>/Gain :'
       *   Gain value: Addt


       */
      {
        static const int_T dims[3] = { 3, 3, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_9_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_155[0],
                         (real_T *)B_19_4_0, &dims[0]);
      }

      B_19_184_0_idx_0 = ((BlockIO *) _ssGetBlockIO(S))->B_9_0_0[0];
      B_19_186_0_idx = ((BlockIO *) _ssGetBlockIO(S))->B_9_0_0[1];
      B_19_186_0_idx_0 = ((BlockIO *) _ssGetBlockIO(S))->B_9_0_0[2];
    } else {
      /* Gain Block: '<S3>/Gain3'
       * About '<S3>/Gain3 :'
       *   Gain value: Addt2


       */
      {
        static const int_T dims[3] = { 3, 3, 1 };

        rt_MatMultRR_Dbl((real_T *)((BlockIO *) _ssGetBlockIO(S))->B_8_0_0,
                         (real_T *)&((Parameters *) ssGetDefaultParam(S))->
                         P_154[0],
                         (real_T *)B_19_4_0, &dims[0]);
      }

      B_19_184_0_idx_0 = ((BlockIO *) _ssGetBlockIO(S))->B_8_0_0[0];
      B_19_186_0_idx = ((BlockIO *) _ssGetBlockIO(S))->B_8_0_0[1];
      B_19_186_0_idx_0 = ((BlockIO *) _ssGetBlockIO(S))->B_8_0_0[2];
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_201_0[0] = B_19_28_0 + B_19_184_0_idx_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_201_0[1] = B_19_85_0 + B_19_186_0_idx;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_201_0[2] = B_19_184_0_idx +
      B_19_186_0_idx_0;
    B_19_28_0 = 7.4939040910322408E-001 / (57.5 / ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_27_0);
    B_19_85_0 = 8.3175291248984026E-002 / muDoubleScalarPower(57.5 / ((BlockIO *)
      _ssGetBlockIO(S))->B_19_27_0, 2.0);
    B_19_184_0_idx = 4.8014088322947712E+000 / (57.5 / ((BlockIO *)
      _ssGetBlockIO(S))->B_19_27_0);
    B_19_184_0_idx_0 = 2.7092928745597402E+000 / muDoubleScalarPower(57.5 /
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0, 2.0);

    /* Integrator: '<S34>/Integrator1' */
    B_19_257_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator1_CSTATE;
    if (ssIsSampleHit(S, 3, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_207_0 = ((D_Work *) ssGetRootDWork(S))
        ->UnitDelay_DSTATE_c;
    }

    ((BlockIO *) _ssGetBlockIO(S))->B_19_212_0 = (((BlockIO *) _ssGetBlockIO(S)
      )->B_19_207_0 * B_19_28_0 + B_19_257_0) - B_19_26_0 * B_19_184_0_idx;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_213_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_207_0 * B_19_85_0 - B_19_26_0 * B_19_184_0_idx_0;
    B_19_28_0 = muDoubleScalarSqrt(600.0 * ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_27_0) * 12.0 / 100.0 / muDoubleScalarSqrt(2.0);
    if (ssIsSampleHit(S, 3, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_215_0 = ((D_Work *) ssGetRootDWork(S))
        ->UnitDelay_DSTATE_ce;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_216_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_130 * ((BlockIO *) _ssGetBlockIO(S))
        ->B_19_215_0;
    }

    B_19_85_0 = 1.0141127534724801E+000 / (9.5492965855137200E+001 / ((BlockIO *)
      _ssGetBlockIO(S))->B_19_27_0);
    B_19_184_0_idx = 7.3133774047389144E-001 / muDoubleScalarPower
      (9.5492965855137200E+001 / ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0, 2.0);
    B_19_184_0_idx_0 = 2.7923196910049763E+000 / (9.5492965855137200E+001 /
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0);
    B_19_186_0_idx = 7.4277649855158578E-001 / muDoubleScalarPower
      (9.5492965855137200E+001 / ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0, 2.0);

    /* Integrator: '<S36>/Integrator' */
    B_19_257_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE_a;

    /* Integrator: '<S36>/Integrator1' */
    B_19_239_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator1_CSTATE_n;
    B_19_257_0 += ((BlockIO *) _ssGetBlockIO(S))->B_19_216_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_228_0 = (((BlockIO *) _ssGetBlockIO(S)
      )->B_19_215_0 * B_19_85_0 + B_19_239_0) - B_19_257_0 * B_19_184_0_idx_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_229_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_215_0 * B_19_184_0_idx - B_19_257_0 * B_19_186_0_idx;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_230_0 = B_19_28_0 * B_19_257_0;
    B_19_28_0 = muDoubleScalarSqrt(600.0 * ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_27_0) * 12.0 / 100.0 / muDoubleScalarSqrt(2.0);
    if (ssIsSampleHit(S, 3, 0)) {
      ((BlockIO *) _ssGetBlockIO(S))->B_19_232_0 = ((D_Work *) ssGetRootDWork(S))
        ->UnitDelay_DSTATE_l;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_233_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_134 * ((BlockIO *) _ssGetBlockIO(S))
        ->B_19_232_0;
    }

    B_19_85_0 = 1.0141127534724801E+000 / (9.5492965855137200E+001 / ((BlockIO *)
      _ssGetBlockIO(S))->B_19_27_0);
    B_19_184_0_idx = 7.3133774047389144E-001 / muDoubleScalarPower
      (9.5492965855137200E+001 / ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0, 2.0);
    B_19_184_0_idx_0 = 2.7923196910049763E+000 / (9.5492965855137200E+001 /
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0);
    B_19_186_0_idx = 7.4277649855158578E-001 / muDoubleScalarPower
      (9.5492965855137200E+001 / ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0, 2.0);

    /* Integrator: '<S38>/Integrator' */
    B_19_257_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator_CSTATE_m;

    /* Integrator: '<S38>/Integrator1' */
    B_19_239_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator1_CSTATE_e;
    B_19_257_0 += ((BlockIO *) _ssGetBlockIO(S))->B_19_233_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_245_0 = (((BlockIO *) _ssGetBlockIO(S)
      )->B_19_232_0 * B_19_85_0 + B_19_239_0) - B_19_257_0 * B_19_184_0_idx_0;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_246_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_232_0 * B_19_184_0_idx - B_19_257_0 * B_19_186_0_idx;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_247_0 = B_19_28_0 * B_19_257_0;
    if (ssIsSampleHit(S, 3, 0)) {
      /* RandomNumber: '<S30>/White Noise' */
      B_19_250_0 = ((D_Work *) ssGetRootDWork(S))->NextOutput_ot;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_249_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_140 * B_19_250_0;

      /* RandomNumber: '<S31>/White Noise' */
      B_19_250_0 = ((D_Work *) ssGetRootDWork(S))->NextOutput_l;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_251_0 = ((Parameters *)
        ssGetDefaultParam(S))->P_144 * B_19_250_0;
      ((BlockIO *) _ssGetBlockIO(S))->B_19_252_0 = ((D_Work *) ssGetRootDWork(S))
        ->UnitDelay_DSTATE_p;
    }

    B_19_28_0 = 6.2310766306965371E-001 / (57.5 / ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_27_0);
    B_19_85_0 = 1.2891972456165471E-001 / muDoubleScalarPower(57.5 / ((BlockIO *)
      _ssGetBlockIO(S))->B_19_27_0, 2.0);
    B_19_184_0_idx = 9.5697902971766269E-001 / (57.5 / ((BlockIO *)
      _ssGetBlockIO(S))->B_19_27_0);
    B_19_184_0_idx_0 = 1.3016935032477253E-001 / muDoubleScalarPower(57.5 /
      ((BlockIO *) _ssGetBlockIO(S))->B_19_27_0, 2.0);

    /* Integrator: '<S40>/Integrator1' */
    B_19_257_0 = ((ContinuousStates *) ssGetContStates(S))->Integrator1_CSTATE_m;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_262_0 = (((BlockIO *) _ssGetBlockIO(S)
      )->B_19_252_0 * B_19_28_0 + B_19_257_0) - B_19_25_0 * B_19_184_0_idx;
    ((BlockIO *) _ssGetBlockIO(S))->B_19_263_0 = ((BlockIO *) _ssGetBlockIO(S)
      )->B_19_252_0 * B_19_85_0 - B_19_25_0 * B_19_184_0_idx_0;
  }

  /* tid is required for a uniform function interface. This system
   * is single rate, and in this case, tid is not accessed. */
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S19>/B_19_7' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed) * ((Parameters *)
      ssGetDefaultParam(S))->P_10 + ((Parameters *) ssGetDefaultParam(S))->P_9;
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S19>/B_19_11' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_b = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_d) * ((Parameters *)
      ssGetDefaultParam(S))->P_15 + ((Parameters *) ssGetDefaultParam(S))->P_14;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S18>/B_19_15' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_p = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_l) * ((Parameters *)
      ssGetDefaultParam(S))->P_19 + ((Parameters *) ssGetDefaultParam(S))->P_18;
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S25>/B_19_20' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_k = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_h) * ((Parameters *)
      ssGetDefaultParam(S))->P_24 + ((Parameters *) ssGetDefaultParam(S))->P_23;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S20>/B_19_22' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_h = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_g) * ((Parameters *)
      ssGetDefaultParam(S))->P_29 + ((Parameters *) ssGetDefaultParam(S))->P_28;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    ((D_Work *) ssGetRootDWork(S))->UnitDelay_DSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_7_0_1;
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S18>/B_19_25' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_hp = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_n) * ((Parameters *)
      ssGetDefaultParam(S))->P_37 + ((Parameters *) ssGetDefaultParam(S))->P_36;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S24>/B_19_28' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_o = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_j) * ((Parameters *)
      ssGetDefaultParam(S))->P_41 + ((Parameters *) ssGetDefaultParam(S))->P_40;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S21>/B_19_31' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_m = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_l4) * ((Parameters *)
      ssGetDefaultParam(S))->P_44 + ((Parameters *) ssGetDefaultParam(S))->P_43;
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S21>/B_19_36' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_i = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_c) * ((Parameters *)
      ssGetDefaultParam(S))->P_54 + ((Parameters *) ssGetDefaultParam(S))->P_53;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S22>/B_19_39' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_c = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_nt) * ((Parameters *)
      ssGetDefaultParam(S))->P_57 + ((Parameters *) ssGetDefaultParam(S))->P_56;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S22>/B_19_45' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_ix = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_jq) * ((Parameters *)
      ssGetDefaultParam(S))->P_62 + ((Parameters *) ssGetDefaultParam(S))->P_61;
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S23>/B_19_49' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_e = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_he) * ((Parameters *)
      ssGetDefaultParam(S))->P_66 + ((Parameters *) ssGetDefaultParam(S))->P_65;
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
    /* RandomNumber Block: '<S23>/B_19_57' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_f = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_nj) * ((Parameters *)
      ssGetDefaultParam(S))->P_76 + ((Parameters *) ssGetDefaultParam(S))->P_75;
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
    ((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE = ((Parameters
      *) ssGetDefaultParam(S))->P_111 * ((BlockIO *) _ssGetBlockIO(S))
      ->B_19_162_0 + ((D_Work *) ssGetRootDWork(S))
      ->DiscreteTimeIntegrator_DSTATE;
    if (((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE >=
        ((Parameters *) ssGetDefaultParam(S))->P_113) {
      ((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE =
        ((Parameters *) ssGetDefaultParam(S))->P_113;
    } else if (((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE <=
               ((Parameters *) ssGetDefaultParam(S))->P_114) {
      ((D_Work *) ssGetRootDWork(S))->DiscreteTimeIntegrator_DSTATE =
        ((Parameters *) ssGetDefaultParam(S))->P_114;
    }
  }

  if (ssIsSampleHit(S, 1, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 2, 0)) {
  }

  if (ssIsSampleHit(S, 3, 0)) {
    ((D_Work *) ssGetRootDWork(S))->UnitDelay_DSTATE_c = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_247_0;
  }

  if (ssIsSampleHit(S, 3, 0)) {
    ((D_Work *) ssGetRootDWork(S))->UnitDelay_DSTATE_ce = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_249_0;
  }

  if (ssIsSampleHit(S, 3, 0)) {
    ((D_Work *) ssGetRootDWork(S))->UnitDelay_DSTATE_l = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_251_0;
  }

  if (ssIsSampleHit(S, 3, 0)) {
    /* RandomNumber Block: '<S30>/B_19_92' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_ot = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_nx) * ((Parameters *)
      ssGetDefaultParam(S))->P_138 + ((Parameters *) ssGetDefaultParam(S))
      ->P_137;

    /* RandomNumber Block: '<S31>/B_19_93' */
    ((D_Work *) ssGetRootDWork(S))->NextOutput_l = rt_NormalRand((uint32_T *)
      &((D_Work *) ssGetRootDWork(S))->RandSeed_e) * ((Parameters *)
      ssGetDefaultParam(S))->P_142 + ((Parameters *) ssGetDefaultParam(S))
      ->P_141;
    ((D_Work *) ssGetRootDWork(S))->UnitDelay_DSTATE_p = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_230_0;
  }

  /* tid is required for a uniform function interface. This system
   * is single rate, and in this case, tid is not accessed. */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
#define MDL_DERIVATIVES

static void mdlDerivatives(SimStruct *S)
{
  /* TransferFcn Block: '<S4>/B_19_0' */
  {
    ((StateDerivatives *) ssGetdX(S))->TransferFcn_CSTATE = ((Parameters *)
      ssGetDefaultParam(S))->P_1*((BlockIO *) _ssGetBlockIO(S))->B_19_45_0;
    ((StateDerivatives *) ssGetdX(S))->TransferFcn_CSTATE += (((Parameters *)
      ssGetDefaultParam(S))->P_0)*((ContinuousStates *) ssGetContStates(S))
      ->TransferFcn_CSTATE;
  }

  /* Integrator Block: '<S3>/B_19_3' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE[0] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_201_0[0];
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE[1] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_201_0[1];
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE[2] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_201_0[2];
  }

  /* Integrator Block: '<S40>/B_19_17' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_g = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_262_0;
  }

  /* Integrator Block: '<S34>/B_19_18' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_k = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_212_0;
  }

  /* TransferFcn Block: '<S9>/B_19_32' */
  {
    ((StateDerivatives *) ssGetdX(S))->TransferFcn_CSTATE_h[0] = ((Parameters *)
      ssGetDefaultParam(S))->P_47*((BlockIO *) _ssGetBlockIO(S))->B_19_172_0;
    ((StateDerivatives *) ssGetdX(S))->TransferFcn_CSTATE_h[0] += (((Parameters *)
      ssGetDefaultParam(S))->P_46[0])*((ContinuousStates *) ssGetContStates(S)
      )->TransferFcn_CSTATE_h[0]
      + (((Parameters *) ssGetDefaultParam(S))->P_46[1])*((ContinuousStates *)
      ssGetContStates(S))->TransferFcn_CSTATE_h[1];
    ((StateDerivatives *) ssGetdX(S))->TransferFcn_CSTATE_h[1] = (((Parameters *)
      ssGetDefaultParam(S))->P_46[2])*((ContinuousStates *) ssGetContStates(S)
      )->TransferFcn_CSTATE_h[0];
  }

  /* Integrator Block: '<S10>/B_19_40' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_e[0] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_180_0[0];
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_e[1] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_180_0[1];
  }

  /* Integrator Block: '<S11>/B_19_50' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_c[0] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_189_0[0];
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_c[1] = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_189_0[1];
  }

  /* Integrator Block: '<S6>/B_19_63' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_d = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_5_0[0];
  }

  /* Integrator Block: '<S34>/B_19_87' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator1_CSTATE = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_213_0;
  }

  /* Integrator Block: '<S36>/B_19_88' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_a = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_228_0;
  }

  /* Integrator Block: '<S36>/B_19_89' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator1_CSTATE_n = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_229_0;
  }

  /* Integrator Block: '<S38>/B_19_90' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator_CSTATE_m = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_245_0;
  }

  /* Integrator Block: '<S38>/B_19_91' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator1_CSTATE_e = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_246_0;
  }

  /* Integrator Block: '<S40>/B_19_94' */
  {
    ((StateDerivatives *) ssGetdX(S))->Integrator1_CSTATE_m = ((BlockIO *)
      _ssGetBlockIO(S))->B_19_263_0;
  }
}

/* ZeroCrossings for root system: '<Root>' */
#define MDL_ZERO_CROSSINGS

static void mdlZeroCrossings(SimStruct *S)
{
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch_SwitchCond_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_1_0 - ((Parameters *) ssGetDefaultParam
    (S))->P_5;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch_SwitchCond_ZC_k =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_11_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_13;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch1_SwitchCond_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_18_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_17;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch1_SwitchCond_ZC_a =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_18_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_39;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch_SwitchCond_ZC_c =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_58_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_52;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch3_SwitchCond_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_69_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_60;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch_SwitchCond_ZC_b =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_77_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_64;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch_SwitchCond_ZC_f =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_91_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_74;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Saturation2_UprLim_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_113_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_82;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Saturation2_LwrLim_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_113_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_83;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Saturation1_UprLim_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_128_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_92;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Saturation1_LwrLim_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_128_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_93;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Saturation_UprLim_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_143_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_101;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Saturation_LwrLim_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_143_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_102;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch1_SwitchCond_ZC_j =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_69_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_119;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch2_SwitchCond_ZC =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_69_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_120;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch1_SwitchCond_ZC_g =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_194_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_125;
  ((ZCSignalValues *) ssGetSolverZcSignalVector(S))->Switch2_SwitchCond_ZC_b =
    ((BlockIO *) _ssGetBlockIO(S))->B_19_194_0 - ((Parameters *)
    ssGetDefaultParam(S))->P_126;
}

/* Function to initialize sizes */
static void mdlInitializeSizes(SimStruct *S)
{
  /* checksum */
  ssSetChecksumVal(S, 0, 684232841U);
  ssSetChecksumVal(S, 1, 3445171259U);
  ssSetChecksumVal(S, 2, 3495381948U);
  ssSetChecksumVal(S, 3, 398684241U);

  /* options */
  ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE);

  /* Accelerator check memory map size match for DWork */
  if (ssGetSizeofDWork(S) != sizeof(D_Work)) {
    ssSetErrorStatus(S,"Unexpected error: Internal DWork sizes do "
                     "not match for accelerator mex file.");
  }

  /* Accelerator check memory map size match for BlockIO */
  if (ssGetSizeofGlobalBlockIO(S) != sizeof(BlockIO)) {
    ssSetErrorStatus(S,"Unexpected error: Internal BlockIO sizes do "
                     "not match for accelerator mex file.");
  }

  /* model parameters */
  _ssSetDefaultParam(S, (real_T *) &rtDefaultParameters);

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
}

/* Empty mdlInitializeSampleTimes function (never called) */
static void mdlInitializeSampleTimes(SimStruct *S)
{
}

/* Empty mdlTerminate function (never called) */
static void mdlTerminate(SimStruct *S)
{
}

/* MATLAB MEX Glue */
#include "simulink.c"
