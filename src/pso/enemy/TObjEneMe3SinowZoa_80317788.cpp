#include "types.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"

extern "C" {

s32 render_model_if_visible__18TObjEneMe3SinowZoaFv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 post_translate_matrix(void *);
s32 push_reflect_matrix__12TObjEneReconFPv(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 restore_render_scissor(int);

extern const f32 TObjEneMe3SinowZoa__data_805DF31C;

s32 TObjEneMe3SinowZoa::render_model_if_visible() {
    if (get_mode__11TCameraCtrlFPv(((s32 *)&main_task)) & 0x20) {
        if (push_reflect_matrix__12TObjEneReconFPv((void *) (((u8 *)this) + 0x3D4)) != 0) {
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)((u8 *)this) + 0x24)));
            push_matrix();
            post_translate_matrix((void *) (((u8 *)this) + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3SinowZoa__data_805DF31C), (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x3E4)), (f32) (TObjEneMe3SinowZoa__data_805DF31C));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x60)));
            ((TObjEneRe7Berura *)((u8 *)this))->draw();
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
