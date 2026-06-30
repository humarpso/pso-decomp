#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TDLGraph__sub_8007F6F8(s32, M2C_UNK);
s32 fn_801F34F8();
s32 fn_80432858(M2C_UNK, u8 *);
extern u32 lbl_805D6CC4;

u8 fn_8032C93C(void) {
    u8 sp8;

    if (fn_801F34F8() == 3) {
        if (fn_80432858(3, &sp8) == 0) {
            return 0U;
        }
        if ((u32) lbl_805D6CC4 != 0U) {
            TDLGraph__sub_8007F6F8(sp8 + 1, 0x65);
        }
        return sp8;
    }
    return 0U;
}

}
