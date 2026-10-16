#include "types.h"
#include "pso/object/TObjDFDemo4.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 clear_render_callback__8TObjFishFv(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_model_motion(int, int, f32);
void sub_8004F1FC__11TObjDFDemo4Fv(u8 *arg0);
}

extern "C" {

void TObjDFDemo4::sub_8004F1FC() {
    u8 *arg0 = (u8 *)this;
    s32 var_r31;
    u8 *temp_r30;
    s32 var_r29;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF8) >= 0x44) {
        push_matrix();
        TObjPlayer::set_global_flag();
        post_translate_matrix((void *) (arg0 + 0xE8));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0xF4)));
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r30 = arg0 + var_r31;
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)temp_r30 + 0xC8)));
            if (var_r29 == 0) {
                ((TObjFish *)(*(s32 *)((s8 *)arg0 + 0x100)))->set_draw_callback_list();
            }
            draw_model_motion((int) (*(s32 *)((s8 *)temp_r30 + 0xC4)), (int) (*(s32 *)((s8 *)temp_r30 + 0xCC)), (f32) (*(f32 *)((s8 *)arg0 + 0xFC)));
            if (var_r29 == 0) {
                clear_render_callback__8TObjFishFv((int) (*(s32 *)((s8 *)arg0 + 0x100)));
            }
            var_r29 += 1;
            var_r31 += 0xC;
        } while (var_r29 < 3);
        TObjPlayer::clear_global_state();
        pop_matrix();
    }
}

}
