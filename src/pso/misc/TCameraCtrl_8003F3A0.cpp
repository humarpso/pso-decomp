#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_adjusted_angle__11TCameraCtrlFPvi(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s16 *, 0x2C) + arg1;
}

u16 get_param_offset__11TCameraCtrlFPvi(void *arg0, s32 arg1) {
    return (u16) (M2C_FIELD(arg0, u16 *, 0x1C) + arg1);
}

}
