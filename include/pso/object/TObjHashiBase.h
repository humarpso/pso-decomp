#ifndef PSO_OBJECT_TOBJHASHIBASE_H
#define PSO_OBJECT_TOBJHASHIBASE_H
#include "types.h"
struct TObjHashiBase {
    s16 update_object_view_visibility(f32, f32);
    void run_task();
    u8 unk_0[0x1E];
    s16 m_1e;
    u8 unk_20[0x4];
    s32 m_24;
    u8 unk_28[0xC];
    s32 m_34;
    f32 position[3];
    u8 unk_44[0x1C];
    s32 m_60;
    u8 unk_64[0x40];
    void* colliders;
    s32 colliderCount;
    s32 phase;
    f32 frame,frameEnd,frameStep;
    void* motion;
    f32 farVisibility,nearVisibility;
    s32 switchId;
    f32 raisedHeight,riseSpeed;
    void render();
};
#endif
