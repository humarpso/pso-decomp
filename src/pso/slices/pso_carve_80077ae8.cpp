#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80077B34(u32, s32);
u32 TAdSinglePlyChrSelectGC__sub_8007EB94(M2C_UNK);
extern u32 lbl_805D4E58;

void fn_80077AE8(s32 arg0) {
    if ((u32) lbl_805D4E58 == 0U) {
        lbl_805D4E58 = TAdSinglePlyChrSelectGC__sub_8007EB94(0x704);
    }
    fn_80077B34(lbl_805D4E58, arg0);
}

}
