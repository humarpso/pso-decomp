#ifndef PSO_CREATION_CAMERA_H
#define PSO_CREATION_CAMERA_H
#include "types.h"
struct CreationCameraFields {
    u8 base[0x4c];
    f32 height;
    u8 unknown50[0x1c];
    f32 distance;
    s32 pitch,yaw;
    u32 focus,delay;
    f32 startDistance;
    s32 ticks;
};
typedef char CreationCameraFields_size[sizeof(CreationCameraFields)==0x88?1:-1];
#endif
