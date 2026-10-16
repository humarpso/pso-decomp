#include "types.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"

extern "C" {

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 post_translate_matrix(void *);
s32 push_reflect_matrix__12TObjEneReconFPv(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 restore_render_scissor(int);

extern s32 main_task[];
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (push_reflect_matrix__12TObjEneReconFPv((void *) (arg0 + 0x3D4)) != 0) {
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)arg0 + 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3SinowZoa__data_805DF31C), (f32) (*(f32 *)((s8 *)arg0 + 0x3E4)), (f32) (TObjEneMe3SinowZoa__data_805DF31C));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
            ((TObjEneRe7Berura *)arg0)->draw();
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
