#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_80100490(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

s32 fn_8011BADC(void *arg0) {
    if (fn_80100490(M2C_FIELD(arg0, s32 *, 0x54)) == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0 ? 1 : 0;
}

}
