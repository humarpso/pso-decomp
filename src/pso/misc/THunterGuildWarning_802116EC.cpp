#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_active__19THunterGuildWarningFv(void);

extern s32 THunterGuildWarning__data_805D6178;

u8 is_active__19THunterGuildWarningFv(void) {
    return (u8) (THunterGuildWarning__data_805D6178 != 0);
}

}
