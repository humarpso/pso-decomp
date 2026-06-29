#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjFogCollisionSwitch__sub_80153A0C();
u8 TODoorAncient08__sub_80229220(u16);

u8 TObjFogCollisionPoison__sub_80153420(void *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFogCollisionSwitch__sub_80153A0C();
    return (u8) (temp_r31 == TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0x8C)));
}

}
