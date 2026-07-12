#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_801C5164(void);
s32 TOKeyMachine01__sub_802034A8();
u32 __nw__7TObjectFUl(M2C_UNK);
u32 fn_801C5380(void *, s32);

extern u32 lbl_805D5DD0;
extern s32 tl_00;

s32 TAdSinglePlyChrSelectGC__sub_801C5164(void) {
    s32 temp_r3;
    u32 var_r0;

    temp_r3 = TOKeyMachine01__sub_802034A8();
    if ((temp_r3 != 0x10) && (temp_r3 != 0x11)) {
        return 0;
    }
    if ((u32) lbl_805D5DD0 != 0U) {
        return 0;
    }
    var_r0 = __nw__7TObjectFUl(0x28);
    if (var_r0 != 0U) {
        var_r0 = fn_801C5380((void *) var_r0, tl_00);
    }
    lbl_805D5DD0 = var_r0;
    return 1;
}

}
