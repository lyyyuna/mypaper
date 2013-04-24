#ifndef __c2_FDIBenchMark_BLW_66_71_h__
#define __c2_FDIBenchMark_BLW_66_71_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"

/* Type Definitions */
typedef struct {
  SimStruct *S;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c2_is_active_c2_FDIBenchMark_BLW_66_71;
  ChartInfoStruct chartInfo;
} SFc2_FDIBenchMark_BLW_66_71InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */

extern void sf_c2_FDIBenchMark_BLW_66_71_get_check_sum(mxArray *plhs[]);
extern void c2_FDIBenchMark_BLW_66_71_method_dispatcher(SimStruct *S, int_T
 method, void *data);

#endif

