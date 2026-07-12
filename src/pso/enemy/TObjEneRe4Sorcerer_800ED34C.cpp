#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_state_flag_0x10__18TObjEneRe4SorcererFPv(void *arg0);
M2C_UNK set_state_flags__18TObjEneRe4SorcererFPv();

void clear_state_flag_0x10__18TObjEneRe4SorcererFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFEF);
    if (!(M2C_FIELD(arg0, s32 *, 0x3CC) & 0x408)) {
        set_state_flags__18TObjEneRe4SorcererFPv();
    }
}

}
