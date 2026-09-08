#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8005455C_lbl_80485EC8 {
    M2C_UNK value;
    u8 remaining[0x1DC];
};

extern "C" {
extern RecoveredGlobal_8005455C_lbl_80485EC8 lbl_80485EC8;
extern const f32 lbl_805D8B20;
extern const f32 lbl_805D8B78;
extern const f32 lbl_805D8B7C;
void fn_8005455C(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8005455C_lbl_80485EC8_size[sizeof(RecoveredGlobal_8005455C_lbl_80485EC8) == 0x1E0 ? 1 : -1];
void fn_8005455C(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x3F4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E8) + M2C_FIELD(arg0, f32 *, 0x3EC));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3F0);
    switch (temp_r0) {
    case 0:
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3E8);
        if (temp_f1 >= lbl_805D8B78) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (temp_f1 - lbl_805D8B78);
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    case 1:
        if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B7C) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B7C;
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, f32 *, 0x3E8) >= lbl_805D8B7C) {
            M2C_FIELD(arg0, s32 *, 0x3E4) = (s32) M2C_FIELD(((u8 *)&lbl_80485EC8.value + (M2C_FIELD(arg0, s32 *, 0x3E4) << 5)), s32 *, 4);
            M2C_FIELD(arg0, s32 *, 0x3F0) = (s32) M2C_FIELD(&lbl_80485EC8.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x3E4) << 5));
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
            M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
        }
        break;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x3E8);
    if ((temp_f1_2 < lbl_805D8B20) || (temp_f1_2 >= lbl_805D8B78)) {
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) lbl_805D8B20;
    }
}
#pragma pop

}
