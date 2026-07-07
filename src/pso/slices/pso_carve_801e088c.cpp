#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);

s32 *fn_801E088C(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag((s32 *)((s8 *)arg0 + 4), (s32 *)((s8 *)arg1 + 4));
    return arg0;
}

}
