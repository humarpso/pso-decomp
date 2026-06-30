#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001BF40(M2C_UNK *);
M2C_UNK TOBoss4Rock__sub_80147A80(s32);
extern u32 lbl_805D5418;
extern s32 lbl_805D541C;
extern s32 lbl_805D5420;
extern s32 lbl_805D5424;
extern s32 lbl_805D5428;
extern s32 lbl_805D542C;
extern M2C_UNK lbl_805D5430;

void fn_80104038(void) {
    TOBoss4Rock__sub_80147A80(lbl_805D542C);
    lbl_805D542C = 0;
    TOBoss4Rock__sub_80147A80(lbl_805D5424);
    lbl_805D5424 = 0;
    lbl_805D5428 = 0;
    TOBoss4Rock__sub_80147A80(lbl_805D5420);
    lbl_805D5420 = 0;
    TOBoss4Rock__sub_80147A80(lbl_805D541C);
    lbl_805D541C = 0;
    if ((u32) lbl_805D5418 != 0U) {
        TOBoss4Rock__sub_80147A80(lbl_805D5418 - 0x10);
    }
    lbl_805D5418 = 0U;
    fn_8001BF40(&lbl_805D5430);
}

}
