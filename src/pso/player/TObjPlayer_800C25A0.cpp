#include "types.h"

extern "C" {

void update_effect_sequence__10TObjPlayerFv(void);
s32 update_camera_sequence__9TObjEneDDFPv();
s32 mult_vec_array__10TObjPlayerFUii(s32, s32, s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();

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
