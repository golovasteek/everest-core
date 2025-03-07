/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_LO2HI_PB_H_INCLUDED
#define PB_LO2HI_PB_H_INCLUDED
#include <everest/3rd_party/nanopb/pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _Event_InterfaceEvent { 
    Event_InterfaceEvent_CAR_PLUGGED_IN = 0, 
    Event_InterfaceEvent_CAR_REQUESTED_POWER = 1, 
    Event_InterfaceEvent_POWER_ON = 2, 
    Event_InterfaceEvent_POWER_OFF = 3, 
    Event_InterfaceEvent_CAR_REQUESTED_STOP_POWER = 4, 
    Event_InterfaceEvent_CAR_UNPLUGGED = 5, 
    Event_InterfaceEvent_ERROR_E = 6, 
    Event_InterfaceEvent_ERROR_DF = 7, 
    Event_InterfaceEvent_ERROR_RELAIS = 8, 
    Event_InterfaceEvent_ERROR_RCD = 9, 
    Event_InterfaceEvent_ERROR_VENTILATION_NOT_AVAILABLE = 10, 
    Event_InterfaceEvent_ERROR_OVER_CURRENT = 11, 
    Event_InterfaceEvent_ENTER_BCD = 12, 
    Event_InterfaceEvent_LEAVE_BCD = 13, 
    Event_InterfaceEvent_PERMANENT_FAULT = 14, 
    Event_InterfaceEvent_EVSE_REPLUG_STARTED = 15, 
    Event_InterfaceEvent_EVSE_REPLUG_FINISHED = 16 
} Event_InterfaceEvent;

/* Struct definitions */
typedef struct _ResetDone { 
    char dummy_field;
} ResetDone;

typedef struct _Event { 
    Event_InterfaceEvent type; 
} Event;

typedef struct _KeepAliveLo { 
    uint32_t time_stamp; 
    uint32_t hw_type; 
    uint32_t hw_revision; 
    uint32_t protocol_version_major; 
    uint32_t protocol_version_minor; 
    char sw_version_string[51]; 
} KeepAliveLo;

typedef struct _PowerMeter { 
    float voltage; 
} PowerMeter;

typedef struct _Telemetry { 
    float cp_hi; 
    float cp_lo; 
    float pwm_dc; 
    float relais_on; 
} Telemetry;

/* This container message is send from Lo Level to Hi level and may contain any allowed message in that direction. */
typedef struct _LoToHi { 
    /* Common Packets */
    pb_size_t which_payload;
    union {
        KeepAliveLo keep_alive;
        PowerMeter power_meter;
        Event event;
        ResetDone reset_done;
        Telemetry telemetry;
    } payload; 
} LoToHi;


/* Helper constants for enums */
#define _Event_InterfaceEvent_MIN Event_InterfaceEvent_CAR_PLUGGED_IN
#define _Event_InterfaceEvent_MAX Event_InterfaceEvent_EVSE_REPLUG_FINISHED
#define _Event_InterfaceEvent_ARRAYSIZE ((Event_InterfaceEvent)(Event_InterfaceEvent_EVSE_REPLUG_FINISHED+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define LoToHi_init_default                      {0, {KeepAliveLo_init_default}}
#define Event_init_default                       {_Event_InterfaceEvent_MIN}
#define PowerMeter_init_default                  {0}
#define Telemetry_init_default                   {0, 0, 0, 0}
#define KeepAliveLo_init_default                 {0, 0, 0, 0, 0, ""}
#define ResetDone_init_default                   {0}
#define LoToHi_init_zero                         {0, {KeepAliveLo_init_zero}}
#define Event_init_zero                          {_Event_InterfaceEvent_MIN}
#define PowerMeter_init_zero                     {0}
#define Telemetry_init_zero                      {0, 0, 0, 0}
#define KeepAliveLo_init_zero                    {0, 0, 0, 0, 0, ""}
#define ResetDone_init_zero                      {0}

