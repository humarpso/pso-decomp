#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_8001BF10(void *);
M2C_UNK fn_8010F0C0(void *);
s32 alloc_buffer__11TOBoss4RockFPv(void *);

u8 *fn_8010F1B8(u8 *arg0, s32 arg1, s32 arg2) {
    TObjPlayer__sub_8001BF10((void *) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv((void *) (arg2));
    fn_8010F0C0((void *) (arg0));
    return arg0;
}

}
