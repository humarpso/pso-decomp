#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(s32);
M2C_UNK TWindow__close(s32);
extern u32 lbl_805D5E7C;
extern u32 lbl_805D5E80;
extern u32 lbl_805D5E84;
extern u32 lbl_805D5EB0;
extern u32 lbl_805D5EB4;
extern u32 lbl_805D5EB8;
extern u32 lbl_805D5EBC;
extern u32 lbl_805D5EC0;

void fn_801F2D88(void) {
    if ((u32) lbl_805D5E7C != 0U) {
        TWindow__close(lbl_805D5E7C);
        lbl_805D5E7C = 0U;
    }
    if ((u32) lbl_805D5E80 != 0U) {
        TWindow__close(lbl_805D5E80);
        lbl_805D5E80 = 0U;
    }
    if ((u32) lbl_805D5E84 != 0U) {
        TWindow__close(lbl_805D5E84);
        lbl_805D5E84 = 0U;
    }
    if ((u32) lbl_805D5EB0 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EB0);
        lbl_805D5EB0 = 0U;
    }
    if ((u32) lbl_805D5EB4 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EB4);
        lbl_805D5EB4 = 0U;
    }
    if ((u32) lbl_805D5EB8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EB8);
        lbl_805D5EB8 = 0U;
    }
    if ((u32) lbl_805D5EBC != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EBC);
        lbl_805D5EBC = 0U;
    }
    if ((u32) lbl_805D5EC0 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EC0);
        lbl_805D5EC0 = 0U;
    }
}

}
