#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TRaderMapCore__sub_801A6CEC();
M2C_UNK fn_801A6FF8(s32, s32, s32, s32);

void dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = TRaderMapCore__sub_801A6CEC();
    fn_801A6FF8(arg0, t, arg2, arg3);
}

}
