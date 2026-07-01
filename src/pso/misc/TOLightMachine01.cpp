#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__16TOLightMachine01Fv(void *arg0);

f32 fn_803D64C0(s32);

void run_task__16TOLightMachine01Fv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + M2C_FIELD(arg0, s32 *, 0xA4));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x98) * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0xA8)));
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) + M2C_FIELD(arg0, s32 *, 0x8C));
}

}
