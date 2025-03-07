/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_HI2LO_PB_H_INCLUDED
#define PB_HI2LO_PB_H_INCLUDED
#include <everest/3rd_party/nanopb/pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _Disable { 
    char dummy_field;
} Disable;

typedef struct _Enable { 
    char dummy_field;
} Enable;

typedef struct _Reset { 
    char dummy_field;
} Reset;

typedef struct _AllowPowerOn { 
    bool p; 
} AllowPowerOn;

typedef struct _FirmwareUpdate { 
    bool invoke_rom_bootloader; 
} FirmwareUpdate;

typedef struct _KeepAliveHi { 
    uint32_t time_stamp; 
    uint32_t hw_type; 
    uint32_t hw_revision; 
    uint32_t protocol_version_major; 
    uint32_t protocol_version_minor; 
    char sw_version_string[51]; 
} KeepAliveHi;

typedef struct _Replug { 
    uint32_t time; 
} Replug;

typedef struct _SetOutputVoltageCurrent { 
    float voltage; 
    float current; 
} SetOutputVoltageCurrent;

typedef struct _SetPWM { 
    int32_t mode; /* 0: OFF, 1: ON, 2: F */
    float duty_cycle; 
} SetPWM;

/* This container message is send from Hi Level to Low level and may contain any allowed message in that direction. */
typedef struct _HiToLo { 
    /* Common/configuration messages */
    pb_size_t which_payload;
    union {
        Enable enable;
        Disable disable;
        KeepAliveHi keep_alive;
        FirmwareUpdate firmware_update;
        SetPWM set_pwm;
        AllowPowerOn allow_power_on;
        Reset reset;
        Replug replug;
        SetOutputVoltageCurrent set_output_voltage_current;
    } payload; 
} HiToLo;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define HiToLo_init_default                      {0, {Enable_init_default}}
#define AllowPowerOn_init_default                {0}
#define SetOutputVoltageCurrent_init_default     {0, 0}
#define SetPWM_init_default                      {0, 0}
#define FirmwareUpdate_init_default              {0}
#define KeepAliveHi_init_default                 {0, 0, 0, 0, 0, ""}
#define Replug_init_default                      {0}
#define Enable_init_default                      {0}
#define Disable_init_default                     {0}
#define Reset_init_default                       {0}
#define HiToLo_init_zero                         {0, {Enable_init_zero}}
#define AllowPowerOn_init_zero                   {0}
#define SetOutputVoltageCurrent_init_zero        {0, 0}
#define SetPWM_init_zero                         {0, 0}
#define FirmwareUpdate_init_zero                 {0}
#define KeepAliveHi_init_zero                    {0, 0, 0, 0, 0, ""}
#define Replug_init_zero                         {0}
#define Enable_init_zero                         {0}
#define Disable_init_zero                        {0}
#define Reset_init_zero                          {0}

/* Field tags (for use in manual encoding/decoding) */
#define AllowPowerOn_p_tag                       1
#define FirmwareUpdate_invoke_rom_bootloader_tag 1
#define KeepAliveHi_time_stamp_tag               1
#define KeepAliveHi_hw_type_tag                  2
#define KeepAliveHi_hw_revision_tag              3
#define KeepAliveHi_protocol_version_major_tag   4
#define KeepAliveHi_protocol_version_minor_tag   5
#define KeepAliveHi_sw_version_string_tag        6
#define Replug_time_tag                          1
#define SetOutputVoltageCurrent_voltage_tag      1
#define SetOutputVoltageCurrent_current_tag      2
#define SetPWM_mode_tag                          1
#define SetPWM_duty_cycle_tag                    2
#define HiToLo_enable_tag                        6
#define HiToLo_disable_tag                       7
#define HiToLo_keep_alive_tag                    13
#define HiToLo_firmware_update_tag               16
#define HiToLo_set_pwm_tag                       20
#define HiToLo_allow_power_on_tag                21
#define HiToLo_reset_tag                         23
#define HiToLo_replug_tag                        24
#define HiToLo_set_output_voltage_current_tag    50

