#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK post_translate_matrix(void *);
s32 push_reflect_matrix__12TObjEneReconFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK restore_render_scissor(int);

extern M2C_UNK main_task[];
extern const f32 TObjEneMe3SinowZoa__data_805DF31C;

s32 render_model_if_visible__18TObjEneMe3SinowZoaFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (push_reflect_matrix__12TObjEneReconFPv((void *) (arg0 + 0x3D4)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            translate_matrix((int) (0), (f32) (TObjEneMe3SinowZoa__data_805DF31C), (f32) (M2C_FIELD(arg0, f32 *, 0x3E4)), (f32) (TObjEneMe3SinowZoa__data_805DF31C));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            pop_matrix();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

}
