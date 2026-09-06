#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * TAdChrSelPlyPlateGC__ct(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern u8 *lbl_805D67E4;
u8 *fn_802C6F20(s32 arg0, s32 arg1);
}

extern "C" {

u8 *fn_802C6F20(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((void *) lbl_805D67E4 != NULL) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x538));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TAdChrSelPlyPlateGC__ct(temp_r3, arg0, arg1));
    }
    lbl_805D67E4 = var_r0;
    return var_r0;
}

}
