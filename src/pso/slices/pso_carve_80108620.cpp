#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801087B8(u32, s32, u32, s32, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);

void fn_80108620(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && (arg1 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(arg1) != 0)) {
        obj = __nw__7TObjectFUl(0x28);
        if (obj != 0U) {
            fn_801087B8(obj, arg0, arg1, arg2, 0x1BD);
        }
        obj = __nw__7TObjectFUl(0x28);
        if (obj != 0U) {
            fn_801087B8(obj, arg0, arg1, arg3, 0x1BD);
        }
    }
}

}
