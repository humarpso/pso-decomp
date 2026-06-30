#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8032E34C(void*, s32, s32, s32, s32, s32);
extern s32 tl_05;

void fn_8032E4C8(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl(0x70);
    if (obj != 0) {
        fn_8032E34C(obj, tl_05, arg1, arg2, -0x100, arg0);
    }
}

}
