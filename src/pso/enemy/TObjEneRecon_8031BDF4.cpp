#include "types.h"

extern "C" {

s32 render_model_if_visible__12TObjEneReconFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 push_reflect_matrix__12TObjEneReconFPv(void *);
s32 set_global_param__8TObjFishFl(int);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 restore_render_scissor(int);

extern s32 main_task[];

s32 render_model_if_visible__12TObjEneReconFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (push_reflect_matrix__12TObjEneReconFPv((void *) (arg0 + 0x41C)) != 0) {
            set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
            push_matrix();
            translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)arg0 + 0x38)), (f32) (*(f32 *)((s8 *)arg0 + 0x448)), (f32) (*(f32 *)((s8 *)arg0 + 0x40)));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
            draw__16TObjEneRe7BeruraFv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
