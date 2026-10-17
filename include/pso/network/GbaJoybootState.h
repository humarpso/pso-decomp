#ifndef PSO_NETWORK_GBAJOYBOOTSTATE_H
#define PSO_NETWORK_GBAJOYBOOTSTATE_H
#include "types.h"
#include <stddef.h>
struct GbaJoybootState {
    u16 probe_counter;
    u16 reserved_02;
    volatile s16 timeout_counter;
    s8 phase;
    s8 device_present;
};
typedef char GbaJoybootTimeoutOffset[(offsetof(GbaJoybootState,timeout_counter)==4)?1:-1];
typedef char GbaJoybootPhaseOffset[(offsetof(GbaJoybootState,phase)==6)?1:-1];
typedef char GbaJoybootPresentOffset[(offsetof(GbaJoybootState,device_present)==7)?1:-1];
typedef char GbaJoybootStateSize[(sizeof(GbaJoybootState)==8)?1:-1];
extern GbaJoybootState TLobby__data_805434A8[];
void gba_joyboot_transfer_callback(s32 channel, s32 result);
void update_gba_joyboot_transfer(void);
#endif
