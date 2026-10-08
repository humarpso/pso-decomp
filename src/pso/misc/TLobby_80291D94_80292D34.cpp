#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80292DA0 {
    s32 a;
    s32 seed;
};

extern "C" {
s32 *TWindowSubStatusDisp__sub_8006F0D8(void *, s32);
E_80292DA0 *TWindowSubStatusDisp__sub_8006F134(void *, s32);
M2C_UNK resolve_player_slot__20TWindowSubStatusDispFi(M2C_UNK);
s32 get_valid_slot__6TLobbyFi(s32);
s32 get_slot_clamped__6TLobbyFv(s32);
s32 mix_seed__6TLobbyFUs(s32);
s32 TWindowSubStatusDisp__sub_80071988(u16, s32);
u8 *get_card_window__17TWindowSubComCardFUi(u32);
s32 TLobby__sub_80292AB4(s32, u16, s32);
s32 TLobby__sub_80292BB8(s32, u16, s32);
extern s32 lbl_804DB1F0[];
s32 TLobby__sub_80292DA0(s32 seed, u16 card);
}

extern "C" {

s32 calc_min_challenge_progress__6TLobbyFv(void);
s32 count_card_layout_entries__6TLobbyFv(s32);
u32 get_player_by_client_id(s32);
s32 get_layout_id__20TWindowSubStatusDispFv();
M2C_UNK resolve_player_slot__20TWindowSubStatusDispFi(M2C_UNK);

s32 calc_min_challenge_progress__6TLobbyFv(void) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;

    resolve_player_slot__20TWindowSubStatusDispFi(-1);
    var_r31 = get_layout_id__20TWindowSubStatusDispFv();
    var_r30 = 0;
    do {
        if (get_player_by_client_id(var_r30) != 0U) {
            temp_r3 = count_card_layout_entries__6TLobbyFv(var_r30);
            if (var_r31 > temp_r3) {
                var_r31 = temp_r3;
            }
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}
s32 TLobby__sub_80292DA0(s32 seed, u16 card) {
    s32 result;
    s32 total;
    s32 id;
    u8 *base;
    s32 next;
    E_80292DA0 *e;
    id = ((s32)resolve_player_slot__20TWindowSubStatusDispFi((M2C_UNK)(-1)));
    result = -4;
    TLobby__sub_80292BB8(seed, card, id);
    total = TWindowSubStatusDisp__sub_80071988(card, id);
    if (total != 0) {
        base = get_card_window__17TWindowSubComCardFUi(card) + 0x21C4;
        total -= get_valid_slot__6TLobbyFi(TWindowSubStatusDisp__sub_8006F0D8(base, id)[lbl_804DB1F0[0]]);
        total += seed;
        result = TLobby__sub_80292AB4(total, card, id);
        next = result + 1;
        e = TWindowSubStatusDisp__sub_8006F134(base, id);
        if (get_slot_clamped__6TLobbyFv(e->seed) < next) {
            e->seed = mix_seed__6TLobbyFUs(next);
        }
    }
    {
        s32 r = result;
        if (total == 0) {
            r = -1;
        }
        return r;
    }
}

}