/* Field tags (for use in manual encoding/decoding) */
#define Event_type_tag                           1
#define KeepAliveLo_time_stamp_tag               1
#define KeepAliveLo_hw_type_tag                  2
#define KeepAliveLo_hw_revision_tag              3
#define KeepAliveLo_protocol_version_major_tag   4
#define KeepAliveLo_protocol_version_minor_tag   5
#define KeepAliveLo_sw_version_string_tag        6
#define PowerMeter_voltage_tag                   2
#define Telemetry_cp_hi_tag                      1
#define Telemetry_cp_lo_tag                      2
#define Telemetry_pwm_dc_tag                     3
#define Telemetry_relais_on_tag                  4
#define LoToHi_keep_alive_tag                    3
#define LoToHi_power_meter_tag                   4
#define LoToHi_event_tag                         6
#define LoToHi_reset_done_tag                    7
#define LoToHi_telemetry_tag                     8

/* Struct field encoding specification for nanopb */
#define LoToHi_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,keep_alive,payload.keep_alive),   3) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,power_meter,payload.power_meter),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,event,payload.event),   6) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,reset_done,payload.reset_done),   7) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,telemetry,payload.telemetry),   8)
#define LoToHi_CALLBACK NULL
#define LoToHi_DEFAULT NULL
#define LoToHi_payload_keep_alive_MSGTYPE KeepAliveLo
#define LoToHi_payload_power_meter_MSGTYPE PowerMeter
#define LoToHi_payload_event_MSGTYPE Event
#define LoToHi_payload_reset_done_MSGTYPE ResetDone
#define LoToHi_payload_telemetry_MSGTYPE Telemetry

#define Event_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    type,              1)
#define Event_CALLBACK NULL
#define Event_DEFAULT NULL

#define PowerMeter_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    voltage,           2)
#define PowerMeter_CALLBACK NULL
#define PowerMeter_DEFAULT NULL

#define Telemetry_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    cp_hi,             1) \
X(a, STATIC,   SINGULAR, FLOAT,    cp_lo,             2) \
X(a, STATIC,   SINGULAR, FLOAT,    pwm_dc,            3) \
X(a, STATIC,   SINGULAR, FLOAT,    relais_on,         4)
#define Telemetry_CALLBACK NULL
#define Telemetry_DEFAULT NULL

#define KeepAliveLo_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   time_stamp,        1) \
X(a, STATIC,   SINGULAR, UINT32,   hw_type,           2) \
X(a, STATIC,   SINGULAR, UINT32,   hw_revision,       3) \
X(a, STATIC,   SINGULAR, UINT32,   protocol_version_major,   4) \
X(a, STATIC,   SINGULAR, UINT32,   protocol_version_minor,   5) \
X(a, STATIC,   SINGULAR, STRING,   sw_version_string,   6)
#define KeepAliveLo_CALLBACK NULL
#define KeepAliveLo_DEFAULT NULL

#define ResetDone_FIELDLIST(X, a) \

#define ResetDone_CALLBACK NULL
#define ResetDone_DEFAULT NULL

extern const pb_msgdesc_t LoToHi_msg;
extern const pb_msgdesc_t Event_msg;
extern const pb_msgdesc_t PowerMeter_msg;
extern const pb_msgdesc_t Telemetry_msg;
extern const pb_msgdesc_t KeepAliveLo_msg;
extern const pb_msgdesc_t ResetDone_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define LoToHi_fields &LoToHi_msg
#define Event_fields &Event_msg
#define PowerMeter_fields &PowerMeter_msg
#define Telemetry_fields &Telemetry_msg
#define KeepAliveLo_fields &KeepAliveLo_msg
#define ResetDone_fields &ResetDone_msg

/* Maximum encoded size of messages (where known) */
#define Event_size                               2
#define KeepAliveLo_size                         82
#define LoToHi_size                              84
#define PowerMeter_size                          5
#define ResetDone_size                           0
#define Telemetry_size                           20

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
