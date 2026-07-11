#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_type_valid__21TWindowSubCustomEquipFPv(void *arg0);

s32 is_type_valid__21TWindowSubCustomEquipFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x62);
    switch ((s8) temp_r0) {
    case 0:
        return 0;
    default:
    case 1:
        return 1;
    }
}

}
