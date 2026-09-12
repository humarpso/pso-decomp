#ifndef PSO_OBJECT_TOBJDOOR_H
#define PSO_OBJECT_TOBJDOOR_H
#include "types.h"
struct TObjDoor {
    u8 base[0x38];
    f32 position[3];
    u8 base44[0x24];
    f32 cameraPosition[3];
    u8 base74[0x38];
    s32 state;
    s32 behavior;
    f32 frame;
    f32 accentFrame;
    s8 cameraMode;
    u8 padBD[3];
    s32 cameraTicks;
    f32 glow;
    s32 phase;
    s32 switchId;
    s32 label;
};
typedef char TObjDoor_size[sizeof(TObjDoor)==0xD4?1:-1];
#endif
