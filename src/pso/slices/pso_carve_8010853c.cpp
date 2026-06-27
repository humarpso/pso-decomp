#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemEffCane__ct(void *, s32, u32, s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 all_parents_unqueued_for_destruction__7TObjectFv(u32);

void fn_8010853C(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    void *temp_nw;
    if ((arg0 != 0) && (arg1 != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv(arg1) != 0) && ((temp_nw = (void *)__nw__7TObjectFUl(0x28)) != 0)) {
        TItemEffCane__ct(temp_nw, arg0, arg1, arg2, arg3);
    }
}

}
