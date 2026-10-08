#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8006FBAC_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

extern "C" {
s32 is_flag_set__6TLobbyFv();
extern RecoveredGlobal_8006FBAC_lbl_8048C9D8 lbl_8048C9D8;
void mark_solo_win_closing__6TLobbyFv(void);
}

extern "C" {

s32 TLobby__sub_8006FBE4(void);
s32 mix_seed__6TLobbyFUs(u16 arg0);
u16 TLobby__sub_8006FAE4(void);
u32 get_player_by_client_id(s32);

s32 mix_seed__6TLobbyFUs(u16 arg0) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(void))TLobby__sub_8006FAE4)();
    return (temp_r3 << 0x10) | (temp_r3 ^ arg0);
}

s32 count_set_bits__6TLobbyFUi(u16);
s32 rand();
extern const f32 lbl_805D9100;
extern const f32 lbl_805D9104;

u16 TLobby__sub_8006FAE4(void) {
    f32 temp_f31;
    f32 temp_f30;
    s32 temp_r3;
    u16 var_r30;
    s32 var_r29;

    var_r29 = 0;
loop_1:
    var_r30 = (u16) (s32) (lbl_805D9100 * (lbl_805D9104 * (f32) rand()));
    temp_r3 = count_set_bits__6TLobbyFUi(var_r30);
    if ((temp_r3 < 4) || (temp_r3 > 0xC)) {
        var_r29 += 1;
        var_r30 = 0x3938;
        if (var_r29 < 8) {
            goto loop_1;
        }
    }
    return var_r30;
}
typedef char RecoveredGlobal_8006FBAC_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006FBAC_lbl_8048C9D8) == 0x748 ? 1 : -1];
void mark_solo_win_closing__6TLobbyFv(void) {
    if (is_flag_set__6TLobbyFv() != 0) {
        M2C_FIELD(&lbl_8048C9D8.value, s32 *, 0x30) = 1;
    }
}

s32 TLobby__sub_8006FBE4(void) {
    s32 count;
    s32 i;

    count = 0;
    for (i = 0; i < 4; i += 1) {
        if (get_player_by_client_id(i) != 0U) {
            count += 1;
        }
    }
    return count;
}

}
