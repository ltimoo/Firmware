//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: TestConnExample_types.h
//
// Code generated for Simulink model 'TestConnExample'.
//
// Model version                  : 1.86
// Simulink Coder version         : 9.1 (R2019b) 26-Feb-2019
// C/C++ source code generated on : Thu Mar 28 09:22:29 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_TestConnExample_types_h_
#define RTW_HEADER_TestConnExample_types_h_
#include "rtwtypes.h"
#include <uORB/topics/sensor_accel.h>

// Custom Type definition for MATLABSystem: '<S5>/Serial Transmit'
#include "MW_SVD.h"
#ifndef typedef_px4_internal_block_Hardware_T_T
#define typedef_px4_internal_block_Hardware_T_T

typedef struct {
  int32_T __dummy;
} px4_internal_block_Hardware_T_T;

#endif                                 //typedef_px4_internal_block_Hardware_T_T

#ifndef typedef_px4_internal_block_PX4SCIRead_T
#define typedef_px4_internal_block_PX4SCIRead_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  px4_internal_block_Hardware_T_T Hw;
  MW_Handle_Type MW_SCIHANDLE;
  real_T SampleTime;
} px4_internal_block_PX4SCIRead_T;

#endif                                 //typedef_px4_internal_block_PX4SCIRead_T

#ifndef typedef_px4_internal_block_PX4SCIWrit_T
#define typedef_px4_internal_block_PX4SCIWrit_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  px4_internal_block_Hardware_T_T Hw;
  MW_Handle_Type MW_SCIHANDLE;
} px4_internal_block_PX4SCIWrit_T;

#endif                                 //typedef_px4_internal_block_PX4SCIWrit_T

#ifndef typedef_d_px4_internal_block_SampleTi_T
#define typedef_d_px4_internal_block_SampleTi_T

typedef struct {
  int32_T __dummy;
} d_px4_internal_block_SampleTi_T;

#endif                                 //typedef_d_px4_internal_block_SampleTi_T

#ifndef typedef_px4_internal_block_Subscriber_T
#define typedef_px4_internal_block_Subscriber_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T ticksUntilNextHit;
  d_px4_internal_block_SampleTi_T SampleTimeHandler;
  pollfd_t eventStructObj;
  orb_metadata_t * orbMetadataObj;
} px4_internal_block_Subscriber_T;

#endif                                 //typedef_px4_internal_block_Subscriber_T

#ifndef typedef_struct_T_TestConnExample_T
#define typedef_struct_T_TestConnExample_T

typedef struct {
  char_T Value[12];
} struct_T_TestConnExample_T;

#endif                                 //typedef_struct_T_TestConnExample_T

#ifndef typedef_struct_T_TestConnExample_g_T
#define typedef_struct_T_TestConnExample_g_T

typedef struct {
  char_T Value[4];
} struct_T_TestConnExample_g_T;

#endif                                 //typedef_struct_T_TestConnExample_g_T

#ifndef typedef_b_struct_T_TestConnExample_T
#define typedef_b_struct_T_TestConnExample_T

typedef struct {
  char_T Value[9];
} b_struct_T_TestConnExample_T;

#endif                                 //typedef_b_struct_T_TestConnExample_T

#ifndef struct_tag_smnSVBYMKVOFO5RozNZjEpF
#define struct_tag_smnSVBYMKVOFO5RozNZjEpF

struct tag_smnSVBYMKVOFO5RozNZjEpF
{
  char_T Disallow[9];
  char_T Type[9];
};

#endif                                 //struct_tag_smnSVBYMKVOFO5RozNZjEpF

#ifndef typedef_smnSVBYMKVOFO5RozNZjEpF_TestC_T
#define typedef_smnSVBYMKVOFO5RozNZjEpF_TestC_T

typedef struct tag_smnSVBYMKVOFO5RozNZjEpF smnSVBYMKVOFO5RozNZjEpF_TestC_T;

#endif                                 //typedef_smnSVBYMKVOFO5RozNZjEpF_TestC_T

// Parameters (default storage)
typedef struct P_TestConnExample_T_ P_TestConnExample_T;

// Forward declaration for rtModel
typedef struct tag_RTM_TestConnExample_T RT_MODEL_TestConnExample_T;

#endif                                 // RTW_HEADER_TestConnExample_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
