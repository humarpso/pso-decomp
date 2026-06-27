#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(s32);
u32 TObjButterflyLobby__sub_8007A5D8(s32, s32, M2C_UNK);

void TTecSlicer__sub_8023B670(s32 arg0) {
    if (TObjButterflyLobby__sub_8007A5D8(arg0 + 0x44, arg0 + 0x38, 0x8100) != 0U) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
