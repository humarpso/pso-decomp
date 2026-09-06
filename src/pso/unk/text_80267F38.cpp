#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u8 * fn_802683F4(void *, s32, s32, s16);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TShopJudgmentItemWindow__sub_80267F9C(void *, void *);
u8 *fn_80267F38(s32 arg0, s32 arg1, s32 arg2, s16 arg3);
}

extern "C" {

u8 *fn_80267F38(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    TShopJudgmentItemWindow__sub_80267F9C((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x88));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(fn_802683F4(temp_r3, arg0, arg2, arg3));
    }
    return var_r0;
}

}
