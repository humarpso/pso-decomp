#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 fn_80011014();
M2C_UNK obj_getField1c(s32);
s32 fn_800B9B84();
M2C_UNK TObjEneDD__sub_800BA438(s32, s32);
s32 TObjEneDD__sub_800BA828();
M2C_UNK fn_800BBE90();
s32 TPhotonMylla__sub_80154CB4(u16);
extern f32 lbl_805D9790;

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1) {
    s32 temp_r3;

    fn_800BBE90();
    if (fn_800B9B84() != 0) {
        obj_getField1c(arg1);
        if (TObjEneDD__sub_800BA828() != 0) {
            temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xB0));
            if ((temp_r3 != 0) && (fn_80011014() < lbl_805D9790)) {
                TObjEneDD__sub_800BA438(temp_r3, arg1);
            }
        }
    }
}

}
