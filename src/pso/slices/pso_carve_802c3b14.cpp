#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801C2214();
s32 TObjPlayer__sub_801D8D8C(u8);
M2C_UNK fn_802C3790(s32, s32);
M2C_UNK fn_802C37EC(s32, void *);
M2C_UNK fn_802C39CC(void *);
M2C_UNK fn_802C39F8(M2C_UNK, s32, s32);
M2C_UNK TObjPlayer__sub_802C4518(void *, M2C_UNK);
s32 TObjPlayer__sub_802C45C0(void *);
extern s32 lbl_805D5544;

s32 fn_802C3B14(u8 *arg0) {
    s32 temp_r31;
    u8 temp_r30;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r30 = M2C_FIELD(arg0, u8 *, 0x3A1);
    M2C_FIELD(arg0, s8 *, 0) = 5;
    fn_802C39F8(5, TObjPlayer__sub_801D8D8C(temp_r30), TObjPlayer__sub_801C2214());
    TObjPlayer__sub_802C4518(arg0, 1);
    fn_802C39CC(arg0);
    fn_802C37EC(M2C_FIELD(arg0, s32 *, 0x3A4), arg0 + 0x3C0);
    fn_802C3790(M2C_FIELD(arg0, s32 *, 0x3A4), TObjPlayer__sub_802C45C0(arg0));
    M2C_FIELD(arg0, s8 *, 3) = (s8) lbl_805D5544;
    return 1;
}

}
