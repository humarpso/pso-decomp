#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_enabled__9TItemDropFv(void);
u8 is_not_special__9TItemDropFv(void);
u8 can_drop__9TItemDropFv(void);
s32 get_drop_flag__6TLobbyFv();
s32 TLobby__sub_8030A7B0();

u8 is_enabled__9TItemDropFv(void) {
    return (u8) (TLobby__sub_8030A7B0() != 1);
}

u8 is_not_special__9TItemDropFv(void) {
    return (u8) (TLobby__sub_8030A7B0() != 1);
}

u8 can_drop__9TItemDropFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((TLobby__sub_8030A7B0() != 1) && (get_drop_flag__6TLobbyFv() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}

}
