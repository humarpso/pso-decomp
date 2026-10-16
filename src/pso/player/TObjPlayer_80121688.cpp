#include "types.h"
#include "pso/player/TUnk_804A0AA8.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"

extern "C" {

s32 post_translate_matrix(void *);
s32 draw_ginja_object(u32);
s32 is_owner_alive__15TItemShootModelFv();
s32 rotate_matrix_by_node_angles(void *, s32);
s32 push_matrix();
s32 pop_matrix();
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);

void TUnk_804A0AA8::render() {
    u8 *arg0 = (u8 *)this;
    if ((is_owner_alive__15TItemShootModelFv() != 0) && ((u32) *(u32 *)&this->m_58 != 0U) && ((u32) *(u32 *)&this->m_5C != 0U)) {
        push_matrix();
        TParticleCtrl::begin_effect_render();
        TObjPlayer::notify_fish_if_valid(*(u32 *)&this->m_5C);
        post_translate_matrix(arg0 + 0x1C);
        rotate_matrix_by_node_angles(arg0 + 0x28, 1);
        draw_ginja_object(*(u32 *)&this->m_58);
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

void TUnk_804A0AA8::hook() {
    *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) + 0x3333);
}

extern s32 lbl_804A0AA8[];

void *TUnk_804A0AA8::init_item_shoot_model() {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0AA8;
    (*(u32 *)((u8 *)this + 0x30)) = 0;
    return this;
}

}
