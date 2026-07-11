#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 filter_input_flags__12TBoss1DragonFiii(void *, s32, M2C_UNK);

u8 check_attack_ready__12TBoss1DragonFPv(void *arg0) {
    u8 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x768) >= 0x96) && (filter_input_flags__12TBoss1DragonFiii(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x6E4), s32 *, 8), 0x400) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
