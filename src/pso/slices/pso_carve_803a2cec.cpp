#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f64 TWindowSubComCard__sub_803A24E4();

f32 TLobby__sub_803A2CEC(void) {
    return (f32) TWindowSubComCard__sub_803A24E4();
}

}
