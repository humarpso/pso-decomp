#include "types.h"
#include "pso/item/TObjContainerJungEx_8018D900.h"
#include "pso/object/TObjChip.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/item/TObjContainerJungEx.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TObjContainerItem.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8018D314_lbl_804B7168 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018D314___vt__19TObjContainerJungEx {
    s32 value;
    u8 remaining[0x148];
};

struct Vec_8018CFD4 { f32 x, y, z; };

struct Spawn_8018CFD4 {
    u8 pad0[0xC];
    Vec_8018CFD4 pos;
    u8 pad18[0x38 - 0x18];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Obj_8018CFD4 { u8 pad[0x38]; Vec_8018CFD4 pos; };

extern "C" {
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_container_base(void *, s32);
extern RecoveredGlobal_8018D314_lbl_804B7168 container_jung_collision_desc;
extern s32 __vt__19TObjContainerJungEx[];
extern s32 TObjContainerJungEx__name;
void *spawn_particle_effect_with_flags(void *pos, s32 id, s32 flags);
void play_container_break_sound(s32 arg0);
s32 get_model__19TObjContainerJungExFl(s32);
void *__nw__7TObjectFUl(int);
extern Spawn_8018CFD4 container_jung_ex_spawn_params_a;
extern Spawn_8018CFD4 container_jung_ex_spawn_params_b;
extern void *tl_05;
void TObjContainerJungEx__vt77(const Obj_8018CFD4 *self);
s32 post_translate_matrix(void *);
s32 scale_matrix(s32, f32, f32, f32);
s32 draw_ginja_object();
s32 free_collision_body_parts(void *);
s32 submit_cursor_candidate(void *, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 __dl__7TObjectFPv(void *);
s32 set_global_param__8TObjFishFl();

void *TObjContainerJungEx::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJungEx__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern const f32 lbl_805DBD9C;

#pragma push
#pragma opt_propagation off
void TObjContainerJungEx__vt77(const Obj_8018CFD4 *self) {
    Spawn_8018CFD4 a = container_jung_ex_spawn_params_a;
    f32 pz;
    f32 py;
    f32 px;
    px = self->pos.x;
    py = self->pos.y;
    pz = self->pos.z;
    a.pos.x = px;
    a.pos.y = py;
    a.pos.z = pz;
    a.f38 = py;
    a.f40 = get_model__19TObjContainerJungExFl(1);
    a.f44 = (s32)TObjContainerJungEx__sub_8018D900(0);
    Spawn_8018CFD4 b = container_jung_ex_spawn_params_b;
    f32 qz;
    f32 qy;
    f32 qx;
    qx = self->pos.x;
    qy = self->pos.y;
    qz = self->pos.z;
    b.pos.x = qx;
    b.pos.y = qy;
    b.pos.z = qz;
    b.f38 = qy;
    b.f40 = get_model__19TObjContainerJungExFl(2);
    b.f44 = (s32)TObjContainerJungEx__sub_8018D900(0);
    spawn_particle_effect_with_flags((void *)&self->pos, (s32)(0x45), (s32)(0x40));
    spawn_particle_effect_with_flags((void *)&self->pos, (s32)(0x46), (s32)(0x40));
    void *o = __nw__7TObjectFUl(0x234);
    if (o != NULL) {
        construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&a);
    }
    o = __nw__7TObjectFUl(0x234);
    if (o != NULL) {
        construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&b);
    }
    play_container_break_sound((s32)self);
}
#pragma pop

void TObjContainerJungEx::vfunc_6(s16 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            this->vfunc_79();
            ((TUnk_804B6C24 *)arg0)->spawn_item((s32)((void *) (arg0)));
            ((TUnk_804AF8A0 *)arg0)->set_flag8();
            queue_destruction__7TObjectFv((arg0));
            this->mode = 1;
        }
    } else if ((s16) *arg1 == 1) {
        ((TUnk_804AF8A0 *)arg0)->set_flag8();
        queue_destruction__7TObjectFv((arg0));
        this->mode = 1;
    }
}

void TObjContainerJungEx::vfunc_81() {
    s16 temp_r0;

    temp_r0 = this->mode;
    switch (temp_r0) {
    case 0:
        TObjContainerJungEx__sub_8018D900(0);
        set_global_param__8TObjFishFl();
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        get_model__19TObjContainerJungExFl(0);
        draw_ginja_object();
        TParticleCtrl::begin_effect_render();
        get_model__19TObjContainerJungExFl(3);
        draw_ginja_object();
        TParticleCtrl::end_effect_render();
        pop_matrix();
    case 1:
        return;
    }
}

void TObjContainerJungEx::vfunc_80() {
    s16 temp_r0;

    temp_r0 = this->mode;
    switch (temp_r0) {
    case 0:
        if ((s32) this->m_364 != 0) {
            submit_cursor_candidate(this, -1);
        }
    case 1:
        return;
    }
}

void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjContainerJungEx;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B6C24 *)arg0)->destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018D314_lbl_804B7168_size[sizeof(RecoveredGlobal_8018D314_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018D314___vt__19TObjContainerJungEx_size[sizeof(RecoveredGlobal_8018D314___vt__19TObjContainerJungEx) == 0x14C ? 1 : -1];
u8 *TObjContainerJungEx__ct(u8 *arg0, s32 arg1, s32 _w2) {
    init_container_base(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018D314___vt__19TObjContainerJungEx *)&__vt__19TObjContainerJungEx).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjContainerJungEx__name;
    ((TObjContainerJungEx *)arg0)->mode = 0;
    *(s32 *)&((TObjContainerJungEx *)arg0)->actorFlags = (s32) (*(s32 *)&((TObjContainerJungEx *)arg0)->actorFlags| 0x60000000);
    init_collision_body_parts(arg0, (s32) &container_jung_collision_desc.value, 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy((Vec *)(arg0 + 0x74), (const Vec *)(arg0 + 0x38));
    VecCopy((Vec *)(arg0 + 0x2FC), (const Vec *)(arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&container_jung_collision_desc.value) + 4));
    return arg0;
}

}
