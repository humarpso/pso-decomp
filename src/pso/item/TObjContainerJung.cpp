#include "types.h"
#include "pso/object/TObjChip.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/item/TObjContainerJung.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8018D47C_lbl_804B7134 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018D47C_lbl_804B7134_size[sizeof(RecoveredGlobal_8018D47C_lbl_804B7134) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8018D85C_lbl_804B7168 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018D85C___vt__17TObjContainerJung {
    s32 value;
    u8 remaining[0x148];
};

struct Vec_8018D4DC { f32 x, y, z; };

struct Spawn_8018D4DC {
    u8 pad0[0xC];
    Vec_8018D4DC pos;
    u8 pad18[0x20];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Obj_8018D4DC {
    u8 pad0[0x38];
    Vec_8018D4DC pos;
    u8 pad44[0x326 - 0x44];
    s16 f326;
};

extern "C" {
u8 * get_bml_model(void *, int);
extern s32 TObjContainerJung__bml_model_resource;
s32 TObjFish__sub_8001EDB0(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_8018D47C_lbl_804B7134 TObjContainerJung__resource_descriptor;
extern s32 TObjContainerJung__bml_aux_handle;
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_container_base(void *, s32);
extern RecoveredGlobal_8018D85C_lbl_804B7168 container_jung_collision_desc;
extern s32 __vt__17TObjContainerJung[];
extern s32 TObjContainerJung__name;
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_object();
extern const f32 lbl_805DBD9C;
void *spawn_particle_effect_with_flags(void *pos, s32 id, s32 flags);
void play_container_break_sound(s32 arg0);
void *__nw__7TObjectFUl(int);
extern Spawn_8018D4DC container_jung_debris_desc;
extern Spawn_8018D4DC container_jung_spawn_params;
extern void *tl_05;
void TObjContainerJung__vt77(const Obj_8018D4DC *self);
s32 TLobby__sub_8001FE7C(s32, s32);
s32 free_collision_body_parts(void *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);

s32 TObjContainerJung__sub_8018D3B8(void) {
    return TObjContainerJung__bml_aux_handle;
}

u8 *TObjContainerJung::get_model_by_index(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJung__bml_model_resource) != NULL) {
        return get_bml_model((*(u8 * *)&TObjContainerJung__bml_model_resource), arg0);
    }
    return NULL;
}

void *TObjContainerJung::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJung__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TObjContainerJung::release() {
    TLobby__sub_8001FE7C(TObjContainerJung__bml_model_resource, 1);
    TObjContainerJung__bml_model_resource = 0;
    TObjContainerJung__bml_aux_handle = 0;
}

void TObjContainerJung::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &TObjContainerJung__resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjContainerJung__bml_model_resource) = (unsigned char *) ((void *) var_r0);
    TObjContainerJung__bml_aux_handle = TObjFish__sub_8001EDB0((void *) var_r0, 0);
}

#pragma push
#pragma opt_propagation off
void TObjContainerJung__vt77(const Obj_8018D4DC *self) {
    void *o;
    if (self->f326 != 1) {
        Spawn_8018D4DC a = container_jung_debris_desc;
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
        a.f40 = (s32) get_bml_model((void *) TObjContainerJung__bml_model_resource, 1);
        a.f44 = TObjContainerJung__bml_aux_handle;
        Spawn_8018D4DC b = container_jung_spawn_params;
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
        b.f40 = (s32) get_bml_model((void *) TObjContainerJung__bml_model_resource, 2);
        b.f44 = TObjContainerJung__bml_aux_handle;
        spawn_particle_effect_with_flags((void *)&self->pos, (s32)(0x45), (s32)(0x40));
        spawn_particle_effect_with_flags((void *)&self->pos, (s32)(0x46), (s32)(0x40));
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != 0) {
            construct_debris__8TObjChipFPvPvPv((u8 *)o, (u8 *)tl_05, (u8 *)&b);
        }
        play_container_break_sound((s32)self);
    }
}
#pragma pop

void TObjContainerJung::vfunc_6(s16 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            this->vfunc_79();
            ((TUnk_804806E8 *)arg0)->request_box_item_drop((void *) (arg0 + 0x38), (int) (1));
            ((TObjPlayer *)arg0)->clear_player_status_flag((int) (0), (int) (1));
            ((TUnk_804AF8A0 *)arg0)->set_flag8();
            queue_destruction__7TObjectFv((arg0));
            this->mode = 1;
        }
    } else if ((s16) *arg1 == 1) {
        ((TObjPlayer *)arg0)->clear_player_status_flag((int) (0), (int) (1));
        ((TUnk_804AF8A0 *)arg0)->set_flag8();
        queue_destruction__7TObjectFv((arg0));
        this->mode = 1;
    }
}

void TObjContainerJung::vfunc_81() {
    if ((void *)(*(u8 **)&TObjContainerJung__bml_model_resource) != NULL) {
        switch (this->mode) {
        case 0:
            TObjFish::set_global_param(TObjContainerJung__bml_aux_handle);
            push_matrix();
            post_translate_matrix((u8 *)&this->position);
            rotate_matrix_y(0, this->rotation_y);
            scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
            get_bml_model(*(u8 **)&TObjContainerJung__bml_model_resource, 0);
            draw_ginja_object();
            TParticleCtrl::begin_effect_render();
            get_bml_model(*(u8 **)&TObjContainerJung__bml_model_resource, 3);
            draw_ginja_object();
            TParticleCtrl::end_effect_render();
            pop_matrix();
            break;
        case 1:
            break;
        }
    }
}

void TObjContainerJung::vfunc_80() {
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

void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjContainerJung;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B6C24 *)arg0)->destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018D85C_lbl_804B7168_size[sizeof(RecoveredGlobal_8018D85C_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018D85C___vt__17TObjContainerJung_size[sizeof(RecoveredGlobal_8018D85C___vt__17TObjContainerJung) == 0x14C ? 1 : -1];
u8 *TObjContainerJung__ct(u8 *arg0, s32 arg1, s32 _w2) {
    init_container_base(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018D85C___vt__17TObjContainerJung *)&__vt__17TObjContainerJung).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjContainerJung__name;
    ((TObjContainerJung *)arg0)->mode = 0;
    *(s32 *)&((TObjContainerJung *)arg0)->actorFlags = (s32) (*(s32 *)&((TObjContainerJung *)arg0)->actorFlags| 0x60000000);
    init_collision_body_parts(arg0, (s32) &container_jung_collision_desc.value, 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy((Vec *)(arg0 + 0x74), (const Vec *)(arg0 + 0x38));
    VecCopy((Vec *)(arg0 + 0x2FC), (const Vec *)(arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&container_jung_collision_desc.value) + 4));
    return arg0;
}

}
