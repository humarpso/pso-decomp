#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8033D324(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();

extern M2C_UNK lbl_80477F2C[];

void TObjPlayer__sub_8033D324(void *arg0) {
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803E4BC4();
    TOHangerMachine01__sub_803D9C00(lbl_80477F2C);
    TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0xD8));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, f32 *, 0xE0));
    TObjPlayer__sub_803E4BD0();
    TObjPlayer__sub_803D9B78();
}

}
