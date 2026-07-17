#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_ready__13TBoss2DeRolLeFPv(void *arg0) {
    int var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6AC) <= 0) && !(M2C_FIELD(arg0, s32 *, 0x3C0) & 4)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

void clear_play_flags__13TBoss2DeRolLeFPv(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r4, s32 *, 0x44) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x44) & 0xFFFFFFFE);
    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x70) & 0xFFFFFFFE);
}

}
