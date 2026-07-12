#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TShopArmorListWindow__sub_80266D78(void *arg0);
s32 select_cursor_entry__6TLobbyFPv();

void TShopArmorListWindow__sub_80266D78(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x78) = (s16) M2C_FIELD(arg0, s16 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x7C) = select_cursor_entry__6TLobbyFPv();
}

}
