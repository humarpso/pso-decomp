#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_move_effect__22TAdMultiPlyChrSelectGCFi(s32 arg0);
u32 TAdChrMoveEffectGC__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D6E78;

u32 get_move_effect__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    u32 var_r0;

    if ((u32) lbl_805D6E78 == 0U) {
        var_r0 = __nw__7TObjectFUl(0x3A4);
        if (var_r0 != 0U) {
            var_r0 = TAdChrMoveEffectGC__ct(var_r0, arg0);
        }
        lbl_805D6E78 = var_r0;
    }
    return lbl_805D6E78;
}

}
