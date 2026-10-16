#include "types.h"
#include "pso/misc/TUnk_804C3248.h"
#include "pso/object/TObjMotion.h"

#include <stddef.h>
#include <stddef.h>
#include "pso/misc/TPhotonMylla.h"
#include "pso/TParticleCtrl.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
struct Stack_801AD5D8 {
    s32 sp8;
    f32 spC;
    u8 pad_10[0x4];
    s32 sp14;
    f32 sp18;
    u8 pad_1C[0x4];
    s32 sp20;
    f32 sp24;
    u8 pad_28[0x4];
    s32 sp2C;
    f32 sp30;
};

struct RecoveredFields_801AD5D8_arg0 {
    u8 unknown_0[0xB8];
    s16 field_B8;
    u8 unknown_BA[0x92];
    s16 field_14C;
    u8 unknown_14E[0x2];
    f32 field_150;
    u8 unknown_154[0x28];
    u16 field_17C;
    u8 unknown_17E[0x6];
    f32 field_184;
    u8 unknown_188[0xC];
    s16 field_194;
    u8 unknown_196[0xA];
    s32 field_1A0;
    s32 field_1A4;
};

struct Color_801AD4C0 { f32 a, r, g, b; };

struct Vec_801AD4C0 { f32 x, y, z; };

struct Self_801AD4C0 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AD4C0 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x184 - 0x14E];
    Color_801AD4C0 color;
    u8 pad5[0x1A0 - 0x194];
    s32 started;
};

#define NEW_801AD970(n) (((u8 *(*)(int))__nw__7TObjectFUl)(n))
#define F_801AD970(o, t, off) (*(t *)((u8 *)(o) + (off)))
struct Vec_801AD970 { f32 x, y, z; };

struct Pkt_801AD970 {
    Vec_801AD970 pos;
    u16 owner;
    s32 first;
    s32 more;
    u8 pad18[0x1C - 0x18];
    u8 count;
    f32 f20;
};

struct YPkt_801AD970 {
    Vec_801AD970 pos;
    u16 owner;
    s32 first;
    s32 more;
    u8 pad18[0x24 - 0x18];
};

struct VBase_801AD970 { u8 pad[0x18]; };

struct Mylla_801AD970 : VBase_801AD970 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12();
    u8 pad1C[0x38 - 0x1C];
    Vec_801AD970 pos;
};

struct Res_801AD970 { u8 pad[0xA8]; s32 fA8; s32 fAC; };

struct Game_801AD970 { u8 pad[0x42C]; Res_801AD970 *res; s32 f430; };

extern "C" {
u16 obj_getField1c(void *);
s32 spawn_particle_effect(s32, s32);
u8 * find_entity_by_id(u16);
u8 * TPhotonMagicSquare__ct(void *, s32, s32, s32, s32, f32);
s32 play_persistent_sound(s32, s32, u32, s16, s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 advance_animation_playback(void *);
s32 queue_photon_blast_hit(int, int, int, f32);
s32 spawn_photon_blast_attachment_effects(void *, int);
u8 *__nw__7TObjectFUl(s32, f32);
extern const f32 lbl_805DC1FC;
extern const f32 lbl_805DC200;
extern const f32 lbl_805DC204;
extern const f32 lbl_805DC208;
extern const f32 lbl_805DC20C;
extern const f32 lbl_805DC210;
extern const f32 lbl_805DC214;
extern const f32 lbl_805DC218;
extern const f32 lbl_805DC21C;
extern const f32 lbl_805DC220;
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 translate_matrix(int, f32, f32, f32);
s32 set_material_alpha_compare_reference(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
extern Color_801AD4C0 saved_model_draw_color;
extern Color_801AD4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 * find_entity_by_id(u16);
void spawn_photon_blast_opening_effects(s32, u16);
s32 spawn_photon_blast_attachment_effects(void *, int);
void photon_base_ct(void *);
u8 * TPhotonMagicSquare__ct(void *, s32, s32, s32, s32, f32);
void sub_801AD4A8__12TPhotonMyllaFv(void* a0);
void TPhotonRainbow__ct(void *, void *, void *, s32);
void TPhotonYoulla__ct(void *, void *);
void play_cue_stream_file(void *);
extern YPkt_801AD970 photon_mylla_packet_template;
extern u8 lbl_80446E80[];
extern u8 lbl_80446E8C[];
extern u8 lbl_804C39D8[];
extern s32 __vt__12TPhotonMylla[];
extern s32 lbl_805D3510;
extern Game_801AD970 *photon_blast_shared_resource;
extern const f32 lbl_805DC1FC;
extern const f32 lbl_805DC200;
void *TPhotonMylla__ct(Mylla_801AD970 *self, Pkt_801AD970 *pkt);
}

extern "C" {

struct Base_801AD8FC_801AD4A8 { char pad[0x18]; };
struct VObj_801AD8FC_801AD4A8 : Base_801AD8FC_801AD4A8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void sub_801AD4A8__12TPhotonMyllaFv(void* a0);
void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 destroy_photon_motion_object(void *, s32);

    extern const float lbl_805DC1F8;
void TPhotonMylla::sub_801AD4A8() { *(float*)((char*)this + 0x184) = lbl_805DC1F8; *(float*)((char*)this + 0x188) = lbl_805DC1F8; *(float*)((char*)this + 0x18c) = lbl_805DC1F8; *(float*)((char*)this + 0x190) = lbl_805DC1F8; }

extern s32 __vt__12TPhotonMylla[];

#pragma push
#pragma opt_common_subs off
typedef char RecoveredFields_801AD5D8_arg0_B8_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_14C_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_14C) == 0x14C ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_150_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_150) == 0x150 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_17C_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_17C) == 0x17C ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_184_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_184) == 0x184 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_194_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_194) == 0x194 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_1A0_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_1A0) == 0x1A0 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_1A4_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_1A4) == 0x1A4 ? 1 : -1];