/* Struct field encoding specification for nanopb */
#define HiToLo_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,enable,payload.enable),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,disable,payload.disable),   7) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,keep_alive,payload.keep_alive),  13) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,firmware_update,payload.firmware_update),  16) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,set_pwm,payload.set_pwm),  20) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,allow_power_on,payload.allow_power_on),  21) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,reset,payload.reset),  23) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,replug,payload.replug),  24) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,set_output_voltage_current,payload.set_output_voltage_current),  50)
#define HiToLo_CALLBACK NULL
#define HiToLo_DEFAULT NULL
#define HiToLo_payload_enable_MSGTYPE Enable
#define HiToLo_payload_disable_MSGTYPE Disable
#define HiToLo_payload_keep_alive_MSGTYPE KeepAliveHi
#define HiToLo_payload_firmware_update_MSGTYPE FirmwareUpdate
#define HiToLo_payload_set_pwm_MSGTYPE SetPWM
#define HiToLo_payload_allow_power_on_MSGTYPE AllowPowerOn
#define HiToLo_payload_reset_MSGTYPE Reset
#define HiToLo_payload_replug_MSGTYPE Replug
#define HiToLo_payload_set_output_voltage_current_MSGTYPE SetOutputVoltageCurrent

#define AllowPowerOn_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     p,                 1)
#define AllowPowerOn_CALLBACK NULL
#define AllowPowerOn_DEFAULT NULL

#define SetOutputVoltageCurrent_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           1) \
X(a, STATIC,   SINGULAR, FLOAT,    current,           2)
#define SetOutputVoltageCurrent_CALLBACK NULL
#define SetOutputVoltageCurrent_DEFAULT NULL

#define SetPWM_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, INT32,    mode,              1) \
X(a, STATIC,   SINGULAR, FLOAT,    duty_cycle,        2)
#define SetPWM_CALLBACK NULL
#define SetPWM_DEFAULT NULL

#define FirmwareUpdate_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     invoke_rom_bootloader,   1)
#define FirmwareUpdate_CALLBACK NULL
#define FirmwareUpdate_DEFAULT NULL

#define KeepAliveHi_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   time_stamp,        1) \
X(a, STATIC,   SINGULAR, UINT32,   hw_type,           2) \
X(a, STATIC,   SINGULAR, UINT32,   hw_revision,       3) \
X(a, STATIC,   SINGULAR, UINT32,   protocol_version_major,   4) \
X(a, STATIC,   SINGULAR, UINT32,   protocol_version_minor,   5) \
X(a, STATIC,   SINGULAR, STRING,   sw_version_string,   6)
#define KeepAliveHi_CALLBACK NULL
#define KeepAliveHi_DEFAULT NULL

#define Replug_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   time,              1)
#define Replug_CALLBACK NULL
#define Replug_DEFAULT NULL

#define Enable_FIELDLIST(X, a) \

#define Enable_CALLBACK NULL
#define Enable_DEFAULT NULL

#define Disable_FIELDLIST(X, a) \

#define Disable_CALLBACK NULL
#define Disable_DEFAULT NULL

#define Reset_FIELDLIST(X, a) \

#define Reset_CALLBACK NULL
#define Reset_DEFAULT NULL

extern const pb_msgdesc_t HiToLo_msg;
extern const pb_msgdesc_t AllowPowerOn_msg;
extern const pb_msgdesc_t SetOutputVoltageCurrent_msg;
extern const pb_msgdesc_t SetPWM_msg;
extern const pb_msgdesc_t FirmwareUpdate_msg;
extern const pb_msgdesc_t KeepAliveHi_msg;
extern const pb_msgdesc_t Replug_msg;
extern const pb_msgdesc_t Enable_msg;
extern const pb_msgdesc_t Disable_msg;
extern const pb_msgdesc_t Reset_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define HiToLo_fields &HiToLo_msg
#define AllowPowerOn_fields &AllowPowerOn_msg
#define SetOutputVoltageCurrent_fields &SetOutputVoltageCurrent_msg
#define SetPWM_fields &SetPWM_msg
#define FirmwareUpdate_fields &FirmwareUpdate_msg
#define KeepAliveHi_fields &KeepAliveHi_msg
#define Replug_fields &Replug_msg
#define Enable_fields &Enable_msg
#define Disable_fields &Disable_msg
#define Reset_fields &Reset_msg

/* Maximum encoded size of messages (where known) */
#define AllowPowerOn_size                        2
#define Disable_size                             0
#define Enable_size                              0
#define FirmwareUpdate_size                      2
#define HiToLo_size                              84
#define KeepAliveHi_size                         82
#define Replug_size                              6
#define Reset_size                               0
#define SetOutputVoltageCurrent_size             10
#define SetPWM_size                              16

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
