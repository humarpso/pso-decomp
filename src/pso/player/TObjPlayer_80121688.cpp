#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_effect_model__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80121708(void *arg0);
void *init_item_shoot_model__10TObjPlayerFPv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(u32);
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(u32);
M2C_UNK TObjPlayer__sub_803D99F8(void *, M2C_UNK);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void draw_effect_model__10TObjPlayerFPv(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
        push_matrix();
        begin_effect_render__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, u32 *, 0x5C));
        post_translate_matrix(arg0 + 0x1C);
        TObjPlayer__sub_803D99F8(arg0 + 0x28, 1);
        draw_ginja_object(M2C_FIELD(arg0, u32 *, 0x58));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void TObjPlayer__sub_80121708(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 0x3333);
}

extern M2C_UNK lbl_804A0AA8[];

void *init_item_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0AA8;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    return arg0;
}

}
