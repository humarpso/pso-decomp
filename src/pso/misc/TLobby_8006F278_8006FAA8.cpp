#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8006FBE4(void);
s32 mix_seed__6TLobbyFUs(u16 arg0);
s32 TLobby__sub_8006FAE4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

s32 mix_seed__6TLobbyFUs(u16 arg0) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_8006FAE4();
    return (temp_r3 << 0x10) | (temp_r3 ^ arg0);
}

s32 TLobby__sub_8006FBE4(void) {
    s32 count;
    s32 i;

    count = 0;
    for (i = 0; i < 4; i += 1) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(i) != 0U) {
            count += 1;
        }
    }
    return count;
}

}
