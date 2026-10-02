#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
#include <stddef.h>
struct Stack_801AD5D8 {
    M2C_UNK sp8;
    f32 spC;
    u8 pad_10[0x4];
    M2C_UNK sp14;
    f32 sp18;
    u8 pad_1C[0x4];
    M2C_UNK sp20;
    f32 sp24;
    u8 pad_28[0x4];
    M2C_UNK sp2C;
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

typedef s32 M2C_UNK;
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
u8 * TPhotonMagicSquare__ct(void *, M2C_UNK, s32, s32, s32, f32);
s32 TOTrapAncient01__sub_80226578(s32, s32, u32, s16, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK queue_photon_blast_hit(int, int, int, f32);
M2C_UNK TCameraCtrl__sub_801A7310(void *, int);
M2C_UNK update_photon_blast_attachments(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, int);
M2C_UNK update_state__10TSceneSoraFPv(void *);
u8 *__nw__7TObjectFUl(M2C_UNK, f32);
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
void run_task__12TPhotonMyllaFv(u8 *arg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801A7638(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
s32 translate_matrix(int, f32, f32, f32);
s32 set_current_scene__6TSceneFi(int);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801AD4C0 lbl_8050BEC0;
extern Color_801AD4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__12TPhotonMyllaFv(Self_801AD4C0 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 * find_entity_by_id(u16);
M2C_UNK TCameraCtrl__sub_801A7310(void *, int);
void spawn_photon_blast_opening_effects(s32, u16);
M2C_UNK TObjPlayer__sub_801A7748(void *, int);
void photon_base_ct(void *);
u8 * TPhotonMagicSquare__ct(void *, M2C_UNK, s32, s32, s32, f32);
void TPhotonMylla__sub_801AD4A8(void* a0);
void TPhotonRainbow__ct(void *, void *, void *, s32);
void TPhotonYoulla__ct(void *, void *);
s32 get_global_state__14TOKeyMachine01Fv();
void play_cue_stream_file(void *);
extern YPkt_801AD970 lbl_80446E50;
extern u8 lbl_80446E80[];
extern u8 lbl_80446E8C[];
extern u8 lbl_804C39D8[];
extern M2C_UNK __vt__12TPhotonMylla[];
extern s32 lbl_805D3510;
extern Game_801AD970 *lbl_805D5D28;
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

void TPhotonMylla__sub_801AD4A8(void* a0);
void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_photon_motion_object(void *, M2C_UNK);
M2C_UNK free_photon__10TObjPlayerFPv(void *);

    extern const float lbl_805DC1F8;
void TPhotonMylla__sub_801AD4A8(void* a0) { *(float*)((char*)a0 + 0x184) = lbl_805DC1F8; *(float*)((char*)a0 + 0x188) = lbl_805DC1F8; *(float*)((char*)a0 + 0x18c) = lbl_805DC1F8; *(float*)((char*)a0 + 0x190) = lbl_805DC1F8; }

extern M2C_UNK __vt__12TPhotonMylla[];

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

void render__12TPhotonMyllaFv(Self_801AD4C0 *self) {
    if (self->started != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        TObjPlayer__sub_803D9B2C();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        lbl_805D5660 = some_id_805c6f74;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8050BEC0, &lbl_8058D4C0);
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 |= 0x200820;
        set_global_flag__10TObjPlayerFv();
        set_current_scene__6TSceneFi(0);
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        TObjPlayer__sub_801A7638(self);
        draw__16TObjEneRe7BeruraFPv(self);
        clear_global_state__10TObjPlayerFv();
        set_current_scene__6TSceneFi(0xBF);
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0, &lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__12TPhotonMyllaFv(u8 *arg0) {
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
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (3));
        ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (5));
    }
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_194 = (s16) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_B8;
    update_state__10TSceneSoraFPv((void *) (arg0));
    advance_animation_playback((void *) (arg0));
    update_photon_blast_attachments((void *) (arg0));
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
        TOTrapAncient01__sub_80226578(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}
#pragma pop

void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_801AD8FC_801AD4A8 *o = (struct VObj_801AD8FC_801AD4A8 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TPhotonMylla;
        o->m13();
        free_photon__10TObjPlayerFPv(arg0);
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
    F_801AD970(self, s32, 0x34) = lbl_805D5D28->res->fA8;
    F_801AD970(self, s32, 0x24) = lbl_805D5D28->res->fAC;
    set_field_d8__10TObjPlayerFPvi(self, lbl_804C39D8);
    set_field_dc__10TObjPlayerFPvi(self, lbl_805D5D28->f430);
    F_801AD970(self, s16, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(self, F_801AD970(self, s16, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(self, F_801AD970(self, s16, 0xB8));
    F_801AD970(self, s16, 0x194) = 1;
    F_801AD970(self, s32, 0x198) = pkt->first;
    F_801AD970(self, s32, 0x19C) = pkt->more;
    F_801AD970(self, s32, 0x1A0) = 0;
    {
        YPkt_801AD970 y = lbl_80446E50;
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
    ((void (*)(void *, u8))TPhotonMylla__sub_801AD4A8)(self, pkt->count);
    F_801AD970(self, s32, 0x134) = 3;
    self->m12();
    F_801AD970(self, s32, 0x1A4) = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
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
        set_field_b8__14TObjEnePanarmsFPvs(self, 0);
        TCameraCtrl__sub_801A7310(self, 3);
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
            TPhotonMagicSquare__ct(o, (M2C_UNK)self, 5, (s32)&v, 0xAA, lbl_805DC200);
        }
        TObjPlayer__sub_801A7748(self, 5);
        play_cue_stream_file(lbl_80446E80);
    } else {
        spawn_photon_blast_opening_effects(5, F_801AD970(self, u16, 0x17C));
        play_cue_stream_file(lbl_80446E8C);
    }
    return self;
}

}
