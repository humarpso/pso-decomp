#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_valid__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_affected__17TObjEneHoldEffectFPv(void *arg0);
s32 is_active__17TObjEneHoldEffectFPv(void *arg0);
s32 is_target_valid__17TObjEneHoldEffectFPv();
s32 is_valid_technique_id__10TObjPlayerFs(s16);
s32 is_valid_technique_slot__10TObjPlayerFUc(u8);

s32 is_valid__17TObjEneHoldEffectFPv(void *arg0) {
    s8 temp_r4;
    s16 temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, s8 *, 0);
    if (((temp_r4 != -1) && (temp_r4 < 0)) || (temp_r4 >= 6)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 1) < 0) {
        return 0;
    }
    temp_r4_2 = M2C_FIELD(arg0, s16 *, 2);
    if ((temp_r4_2 < 0) || (temp_r4_2 > 0xA)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s16 *, 4) < 0) {
        return 0;
    }
    return ((u32) M2C_FIELD(arg0, s16 *, 6) >> 0x1FU) ^ 1;
}

s32 is_target_affected__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return is_valid_technique_id__10TObjPlayerFs(M2C_FIELD(arg0, s16 *, 4)) != 0 ? 1 : 0;
}

s32 is_active__17TObjEneHoldEffectFPv(void *arg0) {
    if (is_target_valid__17TObjEneHoldEffectFPv() == 0) {
        return 0;
    }
    return is_valid_technique_slot__10TObjPlayerFUc(M2C_FIELD(arg0, u8 *, 4)) != 0 ? 1 : 0;
}

}
