#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TOBoss4Rock__sub_80147A80(void*);
extern u32 lbl_805D4AA0;
extern s32 lbl_805D4AA4;
extern s32 lbl_805D4AA8;
extern s32 lbl_805D4AAC;
extern s32 lbl_805D4AB0;

void fn_8001E358(void) {
    if ((u32) lbl_805D4AA0 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D4AA0);
        lbl_805D4AA0 = 0U;
    }
    lbl_805D4AA4 = 0;
    lbl_805D4AA8 = 0;
    lbl_805D4AAC = 0;
    lbl_805D4AB0 = 0;
}

}
