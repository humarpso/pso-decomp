#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemEffCane__ct(void *, s32, u32, s32, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);

void fn_801085B0(s32 arg0, u32 arg1, s32 arg2) {
    void *temp_r3;
    if ((arg0 != 0) && (arg1 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(arg1) != 0)) {
        temp_r3 = (void *)__nw__7TObjectFUl(0x28);
        if (temp_r3 != (void *)0U) {
            TItemEffCane__ct(temp_r3, arg0, arg1, arg2, 0x1BD);
        }
    }
}

}
