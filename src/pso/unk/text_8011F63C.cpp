#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TLobby__sub_800822E8(int, int);
s32 TObjPlayer__sub_8011F63C(u8 *arg0);
}

extern "C" {

s32 TObjPlayer__sub_8011F63C(u8 *arg0) {
    u32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r3 != 0U) {
        if (TLobby__sub_800822E8((int) (temp_r3), (int) (0x20)) != 0) {
            return 0;
        }
        if (TLobby__sub_800822E8((int) (M2C_FIELD(arg0, u32 *, 0xF0)), (int) (0x40)) != 0) {
            return 1;
        }
        if (TLobby__sub_800822E8((int) (M2C_FIELD(arg0, u32 *, 0xF0)), (int) (0x80)) != 0) {
            return 2;
        }
        goto block_7;
    }
block_7:
    return -1;
}

}
