#include "types.h"

extern "C" {

s32 play_sound_effect(s32, s32, s32, s32);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(int);
s32 rotate_matrix_x(int, int);
s32 spawn_particle_effect(u32, s32);
void TObjPlayer__sub_8012C4E0(void);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 is_owner_alive__10TObjPlayerFv();
s32 notify_fish_if_valid__10TObjPlayerFUl(int);
s32 rocket_punch_return_timer(u32);

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer::notify_and_cleanup_fishing() {
    u8 *arg0 = (u8 *)this;
    if ((is_owner_alive__10TObjPlayerFv() != 0) && ((u32) *(u32 *)((s8 *)arg0 + 0x58) != 0U) && ((u32) *(u32 *)((s8 *)arg0 + 0x5C) != 0U)) {
        push_matrix();
        notify_fish_if_valid__10TObjPlayerFUl((int) (*(u32 *)((s8 *)arg0 + 0x5C)));
        post_translate_matrix((void *) (arg0 + 0x1C));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x2C)));
        rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x28) - 0x4000));
        draw_ginja_object((int) (*(u32 *)((s8 *)arg0 + 0x58)));
        pop_matrix();
    }
}

}

}
