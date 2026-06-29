#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* fn_802F2A2C(void*, s32);
void* __nw__7TObjectFUl(u32);
extern s32 tl_04;

void fn_802F2C50(void) {
    void* obj = __nw__7TObjectFUl(0x94);
    if (obj != 0) {
        fn_802F2A2C(obj, tl_04);
    }
}

}
