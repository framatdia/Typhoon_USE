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






































































































double  _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__b1c [ ] =  {} ;

double  _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__a0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__b0c [ ] =  {} ;
double  _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__b1c [ ] =  {} ;




































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables





// const variables

//@cmp.var.start
// variables
double _controller_clock2__out;
double _controller_constant1__out = 0.0;
double _controller_constant2__out = 0.0;
double _controller_scada_input1__out;
double _controller_step1__out;
double _controller_step2__out;
double _controller_step3__out;
double _controller_unit_delay1__out;
double _controller_unit_delay2__out;
double _controller_unit_delay3__out;
double _controller_vsg_a_constant1__out = 0.0;
double _controller_vsg_a_constant2__out = 1.0;
double _controller_vsg_a_step1__out;
double _controller_vsg_b_constant1__out = 0.0;
double _controller_vsg_b_constant2__out = 1.0;
double _controller_vsg_b_constant3__out = 0.0;
double _controller_vsg_b_step1__out;
double _controller_vsg_b1_constant1__out = 0.0;
double _controller_vsg_b1_constant2__out = 1.0;
double _controller_vsg_b1_constant3__out = 0.0;
double _controller_vsg_b1_step1__out;
double _controller_current_ctrl_constant1__out = 0.0;
double _controller_current_ctrl_constant2__out = 0.0;
double _controller_current_ctrl_constant3__out = 0.0;
double _controller_current_ctrl_subsystem6_step1__out;
double _controller_current_ctrl_subsystem7_step1__out;
double _controller_current_ctrl_subsystem8_step1__out;
double _plant_step1__out;
double _plant_vdc_va1__out;
double _plant_contactor__out;
double _plant_is_a_ia1__out;
double _plant_is_a1_ia1__out;
double _plant_is_b_ia1__out;
double _plant_is_c_ia1__out;
double _plant_v_sb_va1__out;
double _plant_vs_a_va1__out;
double _plant_vs_c_va1__out;
double _p_m_a_ref__out;
double _p_m_b_ref__out;
double _p_m_c_ref__out;
double _q_s_a_ref__out;
double _q_s_b_ref__out;
double _q_s_c_ref__out;
double _plant_c_function1__t;

double _plant_c_function1__delta_t;
double _plant_c_function1__f;
double _plant_c_function1__omega;
double _plant_c_function1__vga;
double _plant_c_function1__vgb;
double _plant_c_function1__vgc;

double _controller_current_ctrl_subsystem6_integrator1__out;
double _controller_current_ctrl_subsystem7_integrator1__out;
double _controller_current_ctrl_subsystem8_integrator1__out;
X_UnInt32 _plant_half_bridge1_pwm_modulator__channels[1] = {0};
double _plant_half_bridge1_pwm_modulator__limited_in[1];

double _controller_bus_join11__out[3];
double _controller_bus_join12__out[3];
double _controller_gain2__out;
double _controller_gain4__out;
double _controller_gain6__out;
double _controller_gain3__out;
double _controller_gain5__out;
double _controller_gain7__out;
double _controller_current_ctrl_c_function_abc_to_dq1__abc[3];
double _controller_current_ctrl_c_function_abc_to_dq1__theta;

double _controller_current_ctrl_c_function_abc_to_dq1__d;
double _controller_current_ctrl_c_function_abc_to_dq1__q;

double _controller_current_ctrl_c_function_pll__abc[3];

double _controller_current_ctrl_c_function_pll__d;
double _controller_current_ctrl_c_function_pll__e_d;
double _controller_current_ctrl_c_function_pll__e_q;
double _controller_current_ctrl_c_function_pll__omega_pll;
double _controller_current_ctrl_c_function_pll__q;
double _controller_current_ctrl_c_function_pll__theta_pll;

double _controller_current_ctrl_c_function_abc_to_dq2__abc[3];
double _controller_current_ctrl_c_function_abc_to_dq2__theta;

double _controller_current_ctrl_c_function_abc_to_dq2__d;
double _controller_current_ctrl_c_function_abc_to_dq2__q;

double _controller_signal_switch1__out;
double _controller_signal_switch2__out;
double _controller_signal_switch3__out;
double _controller_vsg_a_gain1__out;
double _controller_current_ctrl_subsystem6_product1__out;
double _controller_current_ctrl_subsystem7_product1__out;
double _controller_current_ctrl_subsystem8_product1__out;
double _controller_gain1__out;
double _controller_gain8__out;
double _controller_gain9__out;
double _controller_vsg_a_signal_switch1__out;
double _controller_current_ctrl_subsystem6_discrete_transfer_function2__out;
double _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0};
double _controller_current_ctrl_subsystem6_discrete_transfer_function2__a_coeff[2] = {1.0, -1.0};
double _controller_current_ctrl_subsystem6_discrete_transfer_function2__a_sum;
double _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_sum;
double _controller_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__out;
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0};
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__a_coeff[2] = {1.0, -1.0};
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__a_sum;
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_sum;
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__out;
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[2] = {5e-05, 0.0};
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__a_coeff[2] = {1.0, -1.0};
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__a_sum;
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_sum;
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y;

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__fc;
double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u;

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y;

double _controller_virtual_3ph3w_gain2__out;
double _controller_virtual_3ph3w_gain1__out;
double _controller_virtual_3ph3w_gain4__out;
double _controller_virtual_3ph3w_gain3__out;
double _controller_virtual_3ph3w_gain6__out;
double _controller_virtual_3ph3w_gain5__out;
double _controller_virtual_3ph3w_bus_join18__out[2];
double _controller_virtual_3ph3w_bus_join17__out[2];
double _controller_virtual_3ph3w_bus_join20__out[2];
double _controller_virtual_3ph3w_bus_join19__out[2];
double _controller_virtual_3ph3w_bus_join22__out[2];
double _controller_virtual_3ph3w_bus_join21__out[2];
double _controller_vsg_a_c_function_vsg__is_albe[2];
double _controller_vsg_a_c_function_vsg__omega_base;
double _controller_vsg_a_c_function_vsg__p_m_ref;
double _controller_vsg_a_c_function_vsg__q_s_ref;
double _controller_vsg_a_c_function_vsg__time;
double _controller_vsg_a_c_function_vsg__vs_albe[2];

double _controller_vsg_a_c_function_vsg__e;
double _controller_vsg_a_c_function_vsg__e_dq[2];
double _controller_vsg_a_c_function_vsg__is_d;
double _controller_vsg_a_c_function_vsg__is_dq_ref[2];
double _controller_vsg_a_c_function_vsg__is_dq_ref_fil[2];
double _controller_vsg_a_c_function_vsg__is_q;
double _controller_vsg_a_c_function_vsg__omega_vsg;
double _controller_vsg_a_c_function_vsg__p_s;
double _controller_vsg_a_c_function_vsg__q_s;
double _controller_vsg_a_c_function_vsg__theta_vsg;
double _controller_vsg_a_c_function_vsg__vs_d;
double _controller_vsg_a_c_function_vsg__vs_q;

double _controller_vsg_b_c_function_dq_to_abc1__dq[2];
double _controller_vsg_b_c_function_dq_to_abc1__theta;

double _controller_vsg_b_c_function_dq_to_abc1__a;
double _controller_vsg_b_c_function_dq_to_abc1__b;
double _controller_vsg_b_c_function_dq_to_abc1__c;

double _controller_vsg_b1_c_function_dq_to_abc1__dq[2];
double _controller_vsg_b1_c_function_dq_to_abc1__theta;

double _controller_vsg_b1_c_function_dq_to_abc1__a;
double _controller_vsg_b1_c_function_dq_to_abc1__b;
double _controller_vsg_b1_c_function_dq_to_abc1__c;

double _controller_vsg_a_bus_join11__out[2];
double _controller_vsg_a_bus_join14__out[2];
double _controller_vsg_a_c_function_dq_to_abc__dq[2];
double _controller_vsg_a_c_function_dq_to_abc__theta;

double _controller_vsg_a_c_function_dq_to_abc__a;
double _controller_vsg_a_c_function_dq_to_abc__b;
double _controller_vsg_a_c_function_dq_to_abc__c;

double _controller_vsg_b_bus_join17__out[3];
double _controller_vsg_b1_bus_join17__out[3];
double _controller_vsg_a_bus_join15__out[3];
double _controller_vsg_b_c_function_pll__abc[3];

double _controller_vsg_b_c_function_pll__d;
double _controller_vsg_b_c_function_pll__e_d;
double _controller_vsg_b_c_function_pll__e_q;
double _controller_vsg_b_c_function_pll__omega_pll;
double _controller_vsg_b_c_function_pll__q;
double _controller_vsg_b_c_function_pll__theta_pll;

double _controller_vsg_b1_c_function_pll__abc[3];

double _controller_vsg_b1_c_function_pll__d;
double _controller_vsg_b1_c_function_pll__e_d;
double _controller_vsg_b1_c_function_pll__e_q;
double _controller_vsg_b1_c_function_pll__omega_pll;
double _controller_vsg_b1_c_function_pll__q;
double _controller_vsg_b1_c_function_pll__theta_pll;

double _controller_vsg_a_c_function_abc_to_dq__abc[3];
double _controller_vsg_a_c_function_abc_to_dq__theta;

double _controller_vsg_a_c_function_abc_to_dq__d;
double _controller_vsg_a_c_function_abc_to_dq__q;

double _controller_vsg_b_gain1__out;
double _controller_vsg_b1_gain1__out;
double _controller_vsg_a_bus_join16__out[2];
double _controller_vsg_b_signal_switch1__out;
double _controller_vsg_b1_signal_switch1__out;
double _controller_c_function4__is_albe_ref[2];

double _controller_c_function4__is_ref;

double _controller_vsg_b_c_function_vsg__is_albe[2];
double _controller_vsg_b_c_function_vsg__omega_base;
double _controller_vsg_b_c_function_vsg__p_m_ref;
double _controller_vsg_b_c_function_vsg__q_s_ref;
double _controller_vsg_b_c_function_vsg__time;
double _controller_vsg_b_c_function_vsg__vs_albe[2];

double _controller_vsg_b_c_function_vsg__e;
double _controller_vsg_b_c_function_vsg__e_dq[2];
double _controller_vsg_b_c_function_vsg__is_d;
double _controller_vsg_b_c_function_vsg__is_dq_ref[2];
double _controller_vsg_b_c_function_vsg__is_dq_ref_fil[2];
double _controller_vsg_b_c_function_vsg__is_q;
double _controller_vsg_b_c_function_vsg__omega_vsg;
double _controller_vsg_b_c_function_vsg__p_s;
double _controller_vsg_b_c_function_vsg__q_s;
double _controller_vsg_b_c_function_vsg__theta_vsg;
double _controller_vsg_b_c_function_vsg__vs_d;
double _controller_vsg_b_c_function_vsg__vs_q;

double _controller_vsg_b1_c_function_vsg__is_albe[2];
double _controller_vsg_b1_c_function_vsg__omega_base;
double _controller_vsg_b1_c_function_vsg__p_m_ref;
double _controller_vsg_b1_c_function_vsg__q_s_ref;
double _controller_vsg_b1_c_function_vsg__time;
double _controller_vsg_b1_c_function_vsg__vs_albe[2];

double _controller_vsg_b1_c_function_vsg__e;
double _controller_vsg_b1_c_function_vsg__e_dq[2];
double _controller_vsg_b1_c_function_vsg__is_d;
double _controller_vsg_b1_c_function_vsg__is_dq_ref[2];
double _controller_vsg_b1_c_function_vsg__is_dq_ref_fil[2];
double _controller_vsg_b1_c_function_vsg__is_q;
double _controller_vsg_b1_c_function_vsg__omega_vsg;
double _controller_vsg_b1_c_function_vsg__p_s;
double _controller_vsg_b1_c_function_vsg__q_s;
double _controller_vsg_b1_c_function_vsg__theta_vsg;
double _controller_vsg_b1_c_function_vsg__vs_d;
double _controller_vsg_b1_c_function_vsg__vs_q;

double _controller_gain10__out;
double _controller_vsg_b_bus_join11__out[2];
double _controller_vsg_b_bus_join14__out[2];
double _controller_vsg_b_c_function_dq_to_abc__dq[2];
double _controller_vsg_b_c_function_dq_to_abc__theta;

double _controller_vsg_b_c_function_dq_to_abc__a;
double _controller_vsg_b_c_function_dq_to_abc__b;
double _controller_vsg_b_c_function_dq_to_abc__c;

double _controller_vsg_b1_bus_join11__out[2];
double _controller_vsg_b1_bus_join14__out[2];
double _controller_vsg_b1_c_function_dq_to_abc__dq[2];
double _controller_vsg_b1_c_function_dq_to_abc__theta;

double _controller_vsg_b1_c_function_dq_to_abc__a;
double _controller_vsg_b1_c_function_dq_to_abc__b;
double _controller_vsg_b1_c_function_dq_to_abc__c;

double _controller_product3__out;
double _controller_vsg_b_bus_join15__out[3];
double _controller_vsg_b1_bus_join15__out[3];
double _controller_vsg_b_c_function_abc_to_dq__abc[3];
double _controller_vsg_b_c_function_abc_to_dq__theta;

double _controller_vsg_b_c_function_abc_to_dq__d;
double _controller_vsg_b_c_function_abc_to_dq__q;

double _controller_vsg_b1_c_function_abc_to_dq__abc[3];
double _controller_vsg_b1_c_function_abc_to_dq__theta;

double _controller_vsg_b1_c_function_abc_to_dq__d;
double _controller_vsg_b1_c_function_abc_to_dq__q;

double _controller_vsg_b_bus_join16__out[2];
double _controller_vsg_b1_bus_join16__out[2];
double _controller_c_function5__is_albe_ref[2];

double _controller_c_function5__is_ref;

double _controller_c_function6__is_albe_ref[2];

double _controller_c_function6__is_ref;

double _controller_gain11__out;
double _controller_bus_join10__out[3];
double _controller_gain12__out;
double _controller_product4__out;
double _controller_current_ctrl_bus_split1__out;
double _controller_current_ctrl_bus_split1__out1;
double _controller_current_ctrl_bus_split1__out2;
double _controller_current_ctrl_c_function_abc_to_dq__abc[3];
double _controller_current_ctrl_c_function_abc_to_dq__theta;

double _controller_current_ctrl_c_function_abc_to_dq__d;
double _controller_current_ctrl_c_function_abc_to_dq__q;

double _controller_product5__out;
double _controller_current_ctrl_sum1__out;
double _controller_current_ctrl_sum2__out;
double _controller_current_ctrl_sum5__out;
double _controller_bus_join14__out[3];
double _controller_current_ctrl_sum8__out;
double _controller_current_ctrl_gain1__out;
double _controller_current_ctrl_subsystem6_gain1__out;
double _controller_current_ctrl_gain3__out;
double _controller_current_ctrl_subsystem7_gain1__out;
double _plant_bus_split1__out;
double _plant_bus_split1__out1;
double _plant_bus_split1__out2;
double _controller_current_ctrl_gain5__out;
double _controller_current_ctrl_subsystem8_gain1__out;
double _controller_current_ctrl_sum3__out;
double _controller_current_ctrl_subsystem6_sum1__out;
double _controller_current_ctrl_sum6__out;
double _controller_current_ctrl_subsystem7_sum1__out;
X_UnInt32 _plant_half_bridge2_pwm_modulator__channels[1] = {1};
double _plant_half_bridge2_pwm_modulator__limited_in[1];

