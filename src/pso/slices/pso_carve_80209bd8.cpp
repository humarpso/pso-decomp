#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802098AC(s16 *);
M2C_UNK fn_802099FC(s16 *, s32);
M2C_UNK fn_80209AEC(s32 *, s32 *);
extern s32 lbl_8044BAF8[];

s32 fn_80209BD8(s16 *arg0) {
    s32 spC;
    s32 sp8;

    fn_80209AEC(&spC, &sp8);
    if ((spC != -1) && (sp8 != -1)) {
        *arg0 = (s16) lbl_8044BAF8[sp8];
        fn_802099FC(arg0, spC);
        fn_802098AC(arg0);
        return 0;
    }
    return 1;
}

}
