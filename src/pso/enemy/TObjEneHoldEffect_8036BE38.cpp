#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneHoldEffect__sub_8036BE38(void *arg0);
s32 TObjEneHoldEffect__sub_8036BEB4(void *arg0);
s32 check_active__17TObjEneHoldEffectFi(s32 arg0);
s32 TObjEneHoldEffect__sub_8036BF10(s32);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_valid_technique_id__10TObjPlayerFs(s32);

s32 TObjEneHoldEffect__sub_8036BE38(void *arg0) {
    s8 b3;

    if (is_valid_technique_id__10TObjPlayerFs((s32) M2C_FIELD(arg0, s8 *, 0)) == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 1) < 0) {
        return 0;
    }
    b3 = M2C_FIELD(arg0, s8 *, 3);
    if ((b3 < 0) || (b3 > 0xA)) {
        return 0;
    }
    return 1;
}

s32 TObjEneHoldEffect__sub_8036BEB4(void *arg0) {
    return ((u32) M2C_FIELD(arg0, s16 *, 2) >> 0x1FU) ^ 1;
}

s32 check_active__17TObjEneHoldEffectFi(s32 arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return TObjEneHoldEffect__sub_8036BF10(arg0 + 4) != 0 ? 1 : 0;
}

}