void TPhotonMylla::render() {
    Self_801AD4C0 *self = (Self_801AD4C0 *)this;
    if (self->started != 0) {
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        push_matrix();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        TObjPlayer::set_global_flag();
        set_material_alpha_compare_reference(0);
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        ((TUnk_804C3248 *)self)->set_photon_blast_joint_callback();
        ((TObjEneRe7Berura *)self)->draw();
        TObjPlayer::clear_global_state();
        set_material_alpha_compare_reference(0xBF);
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&model_material_color, &saved_model_draw_color);
        model_render_flags = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TPhotonMylla::run_task() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_801AD5D8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AD5D8, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801AD5D8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801AD5D8, sp18) == 0x10) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_801AD5D8, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_801AD5D8, sp24) == 0x1C) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_801AD5D8, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_801AD5D8, sp30) == 0x28) ? 1 : -1];
    Stack_801AD5D8 stack;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    if (((s32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 == 0x32) && ((s32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A0 == 0)) {
        ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A0 = 1;
        temp_r3 = (u8 *)(find_entity_by_id(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp2C), (void *) (temp_r3 + 0x38));
        }
        temp_f1 = stack.sp30;
        stack.sp30 = temp_f1 + lbl_805DC1FC;
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0xD0, temp_f1));
        if (temp_r3_2 != NULL) {
            TPhotonMagicSquare__ct(temp_r3_2, (s32) arg0, 5, (s32) &stack.sp2C, 0xAA, lbl_805DC200);
        }
    }
    if ((lbl_805DC204 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) && ((s16) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_B8 == 1)) {
        ((TUnk_804C3248 *)arg0)->begin_photon_summon_camera((int) (3));
        ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 = 0;
        ((TObjMotion *)arg0)->set_field_b8((int) (0));
        spawn_photon_blast_attachment_effects((void *) (arg0), (int) (5));
    }
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_194 = (s16) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_B8;
    ((TUnk_804C3248 *)arg0)->update_state();
    advance_animation_playback((void *) (arg0));
    ((TUnk_804C3248 *)arg0)->update_photon_blast_attachments();
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C = (s16) (((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C + 0xF);
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C = (s16) (u8) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C;
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 = (s32) (((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 + 1);
    if (lbl_805DC208 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) {
        temp_r3_3 = (u8 *)(find_entity_by_id(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3_3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp20), (void *) (temp_r3_3 + 0x38));
        }
        stack.sp24 += lbl_805DC20C;
        spawn_particle_effect((s32) &stack.sp20, 0x174);
        spawn_particle_effect((s32) &stack.sp20, 0x175);
    }
    if (lbl_805DC210 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) {
        temp_r3_4 = (u8 *)(find_entity_by_id(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3_4 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (temp_r3_4 + 0x38));
        }
        stack.sp18 += lbl_805DC20C;
        spawn_particle_effect((s32) &stack.sp14, 0x169);
    }
    if (lbl_805DC214 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) {
        temp_r3_5 = (u8 *)(find_entity_by_id(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3_5 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3_5 + 0x38));
        }
        stack.spC += lbl_805DC20C;
        spawn_particle_effect((s32) &stack.sp8, 0x169);
        if (temp_r3_5 != NULL) {
            queue_photon_blast_hit((int) (obj_getField1c(temp_r3_5)), (int) (5), (int) (0), (f32) (((RecoveredFields_801AD5D8_arg0 *)arg0)->field_150));
        }
    }
    if ((f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 > lbl_805DC218) {
        temp_f1_2 = ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_184;
        if (temp_f1_2 > lbl_805DC21C) {
            ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_184 = (f32) (temp_f1_2 - lbl_805DC220);
        }
    }
    if ((s32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A0 != 0) {
        play_persistent_sound(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}
#pragma pop

void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_801AD8FC_801AD4A8 *o = (struct VObj_801AD8FC_801AD4A8 *)arg0;
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TPhotonMylla;
        o->m13();
        ((TUnk_804C3248 *)arg0)->free_photon();
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TPhotonMylla__ct(Mylla_801AD970 *self, Pkt_801AD970 *pkt) {
    Vec_801AD970 v;
    u8 *o;
    u8 *owner;
    photon_base_ct(self);
    *(void **)((u8 *)self + 0x18) = __vt__12TPhotonMylla;
    F_801AD970(self, s32, 0) = lbl_805D3510;
    F_801AD970(self, s32, 0x138) = 5;
    VecCopy__FP3VecPC3Vec(&self->pos, pkt);
    F_801AD970(self, u16, 0x17C) = pkt->owner;
    F_801AD970(self, u8 *, 0x180) = find_entity_by_id(F_801AD970(self, u16, 0x17C));
    if (F_801AD970(self, u8 *, 0x180) != NULL) {
        F_801AD970(self, s32, 0x60) = F_801AD970(F_801AD970(self, u8 *, 0x180), s32, 0x60);
    }
    F_801AD970(self, s32, 0x34) = photon_blast_shared_resource->res->fA8;
    F_801AD970(self, s32, 0x24) = photon_blast_shared_resource->res->fAC;
    ((TObjPlayer *)self)->set_field_d8((s32)lbl_804C39D8);
    ((TObjPlayer *)self)->set_field_dc(photon_blast_shared_resource->f430);
    F_801AD970(self, s16, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(self, F_801AD970(self, s16, 0xB8));
    ((TObjMotion *)self)->set_field_b8(F_801AD970(self, s16, 0xB8));
    F_801AD970(self, s16, 0x194) = 1;
    F_801AD970(self, s32, 0x198) = pkt->first;
    F_801AD970(self, s32, 0x19C) = pkt->more;
    F_801AD970(self, s32, 0x1A0) = 0;
    {
        YPkt_801AD970 y = photon_mylla_packet_template;
        y.pos.x = self->pos.x;
        y.pos.y = self->pos.y;
        y.pos.z = self->pos.z;
        y.owner = F_801AD970(self, u16, 0x17C);
        y.first = F_801AD970(self, s32, 0x198);
        y.more = F_801AD970(self, s32, 0x19C);
        o = NEW_801AD970(0x1A8);
        if (o != NULL) {
            TPhotonYoulla__ct(o, &y);
        }
    }
    ((void (*)(void *, u8))sub_801AD4A8__12TPhotonMyllaFv)(self, pkt->count);
    F_801AD970(self, s32, 0x134) = 3;
    self->m12();
    F_801AD970(self, s32, 0x1A4) = 0;
    switch (TOKeyMachine01::get_global_state()) {
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        o = NEW_801AD970(0xAC);
        if (o != NULL) {
            TPhotonRainbow__ct(o, self, &self->pos, 1);
        }
        break;
    default:
        o = NEW_801AD970(0xAC);
        if (o != NULL) {
            TPhotonRainbow__ct(o, self, &self->pos, 0);
        }
        break;
    }
    if (F_801AD970(self, s32, 0x19C) == 1) {
        F_801AD970(self, u32, 0x154) |= 1;
    }
    F_801AD970(self, f32, 0x150) = pkt->f20;
    if (F_801AD970(self, s32, 0x198) == 0) {
        ((TObjMotion *)self)->set_field_b8(0);
        ((TUnk_804C3248 *)self)->begin_photon_summon_camera(3);
        F_801AD970(self, s32, 0x198) = 1;
        F_801AD970(self, s16, 0x194) = 0;
        F_801AD970(self, s32, 0x1A0) = 1;
        owner = find_entity_by_id(F_801AD970(self, u16, 0x17C));
        if (owner != NULL) {
            VecCopy__FP3VecPC3Vec(&v, owner + 0x38);
        }
        v.y = v.y + lbl_805DC1FC;
        o = NEW_801AD970(0xD0);
        if (o != NULL) {
            TPhotonMagicSquare__ct(o, (s32)self, 5, (s32)&v, 0xAA, lbl_805DC200);
        }
        spawn_photon_blast_attachment_effects(self, 5);
        play_cue_stream_file(lbl_80446E80);
    } else {
        spawn_photon_blast_opening_effects(5, F_801AD970(self, u16, 0x17C));
        play_cue_stream_file(lbl_80446E8C);
    }
    return self;
}

}
