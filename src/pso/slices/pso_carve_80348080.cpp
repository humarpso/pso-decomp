#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowDD__sub_80340E20(u32, s32);
M2C_UNK TWindowDD__sub_80340E50(u32, s32, s32);
M2C_UNK TWindowDD__sub_80341AF8(s32);
M2C_UNK TWindowDD__sub_80341B1C(s32);
s32 TWindowDD__sub_80342144(s32);
s32 TWindowDD__sub_8034217C(s32);
extern f32 lbl_805DFB54;

void TWindowDD__sub_80348080(void *arg0, s32 arg1) {
    TWindowDD__sub_80341AF8(arg1);
    TWindowDD__sub_80341B1C(arg1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindowDD__sub_80340E50(M2C_FIELD(arg0, u32 *, 0x7C), TWindowDD__sub_80342144(arg1), (s32) lbl_805DFB54);
        TWindowDD__sub_80340E20(M2C_FIELD(arg0, u32 *, 0x7C), TWindowDD__sub_8034217C(arg1));
    }
}

}
