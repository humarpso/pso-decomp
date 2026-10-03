#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void exit_death_state__10TObjPlayerFPv(u8 *arg0);
M2C_UNK zero_vec3(void *, s32);
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);

void exit_death_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
    M2C_FIELD(arg0, s32 *, 0x36C) = 0;
    zero_vec3(arg0 + 0x5FC, temp_r4);
    clear_status_bit6__10TObjPlayerFPv(arg0);
}

}
