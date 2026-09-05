#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
#pragma scheduling off
extern "C" {
M2C_UNK TObjPlayer__sub_803DC460(void *);
M2C_UNK TObjPlayer__sub_803DC600();
M2C_UNK TObjPlayer__sub_803DC6F4();
M2C_UNK TObjPlayer__sub_803DC76C(int);
void TOSignCave03__sub_803DB510(s32 arg0);
M2C_UNK TObjPlayer__sub_803892B4(int, void *);
M2C_UNK GXClearVtxDesc();
s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);
void TObjPlayer__sub_803DB59C(s32 arg0);
}

extern "C" {

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);

void TOSignCave03__sub_803DB510(s32 arg0) {
    TObjPlayer__sub_803DC76C((int) (0));
    TObjPlayer__sub_803DC600();
    TObjPlayer__sub_803DC460((void *) (arg0));
    TObjPlayer__sub_803DC6F4();
}

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1) {
    return (arg0 >> (arg1 * 2)) & 3;
}
void TObjPlayer__sub_803DB59C(s32 arg0) {
    GXClearVtxDesc();
    TObjPlayer__sub_803892B4((int) (9), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (1)))));
    TObjPlayer__sub_803892B4((int) (0xA), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (2)))));
    TObjPlayer__sub_803892B4((int) (0xB), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (3)))));
    TObjPlayer__sub_803892B4((int) (0xD), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (5)))));
}

}