X_UnInt32 _plant_half_bridge3_pwm_modulator__channels[1] = {2};
double _plant_half_bridge3_pwm_modulator__limited_in[1];

X_UnInt32 _plant_half_bridge4_pwm_modulator__channels[1] = {3};
double _plant_half_bridge4_pwm_modulator__limited_in[1];

double _controller_current_ctrl_sum9__out;
double _controller_current_ctrl_subsystem8_sum1__out;
double _controller_current_ctrl_sum4__out;
double _controller_current_ctrl_sum7__out;
double _controller_current_ctrl_gain6__out;
double _controller_current_ctrl_gain2__out;
double _controller_current_ctrl_gain4__out;
double _controller_current_ctrl_product4__out;
double _controller_current_ctrl_product2__out;
double _controller_current_ctrl_product3__out;
double _controller_current_ctrl_bus_join1__out[2];
double _controller_c_function_dq_to_abc1__dq[2];
double _controller_c_function_dq_to_abc1__theta;

double _controller_c_function_dq_to_abc1__a;
double _controller_c_function_dq_to_abc1__b;
double _controller_c_function_dq_to_abc1__c;

double _controller_bus_join13__out[3];
//@cmp.var.end

//@cmp.svar.start
// state variables
double _controller_clock2__state;
double _controller_step1__state;
double _controller_step2__state;
double _controller_step3__state;
double _controller_unit_delay1__state;
double _controller_unit_delay2__state;
double _controller_unit_delay3__state;
double _controller_vsg_a_step1__state;
double _controller_vsg_b_step1__state;
double _controller_vsg_b1_step1__state;
double _controller_current_ctrl_subsystem6_step1__state;
double _controller_current_ctrl_subsystem7_step1__state;
double _controller_current_ctrl_subsystem8_step1__state;
double _plant_step1__state;
double _plant_contactor__state;
double _plant_c_function1__theta;




double _controller_current_ctrl_subsystem6_integrator1__state;
double _controller_current_ctrl_subsystem6_integrator1__reset_state;
double _controller_current_ctrl_subsystem7_integrator1__state;
double _controller_current_ctrl_subsystem7_integrator1__reset_state;
double _controller_current_ctrl_subsystem8_integrator1__state;
double _controller_current_ctrl_subsystem8_integrator1__reset_state;



double _controller_current_ctrl_c_function_pll__y_q;

double _controller_current_ctrl_c_function_pll__theta;

double _controller_current_ctrl_c_function_pll__y_d;







double _controller_current_ctrl_subsystem6_discrete_transfer_function2__states[1];
double _controller_current_ctrl_subsystem7_discrete_transfer_function2__states[1];
double _controller_current_ctrl_subsystem8_discrete_transfer_function2__states[1];
double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__load_ic;
double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old_2[1];

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next;

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A;

X_Int32 _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i;

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc;

double _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws;




X_UnInt32 _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__load_ic;
double _controller_vsg_a_c_function_vsg__x_p;

double _controller_vsg_a_c_function_vsg__x_q;

double _controller_vsg_a_c_function_vsg__theta;

double _controller_vsg_a_c_function_vsg__x_isd;

double _controller_vsg_a_c_function_vsg__x_isq;

double _controller_vsg_a_c_function_vsg__e_p;

double _controller_vsg_a_c_function_vsg__e_q;













double _controller_vsg_b_c_function_pll__y_q;

double _controller_vsg_b_c_function_pll__theta;

double _controller_vsg_b_c_function_pll__y_d;




double _controller_vsg_b1_c_function_pll__y_q;

double _controller_vsg_b1_c_function_pll__theta;

double _controller_vsg_b1_c_function_pll__y_d;










double _controller_vsg_b_c_function_vsg__x_p;

double _controller_vsg_b_c_function_vsg__x_q;

double _controller_vsg_b_c_function_vsg__theta;

double _controller_vsg_b_c_function_vsg__x_isd;

double _controller_vsg_b_c_function_vsg__x_isq;

double _controller_vsg_b_c_function_vsg__e_p;

double _controller_vsg_b_c_function_vsg__e_q;




double _controller_vsg_b1_c_function_vsg__x_p;

double _controller_vsg_b1_c_function_vsg__x_q;

double _controller_vsg_b1_c_function_vsg__theta;

double _controller_vsg_b1_c_function_vsg__x_isd;

double _controller_vsg_b1_c_function_vsg__x_isq;

double _controller_vsg_b1_c_function_vsg__e_p;

double _controller_vsg_b1_c_function_vsg__e_q;




























//@cmp.svar.end

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
    _controller_clock2__state = 0.0f;
    _controller_step1__state = 0x0;
    _controller_step2__state = 0x0;
    _controller_step3__state = 0x0;
    _controller_unit_delay1__state = 0.0;
    _controller_unit_delay2__state = 0.0;
    _controller_unit_delay3__state = 0.0;
    _controller_vsg_a_step1__state = 0x0;
    _controller_vsg_b_step1__state = 0x0;
    _controller_vsg_b1_step1__state = 0x0;
    _controller_current_ctrl_subsystem6_step1__state = 0x0;
    _controller_current_ctrl_subsystem7_step1__state = 0x0;
    _controller_current_ctrl_subsystem8_step1__state = 0x0;
    _plant_step1__state = 0x0;
    _plant_contactor__state = 0x0;
    {
        _plant_c_function1__theta = 0.0 ;
    }
    _controller_current_ctrl_subsystem6_integrator1__state = 0.0;
    _controller_current_ctrl_subsystem6_integrator1__reset_state = 2;
    _controller_current_ctrl_subsystem7_integrator1__state = 0.0;
    _controller_current_ctrl_subsystem7_integrator1__reset_state = 2;
    _controller_current_ctrl_subsystem8_integrator1__state = 0.0;
    _controller_current_ctrl_subsystem8_integrator1__reset_state = 2;
    HIL_OutInt32(0x2000080 + _plant_half_bridge1_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_half_bridge1_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_half_bridge1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_half_bridge1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_half_bridge1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_half_bridge1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_half_bridge1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x1);
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutFloat(137101312, 0.0);
    HIL_OutFloat(137101313, 0.0);
    HIL_OutFloat(137101314, 0.0);
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    {
    }
    {
        _controller_current_ctrl_c_function_pll__y_q = 0 ;
        _controller_current_ctrl_c_function_pll__y_d = 0 ;
        _controller_current_ctrl_c_function_pll__theta = 0 ;
    }
    {
    }
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    X_UnInt32 _controller_current_ctrl_subsystem6_discrete_transfer_function2__i;
    for (_controller_current_ctrl_subsystem6_discrete_transfer_function2__i = 0; _controller_current_ctrl_subsystem6_discrete_transfer_function2__i < 1; _controller_current_ctrl_subsystem6_discrete_transfer_function2__i++) {
        _controller_current_ctrl_subsystem6_discrete_transfer_function2__states[_controller_current_ctrl_subsystem6_discrete_transfer_function2__i] = 0;
    }
    X_UnInt32 _controller_current_ctrl_subsystem7_discrete_transfer_function2__i;
    for (_controller_current_ctrl_subsystem7_discrete_transfer_function2__i = 0; _controller_current_ctrl_subsystem7_discrete_transfer_function2__i < 1; _controller_current_ctrl_subsystem7_discrete_transfer_function2__i++) {
        _controller_current_ctrl_subsystem7_discrete_transfer_function2__states[_controller_current_ctrl_subsystem7_discrete_transfer_function2__i] = 0;
    }
    X_UnInt32 _controller_current_ctrl_subsystem8_discrete_transfer_function2__i;
    for (_controller_current_ctrl_subsystem8_discrete_transfer_function2__i = 0; _controller_current_ctrl_subsystem8_discrete_transfer_function2__i < 1; _controller_current_ctrl_subsystem8_discrete_transfer_function2__i++) {
        _controller_current_ctrl_subsystem8_discrete_transfer_function2__states[_controller_current_ctrl_subsystem8_discrete_transfer_function2__i] = 0;
    }
    _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__load_ic = 1;
    _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__load_ic = 1;
    HIL_OutAO(0x4002, 0.0f);
    {
        _controller_vsg_a_c_function_vsg__x_p = 0.0 ;
        _controller_vsg_a_c_function_vsg__x_q = 0.0 ;
        _controller_vsg_a_c_function_vsg__theta = 0.0 ;
        _controller_vsg_a_c_function_vsg__x_isd = 0.0 ;
        _controller_vsg_a_c_function_vsg__x_isq = 0.0 ;
        _controller_vsg_a_c_function_vsg__e_p = 0.0 ;
        _controller_vsg_a_c_function_vsg__e_q = 0.0 ;
    }
    {
    }
    {
    }
    {
    }
    HIL_OutAO(0x4010, 0.0f);
    {
        _controller_vsg_b_c_function_pll__y_q = 0 ;
        _controller_vsg_b_c_function_pll__y_d = 0 ;
        _controller_vsg_b_c_function_pll__theta = 0 ;
    }
    {
        _controller_vsg_b1_c_function_pll__y_q = 0 ;
        _controller_vsg_b1_c_function_pll__y_d = 0 ;
        _controller_vsg_b1_c_function_pll__theta = 0 ;
    }
    {
    }
    HIL_OutAO(0x4000, 0.0f);
    {
    }
    {
        _controller_vsg_b_c_function_vsg__x_p = 0.0 ;
        _controller_vsg_b_c_function_vsg__x_q = 0.0 ;
        _controller_vsg_b_c_function_vsg__theta = 0.0 ;
        _controller_vsg_b_c_function_vsg__x_isd = 0.0 ;
        _controller_vsg_b_c_function_vsg__x_isq = 0.0 ;
        _controller_vsg_b_c_function_vsg__e_p = 0.0 ;
        _controller_vsg_b_c_function_vsg__e_q = 0.0 ;
    }
    {
        _controller_vsg_b1_c_function_vsg__x_p = 0.0 ;
        _controller_vsg_b1_c_function_vsg__x_q = 0.0 ;
        _controller_vsg_b1_c_function_vsg__theta = 0.0 ;
        _controller_vsg_b1_c_function_vsg__x_isd = 0.0 ;
        _controller_vsg_b1_c_function_vsg__x_isq = 0.0 ;
        _controller_vsg_b1_c_function_vsg__e_p = 0.0 ;
        _controller_vsg_b1_c_function_vsg__e_q = 0.0 ;
    }
    HIL_OutAO(0x400c, 0.0f);
    {
    }
    HIL_OutAO(0x4011, 0.0f);
    {
    }
    HIL_OutAO(0x4012, 0.0f);
    {
    }
    {
    }
    {
    }
    {
    }
    HIL_OutAO(0x400d, 0.0f);
    HIL_OutAO(0x400e, 0.0f);
    {
    }
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutInt32(0x2000080 + _plant_half_bridge2_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_half_bridge2_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_half_bridge2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_half_bridge2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_half_bridge2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_half_bridge2_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_half_bridge2_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x2);
    HIL_OutInt32(0x2000080 + _plant_half_bridge3_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_half_bridge3_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_half_bridge3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_half_bridge3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_half_bridge3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_half_bridge3_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_half_bridge3_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x4);
    HIL_OutInt32(0x2000080 + _plant_half_bridge4_pwm_modulator__channels[0], 20000);
    HIL_OutInt32(0x20000c0 + _plant_half_bridge4_pwm_modulator__channels[0], 40);
    HIL_OutInt32(0x20001c0 + _plant_half_bridge4_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _plant_half_bridge4_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _plant_half_bridge4_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000300 + _plant_half_bridge4_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000340 + _plant_half_bridge4_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000140, 0x8);
    HIL_OutAO(0x400b, 0.0f);
    {
    }
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
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
    // Generated from the component: Controller.Constant1
    // Generated from the component: Controller.Constant2
    // Generated from the component: Controller.VSG_a.Constant1
    // Generated from the component: Controller.VSG_a.Constant2
    // Generated from the component: Controller.VSG_b.Constant1
    // Generated from the component: Controller.VSG_b.Constant2
    // Generated from the component: Controller.VSG_b.Constant3
    // Generated from the component: Controller.VSG_b1.Constant1
    // Generated from the component: Controller.VSG_b1.Constant2
    // Generated from the component: Controller.VSG_b1.Constant3
    // Generated from the component: Controller.current_ctrl.Constant1
    // Generated from the component: Controller.current_ctrl.Constant2
    // Generated from the component: Controller.current_ctrl.Constant3
