#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_801B08F0(s32 arg0);
void disable_drop_weapon_on_death__10TObjPlayerFPv(void *arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, M2C_UNK);

void disable_drop_weapon_on_death__10TObjPlayerFPv(void *arg0) {
    set_state_flags__10TObjPlayerFPvUi(arg0, 0x01000000);
}

s32 TLobby__sub_801B08F0(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

}
