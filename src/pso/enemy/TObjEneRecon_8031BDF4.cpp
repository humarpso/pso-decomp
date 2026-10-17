#include "types.h"
#include "pso/enemy/TObjEneRecon.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"

extern "C" {

s32 get_mode__11TCameraCtrlFPv(void *);
s32 rotate_matrix_y(int, int);
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
s32 push_matrix();
s32 pop_matrix();
void restore_render_scissor(s32 arg0);

s32 TObjEneRecon::render_model_if_visible() {
    if (get_mode__11TCameraCtrlFPv(((s32 *)&main_task)) & 0x20) {
        if (((TObjEneRecon *)(((u8 *)this) + 0x41C))->push_reflect_matrix() != 0) {
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)((u8 *)this) + 0x24)));
            push_matrix();
            translate_matrix((0), (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x38)), (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x448)), (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x40)));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x60)));
            ((TObjEneRe7Berura *)((u8 *)this))->draw();
            pop_matrix();
            restore_render_scissor((1));
        }
        return 1;
    }
    return 0;
}

}
