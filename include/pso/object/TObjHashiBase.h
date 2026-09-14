#ifndef PSO_OBJECT_TOBJHASHIBASE_H
#define PSO_OBJECT_TOBJHASHIBASE_H
#include "types.h"
struct TObjHashiBase {
    void update();
    u8 _pad00[0x38];
    f32 position[3];
    u8 _pad44[0x60];
    void* colliders;
    s32 colliderCount;
    s32 phase;
    f32 frame,frameEnd,frameStep;
    void* motion;
    f32 farVisibility,nearVisibility;
    s32 switchId;
    f32 raisedHeight,riseSpeed;
};
#endif
