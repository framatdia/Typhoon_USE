// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------


#ifdef __cplusplus
#include <limits>

extern "C" {
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <complex.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"


#ifdef __cplusplus
}
#endif


// ----------------------------------------------------------------------------------------                // generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines













































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables





// const variables

//@cmp.var.start
// variables
double _analog_input1__offset;
double _analog_input1__out;
double _analog_input11__offset;
double _analog_input11__out;
double _analog_input12__offset;
double _analog_input12__out;
X_UnInt32 _can_bus_receive1_rcv_cnt_sys_in__out;
double _can_bus_receive1_signal0_switch_constant1__out;
double _can_bus_receive1_signal1_switch_constant1__out;
double _can_bus_receive1_signal2_switch_constant1__out;
double _can_bus_receive1_signal3_switch_constant1__out;
double _can_bus_receive1_sys_in__out;
X_UnInt32 _can_bus_receive2_rcv_cnt_sys_in__out;
double _can_bus_receive2_signal0_switch_constant1__out;
double _can_bus_receive2_signal1_switch_constant1__out;
double _can_bus_receive2_signal2_switch_constant1__out;
double _can_bus_receive2_signal3_switch_constant1__out;
double _can_bus_receive2_sys_in__out;
X_UnInt32 _can_bus_receive3_rcv_cnt_sys_in__out;
double _can_bus_receive3_signal0_switch_constant1__out;
double _can_bus_receive3_signal1_switch_constant1__out;
double _can_bus_receive3_signal2_switch_constant1__out;
double _can_bus_receive3_signal3_switch_constant1__out;
double _can_bus_receive3_sys_in__out;
X_UnInt32 _can_bus_receive4_rcv_cnt_sys_in__out;
double _can_bus_receive4_signal2_switch_constant1__out;
double _can_bus_receive4_sys_in__out;
X_UnInt32 _can_bus_receive5_rcv_cnt_sys_in__out;
double _can_bus_receive5_signal0_switch_constant1__out;
double _can_bus_receive5_signal1_switch_constant1__out;
double _can_bus_receive5_signal2_switch_constant1__out;
double _can_bus_receive5_signal3_switch_constant1__out;
double _can_bus_receive5_sys_in__out;
X_Int32 _can_setup_can1_status_out__out;
X_Int32 _can_setup_can2_status_out__out;
double _control__out;
double _h__out;
double _iag_ia1__out;
double _ibg_ia1__out;
double _icg_ia1__out;
double _k_i_i__out;
double _k_i_p__out;
double _ki_dc__out;
double _kp_dc__out;
X_Int32 _pa_ref__out;
double _pb_ref__out;
double _pc_ref__out;
double _qa_ref__out;
double _qb_ref__out;
double _qc_ref__out;
double _unit_delay1__out;
double _unit_delay2__out;
double _va_va1__out;
double _vb_va1__out;
double _vc_va1__out;
double _vdc_ref__out;
double _eta_dc__out;
double _etas__out;
double _hilos__out;
double _i_d_ref__out;
double _i_q_ref__out;
double _interruptor_statcom__out;
double _interruptor_red__out;
double _pref__out;
double _qref__out;
X_UnInt32 _startac__out;
X_UnInt32 _startfsm__out;
double _can_bus_receive1_struct__out;
double _can_bus_receive1_struct__out1;
double _can_bus_receive1_struct__out2;
double _can_bus_receive1_struct__out3;
double _can_bus_receive2_struct__out;
double _can_bus_receive2_struct__out1;
double _can_bus_receive2_struct__out2;
double _can_bus_receive2_struct__out3;
double _can_bus_receive3_struct__out;
double _can_bus_receive3_struct__out1;
double _can_bus_receive3_struct__out2;
double _can_bus_receive3_struct__out3;
double _can_bus_receive4_struct__out;
double _can_bus_receive5_struct__out;
double _can_bus_receive5_struct__out1;
double _can_bus_receive5_struct__out2;
double _can_bus_receive5_struct__out3;
double _rms_value1__out;
X_UnInt32 _rms_value1__zc;
double _rms_value7__out;
X_UnInt32 _rms_value7__zc;
double _rms_value3__out;
X_UnInt32 _rms_value3__zc;
double _gain30__out;
double _gain29__out;
double _gain32__out;
double _gain31__out;
double _can_bus_send5_struct__out[4];
double _gain35__out;
double _gain37__out;
double _product1__out;
double _rms_value4__out;
X_UnInt32 _rms_value4__zc;
double _product2__out;
double _rms_value8__out;
X_UnInt32 _rms_value8__zc;
double _sum5__out;
double _product3__out;
double _rms_value6__out;
X_UnInt32 _rms_value6__zc;
double _sum3__out;
double _sum4__out;
double _gain2__out;
double _gain6__out;
double _gain5__out;
double _gain7__out;
double _gain8__out;
X_Int32 _data_type_conversion1__out;
X_Int32 _data_type_conversion2__out;
X_UnInt32 _can_bus_send2_struct__out[2];
double _can_bus_receive1_signal0_switch_signal_switch1__out;
double _can_bus_receive1_signal1_switch_signal_switch1__out;
double _can_bus_receive1_signal2_switch_signal_switch1__out;
double _can_bus_receive1_signal3_switch_signal_switch1__out;
double _can_bus_receive2_signal0_switch_signal_switch1__out;
double _can_bus_receive2_signal1_switch_signal_switch1__out;
double _can_bus_receive2_signal2_switch_signal_switch1__out;
double _can_bus_receive2_signal3_switch_signal_switch1__out;
double _can_bus_receive3_signal0_switch_signal_switch1__out;
double _can_bus_receive3_signal1_switch_signal_switch1__out;
double _can_bus_receive3_signal2_switch_signal_switch1__out;
double _can_bus_receive3_signal3_switch_signal_switch1__out;
double _can_bus_receive4_signal2_switch_signal_switch1__out;
double _can_bus_receive5_signal0_switch_signal_switch1__out;
double _can_bus_receive5_signal1_switch_signal_switch1__out;
double _can_bus_receive5_signal2_switch_signal_switch1__out;
double _can_bus_receive5_signal3_switch_signal_switch1__out;
double _can_bus_send4_struct__out[4];
double _product6__out;
double _sum1__out;
double _product4__out;
double _product5__out;
double _can_bus_send_struct__out[3];
double _can_bus_send1_struct__out[4];
double _can_bus_send3_struct__out[5];
double _gain9__out;
double _gain10__out;
double _gain12__out;
double _gain11__out;
double _gain13__out;
double _gain14__out;
double _gain15__out;
double _gain16__out;
double _gain17__out;
double _gain18__out;
double _gain19__out;
double _gain20__out;
double _gain24__out;
double _gain39__out;
double _gain40__out;
double _gain41__out;
double _gain42__out;
double _gain34__out;
double _sum2__out;
double _mathematical_function4__out;
double _mathematical_function5__out;
double _mathematical_function6__out;
double _mathematical_function7__out;
double _mathematical_function1__out;
double _mathematical_function2__out;
double _mathematical_function3__out;
double _sum6__out;
double _gain1__out;
double _gain36__out;
double _sum7__out;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _unit_delay1__state;
double _unit_delay2__state;
double _rms_value1__square_sum;
double _rms_value1__sample_cnt;
double _rms_value1__period_cnt;
double _rms_value1__db_timer;
double _rms_value1__previous_filtered_value;
double _rms_value1__previous_correction;
double _rms_value1__previous_value;
double _rms_value1__correction;
double _rms_value1__filtered_value;
double _rms_value1__out_state;
double _rms_value7__square_sum;
double _rms_value7__sample_cnt;
double _rms_value7__period_cnt;
double _rms_value7__db_timer;
double _rms_value7__previous_filtered_value;
double _rms_value7__previous_correction;
double _rms_value7__previous_value;
double _rms_value7__correction;
double _rms_value7__filtered_value;
double _rms_value7__out_state;
double _rms_value3__square_sum;
double _rms_value3__sample_cnt;
double _rms_value3__period_cnt;
double _rms_value3__db_timer;
double _rms_value3__previous_filtered_value;
double _rms_value3__previous_correction;
double _rms_value3__previous_value;
double _rms_value3__correction;
double _rms_value3__filtered_value;
double _rms_value3__out_state;
double _rms_value4__square_sum;
double _rms_value4__sample_cnt;
double _rms_value4__period_cnt;
double _rms_value4__db_timer;
double _rms_value4__previous_filtered_value;
double _rms_value4__previous_correction;
double _rms_value4__previous_value;
double _rms_value4__correction;
double _rms_value4__filtered_value;
double _rms_value4__out_state;
double _rms_value8__square_sum;
double _rms_value8__sample_cnt;
double _rms_value8__period_cnt;
double _rms_value8__db_timer;
double _rms_value8__previous_filtered_value;
double _rms_value8__previous_correction;
double _rms_value8__previous_value;
double _rms_value8__correction;
double _rms_value8__filtered_value;
double _rms_value8__out_state;
double _rms_value6__square_sum;
double _rms_value6__sample_cnt;
double _rms_value6__period_cnt;
double _rms_value6__db_timer;
double _rms_value6__previous_filtered_value;
double _rms_value6__previous_correction;
double _rms_value6__previous_value;
double _rms_value6__correction;
double _rms_value6__filtered_value;
double _rms_value6__out_state;//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _unit_delay1__state = 0.0;
    _unit_delay2__state = 0.0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    _rms_value1__square_sum = 0x0;
    _rms_value1__sample_cnt = 0x0;
    _rms_value1__period_cnt = 0x0;
    _rms_value1__db_timer = 0x0;
    _rms_value1__previous_filtered_value = 0x0;
    _rms_value1__previous_correction = 0x0;
    _rms_value1__correction = 0x0;
    _rms_value1__previous_value = 0x0;
    _rms_value1__out_state = 0x0;
    _rms_value1__filtered_value = 0x0;
    _rms_value1__db_timer = 0x0;
    _rms_value7__square_sum = 0x0;
    _rms_value7__sample_cnt = 0x0;
    _rms_value7__period_cnt = 0x0;
    _rms_value7__db_timer = 0x0;
    _rms_value7__previous_filtered_value = 0x0;
    _rms_value7__previous_correction = 0x0;
    _rms_value7__correction = 0x0;
    _rms_value7__previous_value = 0x0;
    _rms_value7__out_state = 0x0;
    _rms_value7__filtered_value = 0x0;
    _rms_value7__db_timer = 0x0;
    _rms_value3__square_sum = 0x0;
    _rms_value3__sample_cnt = 0x0;
    _rms_value3__period_cnt = 0x0;
    _rms_value3__db_timer = 0x0;
    _rms_value3__previous_filtered_value = 0x0;
    _rms_value3__previous_correction = 0x0;
    _rms_value3__correction = 0x0;
    _rms_value3__previous_value = 0x0;
    _rms_value3__out_state = 0x0;
    _rms_value3__filtered_value = 0x0;
    _rms_value3__db_timer = 0x0;
    _rms_value4__square_sum = 0x0;
    _rms_value4__sample_cnt = 0x0;
    _rms_value4__period_cnt = 0x0;
    _rms_value4__db_timer = 0x0;
    _rms_value4__previous_filtered_value = 0x0;
    _rms_value4__previous_correction = 0x0;
    _rms_value4__correction = 0x0;
    _rms_value4__previous_value = 0x0;
    _rms_value4__out_state = 0x0;
    _rms_value4__filtered_value = 0x0;
    _rms_value4__db_timer = 0x0;
    _rms_value8__square_sum = 0x0;
    _rms_value8__sample_cnt = 0x0;
    _rms_value8__period_cnt = 0x0;
    _rms_value8__db_timer = 0x0;
    _rms_value8__previous_filtered_value = 0x0;
    _rms_value8__previous_correction = 0x0;
    _rms_value8__correction = 0x0;
    _rms_value8__previous_value = 0x0;
    _rms_value8__out_state = 0x0;
    _rms_value8__filtered_value = 0x0;
    _rms_value8__db_timer = 0x0;
    _rms_value6__square_sum = 0x0;
    _rms_value6__sample_cnt = 0x0;
    _rms_value6__period_cnt = 0x0;
    _rms_value6__db_timer = 0x0;
    _rms_value6__previous_filtered_value = 0x0;
    _rms_value6__previous_correction = 0x0;
    _rms_value6__correction = 0x0;
    _rms_value6__previous_value = 0x0;
    _rms_value6__out_state = 0x0;
    _rms_value6__filtered_value = 0x0;
    _rms_value6__db_timer = 0x0;
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401c, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_user_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_user_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}
// generated using template: virtual_hil/common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Analog Input1
    _analog_input1__offset = (HIL_InFloat(0xc80000 + 0x44 * 0x200 + 1 - 1)) + 0.0;
    _analog_input1__out =  _analog_input1__offset * 1.0;
    // Generated from the component: Analog Input11
    _analog_input11__offset = (HIL_InFloat(0xc80000 + 0x44 * 0x200 + 11 - 1)) + 0.0;
    _analog_input11__out =  _analog_input11__offset * 1.0;
    // Generated from the component: Analog Input12
    _analog_input12__offset = (HIL_InFloat(0xc80000 + 0x44 * 0x200 + 12 - 1)) + 0.0;
    _analog_input12__out =  _analog_input12__offset * 1.0;
    // Generated from the component: CAN Bus Receive1.rcv_cnt_sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_rcv_cnt_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive1.signal0_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal0_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive1.signal1_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal1_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive1.signal2_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal2_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive1.signal3_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal3_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive1.sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive2.rcv_cnt_sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_rcv_cnt_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive2.signal0_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal0_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal1_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal1_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal2_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal2_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal3_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal3_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive2.sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive3.rcv_cnt_sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_rcv_cnt_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive3.signal0_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal0_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal1_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal1_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal2_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal2_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal3_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal3_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive3.sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive4.rcv_cnt_sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive4_rcv_cnt_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive4.signal2_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive4_signal2_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive4.sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive4_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive5.rcv_cnt_sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_rcv_cnt_sys_in__out = 0;
    // Generated from the component: CAN Bus Receive5.signal0_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal0_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal1_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal1_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal2_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal2_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal3_switch.Constant1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal3_switch_constant1__out = 0;
    // Generated from the component: CAN Bus Receive5.sys_in
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_sys_in__out = 0;
    // Generated from the component: Iag.Ia1
    _iag_ia1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: Ibg.Ia1
    _ibg_ia1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: Icg.Ia1
    _icg_ia1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: Unit Delay1
    _unit_delay1__out = _unit_delay1__state;
    // Generated from the component: Unit Delay2
    _unit_delay2__out = _unit_delay2__state;
    // Generated from the component: Va.Va1
    _va_va1__out = (HIL_InFloat(0xc80000 + 0x209));
    // Generated from the component: Vb.Va1
    _vb_va1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: Vc.Va1
    _vc_va1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: AI_1
    HIL_OutAO(0x4000, (float)_analog_input1__out);
    // Generated from the component: AI_11
    HIL_OutAO(0x4001, (float)_analog_input11__out);
    // Generated from the component: AI_12
    HIL_OutAO(0x4002, (float)_analog_input12__out);
    // Generated from the component: Termination1
    // Generated from the component: CAN Bus Receive1.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_struct__out = 0;
    _can_bus_receive1_struct__out1 = 0;
    _can_bus_receive1_struct__out2 = 0;
    _can_bus_receive1_struct__out3 = 0;
    // Generated from the component: Termination2
    // Generated from the component: CAN Bus Receive2.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_struct__out = 0;
    _can_bus_receive2_struct__out1 = 0;
    _can_bus_receive2_struct__out2 = 0;
    _can_bus_receive2_struct__out3 = 0;
    // Generated from the component: Termination3
    // Generated from the component: CAN Bus Receive3.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_struct__out = 0;
    _can_bus_receive3_struct__out1 = 0;
    _can_bus_receive3_struct__out2 = 0;
    _can_bus_receive3_struct__out3 = 0;
    // Generated from the component: Termination4
    // Generated from the component: CAN Bus Receive4.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive4_struct__out = 0;
    // Generated from the component: Termination5
    // Generated from the component: CAN Bus Receive5.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_struct__out = 0;
    _can_bus_receive5_struct__out1 = 0;
    _can_bus_receive5_struct__out2 = 0;
    _can_bus_receive5_struct__out3 = 0;
    // Generated from the component: CAN1Status
    HIL_OutAO(0x4003, (float)_can_setup_can1_status_out__out);
    // Generated from the component: CAN2Status
    HIL_OutAO(0x4004, (float)_can_setup_can2_status_out__out);
    // Generated from the component: RMS value1
    _rms_value1__previous_filtered_value = _rms_value1__filtered_value;
    if (1)
        _rms_value1__filtered_value = _rms_value1__previous_filtered_value * 0.3716814692820414 + _iag_ia1__out * 0.6283185307179586;
    else
        _rms_value1__filtered_value = _rms_value1__previous_filtered_value * 0.1 + _iag_ia1__out * 0.9;
    _rms_value1__db_timer += 0.0001;
    if( (_rms_value1__filtered_value >= 0.0) && (_rms_value1__previous_filtered_value < 0.0) && (_rms_value1__db_timer >= 0.0) ) {
        _rms_value1__zc = 1;
        _rms_value1__db_timer = 0;
    } else
        _rms_value1__zc = 0;
    _rms_value1__out = _rms_value1__out_state;
    // Generated from the component: RMS value7
    _rms_value7__previous_filtered_value = _rms_value7__filtered_value;
    if (1)
        _rms_value7__filtered_value = _rms_value7__previous_filtered_value * 0.3716814692820414 + _ibg_ia1__out * 0.6283185307179586;
    else
        _rms_value7__filtered_value = _rms_value7__previous_filtered_value * 0.1 + _ibg_ia1__out * 0.9;
    _rms_value7__db_timer += 0.0001;
    if( (_rms_value7__filtered_value >= 0.0) && (_rms_value7__previous_filtered_value < 0.0) && (_rms_value7__db_timer >= 0.0) ) {
        _rms_value7__zc = 1;
        _rms_value7__db_timer = 0;
    } else
        _rms_value7__zc = 0;
    _rms_value7__out = _rms_value7__out_state;
    // Generated from the component: RMS value3
    _rms_value3__previous_filtered_value = _rms_value3__filtered_value;
    if (1)
        _rms_value3__filtered_value = _rms_value3__previous_filtered_value * 0.3716814692820414 + _icg_ia1__out * 0.6283185307179586;
    else
        _rms_value3__filtered_value = _rms_value3__previous_filtered_value * 0.1 + _icg_ia1__out * 0.9;
    _rms_value3__db_timer += 0.0001;
    if( (_rms_value3__filtered_value >= 0.0) && (_rms_value3__previous_filtered_value < 0.0) && (_rms_value3__db_timer >= 0.0) ) {
        _rms_value3__zc = 1;
        _rms_value3__db_timer = 0;
    } else
        _rms_value3__zc = 0;
    _rms_value3__out = _rms_value3__out_state;
    // Generated from the component: Gain35
    _gain35__out = 0.999 * _unit_delay1__out;
    // Generated from the component: Gain37
    _gain37__out = 0.999 * _unit_delay2__out;
    // Generated from the component: Product1
    _product1__out = (_va_va1__out * _iag_ia1__out);
    // Generated from the component: RMS value4
    _rms_value4__previous_filtered_value = _rms_value4__filtered_value;
    if (1)
        _rms_value4__filtered_value = _rms_value4__previous_filtered_value * 0.3716814692820414 + _va_va1__out * 0.6283185307179586;
    else
        _rms_value4__filtered_value = _rms_value4__previous_filtered_value * 0.1 + _va_va1__out * 0.9;
    _rms_value4__db_timer += 0.0001;
    if( (_rms_value4__filtered_value >= 0.0) && (_rms_value4__previous_filtered_value < 0.0) && (_rms_value4__db_timer >= 0.0) ) {
        _rms_value4__zc = 1;
        _rms_value4__db_timer = 0;
    } else
        _rms_value4__zc = 0;
    _rms_value4__out = _rms_value4__out_state;
    // Generated from the component: Product2
    _product2__out = (_vb_va1__out * _ibg_ia1__out);
    // Generated from the component: RMS value8
    _rms_value8__previous_filtered_value = _rms_value8__filtered_value;
    if (1)
        _rms_value8__filtered_value = _rms_value8__previous_filtered_value * 0.3716814692820414 + _vb_va1__out * 0.6283185307179586;
    else
        _rms_value8__filtered_value = _rms_value8__previous_filtered_value * 0.1 + _vb_va1__out * 0.9;
    _rms_value8__db_timer += 0.0001;
    if( (_rms_value8__filtered_value >= 0.0) && (_rms_value8__previous_filtered_value < 0.0) && (_rms_value8__db_timer >= 0.0) ) {
        _rms_value8__zc = 1;
        _rms_value8__db_timer = 0;
    } else
        _rms_value8__zc = 0;
    _rms_value8__out = _rms_value8__out_state;
    // Generated from the component: Sum5
    _sum5__out = _va_va1__out - _vb_va1__out;
    // Generated from the component: Product3
    _product3__out = (_vc_va1__out * _icg_ia1__out);
    // Generated from the component: RMS value6
    _rms_value6__previous_filtered_value = _rms_value6__filtered_value;
    if (1)
        _rms_value6__filtered_value = _rms_value6__previous_filtered_value * 0.3716814692820414 + _vc_va1__out * 0.6283185307179586;
    else
        _rms_value6__filtered_value = _rms_value6__previous_filtered_value * 0.1 + _vc_va1__out * 0.9;
    _rms_value6__db_timer += 0.0001;
    if( (_rms_value6__filtered_value >= 0.0) && (_rms_value6__previous_filtered_value < 0.0) && (_rms_value6__db_timer >= 0.0) ) {
        _rms_value6__zc = 1;
        _rms_value6__db_timer = 0;
    } else
        _rms_value6__zc = 0;
    _rms_value6__out = _rms_value6__out_state;
    // Generated from the component: Sum3
    _sum3__out = _vb_va1__out - _vc_va1__out;
    // Generated from the component: Sum4
    _sum4__out = _vc_va1__out - _va_va1__out;
    // Generated from the component: CAN Bus Receive1.signal0_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal0_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive1.signal1_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal1_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive1.signal2_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal2_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive1.signal3_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive1_signal3_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal0_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal0_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal1_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal1_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal2_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal2_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive2.signal3_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive2_signal3_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal0_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal0_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal1_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal1_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal2_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal2_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive3.signal3_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive3_signal3_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive4.signal2_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive4_signal2_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal0_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal0_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal1_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal1_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal2_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal2_switch_signal_switch1__out = 0;
    // Generated from the component: CAN Bus Receive5.signal3_switch.Signal switch1
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_receive5_signal3_switch_signal_switch1__out = 0;
    // Generated from the component: iarms1
    HIL_OutAO(0x4012, (float)_rms_value1__out);
    // Generated from the component: ibrms1
    HIL_OutAO(0x4014, (float)_rms_value7__out);
    // Generated from the component: icrms1
    HIL_OutAO(0x4016, (float)_rms_value3__out);
    // Generated from the component: varms1
    HIL_OutAO(0x4021, (float)_rms_value4__out);
    // Generated from the component: vbrms1
    HIL_OutAO(0x4023, (float)_rms_value8__out);
    // Generated from the component: Product6
    _product6__out = (_sum5__out * _icg_ia1__out);
    // Generated from the component: Sum1
    _sum1__out = _product1__out + _product2__out + _product3__out;
    // Generated from the component: vcrms1
    HIL_OutAO(0x4025, (float)_rms_value6__out);
    // Generated from the component: Product4
    _product4__out = (_sum3__out * _iag_ia1__out);
    // Generated from the component: Product5
    _product5__out = (_sum4__out * _ibg_ia1__out);
    // Generated from the component: Gain9
    _gain9__out = 0.1 * _can_bus_receive1_signal0_switch_signal_switch1__out;
    // Generated from the component: Gain10
    _gain10__out = 1.0 * _can_bus_receive1_signal1_switch_signal_switch1__out;
    // Generated from the component: Gain12
    _gain12__out = 1.0 * _can_bus_receive1_signal2_switch_signal_switch1__out;
    // Generated from the component: Gain11
    _gain11__out = 1.0 * _can_bus_receive1_signal3_switch_signal_switch1__out;
    // Generated from the component: Gain13
    _gain13__out = 0.1 * _can_bus_receive2_signal0_switch_signal_switch1__out;
    // Generated from the component: Gain14
    _gain14__out = 0.1 * _can_bus_receive2_signal1_switch_signal_switch1__out;
    // Generated from the component: Gain15
    _gain15__out = 0.01 * _can_bus_receive2_signal2_switch_signal_switch1__out;
    // Generated from the component: Gain16
    _gain16__out = 0.01 * _can_bus_receive2_signal3_switch_signal_switch1__out;
    // Generated from the component: Gain17
    _gain17__out = 0.2 * _can_bus_receive3_signal0_switch_signal_switch1__out;
    // Generated from the component: Gain18
    _gain18__out = 0.2 * _can_bus_receive3_signal1_switch_signal_switch1__out;
    // Generated from the component: Gain19
    _gain19__out = 0.2 * _can_bus_receive3_signal2_switch_signal_switch1__out;
    // Generated from the component: Gain20
    _gain20__out = 0.2 * _can_bus_receive3_signal3_switch_signal_switch1__out;
    // Generated from the component: Gain24
    _gain24__out = 0.1591549431 * _can_bus_receive4_signal2_switch_signal_switch1__out;
    // Generated from the component: Gain39
    _gain39__out = 2.0 * _can_bus_receive5_signal0_switch_signal_switch1__out;
    // Generated from the component: Gain40
    _gain40__out = 2.0 * _can_bus_receive5_signal1_switch_signal_switch1__out;
    // Generated from the component: Gain41
    _gain41__out = 2.0 * _can_bus_receive5_signal2_switch_signal_switch1__out;
    // Generated from the component: Gain42
    _gain42__out = 1.0 * _can_bus_receive5_signal3_switch_signal_switch1__out;
    // Generated from the component: Gain34
    _gain34__out = 0.0010000000000000009 * _sum1__out;
    // Generated from the component: Sum2
    _sum2__out = _product4__out + _product5__out + _product6__out;
    // Generated from the component: V_h
    HIL_OutAO(0x400d, (float)_gain9__out);
    // Generated from the component: Fault_type
    HIL_OutAO(0x4006, (float)_gain10__out);
    // Generated from the component: P3f
    HIL_OutAO(0x4009, (float)_gain12__out);
    // Generated from the component: Q3f
    HIL_OutAO(0x400a, (float)_gain11__out);
    // Generated from the component: vd
    HIL_OutAO(0x4026, (float)_gain13__out);
    // Generated from the component: vq
    HIL_OutAO(0x4027, (float)_gain14__out);
    // Generated from the component: id
    HIL_OutAO(0x4017, (float)_gain15__out);
    // Generated from the component: iq
    HIL_OutAO(0x4019, (float)_gain16__out);
    // Generated from the component: Mathematical function4
    _mathematical_function4__out = sqrt(_gain17__out);
    // Generated from the component: Mathematical function5
    _mathematical_function5__out = sqrt(_gain18__out);
    // Generated from the component: Mathematical function6
    _mathematical_function6__out = sqrt(_gain19__out);
    // Generated from the component: Mathematical function7
    _mathematical_function7__out = sqrt(_gain20__out);
    // Generated from the component: f_vsg
    HIL_OutAO(0x4010, (float)_gain24__out);
    // Generated from the component: Mathematical function1
    _mathematical_function1__out = sqrt(_gain39__out);
    // Generated from the component: Mathematical function2
    _mathematical_function2__out = sqrt(_gain40__out);
    // Generated from the component: Mathematical function3
    _mathematical_function3__out = sqrt(_gain41__out);
    // Generated from the component: CTRL
    HIL_OutAO(0x4005, (float)_gain42__out);
    // Generated from the component: Sum6
    _sum6__out = _gain34__out + _gain35__out;
    // Generated from the component: Gain1
    _gain1__out = 0.577350269189626 * _sum2__out;
    // Generated from the component: iarms
    HIL_OutAO(0x4011, (float)_mathematical_function4__out);
    // Generated from the component: ibrms
    HIL_OutAO(0x4013, (float)_mathematical_function5__out);
    // Generated from the component: icrms
    HIL_OutAO(0x4015, (float)_mathematical_function6__out);
    // Generated from the component: inrms
    HIL_OutAO(0x4018, (float)_mathematical_function7__out);
    // Generated from the component: varms
    HIL_OutAO(0x4020, (float)_mathematical_function1__out);
    // Generated from the component: vbrms
    HIL_OutAO(0x4022, (float)_mathematical_function2__out);
    // Generated from the component: vcrms
    HIL_OutAO(0x4024, (float)_mathematical_function3__out);
    // Generated from the component: p
    HIL_OutAO(0x401a, (float)_sum6__out);
    // Generated from the component: Gain36
    _gain36__out = 0.0010000000000000009 * _gain1__out;
    // Generated from the component: Sum7
    _sum7__out = _gain36__out + _gain37__out;
    // Generated from the component: q
    HIL_OutAO(0x401c, (float)_sum7__out);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Unit Delay1
    _unit_delay1__state = _sum6__out;
    // Generated from the component: Unit Delay2
    _unit_delay2__state = _sum7__out;
    // Generated from the component: RMS value1
    if( _rms_value1__zc ) {
        if (_iag_ia1__out != _rms_value1__previous_value)
            _rms_value1__correction = - _rms_value1__previous_value / (_iag_ia1__out - _rms_value1__previous_value);
        if (_rms_value1__correction < 0)
            _rms_value1__correction = 0;
        else
            _rms_value1__correction = 0;
        _rms_value1__sample_cnt += _rms_value1__correction - _rms_value1__previous_correction;
        _rms_value1__out_state = sqrt(_rms_value1__square_sum / _rms_value1__sample_cnt);
        _rms_value1__sample_cnt = 0;
        _rms_value1__previous_correction = _rms_value1__correction;
        _rms_value1__square_sum = 0;
    } else if ( _rms_value1__sample_cnt >= 5000 ) {
        _rms_value1__out_state = sqrt(_rms_value1__square_sum / _rms_value1__sample_cnt);
        _rms_value1__sample_cnt = 0;
        _rms_value1__square_sum = 0;
    }
    _rms_value1__previous_value = _iag_ia1__out;
    _rms_value1__square_sum += _iag_ia1__out * _iag_ia1__out;
    _rms_value1__sample_cnt ++;
    // Generated from the component: RMS value7
    if( _rms_value7__zc ) {
        if (_ibg_ia1__out != _rms_value7__previous_value)
            _rms_value7__correction = - _rms_value7__previous_value / (_ibg_ia1__out - _rms_value7__previous_value);
        if (_rms_value7__correction < 0)
            _rms_value7__correction = 0;
        else
            _rms_value7__correction = 0;
        _rms_value7__sample_cnt += _rms_value7__correction - _rms_value7__previous_correction;
        _rms_value7__out_state = sqrt(_rms_value7__square_sum / _rms_value7__sample_cnt);
        _rms_value7__sample_cnt = 0;
        _rms_value7__previous_correction = _rms_value7__correction;
        _rms_value7__square_sum = 0;
    } else if ( _rms_value7__sample_cnt >= 5000 ) {
        _rms_value7__out_state = sqrt(_rms_value7__square_sum / _rms_value7__sample_cnt);
        _rms_value7__sample_cnt = 0;
        _rms_value7__square_sum = 0;
    }
    _rms_value7__previous_value = _ibg_ia1__out;
    _rms_value7__square_sum += _ibg_ia1__out * _ibg_ia1__out;
    _rms_value7__sample_cnt ++;
    // Generated from the component: RMS value3
    if( _rms_value3__zc ) {
        if (_icg_ia1__out != _rms_value3__previous_value)
            _rms_value3__correction = - _rms_value3__previous_value / (_icg_ia1__out - _rms_value3__previous_value);
        if (_rms_value3__correction < 0)
            _rms_value3__correction = 0;
        else
            _rms_value3__correction = 0;
        _rms_value3__sample_cnt += _rms_value3__correction - _rms_value3__previous_correction;
        _rms_value3__out_state = sqrt(_rms_value3__square_sum / _rms_value3__sample_cnt);
        _rms_value3__sample_cnt = 0;
        _rms_value3__previous_correction = _rms_value3__correction;
        _rms_value3__square_sum = 0;
    } else if ( _rms_value3__sample_cnt >= 5000 ) {
        _rms_value3__out_state = sqrt(_rms_value3__square_sum / _rms_value3__sample_cnt);
        _rms_value3__sample_cnt = 0;
        _rms_value3__square_sum = 0;
    }
    _rms_value3__previous_value = _icg_ia1__out;
    _rms_value3__square_sum += _icg_ia1__out * _icg_ia1__out;
    _rms_value3__sample_cnt ++;
    // Generated from the component: RMS value4
    if( _rms_value4__zc ) {
        if (_va_va1__out != _rms_value4__previous_value)
            _rms_value4__correction = - _rms_value4__previous_value / (_va_va1__out - _rms_value4__previous_value);
        if (_rms_value4__correction < 0)
            _rms_value4__correction = 0;
        else
            _rms_value4__correction = 0;
        _rms_value4__sample_cnt += _rms_value4__correction - _rms_value4__previous_correction;
        _rms_value4__out_state = sqrt(_rms_value4__square_sum / _rms_value4__sample_cnt);
        _rms_value4__sample_cnt = 0;
        _rms_value4__previous_correction = _rms_value4__correction;
        _rms_value4__square_sum = 0;
    } else if ( _rms_value4__sample_cnt >= 5000 ) {
        _rms_value4__out_state = sqrt(_rms_value4__square_sum / _rms_value4__sample_cnt);
        _rms_value4__sample_cnt = 0;
        _rms_value4__square_sum = 0;
    }
    _rms_value4__previous_value = _va_va1__out;
    _rms_value4__square_sum += _va_va1__out * _va_va1__out;
    _rms_value4__sample_cnt ++;
    // Generated from the component: RMS value8
    if( _rms_value8__zc ) {
        if (_vb_va1__out != _rms_value8__previous_value)
            _rms_value8__correction = - _rms_value8__previous_value / (_vb_va1__out - _rms_value8__previous_value);
        if (_rms_value8__correction < 0)
            _rms_value8__correction = 0;
        else
            _rms_value8__correction = 0;
        _rms_value8__sample_cnt += _rms_value8__correction - _rms_value8__previous_correction;
        _rms_value8__out_state = sqrt(_rms_value8__square_sum / _rms_value8__sample_cnt);
        _rms_value8__sample_cnt = 0;
        _rms_value8__previous_correction = _rms_value8__correction;
        _rms_value8__square_sum = 0;
    } else if ( _rms_value8__sample_cnt >= 5000 ) {
        _rms_value8__out_state = sqrt(_rms_value8__square_sum / _rms_value8__sample_cnt);
        _rms_value8__sample_cnt = 0;
        _rms_value8__square_sum = 0;
    }
    _rms_value8__previous_value = _vb_va1__out;
    _rms_value8__square_sum += _vb_va1__out * _vb_va1__out;
    _rms_value8__sample_cnt ++;
    // Generated from the component: RMS value6
    if( _rms_value6__zc ) {
        if (_vc_va1__out != _rms_value6__previous_value)
            _rms_value6__correction = - _rms_value6__previous_value / (_vc_va1__out - _rms_value6__previous_value);
        if (_rms_value6__correction < 0)
            _rms_value6__correction = 0;
        else
            _rms_value6__correction = 0;
        _rms_value6__sample_cnt += _rms_value6__correction - _rms_value6__previous_correction;
        _rms_value6__out_state = sqrt(_rms_value6__square_sum / _rms_value6__sample_cnt);
        _rms_value6__sample_cnt = 0;
        _rms_value6__previous_correction = _rms_value6__correction;
        _rms_value6__square_sum = 0;
    } else if ( _rms_value6__sample_cnt >= 5000 ) {
        _rms_value6__out_state = sqrt(_rms_value6__square_sum / _rms_value6__sample_cnt);
        _rms_value6__sample_cnt = 0;
        _rms_value6__square_sum = 0;
    }
    _rms_value6__previous_value = _vc_va1__out;
    _rms_value6__square_sum += _vc_va1__out * _vc_va1__out;
    _rms_value6__sample_cnt ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Control
    _control__out = XIo_InFloat(0x2f800000);
    // Generated from the component: H
    _h__out = XIo_InFloat(0x2f800004);
    // Generated from the component: K_i_i
    _k_i_i__out = XIo_InFloat(0x2f800008);
    // Generated from the component: K_i_p
    _k_i_p__out = XIo_InFloat(0x2f80000c);
    // Generated from the component: Ki_dc
    _ki_dc__out = XIo_InFloat(0x2f800010);
    // Generated from the component: Kp_dc
    _kp_dc__out = XIo_InFloat(0x2f800014);
    // Generated from the component: Pa_ref
    _pa_ref__out = XIo_InInt32(0x2f800018);
    // Generated from the component: Pb_ref
    _pb_ref__out = XIo_InFloat(0x2f80001c);
    // Generated from the component: Pc_ref
    _pc_ref__out = XIo_InFloat(0x2f800020);
    // Generated from the component: Qa_ref
    _qa_ref__out = XIo_InFloat(0x2f800024);
    // Generated from the component: Qb_ref
    _qb_ref__out = XIo_InFloat(0x2f800028);
    // Generated from the component: Qc_ref
    _qc_ref__out = XIo_InFloat(0x2f80002c);
    // Generated from the component: Vdc_ref
    _vdc_ref__out = XIo_InFloat(0x2f800030);
    // Generated from the component: eta_dc
    _eta_dc__out = XIo_InFloat(0x2f800034);
    // Generated from the component: etas
    _etas__out = XIo_InFloat(0x2f800038);
    // Generated from the component: hilos
    _hilos__out = XIo_InFloat(0x2f80003c);
    // Generated from the component: i_d_ref
    _i_d_ref__out = XIo_InFloat(0x2f800040);
    // Generated from the component: i_q_ref
    _i_q_ref__out = XIo_InFloat(0x2f800044);
    // Generated from the component: interruptor_STATCOM
    _interruptor_statcom__out = XIo_InFloat(0x2f800048);
    // Generated from the component: interruptor_red
    _interruptor_red__out = XIo_InFloat(0x2f80004c);
    // Generated from the component: pref
    _pref__out = XIo_InFloat(0x2f800050);
    // Generated from the component: qref
    _qref__out = XIo_InFloat(0x2f800054);
    // Generated from the component: startAC
    _startac__out = XIo_InInt32(0x2f800058);
    // Generated from the component: startFSM
    _startfsm__out = XIo_InInt32(0x2f80005c);
    // Generated from the component: ctrl
    HIL_OutAO(0x400f, (float)_control__out);
    // Generated from the component: Gain30
    _gain30__out = 100.0 * _k_i_i__out;
    // Generated from the component: Gain29
    _gain29__out = 100.0 * _k_i_p__out;
    // Generated from the component: Gain32
    _gain32__out = 100.0 * _ki_dc__out;
    // Generated from the component: Gain31
    _gain31__out = 100.0 * _kp_dc__out;
    // Generated from the component: CAN Bus Send5.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_send5_struct__out[0] = 0;
    _can_bus_send5_struct__out[1] = 0;
    _can_bus_send5_struct__out[2] = 0;
    _can_bus_send5_struct__out[3] = 0;
    // Generated from the component: Gain2
    _gain2__out = 1.0 * _vdc_ref__out;
    // Generated from the component: Vh_ref
    HIL_OutAO(0x400e, (float)_vdc_ref__out);
    // Generated from the component: Gain6
    _gain6__out = 1000.0 * _eta_dc__out;
    // Generated from the component: Gain5
    _gain5__out = 1000.0 * _etas__out;
    // Generated from the component: wires
    HIL_OutAO(0x4028, (float)_hilos__out);
    // Generated from the component: Gain7
    _gain7__out = 10.0 * _i_d_ref__out;
    // Generated from the component: I_d_ref
    HIL_OutAO(0x4007, (float)_i_d_ref__out);
    // Generated from the component: Gain8
    _gain8__out = 10.0 * _i_q_ref__out;
    // Generated from the component: I_q_ref
    HIL_OutAO(0x4008, (float)_i_q_ref__out);
    // Generated from the component: S2.Single S1 ideal.CTC_Wrapper
    if (_interruptor_statcom__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: STATCOM
    HIL_OutAO(0x400c, (float)_interruptor_statcom__out);
    // Generated from the component: RED
    HIL_OutAO(0x400b, (float)_interruptor_red__out);
    // Generated from the component: S1.Triple S1 ideal.CTC_Wrapper
    if (_interruptor_red__out == 0x0) {
        HIL_OutInt32(0x8640480, 0x0);
    }
    else {
        HIL_OutInt32(0x8640480, 0x1);
    }
    // Generated from the component: Data Type Conversion1
    _data_type_conversion1__out = (X_Int32)_pref__out;
    // Generated from the component: p_ref
    HIL_OutAO(0x401b, (float)_pref__out);
    // Generated from the component: Data Type Conversion2
    _data_type_conversion2__out = (X_Int32)_qref__out;
    // Generated from the component: q_ref
    HIL_OutAO(0x401d, (float)_qref__out);
    // Generated from the component: start_ac
    HIL_OutAO(0x401e, (float)_startac__out);
    // Generated from the component: CAN Bus Send2.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_send2_struct__out[0] = 0;
    _can_bus_send2_struct__out[1] = 0;
    // Generated from the component: start_fsm
    HIL_OutAO(0x401f, (float)_startfsm__out);
    // Generated from the component: CAN Bus Send4.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_send4_struct__out[0] = 0;
    _can_bus_send4_struct__out[1] = 0;
    _can_bus_send4_struct__out[2] = 0;
    _can_bus_send4_struct__out[3] = 0;
    // Generated from the component: CAN Bus Send5.sys_out
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: CAN Bus Send.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_send_struct__out[0] = 0;
    _can_bus_send_struct__out[1] = 0;
    _can_bus_send_struct__out[2] = 0;
    // Generated from the component: CAN Bus Send1.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_send1_struct__out[0] = 0;
    _can_bus_send1_struct__out[1] = 0;
    _can_bus_send1_struct__out[2] = 0;
    _can_bus_send1_struct__out[3] = 0;
    // Generated from the component: CAN Bus Send3.Struct
    // Component not supported for this platform. Outputs are zeroed.
    _can_bus_send3_struct__out[0] = 0;
    _can_bus_send3_struct__out[1] = 0;
    _can_bus_send3_struct__out[2] = 0;
    _can_bus_send3_struct__out[3] = 0;
    _can_bus_send3_struct__out[4] = 0;
    // Generated from the component: CAN Bus Send2.sys_out
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: CAN Bus Send4.sys_out
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: CAN Bus Send.sys_out
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: CAN Bus Send1.sys_out
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: CAN Bus Send3.sys_out
    // Component not supported for this platform. Outputs are zeroed.
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------