//////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Controller.Clock2
    _controller_clock2__out = _controller_clock2__state;
    // Generated from the component: Controller.Step1
    if (_controller_step1__state < 3.0) {
        _controller_step1__out = 0.0;
    } else {
        _controller_step1__out = 1.0;
    }
    // Generated from the component: Controller.Step2
    if (_controller_step2__state < 3.0) {
        _controller_step2__out = 0.0;
    } else {
        _controller_step2__out = 1.0;
    }
    // Generated from the component: Controller.Step3
    if (_controller_step3__state < 3.0) {
        _controller_step3__out = 0.0;
    } else {
        _controller_step3__out = 1.0;
    }
    // Generated from the component: Controller.Unit Delay1
    _controller_unit_delay1__out = _controller_unit_delay1__state;
    // Generated from the component: Controller.Unit Delay2
    _controller_unit_delay2__out = _controller_unit_delay2__state;
    // Generated from the component: Controller.Unit Delay3
    _controller_unit_delay3__out = _controller_unit_delay3__state;
    // Generated from the component: Controller.VSG_a.Step1
    if (_controller_vsg_a_step1__state < 3.0) {
        _controller_vsg_a_step1__out = 0.0;
    } else {
        _controller_vsg_a_step1__out = 1.0;
    }
    // Generated from the component: Controller.VSG_b.Step1
    if (_controller_vsg_b_step1__state < 3.0) {
        _controller_vsg_b_step1__out = 0.0;
    } else {
        _controller_vsg_b_step1__out = 1.0;
    }
    // Generated from the component: Controller.VSG_b1.Step1
    if (_controller_vsg_b1_step1__state < 3.0) {
        _controller_vsg_b1_step1__out = 0.0;
    } else {
        _controller_vsg_b1_step1__out = 1.0;
    }
    // Generated from the component: Controller.current_ctrl.Subsystem6.Step1
    if (_controller_current_ctrl_subsystem6_step1__state < 0.1) {
        _controller_current_ctrl_subsystem6_step1__out = 0.0;
    } else {
        _controller_current_ctrl_subsystem6_step1__out = 1.0;
    }
    // Generated from the component: Controller.current_ctrl.Subsystem7.Step1
    if (_controller_current_ctrl_subsystem7_step1__state < 0.1) {
        _controller_current_ctrl_subsystem7_step1__out = 0.0;
    } else {
        _controller_current_ctrl_subsystem7_step1__out = 1.0;
    }
    // Generated from the component: Controller.current_ctrl.Subsystem8.Step1
    if (_controller_current_ctrl_subsystem8_step1__state < 0.1) {
        _controller_current_ctrl_subsystem8_step1__out = 0.0;
    } else {
        _controller_current_ctrl_subsystem8_step1__out = 1.0;
    }
    // Generated from the component: Plant.Step1
    if (_plant_step1__state < 0.1) {
        _plant_step1__out = 0.0;
    } else {
        _plant_step1__out = 1.0;
    }
    // Generated from the component: Plant.VDC.Va1
    _plant_vdc_va1__out = (HIL_InFloat(0xc80000 + 0xa));
    // Generated from the component: Plant.contactor
    if (_plant_contactor__state < 0.1) {
        _plant_contactor__out = 0.0;
    } else {
        _plant_contactor__out = 1.0;
    }
    // Generated from the component: Plant.is_a.Ia1
    _plant_is_a_ia1__out = (HIL_InFloat(0xc80000 + 0xf));
    // Generated from the component: Plant.is_a1.Ia1
    _plant_is_a1_ia1__out = (HIL_InFloat(0xc80000 + 0x10));
    // Generated from the component: Plant.is_b.Ia1
    _plant_is_b_ia1__out = (HIL_InFloat(0xc80000 + 0x11));
    // Generated from the component: Plant.is_c.Ia1
    _plant_is_c_ia1__out = (HIL_InFloat(0xc80000 + 0x12));
    // Generated from the component: Plant.v_sb.Va1
    _plant_v_sb_va1__out = (HIL_InFloat(0xc80000 + 0xb));
    // Generated from the component: Plant.vs_a.Va1
    _plant_vs_a_va1__out = (HIL_InFloat(0xc80000 + 0xc));
    // Generated from the component: Plant.vs_c.Va1
    _plant_vs_c_va1__out = (HIL_InFloat(0xc80000 + 0xd));
    // Generated from the component: p_m_a_ref
    _p_m_a_ref__out = XIo_InFloat(0x2f800004);
    // Generated from the component: p_m_b_ref
    _p_m_b_ref__out = XIo_InFloat(0x2f800008);
    // Generated from the component: p_m_c_ref
    _p_m_c_ref__out = XIo_InFloat(0x2f80000c);
    // Generated from the component: q_s_a_ref
    _q_s_a_ref__out = XIo_InFloat(0x2f800010);
    // Generated from the component: q_s_b_ref
    _q_s_b_ref__out = XIo_InFloat(0x2f800014);
    // Generated from the component: q_s_c_ref
    _q_s_c_ref__out = XIo_InFloat(0x2f800018);
    // Generated from the component: Plant.C function1
    _plant_c_function1__t = _controller_clock2__out;
    {
        _plant_c_function1__omega = 2.0 * M_PI * 50.0 ;
        _plant_c_function1__f = _plant_c_function1__omega / ( 2.0 * M_PI ) ;
        _plant_c_function1__delta_t = 0.0 ;
        _plant_c_function1__vga = 326.5 * sin ( _plant_c_function1__omega * _plant_c_function1__t ) ;
        _plant_c_function1__vgb = 326.5 * sin ( _plant_c_function1__omega * _plant_c_function1__t - 2.0 * M_PI / 3.0 ) ;
        _plant_c_function1__vgc = 326.5 * sin ( _plant_c_function1__omega * _plant_c_function1__t + 2.0 * M_PI / 3.0 ) ;
        if ( _plant_c_function1__t < 3.0 )     {
            _plant_c_function1__omega = 2.0 * M_PI * 50.0 ;
        }
        if ( _plant_c_function1__t >= 4.0 )     {
            _plant_c_function1__delta_t = _plant_c_function1__t - 4.0 ;
            _plant_c_function1__omega = 2.0 * M_PI * 50.0 - 2.0 * M_PI * 0.5 * _plant_c_function1__delta_t ;
        }
        if ( _plant_c_function1__t >= 5.0 )     {
            _plant_c_function1__omega = 2.0 * M_PI * 49.5 ;
        }
        _plant_c_function1__vga = 326.5 * sin ( _plant_c_function1__theta ) ;
        _plant_c_function1__vgb = 326.5 * sin ( _plant_c_function1__theta - 2.0 * M_PI / 3.0 ) ;
        _plant_c_function1__vgc = 326.5 * sin ( _plant_c_function1__theta + 2.0 * M_PI / 3.0 ) ;
    }
    // Generated from the component: Controller.current_ctrl.Subsystem6.Integrator1
    if ((_controller_current_ctrl_subsystem6_step1__out > 0.0) && (_controller_current_ctrl_subsystem6_integrator1__reset_state <= 0)) {
        _controller_current_ctrl_subsystem6_integrator1__state = 0.0;
    }
    _controller_current_ctrl_subsystem6_integrator1__out = _controller_current_ctrl_subsystem6_integrator1__state;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Integrator1
    if ((_controller_current_ctrl_subsystem7_step1__out > 0.0) && (_controller_current_ctrl_subsystem7_integrator1__reset_state <= 0)) {
        _controller_current_ctrl_subsystem7_integrator1__state = 0.0;
    }
    _controller_current_ctrl_subsystem7_integrator1__out = _controller_current_ctrl_subsystem7_integrator1__state;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Integrator1
    if ((_controller_current_ctrl_subsystem8_step1__out > 0.0) && (_controller_current_ctrl_subsystem8_integrator1__reset_state <= 0)) {
        _controller_current_ctrl_subsystem8_integrator1__state = 0.0;
    }
    _controller_current_ctrl_subsystem8_integrator1__out = _controller_current_ctrl_subsystem8_integrator1__state;
    // Generated from the component: Plant.Half Bridge1.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Half Bridge1.PWM_Modulator
    _plant_half_bridge1_pwm_modulator__limited_in[0] = MIN(MAX(_controller_constant2__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_half_bridge1_pwm_modulator__channels[0], ((X_UnInt32)((_plant_half_bridge1_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_step1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge1_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge1_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x1);
    // Generated from the component: Plant.Half Bridge2.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Half Bridge3.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.Half Bridge4.IGBT Leg global gds ovs.termination1
    // Generated from the component: Plant.S1.Triple S1 ideal.CTC_Wrapper
    if (_plant_contactor__out == 0x0) {
        HIL_OutInt32(0x8240480, 0x0);
    }
    else {
        HIL_OutInt32(0x8240480, 0x1);
    }
    // Generated from the component: is_a
    HIL_OutAO(0x4015, (float)_plant_is_a_ia1__out);
    // Generated from the component: is_n
    HIL_OutAO(0x4018, (float)_plant_is_a1_ia1__out);
    // Generated from the component: is_b
    HIL_OutAO(0x4016, (float)_plant_is_b_ia1__out);
    // Generated from the component: Controller.Bus Join11
    _controller_bus_join11__out[0] = _plant_is_a_ia1__out;
    _controller_bus_join11__out[1] = _plant_is_b_ia1__out;
    _controller_bus_join11__out[2] = _plant_is_c_ia1__out;
    // Generated from the component: is_c
    HIL_OutAO(0x4017, (float)_plant_is_c_ia1__out);
    // Generated from the component: vs_b
    HIL_OutAO(0x401a, (float)_plant_v_sb_va1__out);
    // Generated from the component: Controller.Virtual 3ph3w.vs_a_al
    HIL_OutAO(0x4001, (float)_plant_vs_a_va1__out);
    // Generated from the component: vs_a
    HIL_OutAO(0x4019, (float)_plant_vs_a_va1__out);
    // Generated from the component: Controller.Bus Join12
    _controller_bus_join12__out[0] = _plant_vs_a_va1__out;
    _controller_bus_join12__out[1] = _plant_v_sb_va1__out;
    _controller_bus_join12__out[2] = _plant_vs_c_va1__out;
    // Generated from the component: vs_c
    HIL_OutAO(0x401b, (float)_plant_vs_c_va1__out);
    // Generated from the component: Controller.Gain2
    _controller_gain2__out = 3.0 * _p_m_a_ref__out;
    // Generated from the component: Controller.Gain4
    _controller_gain4__out = 3.0 * _p_m_b_ref__out;
    // Generated from the component: Controller.Gain6
    _controller_gain6__out = 3.0 * _p_m_c_ref__out;
    // Generated from the component: Controller.Gain3
    _controller_gain3__out = 3.0 * _q_s_a_ref__out;
    // Generated from the component: Controller.Gain5
    _controller_gain5__out = 3.0 * _q_s_b_ref__out;
    // Generated from the component: Controller.Gain7
    _controller_gain7__out = 3.0 * _q_s_c_ref__out;
    // Generated from the component: Plant.Termination1
    // Generated from the component: Plant.Vsp1.Vs1
    HIL_OutFloat(137101312, (float) _plant_c_function1__vga);
    // Generated from the component: Plant.Vsp2.Vs1
    HIL_OutFloat(137101313, (float) _plant_c_function1__vgb);
    // Generated from the component: Plant.Vsp3.Vs1
    HIL_OutFloat(137101314, (float) _plant_c_function1__vgc);
    // Generated from the component: Plant.f_grid
    HIL_OutAO(0x4013, (float)_plant_c_function1__f);
    // Generated from the component: Plant.omega_grid
    HIL_OutAO(0x4014, (float)_plant_c_function1__omega);
    // Generated from the component: Controller.current_ctrl.C function abc to dq1
    _controller_current_ctrl_c_function_abc_to_dq1__abc[0] = _controller_bus_join11__out[0];
    _controller_current_ctrl_c_function_abc_to_dq1__abc[1] = _controller_bus_join11__out[1];
    _controller_current_ctrl_c_function_abc_to_dq1__abc[2] = _controller_bus_join11__out[2];
    _controller_current_ctrl_c_function_abc_to_dq1__theta = _controller_current_ctrl_constant2__out;
    {
        _controller_current_ctrl_c_function_abc_to_dq1__d = 2.0 / 3.0 * ( cos ( _controller_current_ctrl_c_function_abc_to_dq1__theta ) * _controller_current_ctrl_c_function_abc_to_dq1__abc [ 0 ] + cos ( _controller_current_ctrl_c_function_abc_to_dq1__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq1__abc [ 1 ] + cos ( _controller_current_ctrl_c_function_abc_to_dq1__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq1__abc [ 2 ] ) ;
        _controller_current_ctrl_c_function_abc_to_dq1__q = 2.0 / 3.0 * ( - sin ( _controller_current_ctrl_c_function_abc_to_dq1__theta ) * _controller_current_ctrl_c_function_abc_to_dq1__abc [ 0 ] - sin ( _controller_current_ctrl_c_function_abc_to_dq1__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq1__abc [ 1 ] - sin ( _controller_current_ctrl_c_function_abc_to_dq1__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq1__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.current_ctrl.C function PLL
    _controller_current_ctrl_c_function_pll__abc[0] = _controller_bus_join12__out[0];
    _controller_current_ctrl_c_function_pll__abc[1] = _controller_bus_join12__out[1];
    _controller_current_ctrl_c_function_pll__abc[2] = _controller_bus_join12__out[2];
    {
        _controller_current_ctrl_c_function_pll__d = 2.0 / 3.0 * ( cos ( _controller_current_ctrl_c_function_pll__theta ) * _controller_current_ctrl_c_function_pll__abc [ 0 ] + cos ( _controller_current_ctrl_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_pll__abc [ 1 ] + cos ( _controller_current_ctrl_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_pll__abc [ 2 ] ) ;
        _controller_current_ctrl_c_function_pll__q = 2.0 / 3.0 * ( - sin ( _controller_current_ctrl_c_function_pll__theta ) * _controller_current_ctrl_c_function_pll__abc [ 0 ] - sin ( _controller_current_ctrl_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_pll__abc [ 1 ] - sin ( _controller_current_ctrl_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_pll__abc [ 2 ] ) ;
        _controller_current_ctrl_c_function_pll__e_d = _controller_current_ctrl_c_function_pll__d ;
        _controller_current_ctrl_c_function_pll__omega_pll = 1.8 * _controller_current_ctrl_c_function_pll__e_d + _controller_current_ctrl_c_function_pll__y_d ;
        _controller_current_ctrl_c_function_pll__theta_pll = _controller_current_ctrl_c_function_pll__theta ;
    }
    // Generated from the component: Controller.current_ctrl.C function abc to dq2
    _controller_current_ctrl_c_function_abc_to_dq2__abc[0] = _controller_bus_join12__out[0];
    _controller_current_ctrl_c_function_abc_to_dq2__abc[1] = _controller_bus_join12__out[1];
    _controller_current_ctrl_c_function_abc_to_dq2__abc[2] = _controller_bus_join12__out[2];
    _controller_current_ctrl_c_function_abc_to_dq2__theta = _controller_current_ctrl_constant3__out;
    {
        _controller_current_ctrl_c_function_abc_to_dq2__d = 2.0 / 3.0 * ( cos ( _controller_current_ctrl_c_function_abc_to_dq2__theta ) * _controller_current_ctrl_c_function_abc_to_dq2__abc [ 0 ] + cos ( _controller_current_ctrl_c_function_abc_to_dq2__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq2__abc [ 1 ] + cos ( _controller_current_ctrl_c_function_abc_to_dq2__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq2__abc [ 2 ] ) ;
        _controller_current_ctrl_c_function_abc_to_dq2__q = 2.0 / 3.0 * ( - sin ( _controller_current_ctrl_c_function_abc_to_dq2__theta ) * _controller_current_ctrl_c_function_abc_to_dq2__abc [ 0 ] - sin ( _controller_current_ctrl_c_function_abc_to_dq2__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq2__abc [ 1 ] - sin ( _controller_current_ctrl_c_function_abc_to_dq2__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq2__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.current_ctrl.is_al
    HIL_OutAO(0x4003, (float)_controller_current_ctrl_c_function_abc_to_dq1__d);
    // Generated from the component: Controller.current_ctrl.is_be
    HIL_OutAO(0x4005, (float)_controller_current_ctrl_c_function_abc_to_dq1__q);
    // Generated from the component: Controller.Signal switch1
    _controller_signal_switch1__out = (_controller_step1__out > 0.5f) ? _controller_unit_delay1__out : _controller_current_ctrl_c_function_pll__omega_pll;
    // Generated from the component: Controller.Signal switch2
    _controller_signal_switch2__out = (_controller_step2__out > 0.5f) ? _controller_unit_delay2__out : _controller_current_ctrl_c_function_pll__omega_pll;
    // Generated from the component: Controller.Signal switch3
    _controller_signal_switch3__out = (_controller_step3__out > 0.5f) ? _controller_unit_delay3__out : _controller_current_ctrl_c_function_pll__omega_pll;
    // Generated from the component: Controller.VSG_a.Gain1
    _controller_vsg_a_gain1__out = 0.0031830988618379067 * _controller_current_ctrl_c_function_pll__omega_pll;
    // Generated from the component: Controller.current_ctrl.Subsystem6.Product1
    _controller_current_ctrl_subsystem6_product1__out = (_controller_current_ctrl_c_function_pll__omega_pll * _controller_current_ctrl_c_function_pll__omega_pll * _controller_current_ctrl_subsystem6_integrator1__out);
    // Generated from the component: Controller.current_ctrl.Subsystem7.Product1
    _controller_current_ctrl_subsystem7_product1__out = (_controller_current_ctrl_c_function_pll__omega_pll * _controller_current_ctrl_c_function_pll__omega_pll * _controller_current_ctrl_subsystem7_integrator1__out);
    // Generated from the component: Controller.current_ctrl.Subsystem8.Product1
    _controller_current_ctrl_subsystem8_product1__out = (_controller_current_ctrl_c_function_pll__omega_pll * _controller_current_ctrl_c_function_pll__omega_pll * _controller_current_ctrl_subsystem8_integrator1__out);
    // Generated from the component: Controller.current_ctrl.Termination3
    // Generated from the component: Controller.current_ctrl.Termination4
    // Generated from the component: Controller.current_ctrl.Termination5
    // Generated from the component: Controller.omega_pll
    HIL_OutAO(0x400f, (float)_controller_current_ctrl_c_function_pll__omega_pll);
    // Generated from the component: Controller.Gain1
    _controller_gain1__out = 0.15915494309189535 * _controller_signal_switch1__out;
    // Generated from the component: Controller.Gain8
    _controller_gain8__out = 0.15915494309189535 * _controller_signal_switch2__out;
    // Generated from the component: Controller.Gain9
    _controller_gain9__out = 0.15915494309189535 * _controller_signal_switch3__out;
    // Generated from the component: Controller.VSG_a.Signal switch1
    _controller_vsg_a_signal_switch1__out = (_controller_vsg_a_step1__out > 0.5f) ? _controller_vsg_a_constant2__out : _controller_vsg_a_gain1__out;
    // Generated from the component: Controller.current_ctrl.Subsystem6.Discrete Transfer Function2
    X_UnInt32 _controller_current_ctrl_subsystem6_discrete_transfer_function2__i;
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__a_sum = 0.0f;
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_sum = 0.0f;
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_controller_current_ctrl_subsystem6_discrete_transfer_function2__i = 0; _controller_current_ctrl_subsystem6_discrete_transfer_function2__i < 1; _controller_current_ctrl_subsystem6_discrete_transfer_function2__i++) {
        _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_sum += _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[_controller_current_ctrl_subsystem6_discrete_transfer_function2__i + 1] * _controller_current_ctrl_subsystem6_discrete_transfer_function2__states[_controller_current_ctrl_subsystem6_discrete_transfer_function2__i];
    }
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__a_sum += _controller_current_ctrl_subsystem6_discrete_transfer_function2__states[0] * _controller_current_ctrl_subsystem6_discrete_transfer_function2__a_coeff[1];
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in = _controller_current_ctrl_subsystem6_product1__out - _controller_current_ctrl_subsystem6_discrete_transfer_function2__a_sum;
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_sum += _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_coeff[0] * _controller_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__out = _controller_current_ctrl_subsystem6_discrete_transfer_function2__b_sum;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Discrete Transfer Function2
    X_UnInt32 _controller_current_ctrl_subsystem7_discrete_transfer_function2__i;
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__a_sum = 0.0f;
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_sum = 0.0f;
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_controller_current_ctrl_subsystem7_discrete_transfer_function2__i = 0; _controller_current_ctrl_subsystem7_discrete_transfer_function2__i < 1; _controller_current_ctrl_subsystem7_discrete_transfer_function2__i++) {
        _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_sum += _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[_controller_current_ctrl_subsystem7_discrete_transfer_function2__i + 1] * _controller_current_ctrl_subsystem7_discrete_transfer_function2__states[_controller_current_ctrl_subsystem7_discrete_transfer_function2__i];
    }
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__a_sum += _controller_current_ctrl_subsystem7_discrete_transfer_function2__states[0] * _controller_current_ctrl_subsystem7_discrete_transfer_function2__a_coeff[1];
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in = _controller_current_ctrl_subsystem7_product1__out - _controller_current_ctrl_subsystem7_discrete_transfer_function2__a_sum;
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_sum += _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_coeff[0] * _controller_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__out = _controller_current_ctrl_subsystem7_discrete_transfer_function2__b_sum;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Discrete Transfer Function2
    X_UnInt32 _controller_current_ctrl_subsystem8_discrete_transfer_function2__i;
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__a_sum = 0.0f;
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_sum = 0.0f;
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in = 0.0f;
    for (_controller_current_ctrl_subsystem8_discrete_transfer_function2__i = 0; _controller_current_ctrl_subsystem8_discrete_transfer_function2__i < 1; _controller_current_ctrl_subsystem8_discrete_transfer_function2__i++) {
        _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_sum += _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[_controller_current_ctrl_subsystem8_discrete_transfer_function2__i + 1] * _controller_current_ctrl_subsystem8_discrete_transfer_function2__states[_controller_current_ctrl_subsystem8_discrete_transfer_function2__i];
    }
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__a_sum += _controller_current_ctrl_subsystem8_discrete_transfer_function2__states[0] * _controller_current_ctrl_subsystem8_discrete_transfer_function2__a_coeff[1];
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in = _controller_current_ctrl_subsystem8_product1__out - _controller_current_ctrl_subsystem8_discrete_transfer_function2__a_sum;
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_sum += _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_coeff[0] * _controller_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__out = _controller_current_ctrl_subsystem8_discrete_transfer_function2__b_sum;
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter1.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__fc = _controller_gain1__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u = _plant_vs_a_va1__out;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter3.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__fc = _controller_gain1__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u = _plant_is_a_ia1__out;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter5.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__fc = _controller_gain8__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u = _plant_v_sb_va1__out;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter7.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__fc = _controller_gain8__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u = _plant_is_b_ia1__out;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter11.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__fc = _controller_gain9__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u = _plant_vs_c_va1__out;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter9.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__fc = _controller_gain9__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u = _plant_is_c_ia1__out;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter2.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__fc = _controller_gain1__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u = _controller_virtual_3ph3w_advanced_low_pass_filter1_internal_filter__y;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter4.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__fc = _controller_gain1__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u = _controller_virtual_3ph3w_advanced_low_pass_filter3_internal_filter__y;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter6.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__fc = _controller_gain8__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u = _controller_virtual_3ph3w_advanced_low_pass_filter5_internal_filter__y;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter8.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__fc = _controller_gain8__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u = _controller_virtual_3ph3w_advanced_low_pass_filter7_internal_filter__y;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter12.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__fc = _controller_gain9__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u = _controller_virtual_3ph3w_advanced_low_pass_filter11_internal_filter__y;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter10.Internal filter
    _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__fc = _controller_gain9__out;
    _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u = _controller_virtual_3ph3w_advanced_low_pass_filter9_internal_filter__y;
    if (_controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__load_ic == 1) {
        // dynamic init
        {
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u ;
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i = 0 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A = 2 / 5e-05 ;
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__fc * M_PI ;
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * 0.0 ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i < 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ++ )     {
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = 0 ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = 0 ;
            }
        }
        // update init flag
        _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__load_ic = 0;
    }
    {
        double  K , a0 , a1 , a2 , b0 , b1 , b2 , c0 , c1 , d0 , d1;
        _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__fc * M_PI ;
        _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * 0.0 ;
        if ( 1 % 2 == 0 )     {
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i = 1 ; _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i <= ( 1 / 2 ) ; _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * b1 + b0 ) ) ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next ;
        }
        else     {
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u ;
            for ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i = 0 ; _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i <= ( 1 - 1 ) / 2 ; _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ++ )         {
                if ( strcmp ( "Basic" , "Basic" ) == 0 )             {
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Butterworth" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i + 1 - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 1 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    b1 = - 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * cos ( theta ) ;
                    b2 = 1 ;
                    c0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev1" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc , 1 ) / ( 0.0 * pow ( 2 , 1 - 1 ) ) ;
                    a0 = 1 ;
                    a1 = 0 ;
                    a2 = 0 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * 0.0 * sin ( theta ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__wc * 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Chebyshev2" ) == 0 )             {
                    double  theta = ( ( 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ) * M_PI ) / ( 2 * 1 );
                    K = 0.0 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws * 1 ;
                    a0 = pow ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws / cos ( theta ) , 2 ) ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b1 = 2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws * 0.0 * sin ( theta ) / ( pow ( 0.0 * sin ( theta ) , 2 ) + pow ( 0.0 * cos ( theta ) , 2 ) ) ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__ws / 0.0 ;
                    d1 = 1 ;
                }
                else if ( strcmp ( "Basic" , "Elliptic" ) == 0 )             {
                    K = 0.0 ;
                    a0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__a0c [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ] ;
                    a1 = 0 ;
                    a2 = 1 ;
                    b0 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__b0c [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ] ;
                    b1 = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__b1c [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i - 1 ] ;
                    b2 = 1 ;
                    c0 = 1 ;
                    c1 = 0 ;
                    d0 = 0.0 ;
                    d1 = 1 ;
                }
                if ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i == 0 )             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y = ( 1 / ( d1 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + d0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next * ( c1 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + c0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( c0 - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * c1 ) - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( d0 - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * d1 ) ) ;
                }
                else             {
                    _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y = ( 1 / ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + b1 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + b0 ) ) * ( _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + a1 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( - 2 * a2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + 2 * a0 ) + _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( a2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * a1 + a0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( - 2 * b2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A + 2 * b0 ) - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] * ( b2 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A - _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__A * b1 + b0 ) ) ;
                }
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old_2 [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__u_old [ _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__i ] = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next ;
                _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next = _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y ;
            }
            _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y = K * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y_next ;
        }
    }
    // Generated from the component: Controller.Virtual 3ph3w.Gain2
    _controller_virtual_3ph3w_gain2__out = 2.0 * _controller_virtual_3ph3w_advanced_low_pass_filter2_internal_filter__y;
    // Generated from the component: Controller.Virtual 3ph3w.Gain1
    _controller_virtual_3ph3w_gain1__out = 2.0 * _controller_virtual_3ph3w_advanced_low_pass_filter4_internal_filter__y;
    // Generated from the component: Controller.Virtual 3ph3w.Gain4
    _controller_virtual_3ph3w_gain4__out = 2.0 * _controller_virtual_3ph3w_advanced_low_pass_filter6_internal_filter__y;
    // Generated from the component: Controller.Virtual 3ph3w.Gain3
    _controller_virtual_3ph3w_gain3__out = 2.0 * _controller_virtual_3ph3w_advanced_low_pass_filter8_internal_filter__y;
    // Generated from the component: Controller.Virtual 3ph3w.Gain6
    _controller_virtual_3ph3w_gain6__out = 2.0 * _controller_virtual_3ph3w_advanced_low_pass_filter12_internal_filter__y;
    // Generated from the component: Controller.Virtual 3ph3w.Gain5
    _controller_virtual_3ph3w_gain5__out = 2.0 * _controller_virtual_3ph3w_advanced_low_pass_filter10_internal_filter__y;
    // Generated from the component: Controller.Virtual 3ph3w.Bus Join18
    _controller_virtual_3ph3w_bus_join18__out[0] = _plant_vs_a_va1__out;
    _controller_virtual_3ph3w_bus_join18__out[1] = _controller_virtual_3ph3w_gain2__out;
    // Generated from the component: Controller.Virtual 3ph3w.vs_a_be
    HIL_OutAO(0x4002, (float)_controller_virtual_3ph3w_gain2__out);
    // Generated from the component: Controller.Virtual 3ph3w.Bus Join17
    _controller_virtual_3ph3w_bus_join17__out[0] = _plant_is_a_ia1__out;
    _controller_virtual_3ph3w_bus_join17__out[1] = _controller_virtual_3ph3w_gain1__out;
    // Generated from the component: Controller.Virtual 3ph3w.Bus Join20
    _controller_virtual_3ph3w_bus_join20__out[0] = _plant_v_sb_va1__out;
    _controller_virtual_3ph3w_bus_join20__out[1] = _controller_virtual_3ph3w_gain4__out;
    // Generated from the component: Controller.Virtual 3ph3w.Bus Join19
    _controller_virtual_3ph3w_bus_join19__out[0] = _plant_is_b_ia1__out;
    _controller_virtual_3ph3w_bus_join19__out[1] = _controller_virtual_3ph3w_gain3__out;
    // Generated from the component: Controller.Virtual 3ph3w.Bus Join22
    _controller_virtual_3ph3w_bus_join22__out[0] = _plant_vs_c_va1__out;
    _controller_virtual_3ph3w_bus_join22__out[1] = _controller_virtual_3ph3w_gain6__out;
    // Generated from the component: Controller.Virtual 3ph3w.Bus Join21
    _controller_virtual_3ph3w_bus_join21__out[0] = _plant_is_c_ia1__out;
    _controller_virtual_3ph3w_bus_join21__out[1] = _controller_virtual_3ph3w_gain5__out;
    // Generated from the component: Controller.VSG_a.C function VSG
    _controller_vsg_a_c_function_vsg__is_albe[0] = _controller_virtual_3ph3w_bus_join17__out[0];
    _controller_vsg_a_c_function_vsg__is_albe[1] = _controller_virtual_3ph3w_bus_join17__out[1];
    _controller_vsg_a_c_function_vsg__omega_base = _controller_vsg_a_signal_switch1__out;
    _controller_vsg_a_c_function_vsg__p_m_ref = _controller_gain2__out;
    _controller_vsg_a_c_function_vsg__q_s_ref = _controller_gain3__out;
    _controller_vsg_a_c_function_vsg__time = _controller_clock2__out;
    _controller_vsg_a_c_function_vsg__vs_albe[0] = _controller_virtual_3ph3w_bus_join18__out[0];
    _controller_vsg_a_c_function_vsg__vs_albe[1] = _controller_virtual_3ph3w_bus_join18__out[1];
    {
        _controller_vsg_a_c_function_vsg__is_d = _controller_vsg_a_c_function_vsg__is_albe [ 0 ] * cos ( _controller_vsg_a_c_function_vsg__theta ) + _controller_vsg_a_c_function_vsg__is_albe [ 1 ] * sin ( _controller_vsg_a_c_function_vsg__theta ) ;
        _controller_vsg_a_c_function_vsg__is_q = - _controller_vsg_a_c_function_vsg__is_albe [ 0 ] * sin ( _controller_vsg_a_c_function_vsg__theta ) + _controller_vsg_a_c_function_vsg__is_albe [ 1 ] * cos ( _controller_vsg_a_c_function_vsg__theta ) ;
        _controller_vsg_a_c_function_vsg__vs_d = _controller_vsg_a_c_function_vsg__vs_albe [ 0 ] * cos ( _controller_vsg_a_c_function_vsg__theta ) + _controller_vsg_a_c_function_vsg__vs_albe [ 1 ] * sin ( _controller_vsg_a_c_function_vsg__theta ) ;
        _controller_vsg_a_c_function_vsg__vs_q = - _controller_vsg_a_c_function_vsg__vs_albe [ 0 ] * sin ( _controller_vsg_a_c_function_vsg__theta ) + _controller_vsg_a_c_function_vsg__vs_albe [ 1 ] * cos ( _controller_vsg_a_c_function_vsg__theta ) ;
        _controller_vsg_a_c_function_vsg__p_s = ( _controller_vsg_a_c_function_vsg__is_d * _controller_vsg_a_c_function_vsg__vs_d + _controller_vsg_a_c_function_vsg__is_q * _controller_vsg_a_c_function_vsg__vs_q ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _controller_vsg_a_c_function_vsg__q_s = ( _controller_vsg_a_c_function_vsg__is_d * _controller_vsg_a_c_function_vsg__vs_q - _controller_vsg_a_c_function_vsg__is_q * _controller_vsg_a_c_function_vsg__vs_d ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _controller_vsg_a_c_function_vsg__omega_vsg = ( 0.01 * _controller_vsg_a_c_function_vsg__e_p + _controller_vsg_a_c_function_vsg__x_p + _controller_vsg_a_c_function_vsg__omega_base ) * 2.0 * M_PI * 50.0 ;
        _controller_vsg_a_c_function_vsg__theta_vsg = _controller_vsg_a_c_function_vsg__theta ;
        _controller_vsg_a_c_function_vsg__e = 1.0 + 0.1 * _controller_vsg_a_c_function_vsg__e_q + _controller_vsg_a_c_function_vsg__x_q ;
        _controller_vsg_a_c_function_vsg__e_dq [ 0 ] = 0 ;
        _controller_vsg_a_c_function_vsg__e_dq [ 1 ] = - _controller_vsg_a_c_function_vsg__e * 326.5986323710904 ;
        _controller_vsg_a_c_function_vsg__is_dq_ref [ 0 ] = - 40.824829046386306 * ( 0.2 * _controller_vsg_a_c_function_vsg__e + 0.0 * _controller_vsg_a_c_function_vsg__vs_d / 326.5986323710904 + 0.2 * _controller_vsg_a_c_function_vsg__vs_q / 326.5986323710904 ) / ( pow ( 0.0 , 2 ) + pow ( 0.2 , 2 ) ) ;
        _controller_vsg_a_c_function_vsg__is_dq_ref [ 1 ] = - 40.824829046386306 * ( 0.0 * _controller_vsg_a_c_function_vsg__e + 0.0 * _controller_vsg_a_c_function_vsg__vs_q / 326.5986323710904 - 0.2 * _controller_vsg_a_c_function_vsg__vs_d / 326.5986323710904 ) / ( pow ( 0.0 , 2 ) + pow ( 0.2 , 2 ) ) ;
        _controller_vsg_a_c_function_vsg__is_dq_ref_fil [ 0 ] = _controller_vsg_a_c_function_vsg__x_isd ;
        _controller_vsg_a_c_function_vsg__is_dq_ref_fil [ 1 ] = _controller_vsg_a_c_function_vsg__x_isq ;
    }
    // Generated from the component: Controller.VSG_b.C function dq to abc1
    _controller_vsg_b_c_function_dq_to_abc1__dq[0] = _controller_virtual_3ph3w_bus_join20__out[0];
    _controller_vsg_b_c_function_dq_to_abc1__dq[1] = _controller_virtual_3ph3w_bus_join20__out[1];
    _controller_vsg_b_c_function_dq_to_abc1__theta = _controller_vsg_b_constant3__out;
    {
        _controller_vsg_b_c_function_dq_to_abc1__a = cos ( _controller_vsg_b_c_function_dq_to_abc1__theta ) * _controller_vsg_b_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_vsg_b_c_function_dq_to_abc1__theta ) * _controller_vsg_b_c_function_dq_to_abc1__dq [ 1 ] ;
        _controller_vsg_b_c_function_dq_to_abc1__b = cos ( _controller_vsg_b_c_function_dq_to_abc1__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_vsg_b_c_function_dq_to_abc1__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc1__dq [ 1 ] ;
        _controller_vsg_b_c_function_dq_to_abc1__c = cos ( _controller_vsg_b_c_function_dq_to_abc1__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_vsg_b_c_function_dq_to_abc1__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: Controller.VSG_b1.C function dq to abc1
    _controller_vsg_b1_c_function_dq_to_abc1__dq[0] = _controller_virtual_3ph3w_bus_join22__out[0];
    _controller_vsg_b1_c_function_dq_to_abc1__dq[1] = _controller_virtual_3ph3w_bus_join22__out[1];
    _controller_vsg_b1_c_function_dq_to_abc1__theta = _controller_vsg_b1_constant3__out;
    {
        _controller_vsg_b1_c_function_dq_to_abc1__a = cos ( _controller_vsg_b1_c_function_dq_to_abc1__theta ) * _controller_vsg_b1_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_vsg_b1_c_function_dq_to_abc1__theta ) * _controller_vsg_b1_c_function_dq_to_abc1__dq [ 1 ] ;
        _controller_vsg_b1_c_function_dq_to_abc1__b = cos ( _controller_vsg_b1_c_function_dq_to_abc1__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_vsg_b1_c_function_dq_to_abc1__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc1__dq [ 1 ] ;
        _controller_vsg_b1_c_function_dq_to_abc1__c = cos ( _controller_vsg_b1_c_function_dq_to_abc1__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_vsg_b1_c_function_dq_to_abc1__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: Controller.VSG_a.Bus Join11
    _controller_vsg_a_bus_join11__out[0] = _controller_vsg_a_c_function_vsg__is_d;
    _controller_vsg_a_bus_join11__out[1] = _controller_vsg_a_c_function_vsg__is_q;
    // Generated from the component: Controller.VSG_a.Bus Join14
    _controller_vsg_a_bus_join14__out[0] = _controller_vsg_a_c_function_vsg__vs_d;
    _controller_vsg_a_bus_join14__out[1] = _controller_vsg_a_c_function_vsg__vs_q;
    // Generated from the component: Controller.VSG_a.C function dq to abc
    _controller_vsg_a_c_function_dq_to_abc__dq[0] = _controller_vsg_a_c_function_vsg__e_dq[0];
    _controller_vsg_a_c_function_dq_to_abc__dq[1] = _controller_vsg_a_c_function_vsg__e_dq[1];
    _controller_vsg_a_c_function_dq_to_abc__theta = _controller_vsg_a_c_function_vsg__theta_vsg;
    {
        _controller_vsg_a_c_function_dq_to_abc__a = cos ( _controller_vsg_a_c_function_dq_to_abc__theta ) * _controller_vsg_a_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_a_c_function_dq_to_abc__theta ) * _controller_vsg_a_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_vsg_a_c_function_dq_to_abc__b = cos ( _controller_vsg_a_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_a_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_vsg_a_c_function_dq_to_abc__c = cos ( _controller_vsg_a_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_a_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: Controller.omega_vsg_a
    HIL_OutAO(0x4010, (float)_controller_vsg_a_c_function_vsg__omega_vsg);
    // Generated from the component: Controller.VSG_b.Bus Join17
    _controller_vsg_b_bus_join17__out[0] = _controller_vsg_b_c_function_dq_to_abc1__a;
    _controller_vsg_b_bus_join17__out[1] = _controller_vsg_b_c_function_dq_to_abc1__b;
    _controller_vsg_b_bus_join17__out[2] = _controller_vsg_b_c_function_dq_to_abc1__c;
    // Generated from the component: Controller.VSG_b1.Bus Join17
    _controller_vsg_b1_bus_join17__out[0] = _controller_vsg_b1_c_function_dq_to_abc1__a;
    _controller_vsg_b1_bus_join17__out[1] = _controller_vsg_b1_c_function_dq_to_abc1__b;
    _controller_vsg_b1_bus_join17__out[2] = _controller_vsg_b1_c_function_dq_to_abc1__c;
    // Generated from the component: Controller.VSG_a.Bus Join15
    _controller_vsg_a_bus_join15__out[0] = _controller_vsg_a_c_function_dq_to_abc__a;
    _controller_vsg_a_bus_join15__out[1] = _controller_vsg_a_c_function_dq_to_abc__b;
    _controller_vsg_a_bus_join15__out[2] = _controller_vsg_a_c_function_dq_to_abc__c;
    // Generated from the component: Controller.VSG_b.C function PLL
    _controller_vsg_b_c_function_pll__abc[0] = _controller_vsg_b_bus_join17__out[0];
    _controller_vsg_b_c_function_pll__abc[1] = _controller_vsg_b_bus_join17__out[1];
    _controller_vsg_b_c_function_pll__abc[2] = _controller_vsg_b_bus_join17__out[2];
    {
        _controller_vsg_b_c_function_pll__d = 2.0 / 3.0 * ( cos ( _controller_vsg_b_c_function_pll__theta ) * _controller_vsg_b_c_function_pll__abc [ 0 ] + cos ( _controller_vsg_b_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_pll__abc [ 1 ] + cos ( _controller_vsg_b_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_pll__abc [ 2 ] ) ;
        _controller_vsg_b_c_function_pll__q = 2.0 / 3.0 * ( - sin ( _controller_vsg_b_c_function_pll__theta ) * _controller_vsg_b_c_function_pll__abc [ 0 ] - sin ( _controller_vsg_b_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_pll__abc [ 1 ] - sin ( _controller_vsg_b_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_pll__abc [ 2 ] ) ;
        _controller_vsg_b_c_function_pll__e_d = _controller_vsg_b_c_function_pll__d ;
        _controller_vsg_b_c_function_pll__omega_pll = 1.8 * _controller_vsg_b_c_function_pll__e_d + _controller_vsg_b_c_function_pll__y_d ;
        _controller_vsg_b_c_function_pll__theta_pll = _controller_vsg_b_c_function_pll__theta ;
    }
    // Generated from the component: Controller.VSG_b1.C function PLL
    _controller_vsg_b1_c_function_pll__abc[0] = _controller_vsg_b1_bus_join17__out[0];
    _controller_vsg_b1_c_function_pll__abc[1] = _controller_vsg_b1_bus_join17__out[1];
    _controller_vsg_b1_c_function_pll__abc[2] = _controller_vsg_b1_bus_join17__out[2];
    {
        _controller_vsg_b1_c_function_pll__d = 2.0 / 3.0 * ( cos ( _controller_vsg_b1_c_function_pll__theta ) * _controller_vsg_b1_c_function_pll__abc [ 0 ] + cos ( _controller_vsg_b1_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_pll__abc [ 1 ] + cos ( _controller_vsg_b1_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_pll__abc [ 2 ] ) ;
        _controller_vsg_b1_c_function_pll__q = 2.0 / 3.0 * ( - sin ( _controller_vsg_b1_c_function_pll__theta ) * _controller_vsg_b1_c_function_pll__abc [ 0 ] - sin ( _controller_vsg_b1_c_function_pll__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_pll__abc [ 1 ] - sin ( _controller_vsg_b1_c_function_pll__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_pll__abc [ 2 ] ) ;
        _controller_vsg_b1_c_function_pll__e_d = _controller_vsg_b1_c_function_pll__d ;
        _controller_vsg_b1_c_function_pll__omega_pll = 1.8 * _controller_vsg_b1_c_function_pll__e_d + _controller_vsg_b1_c_function_pll__y_d ;
        _controller_vsg_b1_c_function_pll__theta_pll = _controller_vsg_b1_c_function_pll__theta ;
    }
    // Generated from the component: Controller.VSG_a.C function abc to dq
    _controller_vsg_a_c_function_abc_to_dq__abc[0] = _controller_vsg_a_bus_join15__out[0];
    _controller_vsg_a_c_function_abc_to_dq__abc[1] = _controller_vsg_a_bus_join15__out[1];
    _controller_vsg_a_c_function_abc_to_dq__abc[2] = _controller_vsg_a_bus_join15__out[2];
    _controller_vsg_a_c_function_abc_to_dq__theta = _controller_vsg_a_constant1__out;
    {
        _controller_vsg_a_c_function_abc_to_dq__d = 2.0 / 3.0 * ( cos ( _controller_vsg_a_c_function_abc_to_dq__theta ) * _controller_vsg_a_c_function_abc_to_dq__abc [ 0 ] + cos ( _controller_vsg_a_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_abc_to_dq__abc [ 1 ] + cos ( _controller_vsg_a_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_abc_to_dq__abc [ 2 ] ) ;
        _controller_vsg_a_c_function_abc_to_dq__q = 2.0 / 3.0 * ( - sin ( _controller_vsg_a_c_function_abc_to_dq__theta ) * _controller_vsg_a_c_function_abc_to_dq__abc [ 0 ] - sin ( _controller_vsg_a_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_abc_to_dq__abc [ 1 ] - sin ( _controller_vsg_a_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_a_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.VSG_b.Gain1
    _controller_vsg_b_gain1__out = 0.0031830988618379067 * _controller_vsg_b_c_function_pll__omega_pll;
    // Generated from the component: Controller.VSG_b.Termination3
    // Generated from the component: Controller.VSG_b.Termination4
    // Generated from the component: Controller.VSG_b.Termination5
    // Generated from the component: Controller.VSG_b.Termination6
    // Generated from the component: Controller.VSG_b.Termination7
    // Generated from the component: Controller.VSG_b1.Gain1
    _controller_vsg_b1_gain1__out = 0.0031830988618379067 * _controller_vsg_b1_c_function_pll__omega_pll;
    // Generated from the component: Controller.VSG_b1.Termination3
    // Generated from the component: Controller.VSG_b1.Termination4
    // Generated from the component: Controller.VSG_b1.Termination5
    // Generated from the component: Controller.VSG_b1.Termination6
    // Generated from the component: Controller.VSG_b1.Termination7
    // Generated from the component: Controller.VSG_a.Bus Join16
    _controller_vsg_a_bus_join16__out[0] = _controller_vsg_a_c_function_abc_to_dq__d;
    _controller_vsg_a_bus_join16__out[1] = _controller_vsg_a_c_function_abc_to_dq__q;
    // Generated from the component: Controller.VSG_a.is_be_ref
    HIL_OutAO(0x4000, (float)_controller_vsg_a_c_function_abc_to_dq__q);
    // Generated from the component: Controller.VSG_b.Signal switch1
    _controller_vsg_b_signal_switch1__out = (_controller_vsg_b_step1__out > 0.5f) ? _controller_vsg_b_constant2__out : _controller_vsg_b_gain1__out;
    // Generated from the component: Controller.VSG_b1.Signal switch1
    _controller_vsg_b1_signal_switch1__out = (_controller_vsg_b1_step1__out > 0.5f) ? _controller_vsg_b1_constant2__out : _controller_vsg_b1_gain1__out;
    // Generated from the component: Controller.C function4
    _controller_c_function4__is_albe_ref[0] = _controller_vsg_a_bus_join16__out[0];
    _controller_c_function4__is_albe_ref[1] = _controller_vsg_a_bus_join16__out[1];
    {
        _controller_c_function4__is_ref = cos ( 0 ) * _controller_c_function4__is_albe_ref [ 0 ] - sin ( 0 ) * _controller_c_function4__is_albe_ref [ 1 ] ;
    }
    // Generated from the component: Controller.VSG_b.C function VSG
    _controller_vsg_b_c_function_vsg__is_albe[0] = _controller_virtual_3ph3w_bus_join19__out[0];
    _controller_vsg_b_c_function_vsg__is_albe[1] = _controller_virtual_3ph3w_bus_join19__out[1];
    _controller_vsg_b_c_function_vsg__omega_base = _controller_vsg_b_signal_switch1__out;
    _controller_vsg_b_c_function_vsg__p_m_ref = _controller_gain4__out;
    _controller_vsg_b_c_function_vsg__q_s_ref = _controller_gain5__out;
    _controller_vsg_b_c_function_vsg__time = _controller_clock2__out;
    _controller_vsg_b_c_function_vsg__vs_albe[0] = _controller_virtual_3ph3w_bus_join20__out[0];
    _controller_vsg_b_c_function_vsg__vs_albe[1] = _controller_virtual_3ph3w_bus_join20__out[1];
    {
        _controller_vsg_b_c_function_vsg__is_d = _controller_vsg_b_c_function_vsg__is_albe [ 0 ] * cos ( _controller_vsg_b_c_function_vsg__theta ) + _controller_vsg_b_c_function_vsg__is_albe [ 1 ] * sin ( _controller_vsg_b_c_function_vsg__theta ) ;
        _controller_vsg_b_c_function_vsg__is_q = - _controller_vsg_b_c_function_vsg__is_albe [ 0 ] * sin ( _controller_vsg_b_c_function_vsg__theta ) + _controller_vsg_b_c_function_vsg__is_albe [ 1 ] * cos ( _controller_vsg_b_c_function_vsg__theta ) ;
        _controller_vsg_b_c_function_vsg__vs_d = _controller_vsg_b_c_function_vsg__vs_albe [ 0 ] * cos ( _controller_vsg_b_c_function_vsg__theta ) + _controller_vsg_b_c_function_vsg__vs_albe [ 1 ] * sin ( _controller_vsg_b_c_function_vsg__theta ) ;
        _controller_vsg_b_c_function_vsg__vs_q = - _controller_vsg_b_c_function_vsg__vs_albe [ 0 ] * sin ( _controller_vsg_b_c_function_vsg__theta ) + _controller_vsg_b_c_function_vsg__vs_albe [ 1 ] * cos ( _controller_vsg_b_c_function_vsg__theta ) ;
        _controller_vsg_b_c_function_vsg__p_s = ( _controller_vsg_b_c_function_vsg__is_d * _controller_vsg_b_c_function_vsg__vs_d + _controller_vsg_b_c_function_vsg__is_q * _controller_vsg_b_c_function_vsg__vs_q ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _controller_vsg_b_c_function_vsg__q_s = ( _controller_vsg_b_c_function_vsg__is_d * _controller_vsg_b_c_function_vsg__vs_q - _controller_vsg_b_c_function_vsg__is_q * _controller_vsg_b_c_function_vsg__vs_d ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _controller_vsg_b_c_function_vsg__omega_vsg = ( 0.01 * _controller_vsg_b_c_function_vsg__e_p + _controller_vsg_b_c_function_vsg__x_p + _controller_vsg_b_c_function_vsg__omega_base ) * 2.0 * M_PI * 50.0 ;
        _controller_vsg_b_c_function_vsg__theta_vsg = _controller_vsg_b_c_function_vsg__theta ;
        _controller_vsg_b_c_function_vsg__e = 1.0 + 0.1 * _controller_vsg_b_c_function_vsg__e_q + _controller_vsg_b_c_function_vsg__x_q ;
        _controller_vsg_b_c_function_vsg__e_dq [ 0 ] = 0 ;
        _controller_vsg_b_c_function_vsg__e_dq [ 1 ] = - _controller_vsg_b_c_function_vsg__e * 326.5986323710904 ;
        _controller_vsg_b_c_function_vsg__is_dq_ref [ 0 ] = - 40.824829046386306 * ( 0.2 * _controller_vsg_b_c_function_vsg__e + 0.0 * _controller_vsg_b_c_function_vsg__vs_d / 326.5986323710904 + 0.2 * _controller_vsg_b_c_function_vsg__vs_q / 326.5986323710904 ) / ( pow ( 0.0 , 2 ) + pow ( 0.2 , 2 ) ) ;
        _controller_vsg_b_c_function_vsg__is_dq_ref [ 1 ] = - 40.824829046386306 * ( 0.0 * _controller_vsg_b_c_function_vsg__e + 0.0 * _controller_vsg_b_c_function_vsg__vs_q / 326.5986323710904 - 0.2 * _controller_vsg_b_c_function_vsg__vs_d / 326.5986323710904 ) / ( pow ( 0.0 , 2 ) + pow ( 0.2 , 2 ) ) ;
        _controller_vsg_b_c_function_vsg__is_dq_ref_fil [ 0 ] = _controller_vsg_b_c_function_vsg__x_isd ;
        _controller_vsg_b_c_function_vsg__is_dq_ref_fil [ 1 ] = _controller_vsg_b_c_function_vsg__x_isq ;
    }
    // Generated from the component: Controller.VSG_b1.C function VSG
    _controller_vsg_b1_c_function_vsg__is_albe[0] = _controller_virtual_3ph3w_bus_join21__out[0];
    _controller_vsg_b1_c_function_vsg__is_albe[1] = _controller_virtual_3ph3w_bus_join21__out[1];
    _controller_vsg_b1_c_function_vsg__omega_base = _controller_vsg_b1_signal_switch1__out;
    _controller_vsg_b1_c_function_vsg__p_m_ref = _controller_gain6__out;
    _controller_vsg_b1_c_function_vsg__q_s_ref = _controller_gain7__out;
    _controller_vsg_b1_c_function_vsg__time = _controller_clock2__out;
    _controller_vsg_b1_c_function_vsg__vs_albe[0] = _controller_virtual_3ph3w_bus_join22__out[0];
    _controller_vsg_b1_c_function_vsg__vs_albe[1] = _controller_virtual_3ph3w_bus_join22__out[1];
    {
        _controller_vsg_b1_c_function_vsg__is_d = _controller_vsg_b1_c_function_vsg__is_albe [ 0 ] * cos ( _controller_vsg_b1_c_function_vsg__theta ) + _controller_vsg_b1_c_function_vsg__is_albe [ 1 ] * sin ( _controller_vsg_b1_c_function_vsg__theta ) ;
        _controller_vsg_b1_c_function_vsg__is_q = - _controller_vsg_b1_c_function_vsg__is_albe [ 0 ] * sin ( _controller_vsg_b1_c_function_vsg__theta ) + _controller_vsg_b1_c_function_vsg__is_albe [ 1 ] * cos ( _controller_vsg_b1_c_function_vsg__theta ) ;
        _controller_vsg_b1_c_function_vsg__vs_d = _controller_vsg_b1_c_function_vsg__vs_albe [ 0 ] * cos ( _controller_vsg_b1_c_function_vsg__theta ) + _controller_vsg_b1_c_function_vsg__vs_albe [ 1 ] * sin ( _controller_vsg_b1_c_function_vsg__theta ) ;
        _controller_vsg_b1_c_function_vsg__vs_q = - _controller_vsg_b1_c_function_vsg__vs_albe [ 0 ] * sin ( _controller_vsg_b1_c_function_vsg__theta ) + _controller_vsg_b1_c_function_vsg__vs_albe [ 1 ] * cos ( _controller_vsg_b1_c_function_vsg__theta ) ;
        _controller_vsg_b1_c_function_vsg__p_s = ( _controller_vsg_b1_c_function_vsg__is_d * _controller_vsg_b1_c_function_vsg__vs_d + _controller_vsg_b1_c_function_vsg__is_q * _controller_vsg_b1_c_function_vsg__vs_q ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _controller_vsg_b1_c_function_vsg__q_s = ( _controller_vsg_b1_c_function_vsg__is_d * _controller_vsg_b1_c_function_vsg__vs_q - _controller_vsg_b1_c_function_vsg__is_q * _controller_vsg_b1_c_function_vsg__vs_d ) / ( 40.824829046386306 * 326.5986323710904 ) ;
        _controller_vsg_b1_c_function_vsg__omega_vsg = ( 0.01 * _controller_vsg_b1_c_function_vsg__e_p + _controller_vsg_b1_c_function_vsg__x_p + _controller_vsg_b1_c_function_vsg__omega_base ) * 2.0 * M_PI * 50.0 ;
        _controller_vsg_b1_c_function_vsg__theta_vsg = _controller_vsg_b1_c_function_vsg__theta ;
        _controller_vsg_b1_c_function_vsg__e = 1.0 + 0.1 * _controller_vsg_b1_c_function_vsg__e_q + _controller_vsg_b1_c_function_vsg__x_q ;
        _controller_vsg_b1_c_function_vsg__e_dq [ 0 ] = 0 ;
        _controller_vsg_b1_c_function_vsg__e_dq [ 1 ] = - _controller_vsg_b1_c_function_vsg__e * 326.5986323710904 ;
        _controller_vsg_b1_c_function_vsg__is_dq_ref [ 0 ] = - 40.824829046386306 * ( 0.2 * _controller_vsg_b1_c_function_vsg__e + 0.0 * _controller_vsg_b1_c_function_vsg__vs_d / 326.5986323710904 + 0.2 * _controller_vsg_b1_c_function_vsg__vs_q / 326.5986323710904 ) / ( pow ( 0.0 , 2 ) + pow ( 0.2 , 2 ) ) ;
        _controller_vsg_b1_c_function_vsg__is_dq_ref [ 1 ] = - 40.824829046386306 * ( 0.0 * _controller_vsg_b1_c_function_vsg__e + 0.0 * _controller_vsg_b1_c_function_vsg__vs_q / 326.5986323710904 - 0.2 * _controller_vsg_b1_c_function_vsg__vs_d / 326.5986323710904 ) / ( pow ( 0.0 , 2 ) + pow ( 0.2 , 2 ) ) ;
        _controller_vsg_b1_c_function_vsg__is_dq_ref_fil [ 0 ] = _controller_vsg_b1_c_function_vsg__x_isd ;
        _controller_vsg_b1_c_function_vsg__is_dq_ref_fil [ 1 ] = _controller_vsg_b1_c_function_vsg__x_isq ;
    }
    // Generated from the component: Controller.Gain10
    _controller_gain10__out = 2.0 * _controller_c_function4__is_ref;
    // Generated from the component: Controller.is_a_ref
    HIL_OutAO(0x400c, (float)_controller_c_function4__is_ref);
    // Generated from the component: Controller.VSG_b.Bus Join11
    _controller_vsg_b_bus_join11__out[0] = _controller_vsg_b_c_function_vsg__is_d;
    _controller_vsg_b_bus_join11__out[1] = _controller_vsg_b_c_function_vsg__is_q;
    // Generated from the component: Controller.VSG_b.Bus Join14
    _controller_vsg_b_bus_join14__out[0] = _controller_vsg_b_c_function_vsg__vs_d;
    _controller_vsg_b_bus_join14__out[1] = _controller_vsg_b_c_function_vsg__vs_q;
    // Generated from the component: Controller.VSG_b.C function dq to abc
    _controller_vsg_b_c_function_dq_to_abc__dq[0] = _controller_vsg_b_c_function_vsg__e_dq[0];
    _controller_vsg_b_c_function_dq_to_abc__dq[1] = _controller_vsg_b_c_function_vsg__e_dq[1];
    _controller_vsg_b_c_function_dq_to_abc__theta = _controller_vsg_b_c_function_vsg__theta_vsg;
    {
        _controller_vsg_b_c_function_dq_to_abc__a = cos ( _controller_vsg_b_c_function_dq_to_abc__theta ) * _controller_vsg_b_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_b_c_function_dq_to_abc__theta ) * _controller_vsg_b_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_vsg_b_c_function_dq_to_abc__b = cos ( _controller_vsg_b_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_b_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_vsg_b_c_function_dq_to_abc__c = cos ( _controller_vsg_b_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_b_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: Controller.omega_vsg_b
    HIL_OutAO(0x4011, (float)_controller_vsg_b_c_function_vsg__omega_vsg);
    // Generated from the component: Controller.VSG_b1.Bus Join11
    _controller_vsg_b1_bus_join11__out[0] = _controller_vsg_b1_c_function_vsg__is_d;
    _controller_vsg_b1_bus_join11__out[1] = _controller_vsg_b1_c_function_vsg__is_q;
    // Generated from the component: Controller.VSG_b1.Bus Join14
    _controller_vsg_b1_bus_join14__out[0] = _controller_vsg_b1_c_function_vsg__vs_d;
    _controller_vsg_b1_bus_join14__out[1] = _controller_vsg_b1_c_function_vsg__vs_q;
    // Generated from the component: Controller.VSG_b1.C function dq to abc
    _controller_vsg_b1_c_function_dq_to_abc__dq[0] = _controller_vsg_b1_c_function_vsg__e_dq[0];
    _controller_vsg_b1_c_function_dq_to_abc__dq[1] = _controller_vsg_b1_c_function_vsg__e_dq[1];
    _controller_vsg_b1_c_function_dq_to_abc__theta = _controller_vsg_b1_c_function_vsg__theta_vsg;
    {
        _controller_vsg_b1_c_function_dq_to_abc__a = cos ( _controller_vsg_b1_c_function_dq_to_abc__theta ) * _controller_vsg_b1_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_b1_c_function_dq_to_abc__theta ) * _controller_vsg_b1_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_vsg_b1_c_function_dq_to_abc__b = cos ( _controller_vsg_b1_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_b1_c_function_dq_to_abc__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc__dq [ 1 ] ;
        _controller_vsg_b1_c_function_dq_to_abc__c = cos ( _controller_vsg_b1_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc__dq [ 0 ] - sin ( _controller_vsg_b1_c_function_dq_to_abc__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_dq_to_abc__dq [ 1 ] ;
    }
    // Generated from the component: Controller.omega_vsg_c
    HIL_OutAO(0x4012, (float)_controller_vsg_b1_c_function_vsg__omega_vsg);
    // Generated from the component: Controller.Product3
    _controller_product3__out = (_controller_gain10__out) * 1.0 / (_plant_vdc_va1__out);
    // Generated from the component: Controller.VSG_b.Bus Join15
    _controller_vsg_b_bus_join15__out[0] = _controller_vsg_b_c_function_dq_to_abc__a;
    _controller_vsg_b_bus_join15__out[1] = _controller_vsg_b_c_function_dq_to_abc__b;
    _controller_vsg_b_bus_join15__out[2] = _controller_vsg_b_c_function_dq_to_abc__c;
    // Generated from the component: Controller.VSG_b1.Bus Join15
    _controller_vsg_b1_bus_join15__out[0] = _controller_vsg_b1_c_function_dq_to_abc__a;
    _controller_vsg_b1_bus_join15__out[1] = _controller_vsg_b1_c_function_dq_to_abc__b;
    _controller_vsg_b1_bus_join15__out[2] = _controller_vsg_b1_c_function_dq_to_abc__c;
    // Generated from the component: Controller.VSG_b.C function abc to dq
    _controller_vsg_b_c_function_abc_to_dq__abc[0] = _controller_vsg_b_bus_join15__out[0];
    _controller_vsg_b_c_function_abc_to_dq__abc[1] = _controller_vsg_b_bus_join15__out[1];
    _controller_vsg_b_c_function_abc_to_dq__abc[2] = _controller_vsg_b_bus_join15__out[2];
    _controller_vsg_b_c_function_abc_to_dq__theta = _controller_vsg_b_constant1__out;
    {
        _controller_vsg_b_c_function_abc_to_dq__d = 2.0 / 3.0 * ( cos ( _controller_vsg_b_c_function_abc_to_dq__theta ) * _controller_vsg_b_c_function_abc_to_dq__abc [ 0 ] + cos ( _controller_vsg_b_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_abc_to_dq__abc [ 1 ] + cos ( _controller_vsg_b_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_abc_to_dq__abc [ 2 ] ) ;
        _controller_vsg_b_c_function_abc_to_dq__q = 2.0 / 3.0 * ( - sin ( _controller_vsg_b_c_function_abc_to_dq__theta ) * _controller_vsg_b_c_function_abc_to_dq__abc [ 0 ] - sin ( _controller_vsg_b_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_abc_to_dq__abc [ 1 ] - sin ( _controller_vsg_b_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.VSG_b1.C function abc to dq
    _controller_vsg_b1_c_function_abc_to_dq__abc[0] = _controller_vsg_b1_bus_join15__out[0];
    _controller_vsg_b1_c_function_abc_to_dq__abc[1] = _controller_vsg_b1_bus_join15__out[1];
    _controller_vsg_b1_c_function_abc_to_dq__abc[2] = _controller_vsg_b1_bus_join15__out[2];
    _controller_vsg_b1_c_function_abc_to_dq__theta = _controller_vsg_b1_constant1__out;
    {
        _controller_vsg_b1_c_function_abc_to_dq__d = 2.0 / 3.0 * ( cos ( _controller_vsg_b1_c_function_abc_to_dq__theta ) * _controller_vsg_b1_c_function_abc_to_dq__abc [ 0 ] + cos ( _controller_vsg_b1_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_abc_to_dq__abc [ 1 ] + cos ( _controller_vsg_b1_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_abc_to_dq__abc [ 2 ] ) ;
        _controller_vsg_b1_c_function_abc_to_dq__q = 2.0 / 3.0 * ( - sin ( _controller_vsg_b1_c_function_abc_to_dq__theta ) * _controller_vsg_b1_c_function_abc_to_dq__abc [ 0 ] - sin ( _controller_vsg_b1_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_abc_to_dq__abc [ 1 ] - sin ( _controller_vsg_b1_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_vsg_b1_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.VSG_b.Bus Join16
    _controller_vsg_b_bus_join16__out[0] = _controller_vsg_b_c_function_abc_to_dq__d;
    _controller_vsg_b_bus_join16__out[1] = _controller_vsg_b_c_function_abc_to_dq__q;
    // Generated from the component: Controller.VSG_b1.Bus Join16
    _controller_vsg_b1_bus_join16__out[0] = _controller_vsg_b1_c_function_abc_to_dq__d;
    _controller_vsg_b1_bus_join16__out[1] = _controller_vsg_b1_c_function_abc_to_dq__q;
    // Generated from the component: Controller.C function5
    _controller_c_function5__is_albe_ref[0] = _controller_vsg_b_bus_join16__out[0];
    _controller_c_function5__is_albe_ref[1] = _controller_vsg_b_bus_join16__out[1];
    {
        _controller_c_function5__is_ref = cos ( 0 ) * _controller_c_function5__is_albe_ref [ 0 ] - sin ( 0 ) * _controller_c_function5__is_albe_ref [ 1 ] ;
    }
    // Generated from the component: Controller.C function6
    _controller_c_function6__is_albe_ref[0] = _controller_vsg_b1_bus_join16__out[0];
    _controller_c_function6__is_albe_ref[1] = _controller_vsg_b1_bus_join16__out[1];
    {
        _controller_c_function6__is_ref = cos ( 0 ) * _controller_c_function6__is_albe_ref [ 0 ] - sin ( 0 ) * _controller_c_function6__is_albe_ref [ 1 ] ;
    }
    // Generated from the component: Controller.Gain11
    _controller_gain11__out = 2.0 * _controller_c_function5__is_ref;
    // Generated from the component: Controller.is_b_ref
    HIL_OutAO(0x400d, (float)_controller_c_function5__is_ref);
    // Generated from the component: Controller.Bus Join10
    _controller_bus_join10__out[0] = _controller_c_function4__is_ref;
    _controller_bus_join10__out[1] = _controller_c_function5__is_ref;
    _controller_bus_join10__out[2] = _controller_c_function6__is_ref;
    // Generated from the component: Controller.Gain12
    _controller_gain12__out = 2.0 * _controller_c_function6__is_ref;
    // Generated from the component: Controller.is_c_ref
    HIL_OutAO(0x400e, (float)_controller_c_function6__is_ref);
    // Generated from the component: Controller.Product4
    _controller_product4__out = (_controller_gain11__out) * 1.0 / (_plant_vdc_va1__out);
    // Generated from the component: Controller.current_ctrl.Bus Split1
    _controller_current_ctrl_bus_split1__out = _controller_bus_join10__out[0];
    _controller_current_ctrl_bus_split1__out1 = _controller_bus_join10__out[1];
    _controller_current_ctrl_bus_split1__out2 = _controller_bus_join10__out[2];
    // Generated from the component: Controller.current_ctrl.C function abc to dq
    _controller_current_ctrl_c_function_abc_to_dq__abc[0] = _controller_bus_join10__out[0];
    _controller_current_ctrl_c_function_abc_to_dq__abc[1] = _controller_bus_join10__out[1];
    _controller_current_ctrl_c_function_abc_to_dq__abc[2] = _controller_bus_join10__out[2];
    _controller_current_ctrl_c_function_abc_to_dq__theta = _controller_current_ctrl_constant1__out;
    {
        _controller_current_ctrl_c_function_abc_to_dq__d = 2.0 / 3.0 * ( cos ( _controller_current_ctrl_c_function_abc_to_dq__theta ) * _controller_current_ctrl_c_function_abc_to_dq__abc [ 0 ] + cos ( _controller_current_ctrl_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq__abc [ 1 ] + cos ( _controller_current_ctrl_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
        _controller_current_ctrl_c_function_abc_to_dq__q = 2.0 / 3.0 * ( - sin ( _controller_current_ctrl_c_function_abc_to_dq__theta ) * _controller_current_ctrl_c_function_abc_to_dq__abc [ 0 ] - sin ( _controller_current_ctrl_c_function_abc_to_dq__theta - 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq__abc [ 1 ] - sin ( _controller_current_ctrl_c_function_abc_to_dq__theta + 2.0 / 3.0 * M_PI ) * _controller_current_ctrl_c_function_abc_to_dq__abc [ 2 ] ) ;
    }
    // Generated from the component: Controller.Product5
    _controller_product5__out = (_controller_gain12__out) * 1.0 / (_plant_vdc_va1__out);
    // Generated from the component: Controller.current_ctrl.Sum1
    _controller_current_ctrl_sum1__out =  - _controller_current_ctrl_bus_split1__out - _controller_current_ctrl_bus_split1__out1 - _controller_current_ctrl_bus_split1__out2;
    // Generated from the component: Controller.current_ctrl.Sum2
    _controller_current_ctrl_sum2__out = _controller_current_ctrl_c_function_abc_to_dq__d - _controller_current_ctrl_c_function_abc_to_dq1__d;
    // Generated from the component: Controller.current_ctrl.Sum5
    _controller_current_ctrl_sum5__out = _controller_current_ctrl_c_function_abc_to_dq__q - _controller_current_ctrl_c_function_abc_to_dq1__q;
    // Generated from the component: Controller.current_ctrl.is_al_ref
    HIL_OutAO(0x4004, (float)_controller_current_ctrl_c_function_abc_to_dq__d);
    // Generated from the component: Controller.current_ctrl.is_be_ref
    HIL_OutAO(0x4006, (float)_controller_current_ctrl_c_function_abc_to_dq__q);
    // Generated from the component: Controller.Bus Join14
    _controller_bus_join14__out[0] = _controller_product3__out;
    _controller_bus_join14__out[1] = _controller_product4__out;
    _controller_bus_join14__out[2] = _controller_product5__out;
    // Generated from the component: Controller.current_ctrl.Sum8
    _controller_current_ctrl_sum8__out = _controller_current_ctrl_sum1__out - _plant_is_a1_ia1__out;
    // Generated from the component: Controller.current_ctrl.is_n_ref
    HIL_OutAO(0x4007, (float)_controller_current_ctrl_sum1__out);
    // Generated from the component: Controller.current_ctrl.Gain1
    _controller_current_ctrl_gain1__out = 10.0 * _controller_current_ctrl_sum2__out;
    // Generated from the component: Controller.current_ctrl.Subsystem6.Gain1
    _controller_current_ctrl_subsystem6_gain1__out = 400.0 * _controller_current_ctrl_sum2__out;
    // Generated from the component: Controller.current_ctrl.Gain3
    _controller_current_ctrl_gain3__out = 10.0 * _controller_current_ctrl_sum5__out;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Gain1
    _controller_current_ctrl_subsystem7_gain1__out = 400.0 * _controller_current_ctrl_sum5__out;
    // Generated from the component: Plant.Bus Split1
    _plant_bus_split1__out = _controller_bus_join14__out[0];
    _plant_bus_split1__out1 = _controller_bus_join14__out[1];
    _plant_bus_split1__out2 = _controller_bus_join14__out[2];
    // Generated from the component: Controller.current_ctrl.Gain5
    _controller_current_ctrl_gain5__out = 10.0 * _controller_current_ctrl_sum8__out;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Gain1
    _controller_current_ctrl_subsystem8_gain1__out = 400.0 * _controller_current_ctrl_sum8__out;
    // Generated from the component: Controller.current_ctrl.Sum3
    _controller_current_ctrl_sum3__out = _controller_current_ctrl_gain1__out + _controller_current_ctrl_subsystem6_integrator1__out;
    // Generated from the component: Controller.current_ctrl.Subsystem6.Sum1
    _controller_current_ctrl_subsystem6_sum1__out = _controller_current_ctrl_subsystem6_gain1__out - _controller_current_ctrl_subsystem6_discrete_transfer_function2__out;
    // Generated from the component: Controller.current_ctrl.Sum6
    _controller_current_ctrl_sum6__out = _controller_current_ctrl_gain3__out + _controller_current_ctrl_subsystem7_integrator1__out;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Sum1
    _controller_current_ctrl_subsystem7_sum1__out = _controller_current_ctrl_subsystem7_gain1__out - _controller_current_ctrl_subsystem7_discrete_transfer_function2__out;
    // Generated from the component: Plant.Half Bridge2.PWM_Modulator
    _plant_half_bridge2_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out2, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_half_bridge2_pwm_modulator__channels[0], ((X_UnInt32)((_plant_half_bridge2_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_step1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge2_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge2_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x2);
    // Generated from the component: Plant.Half Bridge3.PWM_Modulator
    _plant_half_bridge3_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out1, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_half_bridge3_pwm_modulator__channels[0], ((X_UnInt32)((_plant_half_bridge3_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_step1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge3_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge3_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x4);
    // Generated from the component: Plant.Half Bridge4.PWM_Modulator
    _plant_half_bridge4_pwm_modulator__limited_in[0] = MIN(MAX(_plant_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _plant_half_bridge4_pwm_modulator__channels[0], ((X_UnInt32)((_plant_half_bridge4_pwm_modulator__limited_in[0] - (-1.0)) * 10000.0)));
    if (_plant_step1__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge4_pwm_modulator__channels[0], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _plant_half_bridge4_pwm_modulator__channels[0], 0x1);
    }
    // 1
    HIL_OutInt32(0x2000140, 0x8);
    // Generated from the component: Controller.current_ctrl.Sum9
    _controller_current_ctrl_sum9__out = _controller_current_ctrl_gain5__out + _controller_current_ctrl_subsystem8_integrator1__out;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Sum1
    _controller_current_ctrl_subsystem8_sum1__out = _controller_current_ctrl_subsystem8_gain1__out - _controller_current_ctrl_subsystem8_discrete_transfer_function2__out;
    // Generated from the component: Controller.current_ctrl.Sum4
    _controller_current_ctrl_sum4__out = _controller_current_ctrl_sum3__out + _controller_current_ctrl_c_function_abc_to_dq2__d;
    // Generated from the component: Controller.current_ctrl.Sum7
    _controller_current_ctrl_sum7__out = _controller_current_ctrl_sum6__out + _controller_current_ctrl_c_function_abc_to_dq2__q;
    // Generated from the component: Controller.current_ctrl.Gain6
    _controller_current_ctrl_gain6__out = 2.0 * _controller_current_ctrl_sum9__out;
    // Generated from the component: Controller.current_ctrl.Gain2
    _controller_current_ctrl_gain2__out = 2.0 * _controller_current_ctrl_sum4__out;
    // Generated from the component: Controller.current_ctrl.Gain4
    _controller_current_ctrl_gain4__out = 2.0 * _controller_current_ctrl_sum7__out;
    // Generated from the component: Controller.current_ctrl.Product4
    _controller_current_ctrl_product4__out = (_controller_current_ctrl_gain6__out) * 1.0 / (_plant_vdc_va1__out);
    // Generated from the component: Controller.current_ctrl.Product2
    _controller_current_ctrl_product2__out = (_controller_current_ctrl_gain2__out) * 1.0 / (_plant_vdc_va1__out);
    // Generated from the component: Controller.current_ctrl.Product3
    _controller_current_ctrl_product3__out = (_controller_current_ctrl_gain4__out) * 1.0 / (_plant_vdc_va1__out);
    // Generated from the component: Controller.etan
    HIL_OutAO(0x400b, (float)_controller_current_ctrl_product4__out);
    // Generated from the component: Controller.current_ctrl.Bus Join1
    _controller_current_ctrl_bus_join1__out[0] = _controller_current_ctrl_product2__out;
    _controller_current_ctrl_bus_join1__out[1] = _controller_current_ctrl_product3__out;
    // Generated from the component: Controller.C function dq to abc1
    _controller_c_function_dq_to_abc1__dq[0] = _controller_current_ctrl_bus_join1__out[0];
    _controller_c_function_dq_to_abc1__dq[1] = _controller_current_ctrl_bus_join1__out[1];
    _controller_c_function_dq_to_abc1__theta = _controller_constant1__out;
    {
        _controller_c_function_dq_to_abc1__a = cos ( _controller_c_function_dq_to_abc1__theta ) * _controller_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc1__theta ) * _controller_c_function_dq_to_abc1__dq [ 1 ] ;
        _controller_c_function_dq_to_abc1__b = cos ( _controller_c_function_dq_to_abc1__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc1__theta - 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc1__dq [ 1 ] ;
        _controller_c_function_dq_to_abc1__c = cos ( _controller_c_function_dq_to_abc1__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc1__dq [ 0 ] - sin ( _controller_c_function_dq_to_abc1__theta + 2.0 / 3.0 * M_PI ) * _controller_c_function_dq_to_abc1__dq [ 1 ] ;
    }
    // Generated from the component: Controller.Bus Join13
    _controller_bus_join13__out[0] = _controller_c_function_dq_to_abc1__a;
    _controller_bus_join13__out[1] = _controller_c_function_dq_to_abc1__b;
    _controller_bus_join13__out[2] = _controller_c_function_dq_to_abc1__c;
    // Generated from the component: Controller.eta_a
    HIL_OutAO(0x4008, (float)_controller_c_function_dq_to_abc1__a);
    // Generated from the component: Controller.eta_b
    HIL_OutAO(0x4009, (float)_controller_c_function_dq_to_abc1__b);
    // Generated from the component: Controller.eta_c
    HIL_OutAO(0x400a, (float)_controller_c_function_dq_to_abc1__c);
    // Generated from the component: Controller.Termination1
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Controller.Clock2
    _controller_clock2__state += 5e-05;
    // Generated from the component: Controller.Step1
    if (_controller_step1__state <= 3.0)
        _controller_step1__state += 5e-05;
    // Generated from the component: Controller.Step2
    if (_controller_step2__state <= 3.0)
        _controller_step2__state += 5e-05;
    // Generated from the component: Controller.Step3
    if (_controller_step3__state <= 3.0)
        _controller_step3__state += 5e-05;
    // Generated from the component: Controller.Unit Delay1
    _controller_unit_delay1__state = _controller_vsg_a_c_function_vsg__omega_vsg;
    // Generated from the component: Controller.Unit Delay2
    _controller_unit_delay2__state = _controller_vsg_b_c_function_vsg__omega_vsg;
    // Generated from the component: Controller.Unit Delay3
    _controller_unit_delay3__state = _controller_vsg_b1_c_function_vsg__omega_vsg;
    // Generated from the component: Controller.VSG_a.Step1
    if (_controller_vsg_a_step1__state <= 3.0)
        _controller_vsg_a_step1__state += 5e-05;
    // Generated from the component: Controller.VSG_b.Step1
    if (_controller_vsg_b_step1__state <= 3.0)
        _controller_vsg_b_step1__state += 5e-05;
    // Generated from the component: Controller.VSG_b1.Step1
    if (_controller_vsg_b1_step1__state <= 3.0)
        _controller_vsg_b1_step1__state += 5e-05;
    // Generated from the component: Controller.current_ctrl.Subsystem6.Step1
    if (_controller_current_ctrl_subsystem6_step1__state <= 0.1)
        _controller_current_ctrl_subsystem6_step1__state += 5e-05;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Step1
    if (_controller_current_ctrl_subsystem7_step1__state <= 0.1)
        _controller_current_ctrl_subsystem7_step1__state += 5e-05;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Step1
    if (_controller_current_ctrl_subsystem8_step1__state <= 0.1)
        _controller_current_ctrl_subsystem8_step1__state += 5e-05;
    // Generated from the component: Plant.Step1
    if (_plant_step1__state <= 0.1)
        _plant_step1__state += 5e-05;
    // Generated from the component: Plant.contactor
    if (_plant_contactor__state <= 0.1)
        _plant_contactor__state += 5e-05;
    // Generated from the component: Plant.C function1
    {
        _plant_c_function1__theta = _plant_c_function1__theta + 5e-05 * _plant_c_function1__omega ;
        if ( _plant_c_function1__theta >= 2 * M_PI )     {
            _plant_c_function1__theta = _plant_c_function1__theta - 2 * M_PI ;
        }
        if ( _plant_c_function1__theta < 0.0 )     {
            _plant_c_function1__theta = _plant_c_function1__theta + abs ( _plant_c_function1__theta ) ;
        }
    }
    // Generated from the component: Controller.current_ctrl.Subsystem6.Integrator1
    _controller_current_ctrl_subsystem6_integrator1__state += _controller_current_ctrl_subsystem6_sum1__out * 5e-05;
    if (_controller_current_ctrl_subsystem6_step1__out > 0)
        _controller_current_ctrl_subsystem6_integrator1__reset_state = 1;
    else if (_controller_current_ctrl_subsystem6_step1__out < 0)
        _controller_current_ctrl_subsystem6_integrator1__reset_state = -1;
    else
        _controller_current_ctrl_subsystem6_integrator1__reset_state = 0;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Integrator1
    _controller_current_ctrl_subsystem7_integrator1__state += _controller_current_ctrl_subsystem7_sum1__out * 5e-05;
    if (_controller_current_ctrl_subsystem7_step1__out > 0)
        _controller_current_ctrl_subsystem7_integrator1__reset_state = 1;
    else if (_controller_current_ctrl_subsystem7_step1__out < 0)
        _controller_current_ctrl_subsystem7_integrator1__reset_state = -1;
    else
        _controller_current_ctrl_subsystem7_integrator1__reset_state = 0;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Integrator1
    _controller_current_ctrl_subsystem8_integrator1__state += _controller_current_ctrl_subsystem8_sum1__out * 5e-05;
    if (_controller_current_ctrl_subsystem8_step1__out > 0)
        _controller_current_ctrl_subsystem8_integrator1__reset_state = 1;
    else if (_controller_current_ctrl_subsystem8_step1__out < 0)
        _controller_current_ctrl_subsystem8_integrator1__reset_state = -1;
    else
        _controller_current_ctrl_subsystem8_integrator1__reset_state = 0;
    // Generated from the component: Controller.current_ctrl.C function abc to dq1
    {
    }
    // Generated from the component: Controller.current_ctrl.C function PLL
    {
        _controller_current_ctrl_c_function_pll__y_d = _controller_current_ctrl_c_function_pll__y_d + 717.1314741035857 * 5e-05 * _controller_current_ctrl_c_function_pll__e_d ;
        _controller_current_ctrl_c_function_pll__theta = _controller_current_ctrl_c_function_pll__theta + 5e-05 * _controller_current_ctrl_c_function_pll__omega_pll ;
        if ( _controller_current_ctrl_c_function_pll__theta >= 2 * M_PI )     {
            _controller_current_ctrl_c_function_pll__theta = _controller_current_ctrl_c_function_pll__theta - 2 * M_PI ;
        }
        if ( _controller_current_ctrl_c_function_pll__theta < 0.0 )     {
            _controller_current_ctrl_c_function_pll__theta = _controller_current_ctrl_c_function_pll__theta + abs ( _controller_current_ctrl_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: Controller.current_ctrl.C function abc to dq2
    {
    }
    // Generated from the component: Controller.current_ctrl.Subsystem6.Discrete Transfer Function2
    _controller_current_ctrl_subsystem6_discrete_transfer_function2__states[0] = _controller_current_ctrl_subsystem6_discrete_transfer_function2__delay_line_in;
    // Generated from the component: Controller.current_ctrl.Subsystem7.Discrete Transfer Function2
    _controller_current_ctrl_subsystem7_discrete_transfer_function2__states[0] = _controller_current_ctrl_subsystem7_discrete_transfer_function2__delay_line_in;
    // Generated from the component: Controller.current_ctrl.Subsystem8.Discrete Transfer Function2
    _controller_current_ctrl_subsystem8_discrete_transfer_function2__states[0] = _controller_current_ctrl_subsystem8_discrete_transfer_function2__delay_line_in;
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter1.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter3.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter5.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter7.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter11.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter9.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter2.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter4.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter6.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter8.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter12.Internal filter
    {
    }
    // Generated from the component: Controller.Virtual 3ph3w.Advanced Low-Pass Filter10.Internal filter
    {
    }
    // Generated from the component: Controller.VSG_a.C function VSG
    {
        _controller_vsg_a_c_function_vsg__e_p = _controller_vsg_a_c_function_vsg__p_m_ref - _controller_vsg_a_c_function_vsg__p_s ;
        _controller_vsg_a_c_function_vsg__e_q = _controller_vsg_a_c_function_vsg__q_s_ref - _controller_vsg_a_c_function_vsg__q_s ;
        _controller_vsg_a_c_function_vsg__x_p = _controller_vsg_a_c_function_vsg__x_p + 0.1 * 5e-05 * _controller_vsg_a_c_function_vsg__e_p ;
        _controller_vsg_a_c_function_vsg__x_q = _controller_vsg_a_c_function_vsg__x_q + 1.0 * 5e-05 * _controller_vsg_a_c_function_vsg__e_q ;
        _controller_vsg_a_c_function_vsg__theta = _controller_vsg_a_c_function_vsg__theta + _controller_vsg_a_c_function_vsg__omega_vsg * 5e-05 ;
        if ( _controller_vsg_a_c_function_vsg__theta >= 2 * M_PI )     {
            _controller_vsg_a_c_function_vsg__theta = _controller_vsg_a_c_function_vsg__theta - 2 * M_PI ;
        }
        if ( _controller_vsg_a_c_function_vsg__theta < 0.0 )     {
            _controller_vsg_a_c_function_vsg__theta = _controller_vsg_a_c_function_vsg__theta + abs ( _controller_vsg_a_c_function_vsg__theta ) ;
        }
        _controller_vsg_a_c_function_vsg__x_isd = _controller_vsg_a_c_function_vsg__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _controller_vsg_a_c_function_vsg__is_dq_ref [ 0 ] - _controller_vsg_a_c_function_vsg__x_isd ) ;
        _controller_vsg_a_c_function_vsg__x_isq = _controller_vsg_a_c_function_vsg__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _controller_vsg_a_c_function_vsg__is_dq_ref [ 1 ] - _controller_vsg_a_c_function_vsg__x_isq ) ;
    }
    // Generated from the component: Controller.VSG_b.C function dq to abc1
    {
    }
    // Generated from the component: Controller.VSG_b1.C function dq to abc1
    {
    }
    // Generated from the component: Controller.VSG_a.C function dq to abc
    {
    }
    // Generated from the component: Controller.VSG_b.C function PLL
    {
        _controller_vsg_b_c_function_pll__y_d = _controller_vsg_b_c_function_pll__y_d + 717.1314741035857 * 5e-05 * _controller_vsg_b_c_function_pll__e_d ;
        _controller_vsg_b_c_function_pll__theta = _controller_vsg_b_c_function_pll__theta + 5e-05 * _controller_vsg_b_c_function_pll__omega_pll ;
        if ( _controller_vsg_b_c_function_pll__theta >= 2 * M_PI )     {
            _controller_vsg_b_c_function_pll__theta = _controller_vsg_b_c_function_pll__theta - 2 * M_PI ;
        }
        if ( _controller_vsg_b_c_function_pll__theta < 0.0 )     {
            _controller_vsg_b_c_function_pll__theta = _controller_vsg_b_c_function_pll__theta + abs ( _controller_vsg_b_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: Controller.VSG_b1.C function PLL
    {
        _controller_vsg_b1_c_function_pll__y_d = _controller_vsg_b1_c_function_pll__y_d + 717.1314741035857 * 5e-05 * _controller_vsg_b1_c_function_pll__e_d ;
        _controller_vsg_b1_c_function_pll__theta = _controller_vsg_b1_c_function_pll__theta + 5e-05 * _controller_vsg_b1_c_function_pll__omega_pll ;
        if ( _controller_vsg_b1_c_function_pll__theta >= 2 * M_PI )     {
            _controller_vsg_b1_c_function_pll__theta = _controller_vsg_b1_c_function_pll__theta - 2 * M_PI ;
        }
        if ( _controller_vsg_b1_c_function_pll__theta < 0.0 )     {
            _controller_vsg_b1_c_function_pll__theta = _controller_vsg_b1_c_function_pll__theta + abs ( _controller_vsg_b1_c_function_pll__theta ) ;
        }
    }
    // Generated from the component: Controller.VSG_a.C function abc to dq
    {
    }
    // Generated from the component: Controller.C function4
    {
    }
    // Generated from the component: Controller.VSG_b.C function VSG
    {
        _controller_vsg_b_c_function_vsg__e_p = _controller_vsg_b_c_function_vsg__p_m_ref - _controller_vsg_b_c_function_vsg__p_s ;
        _controller_vsg_b_c_function_vsg__e_q = _controller_vsg_b_c_function_vsg__q_s_ref - _controller_vsg_b_c_function_vsg__q_s ;
        _controller_vsg_b_c_function_vsg__x_p = _controller_vsg_b_c_function_vsg__x_p + 0.1 * 5e-05 * _controller_vsg_b_c_function_vsg__e_p ;
        _controller_vsg_b_c_function_vsg__x_q = _controller_vsg_b_c_function_vsg__x_q + 1.0 * 5e-05 * _controller_vsg_b_c_function_vsg__e_q ;
        _controller_vsg_b_c_function_vsg__theta = _controller_vsg_b_c_function_vsg__theta + _controller_vsg_b_c_function_vsg__omega_vsg * 5e-05 ;
        if ( _controller_vsg_b_c_function_vsg__theta >= 2 * M_PI )     {
            _controller_vsg_b_c_function_vsg__theta = _controller_vsg_b_c_function_vsg__theta - 2 * M_PI ;
        }
        if ( _controller_vsg_b_c_function_vsg__theta < 0.0 )     {
            _controller_vsg_b_c_function_vsg__theta = _controller_vsg_b_c_function_vsg__theta + abs ( _controller_vsg_b_c_function_vsg__theta ) ;
        }
        _controller_vsg_b_c_function_vsg__x_isd = _controller_vsg_b_c_function_vsg__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _controller_vsg_b_c_function_vsg__is_dq_ref [ 0 ] - _controller_vsg_b_c_function_vsg__x_isd ) ;
        _controller_vsg_b_c_function_vsg__x_isq = _controller_vsg_b_c_function_vsg__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _controller_vsg_b_c_function_vsg__is_dq_ref [ 1 ] - _controller_vsg_b_c_function_vsg__x_isq ) ;
    }
    // Generated from the component: Controller.VSG_b1.C function VSG
    {
        _controller_vsg_b1_c_function_vsg__e_p = _controller_vsg_b1_c_function_vsg__p_m_ref - _controller_vsg_b1_c_function_vsg__p_s ;
        _controller_vsg_b1_c_function_vsg__e_q = _controller_vsg_b1_c_function_vsg__q_s_ref - _controller_vsg_b1_c_function_vsg__q_s ;
        _controller_vsg_b1_c_function_vsg__x_p = _controller_vsg_b1_c_function_vsg__x_p + 0.1 * 5e-05 * _controller_vsg_b1_c_function_vsg__e_p ;
        _controller_vsg_b1_c_function_vsg__x_q = _controller_vsg_b1_c_function_vsg__x_q + 1.0 * 5e-05 * _controller_vsg_b1_c_function_vsg__e_q ;
        _controller_vsg_b1_c_function_vsg__theta = _controller_vsg_b1_c_function_vsg__theta + _controller_vsg_b1_c_function_vsg__omega_vsg * 5e-05 ;
        if ( _controller_vsg_b1_c_function_vsg__theta >= 2 * M_PI )     {
            _controller_vsg_b1_c_function_vsg__theta = _controller_vsg_b1_c_function_vsg__theta - 2 * M_PI ;
        }
        if ( _controller_vsg_b1_c_function_vsg__theta < 0.0 )     {
            _controller_vsg_b1_c_function_vsg__theta = _controller_vsg_b1_c_function_vsg__theta + abs ( _controller_vsg_b1_c_function_vsg__theta ) ;
        }
        _controller_vsg_b1_c_function_vsg__x_isd = _controller_vsg_b1_c_function_vsg__x_isd + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _controller_vsg_b1_c_function_vsg__is_dq_ref [ 0 ] - _controller_vsg_b1_c_function_vsg__x_isd ) ;
        _controller_vsg_b1_c_function_vsg__x_isq = _controller_vsg_b1_c_function_vsg__x_isq + 5e-05 * 2 * M_PI * 1 / ( 0.0024 ) * ( _controller_vsg_b1_c_function_vsg__is_dq_ref [ 1 ] - _controller_vsg_b1_c_function_vsg__x_isq ) ;
    }
    // Generated from the component: Controller.VSG_b.C function dq to abc
    {
    }
    // Generated from the component: Controller.VSG_b1.C function dq to abc
    {
    }
    // Generated from the component: Controller.VSG_b.C function abc to dq
    {
    }
    // Generated from the component: Controller.VSG_b1.C function abc to dq
    {
    }
    // Generated from the component: Controller.C function5
    {
    }
    // Generated from the component: Controller.C function6
    {
    }
    // Generated from the component: Controller.current_ctrl.C function abc to dq
    {
    }
    // Generated from the component: Controller.C function dq to abc1
    {
    }
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
    // Generated from the component: Controller.SCADA Input1
    _controller_scada_input1__out = XIo_InFloat(0x2f800000);
//@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------