//
// Prerelease License - for engineering feedback and testing purposes
// only. Not for sale.
//
// File: TestConnExample.h
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
#ifndef RTW_HEADER_TestConnExample_h_
#define RTW_HEADER_TestConnExample_h_
#include <string.h>
#include <stddef.h>
#ifndef TestConnExample_COMMON_INCLUDES_
# define TestConnExample_COMMON_INCLUDES_
#include <poll.h>
#include <uORB/uORB.h>
#include "rtwtypes.h"
#include "MW_PX4_SCI.h"
#include "MW_SCI.h"
#include "MW_uORB_Read.h"
#endif                                 // TestConnExample_COMMON_INCLUDES_

#include "TestConnExample_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  real_T start_data[10];
  px4_Bus_sensor_accel In1;            // '<S9>/In1'
  px4_Bus_sensor_accel b_varargout_2;
  char_T SCIModuleLoc_tmp[13];
  uint8_T TxDataLocChar[12];
  real32_T TmpSignalConversionAtSerial[3];
  boolean_T x[10];
  int8_T ii_data[10];
  uint8_T RxData[10];
  uint8_T RxDataLocChar[10];
  uint8_T packet_data[9];
  int32_T start_size[2];
} B_TestConnExample_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  px4_internal_block_Subscriber_T obj; // '<S8>/SourceBlock'
  px4_internal_block_PX4SCIRead_T obj_p;// '<Root>/Serial Receive1'
  px4_internal_block_PX4SCIWrit_T obj_e;// '<S5>/Serial Transmit'
  px4_internal_block_PX4SCIWrit_T obj_l;// '<S6>/Serial Transmit'
} DW_TestConnExample_T;

// Parameters (default storage)
struct P_TestConnExample_T_ {
  px4_Bus_sensor_accel Out1_Y0;        // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S9>/Out1'

  px4_Bus_sensor_accel Constant_Value; // Computed Parameter: Constant_Value
                                          //  Referenced by: '<S8>/Constant'

  real_T SerialReceive1_SampleTime;    // Expression: 0.1
                                          //  Referenced by: '<Root>/Serial Receive1'

  uint8_T Header_Value[2];             // Computed Parameter: Header_Value
                                          //  Referenced by: '<S6>/Header'

};

// Real-time Model Data Structure
struct tag_RTM_TestConnExample_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_TestConnExample_T TestConnExample_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
extern B_TestConnExample_T TestConnExample_B;

// Block states (default storage)
extern DW_TestConnExample_T TestConnExample_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void TestConnExample_initialize(void);
  extern void TestConnExample_step(void);
  extern void TestConnExample_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_TestConnExample_T *const TestConnExample_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S8>/NOT' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'TestConnExample'
//  '<S1>'   : 'TestConnExample/Subsystem2'
//  '<S2>'   : 'TestConnExample/Subsystem2/MATLAB Function'
//  '<S3>'   : 'TestConnExample/Subsystem2/Subsystem'
//  '<S4>'   : 'TestConnExample/Subsystem2/Subsystem/Subsystem'
//  '<S5>'   : 'TestConnExample/Subsystem2/Subsystem/Subsystem/Data - Subsystem1'
//  '<S6>'   : 'TestConnExample/Subsystem2/Subsystem/Subsystem/Header Subsystem'
//  '<S7>'   : 'TestConnExample/Subsystem2/Subsystem/Subsystem/Data - Subsystem1/Accelerometer'
//  '<S8>'   : 'TestConnExample/Subsystem2/Subsystem/Subsystem/Data - Subsystem1/Accelerometer/PX4 uORB Read'
//  '<S9>'   : 'TestConnExample/Subsystem2/Subsystem/Subsystem/Data - Subsystem1/Accelerometer/PX4 uORB Read/Enabled Subsystem'

#endif                                 // RTW_HEADER_TestConnExample_h_

//
// File trailer for generated code.
//
// [EOF]
//
