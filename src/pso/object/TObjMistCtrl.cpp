#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80141A30.h"
#include "pso/unk/text_803DA798.h"
#include "pso/render/depth_buffer.h"
#include "pso/TPlayerFootStamp.h"
#include "pso/object/TObjMistCtrl.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_023f9f { char pad[0x18]; };

struct VObj_18_023f9f : VBase_18_023f9f {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(u32);
};

struct RecoveredGlobal_802AF7C0___vt__12TObjMistCtrl {
    s32 value;
    u8 remaining[0x34];
};

struct Ent_802AF8BC { f32 x, y, z; u32 a; u32 b; u32 f14; };

struct Vec_802AF8BC { f32 x, y, z; };

struct TPlayerFootStamp_802AF8BC {
    u8 pad0[0x1C];
    Ent_802AF8BC ent[4];
    Vec_802AF8BC base;
    Vec_802AF8BC off[4];
    s32 fB8;
    u8 padBC[4];
    s32 fC0;
};

extern "C" {
s32 spawn_continuous_particle_effect_with_flags(void *, int, int);
s32 construct_world_actor_base(void *, void *);
extern s32 __vt__12TObjMistCtrl[];
extern s32 lbl_805D3E80;
f32 horizontal_distance_squared(void *, void *);
void __dl__7TObjectFPv(void *);
s32 draw_particle_strip(void *, int, int);

void TObjMistCtrl::run_task() { { (void)(sub_802AF64C()); return; } }

void *__dt__12TObjMistCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjMistCtrl;
        if (*(void **)((s8 *)arg0 + 0x90) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x90)); *(s32 *)((s8 *)arg0 + 0x90) = 0; }
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 camera_ctrl_instance;
extern s32 lbl_805D5660;
extern s32 player_footstamp_texture_gvm_handle;
extern s32 model_render_flags;
extern const f32 lbl_805DE1F8;

typedef char RecoveredGlobal_802AF7C0___vt__12TObjMistCtrl_size[sizeof(RecoveredGlobal_802AF7C0___vt__12TObjMistCtrl) == 0x38 ? 1 : -1];
u8 *TObjMistCtrl__ct(u8 *arg0, s32 parent, u32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (parent));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802AF7C0___vt__12TObjMistCtrl *)&__vt__12TObjMistCtrl).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3E80;
    if (arg2 != 0U) {
        ((VObj_18_023f9f *)(arg0))->m5(arg2);
    }
    *(s32 *)((s8 *)arg0 + 0x90) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0x38), (int) (0x200), (int) (0x800));
    return arg0;
}

void TPlayerFootStamp::render() {
    u8 *arg0 = (u8 *)this;
    if (horizontal_distance_squared((void *) (arg0 + 0x7C), (void *) (camera_ctrl_instance + 0x178)) < lbl_805DE1F8) {
        lbl_805D5660 = model_render_flags;
        TObjPlayer::reset_transform_state();
        TObjFish::set_global_param((s32)((void *) (player_footstamp_texture_gvm_handle)));
        set_texture_num((*(s16 *)((s8 *)arg0 + 0xBE)));
        set_depth_buffer_settings_1();
        draw_particle_strip((void *) (arg0 + 0x1C), (int) (4), (int) (1));
        restore_saved_depth_alpha_state();
        model_render_flags = lbl_805D5660;
    }
}
void TPlayerFootStamp::run_task() {
    TPlayerFootStamp_802AF8BC *o = (TPlayerFootStamp_802AF8BC *)this;
    s32 j;
    Ent_802AF8BC *e;
    s32 i;
    o->fC0 = o->fC0 - 1;
    if (o->fC0 <= 0) {
        queue_destruction__7TObjectFv(o);
        return;
    }
    f32 bx = o->base.x;
    f32 by = o->base.y;
    f32 bz = o->base.z;
    e = o->ent;
    for (i = 0; i < 4; i++) {
        if (o->fC0 < 0x40) {
            e->f14 = o->fB8 - ((0x40 - o->fC0) << 26);
        }
        e->x = bx + o->off[i].x;
        e->y = by + o->off[i].y;
        e->z = bz + o->off[i].z;
        e++;
    }
}

}
