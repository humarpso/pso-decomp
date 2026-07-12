#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_803517F8(void *arg0, s32 arg1);
s32 TObjPlayer__sub_8035186C(void *arg0, s32 arg1);
s32 TObjPlayer__sub_803519D8(void *, s32);
s32 fn_803519F0();
s32 fn_803519FC(u32, s32);
s32 fn_80351A14(u32, s32);

s32 TObjPlayer__sub_803517F8(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        return 0;
    }
    if ((fn_803519F0() == 0) || (TObjPlayer__sub_803519D8(arg0, arg1) == 0)) {
        return 0;
    }
    return fn_803519FC(M2C_FIELD(arg0, u32 *, 0xC), arg1);
}

s32 TObjPlayer__sub_8035186C(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xC) == 0U) {
        return 0;
    }
    if ((fn_803519F0() == 0) || (TObjPlayer__sub_803519D8(arg0, arg1) == 0)) {
        return 0;
    }
    return fn_80351A14(M2C_FIELD(arg0, u32 *, 0xC), arg1);
}

}
