#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 rand__11TOBoss4RockFv(void);

extern u32 lbl_805D45F0;

s32 rand__11TOBoss4RockFv(void) {
    u32 temp_r0;

    temp_r0 = (lbl_805D45F0 * 0x41C64E6D) + 0x3039;
    lbl_805D45F0 = temp_r0;
    return (temp_r0 >> 0x10U) & 0x7FFF;
}

}
