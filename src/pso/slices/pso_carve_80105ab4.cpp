#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK build_6x05_write_switch_flag();

void *build_6x06_send_guild_card(void *arg0) {
    build_6x05_write_switch_flag();
    M2C_FIELD(arg0, s8 *, 0) = 0x60;
    M2C_FIELD(arg0, s8 *, 1) = 6;
    return arg0;
}

}
