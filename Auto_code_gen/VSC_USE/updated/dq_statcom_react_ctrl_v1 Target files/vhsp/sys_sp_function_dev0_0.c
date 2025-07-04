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
double _plant_vbr_variable_load1_irms1_instantaneous__out;
double _plant_vbr_variable_load1_irms1_rt1_output__out;
double _plant_vbr_variable_load1_irms1_rt2_output__out;
double _plant_vbr_variable_load1_vrms1_instantaneous__out;
double _plant_vbr_variable_load1_vrms1_rt1_output__out;
double _plant_vbr_variable_load1_vrms1_rt2_output__out;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__period;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt;
X_UnInt32 _plant_vbr_variable_load1_irms1_rms_calc_fast__var_zc;
double _plant_vbr_variable_load1_irms1_rms_calc_slow__var_rms;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__period;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt;
X_UnInt32 _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_zc;
double _plant_vbr_variable_load1_vrms1_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _plant_vbr_variable_load1_irms1_rt1_output__state;
double _plant_vbr_variable_load1_irms1_rt2_output__state;
double _plant_vbr_variable_load1_vrms1_rt1_output__state;
double _plant_vbr_variable_load1_vrms1_rt2_output__state;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s_state;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt_state;
double _plant_vbr_variable_load1_irms1_rms_calc_fast__period_state;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s_state;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt_state;
double _plant_vbr_variable_load1_vrms1_rms_calc_fast__period_state;
//@cmp.svar.end

//
// Tunable parameters
//
static struct Tunable_params {
} __attribute__((__packed__)) tunable_params;

void *tunable_params_dev0_cpu2_ptr = &tunable_params;

// Dll function pointers
#if defined(_WIN64)
#else
// Define handles for loading dlls
#endif








// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _plant_vbr_variable_load1_irms1_rt1_output__state =  0.0;
    _plant_vbr_variable_load1_irms1_rt2_output__state =  0.0;
    _plant_vbr_variable_load1_vrms1_rt1_output__state =  0.0;
    _plant_vbr_variable_load1_vrms1_rt2_output__state =  0.0;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s_state = 0;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__period_state = 0.0f;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt_state = 0.0f;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state = 0;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s_state = 0;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__period_state = 0.0f;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt_state = 0.0f;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    //@cmp.init.block.end
}


// Dll function pointers and dll reload function
#if defined(_WIN64)
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}

#else
// Define method for reloading dll functions
void ReloadDllFunctions_sys_sp_cpu0_dev0(void) {
    // Load each library and setup function pointers
}

void FreeDllFunctions_sys_sp_cpu0_dev0(void) {
}
#endif

void load_fmi_libraries_sys_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}


