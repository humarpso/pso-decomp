#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
extern "C" {
M2C_UNK TObjPlayer__sub_803E4354();
M2C_UNK TObjPlayer__sub_803E4468();
void TObjPlayer__sub_803E44D4();
M2C_UNK TObjPlayer__sub_803E4BDC(void *, void *, f32, void (*)());
void TObjEneSlimeOne__sub_803E4AF4(void *arg0, void *arg1, f32 farg0);
}

extern "C" {

void clear_global_state__10TObjPlayerFv(void);
void clear_move_state_bits__10TObjPlayerFv(void);
void set_global_flag__10TObjPlayerFv(void);
void set_global_state__10TObjPlayerFi(s32 arg0);

extern s32 lbl_805D77F8;

void clear_move_state_bits__10TObjPlayerFv(void) {
    lbl_805D77F8 &= 0xFFFFF9FF;
}

extern s32 lbl_805D77DC;

void set_global_state__10TObjPlayerFi(s32 arg0) {
    lbl_805D77DC = arg0;
}

extern s32 lbl_805D7808;

void TObjEneSlimeOne__sub_803E4AF4(void *arg0, void *arg1, f32 farg0) {
    TObjPlayer__sub_803E4354();
    TObjPlayer__sub_803E4BDC(arg0, arg1, farg0, TObjPlayer__sub_803E44D4);
    TObjPlayer__sub_803E4468();
}

void set_global_flag__10TObjPlayerFv(void) {
    lbl_805D7808 = 1;
}

extern s32 lbl_805D7808;

void clear_global_state__10TObjPlayerFv(void) {
    lbl_805D7808 = 0;
}

}
