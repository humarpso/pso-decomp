#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_803644B8(u32, s32, s32, s32, s32);

void fn_80364570(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        fn_803644B8(obj, arg0, arg1, arg2, arg3);
    }
}

}