void ReInit_sp_scope_sys_sp_cpu0_dev0() {
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

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
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
    // Generated from the component: Plant.VBR Variable Load1.Irms1.instantaneous
    _plant_vbr_variable_load1_irms1_instantaneous__out = (HIL_InFloat(0xc80000 + 0x1b));
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.instantaneous
    _plant_vbr_variable_load1_vrms1_instantaneous__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rms_calc_fast
    _plant_vbr_variable_load1_irms1_rms_calc_fast__v_sq_sum_state = _plant_vbr_variable_load1_irms1_rms_calc_fast__v_sq_sum_state + _plant_vbr_variable_load1_irms1_instantaneous__out * _plant_vbr_variable_load1_irms1_instantaneous__out;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt = (_plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt_state * 0.909 + _plant_vbr_variable_load1_irms1_instantaneous__out * 0.0909);
    if((_plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt >= 0.0f) && (_plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt_state < 0.0f)) {
        _plant_vbr_variable_load1_irms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _plant_vbr_variable_load1_irms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_plant_vbr_variable_load1_irms1_rms_calc_fast__var_zc == 1) || (5000 == _plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state)) {
        _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s_state = _plant_vbr_variable_load1_irms1_rms_calc_fast__v_sq_sum_state;
        _plant_vbr_variable_load1_irms1_rms_calc_fast__period_state = (double)_plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state;
        _plant_vbr_variable_load1_irms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s = _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s_state;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__period = _plant_vbr_variable_load1_irms1_rms_calc_fast__period_state;
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rms_calc_fast
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__v_sq_sum_state = _plant_vbr_variable_load1_vrms1_rms_calc_fast__v_sq_sum_state + _plant_vbr_variable_load1_vrms1_instantaneous__out * _plant_vbr_variable_load1_vrms1_instantaneous__out;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt = (_plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt_state * 0.909 + _plant_vbr_variable_load1_vrms1_instantaneous__out * 0.0909);
    if((_plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt >= 0.0f) && (_plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt_state < 0.0f)) {
        _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_zc = 1;
    }
    else {
        _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_plant_vbr_variable_load1_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s_state = _plant_vbr_variable_load1_vrms1_rms_calc_fast__v_sq_sum_state;
        _plant_vbr_variable_load1_vrms1_rms_calc_fast__period_state = (double)_plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state;
        _plant_vbr_variable_load1_vrms1_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s = _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s_state;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__period = _plant_vbr_variable_load1_vrms1_rms_calc_fast__period_state;
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rt1.Input
    _plant_vbr_variable_load1_irms1_rt1_output__state = _plant_vbr_variable_load1_irms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rt2.Input
    _plant_vbr_variable_load1_irms1_rt2_output__state = _plant_vbr_variable_load1_irms1_rms_calc_fast__period;
    // Generated from the component: Plant.VBR Variable Load1.Irms1.t1
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rt1.Input
    _plant_vbr_variable_load1_vrms1_rt1_output__state = _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_eff_s;
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rt2.Input
    _plant_vbr_variable_load1_vrms1_rt2_output__state = _plant_vbr_variable_load1_vrms1_rms_calc_fast__period;
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.t1
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rms_calc_fast
    if ((_plant_vbr_variable_load1_irms1_rms_calc_fast__var_zc == 1) || (5000 == _plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state)) {
        _plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt_state = _plant_vbr_variable_load1_irms1_rms_calc_fast__var_filt;
    _plant_vbr_variable_load1_irms1_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rms_calc_fast
    if ((_plant_vbr_variable_load1_vrms1_rms_calc_fast__var_zc == 1) || (5000 == _plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state)) {
        _plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt_state = _plant_vbr_variable_load1_vrms1_rms_calc_fast__var_filt;
    _plant_vbr_variable_load1_vrms1_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
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
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rt1.Output
    _plant_vbr_variable_load1_irms1_rt1_output__out = _plant_vbr_variable_load1_irms1_rt1_output__state;
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rt2.Output
    _plant_vbr_variable_load1_irms1_rt2_output__out = _plant_vbr_variable_load1_irms1_rt2_output__state;
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rt1.Output
    _plant_vbr_variable_load1_vrms1_rt1_output__out = _plant_vbr_variable_load1_vrms1_rt1_output__state;
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rt2.Output
    _plant_vbr_variable_load1_vrms1_rt2_output__out = _plant_vbr_variable_load1_vrms1_rt2_output__state;
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rms_calc_slow
    if(_plant_vbr_variable_load1_irms1_rt2_output__out > 0.0f) {
        _plant_vbr_variable_load1_irms1_rms_calc_slow__var_rms = sqrt(_plant_vbr_variable_load1_irms1_rt1_output__out / _plant_vbr_variable_load1_irms1_rt2_output__out);
    }
    else {
        _plant_vbr_variable_load1_irms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rms_calc_slow
    if(_plant_vbr_variable_load1_vrms1_rt2_output__out > 0.0f) {
        _plant_vbr_variable_load1_vrms1_rms_calc_slow__var_rms = sqrt(_plant_vbr_variable_load1_vrms1_rt1_output__out / _plant_vbr_variable_load1_vrms1_rt2_output__out);
    }
    else {
        _plant_vbr_variable_load1_vrms1_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Plant.VBR Variable Load1.Irms1.rms
    HIL_OutAO(0x4000, (float)_plant_vbr_variable_load1_irms1_rms_calc_slow__var_rms);
    // Generated from the component: Plant.VBR Variable Load1.Vrms1.rms
    HIL_OutAO(0x4001, (float)_plant_vbr_variable_load1_vrms1_rms_calc_slow__var_rms);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------