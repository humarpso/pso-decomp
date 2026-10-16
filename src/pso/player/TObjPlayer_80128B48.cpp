#include "types.h"
#include "pso/unk/TUnk_804A4020.h"

extern "C" {

s32 play_sound_effect(s32, s32, s32, s32);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(int);
s32 rotate_matrix_x(int, int);
s32 spawn_particle_effect(u32, s32);
void TObjPlayer__sub_80128A70(void);
void TObjPlayer__sub_80128BD0(void);
s32 clear_rico_ring_flag__10TObjPlayerFUi(u32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 is_owner_alive__15TItemShootModelFv();

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TUnk_804A4020::render() {
    u8 *arg0 = (u8 *)this;
    if ((is_owner_alive__15TItemShootModelFv() != 0) && ((u32) *(u32 *)&this->m_58 != 0U) && ((u32) *(u32 *)&this->m_5C != 0U)) {
        push_matrix();
        TObjPlayer::notify_fish_if_valid((int) (*(u32 *)&this->m_5C));
        post_translate_matrix((void *) (arg0 + 0x1C));
        rotate_matrix_y((int) (0), (int) (this->m_count));
        rotate_matrix_x((int) (0), (int) (this->m_28 - 0x4000));
        draw_ginja_object((int) (*(u32 *)&this->m_58));
        pop_matrix();
    }
}

}

}
