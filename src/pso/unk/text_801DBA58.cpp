#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK bswap__13packet_headerFv(void *);
void handle_cmd_90(u8 *arg0, s32 *arg1);
}

extern "C" {

void handle_cmd_90(u8 *arg0, s32 *arg1) {
    s32 sp8;
    M2C_UNK (*temp_r12)(u8);
    sp8 = M2C_FIELD(arg1, s32 *, 0);
    bswap__13packet_headerFv((void *) (&sp8));
    M2C_FIELD(arg0, s32 *, 0x190C) = (s32) M2C_FIELD(&sp8, u8 *, 0x1);
    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(u8), 0xBC28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(&sp8, u8 *, 0x1));
    }
}

}
