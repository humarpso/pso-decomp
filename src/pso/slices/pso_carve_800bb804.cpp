#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(void *, int);
M2C_UNK TObjEneDD__sub_800BB88C();
extern s32 lbl_805D5328;

void fn_800BB804(u8 *arg0, u8 *arg1) {
    TObjEneDD__sub_800BB88C();
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg1, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg1, s16 *, 0x2A);
    TAdSinglePlyChrSelectGC__sub_8007C48C((void *) (arg0 + 0x160), (int) (M2C_FIELD(arg0, u16 *, 0x1C) + lbl_805D5328));
}

}
