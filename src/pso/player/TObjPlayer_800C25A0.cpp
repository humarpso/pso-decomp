#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_effect_sequence__10TObjPlayerFv(void);
M2C_UNK update_camera_sequence__9TObjEneDDFPv();
M2C_UNK mult_vec_array__10TObjPlayerFUii(M2C_UNK, s32, s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();

extern s32 lbl_805D5178;
extern s32 lbl_805D517C;
extern s32 lbl_805D5180;

void update_effect_sequence__10TObjPlayerFv(void) {
    switch ((s32) lbl_805D5178) {
    case 1:
        rotate_matrix_y(0, lbl_805D517C);
        break;
    case 14:
        push_matrix();
        update_camera_sequence__9TObjEneDDFPv();
        mult_vec_array__10TObjPlayerFUii(0, lbl_805D5180, lbl_805D5180, 2);
        pop_matrix();
        break;
    }
    lbl_805D5178 += 1;
}

}
