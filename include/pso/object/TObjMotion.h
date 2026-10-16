#ifndef PSO_OBJECT_TOBJMOTION_H
#define PSO_OBJECT_TOBJMOTION_H
#include "pso/TObject.h"
#include <stddef.h>
class TUnk_804B9870 : public TObject {
public:
    virtual ~TUnk_804B9870();
    u8 unk_1C[0x8];
    s32 texture_id;
    u8 unk_28[0x8];
    u32 actorFlags;
    void* model;
    f32 position[3];
    u8 unk_44[0x1C];
    s32 rotation_y;
    s32 rotation_z;
    f32 scale;
    f32 target_scale;
    u8 unk_70[0x20];
};
class TUnk_804AF8A0 : public TUnk_804B9870 {
public:
    virtual ~TUnk_804AF8A0();
    u8 unknown90[0x1C];
};
class TObjMotion : public TUnk_804AF8A0 {
public:
    virtual ~TObjMotion();
    u32 unknownAC;
    u32 animationFlags;
    u8 unk_B4[0x24];
    void* action_table;
    void* motion_list;
    void* motion_buffer;
    u8 unknownE4[0x14];
    u32 unknownF8;
};
typedef char TUnk_804B9870Size[sizeof(TUnk_804B9870)==0x90?1:-1];
typedef char TUnk_804AF8A0Size[sizeof(TUnk_804AF8A0)==0xAC?1:-1];
typedef char TObjMotionSize[sizeof(TObjMotion)==0xFC?1:-1];
typedef char WorldActorModelOffset[offsetof(TUnk_804B9870,model)==0x34?1:-1];
typedef char MotionActionsOffset[offsetof(TObjMotion,action_table)==0xD8?1:-1];
typedef char MotionListOffset[offsetof(TObjMotion,motion_list)==0xDC?1:-1];
typedef char MotionBufferOffset[offsetof(TObjMotion,motion_buffer)==0xE0?1:-1];
#endif
