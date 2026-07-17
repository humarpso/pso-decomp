#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_803D8BAC(u8 *arg0, u8 *arg1);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(f32, f32, f32);

void TObjPlayer__sub_803D8BAC(u8 *arg0, u8 *arg1) {
    TOMonitorMachine01__sub_803D8B5C((f32) (M2C_FIELD(arg1, f32 *, 0)), (f32) (M2C_FIELD(arg1, f32 *, 4)), (f32) (M2C_FIELD(arg1, f32 *, 8)));
}

}
