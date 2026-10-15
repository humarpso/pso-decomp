#include "types.h"

extern "C" {

void draw_effect_model__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80121708(void *arg0);
void *init_item_shoot_model__10TObjPlayerFPv(void *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(u32);
s32 is_owner_alive__10TObjPlayerFPv();
s32 notify_fish_if_valid__10TObjPlayerFUi(u32);
s32 rotate_matrix_by_node_angles(void *, s32);
s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void draw_effect_model__10TObjPlayerFPv(u8 *arg0) {
    if ((is_owner_alive__10TObjPlayerFPv() != 0) && ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) && ((u32) *(u32 *)((s8 *)arg0 + 0x5C) != 0U)) {
        push_matrix();
        begin_effect_render__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(*(u32 *)((s8 *)arg0 + 0x5C));
        post_translate_matrix(arg0 + 0x1C);
        rotate_matrix_by_node_angles(arg0 + 0x28, 1);
        draw_ginja_object(*(u32 *)((s8 *)arg0 + 0x58));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void TObjPlayer__sub_80121708(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) + 0x3333);
}

extern s32 lbl_804A0AA8[];

void *init_item_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0AA8;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    return arg0;
}

}
