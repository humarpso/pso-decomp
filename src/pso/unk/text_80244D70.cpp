#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
bool fn_80244D70(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

bool fn_80244D70(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    temp_f2_2 = M2C_FIELD(arg1, f32 *, 0);
    if (temp_f2_2 >= (M2C_FIELD(arg0, f32 *, 0x30) + M2C_FIELD(arg0, f32 *, 0x38))) {
        return 0;
    }
    if ((temp_f2_2 + M2C_FIELD(arg2, f32 *, 0)) <= M2C_FIELD(arg0, f32 *, 0x40)) {
        return 0;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x34);
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    if (temp_f1 >= (temp_f2 + M2C_FIELD(arg0, f32 *, 0x3C))) {
        return 0;
    }
    return ((temp_f1 + M2C_FIELD(arg2, f32 *, 4)) <= temp_f2) == 0;
}

}
