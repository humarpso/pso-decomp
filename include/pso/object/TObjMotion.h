#ifndef PSO_OBJECT_TOBJMOTION_H
#define PSO_OBJECT_TOBJMOTION_H
#include "pso/TObject.h"
#include <stddef.h>
class TUnk_804B9870 : public TObject {
public:
    virtual ~TUnk_804B9870();
    s32 mask_object_set_row_flags(s32);
    s32 set_event_source_flag(s32);
    void set_item_count(s16);
    virtual void vfunc_6(s16 *, s32);
    virtual void vfunc_7(void *);
    virtual void reset_motion_fields();
    virtual void*vfunc_9();
    virtual s16 update_object_view_visibility(f32, f32);
    virtual s16 vfunc_11(f32, f32, f32);
    virtual int vfunc_12();
    virtual void vfunc_13(s32);
    u16 m_1c;
    s16 m_1e;
    u8 m_20;
    u8 unk_21[0x1];
    u8 m_22;
    u8 unk_23[0x1];
    s32 texture_id;
    void* m_28;
    void * m_2c;
    u32 actorFlags;
    void* model;
    f32 position[3];
    u32 m_44;
    u32 m_48;
    void* m_4c;
    void* m_50;
    f32 m_54;
    void* m_58;
    void* m_5c;
    s32 rotation_y;
    s32 rotation_z;
    f32 scale;
    f32 target_scale;
    u32 m_70;
    void* m_74;
    u32 m_78;
    void* m_7c;
    void * m_80;
    s32 m_84;
    u8 * m_88;
    u32 m_8c;
};
class TUnk_804AF8A0 : public TUnk_804B9870 {
public:
    virtual ~TUnk_804AF8A0();
    s32 set_flag8();
    u8 sub_8010319C();
    void set_shadow_flag();
    void clear_shadow_flag();
    virtual void vfunc_13(s32);
    u32 m_90;
    u16 m_94;
    u8 unk_96[0x2];
    void* m_98;
    s16 m_9c;
    u8 unk_9E[0x2];
    u32 m_a0;
    void * m_a4;
    u8 unk_A8[0x4];
};
class TObjMotion : public TUnk_804AF8A0 {
public:
    virtual ~TObjMotion();
    void set_motion_interpolation_flag();
    void set_field_b8(s16);
    u32 unknownAC;
    u32 animationFlags;
    u32 m_b4;
    s16 m_b8;
    u8 unk_BA[0x2];
    u32 m_bc;
    f32 m_c0;
    u8 unk_C4[0x4];
    f32 m_c8;
    u8 unk_CC[0xC];
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
