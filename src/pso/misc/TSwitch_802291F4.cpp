#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TSwitch__sub_802291F4(void);
s32 TSwitch__sub_80229164();

u8 TSwitch__sub_802291F4(void) {
    return (u8) (TSwitch__sub_80229164() != 0);
}

}
