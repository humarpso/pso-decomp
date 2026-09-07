#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8006F5B0_lbl_8048C9D8 { s32 value; u8 remaining[0x744]; };
typedef char RecoveredGlobal_8006F5B0_lbl_8048C9D8_size[sizeof(RecoveredGlobal_8006F5B0_lbl_8048C9D8) == 0x748 ? 1 : -1];

extern "C" {
s32 get_layout_id__20TWindowSubStatusDispFv(int);
s32 TWindowSubStatusDisp__sub_8006F0D8(void *, int);
s32 TWindowSubStatusDisp__sub_8006F190(int);
s32 is_id_out_of_range__6TLobbyFi(s32 arg0);
s32 TLobby__sub_8006F48C();
s32 TLobby__sub_8006F994(int);
s32 mix_seed_checked__6TLobbyFi(void *);
u32 get_card_window__17TWindowSubComCardFUi(int);
extern RecoveredGlobal_8006F5B0_lbl_8048C9D8 lbl_8048C9D8;
s32 TLobby__sub_8006F5B0(s32 arg0);
}

extern "C" {

s32 check_challenge_time_range__6TLobbyFi(s32 arg0);
s32 is_id_out_of_range__6TLobbyFi(s32 arg0);
s32 calc_challenge_time_limit__6TLobbyFv();

s32 check_challenge_time_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < calc_challenge_time_limit__6TLobbyFv()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}

s32 is_id_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
s32 TLobby__sub_8006F5B0(s32 arg0) {
    s32 temp_r30;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 var_r28;
    u32 temp_r29;
    temp_r29 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv((int) (-1));
    if ((temp_r29 == 0U) || ((s32) lbl_8048C9D8.value < 0) || ((s32) lbl_8048C9D8.value >= temp_r3)) {
        return 0;
    }
    temp_r3_2 = TWindowSubStatusDisp__sub_8006F0D8((void *) (temp_r29 + 0x21C4), (int) (-1));
    var_r28 = 0;
    temp_r30 = lbl_8048C9D8.value * 4;
    temp_r3_3 = M2C_FIELD(temp_r3_2, M2C_UNK *, temp_r30);
    if (temp_r3_3 == 0) {
        if (TWindowSubStatusDisp__sub_8006F190((int) (-1)) == 0) {
            TLobby__sub_8006F48C();
        }
        var_r28 = 1;
        goto block_12;
    }
    temp_r3_4 = TLobby__sub_8006F994((int) (temp_r3_3));
    if (is_id_out_of_range__6TLobbyFi((s32)((int) (temp_r3_4))) != 0) {
        M2C_FIELD(temp_r3_2, M2C_UNK *, temp_r30) = 0;
        return 0;
    }
    if (arg0 < temp_r3_4) {
        var_r28 = 1;
    }
block_12:
    if (var_r28 == 0) {
        return 0;
    }
    M2C_FIELD(temp_r3_2, M2C_UNK *, temp_r30) = mix_seed_checked__6TLobbyFi((void *) (arg0));
    return 1;
}

}
