#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DB24C { void *a; s32 b; s32 c; };

extern "C" {
extern u8 lbl_8058CD48[];
extern S_803DB24C lbl_8058CD70;
void TObjPlayer__sub_803DB24C(s32 x);
}

extern "C" {

s32 TObjPlayer__sub_803DB23C(void);
s32 TObjPlayer__sub_803DB244(void);

s32 TObjPlayer__sub_803DB23C(void) {
    return 0;
}

s32 TObjPlayer__sub_803DB244(void) {
    return 0;
}
#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DB24C(s32 x) {
    lbl_8058CD70.a = lbl_8058CD48;
    lbl_8058CD70.b = 0;
    lbl_8058CD70.c = x;
}
#pragma pop

}
