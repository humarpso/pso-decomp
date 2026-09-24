#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_801F4C70 { s32 a; s32 b; };

extern "C" {
M2C_UNK *TItemData__sub_8010EEDC(s32);
extern s32 lbl_805D5EF4;
extern s32 lbl_805D5EF8;
extern M2C_UNK lbl_805DC4FC;
M2C_UNK *fn_801F4C98(void);
extern s32 lbl_805D5EF4;
extern s32 lbl_805D5EF8;
s32 fn_801F4C70(void);
}

extern "C" {

s32 fn_801F4C70(void) {
    if (lbl_805D5EF4 >= 0) {
        return (*(E_801F4C70 * *)&lbl_805D5EF8)[lbl_805D5EF4].b;
    }
    return -1;
}

M2C_UNK *fn_801F4C98(void) {
    if ((s32) lbl_805D5EF4 >= 0) {
        return TItemData__sub_8010EEDC(M2C_FIELD(lbl_805D5EF8, M2C_UNK *, (lbl_805D5EF4 * 8)));
    }
    return &lbl_805DC4FC;
}

}
