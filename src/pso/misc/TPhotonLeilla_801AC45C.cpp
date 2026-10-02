#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801AC574 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct Color_801AC45C { f32 a, r, g, b; };

struct Vec_801AC45C { f32 x, y, z; };

struct Self_801AC45C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AC45C pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801AC45C color;
    u8 pad5[0x19C - 0x190];
    s32 started;
};

extern "C" {
u16 obj_getField1c(void *);
u8 * find_entity_by_id(u16);
u8 * TPhotonMagicSquare__sub_801AD218(void *, M2C_UNK, s32, s32, s32);
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
extern const f64 lbl_80446DE8;
extern const f32 lbl_805DC1C4;
extern const f32 lbl_805DC1C8;
extern const f32 lbl_805DC1CC;
extern const f32 lbl_805DC1D0;
extern const f32 lbl_805DC1D4;
void run_task__13TPhotonLeillaFv(u8 *arg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 TObjPlayer__sub_800F5BC0(void *, s16, int);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801A7638(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
s32 translate_matrix(int, f32, f32, f32);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801AC45C lbl_8050BEC0;
extern Color_801AC45C lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *lbl_805D5D48;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__13TPhotonLeillaFv(Self_801AC45C *self);
}

extern "C" {

void render__13TPhotonLeillaFv(Self_801AC45C *self) {
    if (self->started != 0) {
        TObjPlayer__sub_800F5BC0(lbl_805D5D48, self->f14C, 0);
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
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        TObjPlayer__sub_801A7638(self);
        draw__16TObjEneRe7BeruraFPv(self);
        clear_global_state__10TObjPlayerFv();
        clear_render_context__10TObjPlayerFv(self);
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0, &lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__13TPhotonLeillaFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AC574, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AC574, spC) == 0x4) ? 1 : -1];
    Stack_801AC574 stack;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    M2C_FIELD(arg0, s32 *, 0x1AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1AC) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1AC) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x19C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
        temp_r3 = (u8 *)(find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3 + 0x38));
        }
        temp_f1 = stack.spC;
        stack.spC = temp_f1 + lbl_805DC1C4;
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0xD0, temp_f1));
        if (temp_r3_2 != NULL) {
            TPhotonMagicSquare__sub_801AD218(temp_r3_2, (s32) arg0, 4, (s32) &stack.sp8, 0x78);
        }
    }
    if ((lbl_805DC1C8 == (f32) M2C_FIELD(arg0, s32 *, 0x1AC)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (2));
        M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (4));
    }
    M2C_FIELD(arg0, s16 *, 0x190) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    advance_animation_playback((void *) (arg0));
    update_photon_blast_attachments((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if (lbl_805DC1CC == (f32) M2C_FIELD(arg0, s32 *, 0x1AC)) {
        temp_r3_3 = (u8 *)(find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3_3 != NULL) {
            queue_photon_blast_hit((int) (obj_getField1c(temp_r3_3)), (int) (4), (int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x150)));
        }
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1AC) > lbl_805DC1D0) {
        temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x180);
        if (temp_f1_2 > lbl_805DC1D4) {
            M2C_FIELD(arg0, f32 *, 0x180) = (f32) ((f64) temp_f1_2 - lbl_80446DE8);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x19C) != 0) {
        TOTrapAncient01__sub_80226578(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}

}
