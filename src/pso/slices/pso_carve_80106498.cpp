#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOBoss4Rock__sub_80147A80(s32);
extern s32 lbl_805D5468;
extern s32 lbl_805D546C;

void run_task__9TItemDropFv(void) {
    TOBoss4Rock__sub_80147A80(lbl_805D546C);
    lbl_805D546C = 0;
    TOBoss4Rock__sub_80147A80(lbl_805D5468);
    lbl_805D5468 = 0;
}

}
