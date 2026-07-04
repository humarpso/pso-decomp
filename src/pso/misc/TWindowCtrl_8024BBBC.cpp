#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024BBBC(void *arg0);
s32 TWindowCtrl__sub_8024AF74(s32);
s32 TWindowCtrl__sub_8024B054(s32);
void *TWindowTradeRequest__ct(void *, void *);
void *__nw__7TObjectFUl(M2C_UNK);
s32 fn_80246CB8();
s32 fn_8024701C(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D53A0;

void TWindowCtrl__sub_8024BBBC(void *arg0) {
    void *var_r0;

    if ((fn_80246CB8() == 0) || (TWindowCtrl__sub_8024AF74(lbl_805D53A0) != 0) || (TWindowCtrl__sub_8024B054(lbl_805D53A0) != 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) || (((u32) M2C_FIELD(arg0, void **, 0x38) != 0U) && (fn_8024701C(M2C_FIELD(arg0, void **, 0x38)) != 0))) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        var_r0 = __nw__7TObjectFUl(0x24);
        if (var_r0 != NULL) {
            var_r0 = TWindowTradeRequest__ct(var_r0, arg0);
        }
        M2C_FIELD(arg0, void **, 0x40) = var_r0;
    }
}

}
