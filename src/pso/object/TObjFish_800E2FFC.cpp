#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 TObjFish__sub_800E30BC(void *);
u8 * fn_800E31C4(void *, void *, s32);
s32 TObjFish__sub_800E3124(u8 *arg0, s32 arg1);
}

extern "C" {

s32 TObjFish__sub_800E3188(s32 arg0, s16 arg1);
void init_state_1__8TObjFishFPv(void *arg0);
M2C_UNK __dl__FPv();

void init_state_1__8TObjFishFPv(void *arg0) {
    TObjFish__sub_800E3188((s32)(arg0), (s16)(1));
}

s32 TObjFish__sub_800E3124(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    if (TObjFish__sub_800E30BC(arg0) != 0) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)8);
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = (long) (fn_800E31C4((void *) temp_r3, arg0, arg1));
        }
        return var_r0;
    }
    return 0;
}

s32 TObjFish__sub_800E3188(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
