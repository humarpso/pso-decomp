#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80292A34_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

struct RecoveredGlobal_8029299C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

typedef s32 M2C_UNK;

struct Win_80292AB4 { u8 pad[0x21C4]; u8 sub; };

struct Ent_80292AB4 { s32 id; s32 mask; u8 pad[0x14]; };

extern "C" {
u32 get_player_by_client_id(int);
extern s32 lbl_804DB1F0[];
extern u32 lbl_805D6580;
s32 check_player_state_flag_2__6TLobbyFPv(void *);
u32 get_player_by_client_id(int);
void TLobby__sub_80293218(s32);
extern s32 lbl_804DB1F0[];
extern u32 lbl_805D6580;
s32 TLobby__sub_8029299C(void);
s32 check_player_state_flag_2__6TLobbyFPv(void *);
u32 get_player_by_client_id(int);
extern s32 lbl_804DB1F0[];
extern u32 lbl_805D6580;
s32 TLobby__sub_80292A34(void);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 *TWindowSubStatusDisp__sub_8006F0D8(void *, s32);
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32);
u8 *get_card_window__17TWindowSubComCardFUi();
s32 TLobby__sub_80292CA4(void);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 *TWindowSubStatusDisp__sub_8006F0D8(void *, s32);
s32 get_valid_slot__6TLobbyFi(s32);
s32 mix_seed_checked__6TLobbyFi(s32);
u8 *get_card_window__17TWindowSubComCardFUi();
s32 TLobby__sub_80292F34(s32 arg0);
extern s32 lbl_804DB1F0[];
s32 TLobby__sub_80292BB8(s32 seed, u16 card, s32 id);
s32 calc_layout_hash__20TWindowSubStatusDispFv(s32);
s32 calc_entry_offset__20TWindowSubStatusDispFv(s32);
s32 *TWindowSubStatusDisp__sub_8006F134(u8 *, s32);
u8 *get_card_window__17TWindowSubComCardFUi();
extern s32 lbl_804DB1F0[];
s32 TLobby__sub_80292AB4(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void clamp_and_store_layout_index__6TLobbyFi(s32 arg0);
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);

extern s32 lbl_804DB1F0[];

void clamp_and_store_layout_index__6TLobbyFi(s32 arg0) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = arg0;
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if ((var_r31 < 0) || (var_r31 >= temp_r3)) {
        var_r31 = 0;
    }
    lbl_804DB1F0[0] = var_r31;
}
typedef char RecoveredGlobal_80292A34_lbl_804DB1F0_size[sizeof(RecoveredGlobal_80292A34_lbl_804DB1F0) == 0x6B0 ? 1 : -1];

typedef char RecoveredGlobal_8029299C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_8029299C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
s32 TLobby__sub_8029299C(void) {
    s32 var_r31;
    u32 var_r30;
    u8 *temp_r3;
    if ((u32) lbl_805D6580 == 0U) {
        return 0;
    }
    var_r31 = 0;
    var_r30 = 0;
    do {
        temp_r3 = (u8 *)(((s32)get_player_by_client_id((int)(var_r30))));
        if ((temp_r3 != NULL) && (((int)check_player_state_flag_2__6TLobbyFPv((void *)(temp_r3))) != 0)) {
            TLobby__sub_80293218((s32) var_r30);
            var_r31 = 1;
        }
        var_r30 += 1;
    } while ((s32) var_r30 < 4);
    if (var_r31 != 0) {
        M2C_FIELD(&(*(RecoveredGlobal_8029299C_lbl_804DB1F0 *)&lbl_804DB1F0).value, s32 *, 0x20) = 1;
        return 1;
    }
    return 0;
}
s32 TLobby__sub_80292A34(void) {
    s32 var_r31;
    u8 *temp_r3;
    if ((u32) lbl_805D6580 == 0U) {
        return 0;
    }
    var_r31 = 0;
loop_3:
    temp_r3 = (u8 *)(((u8 *)get_player_by_client_id((int)(var_r31))));
    if ((temp_r3 != NULL) && (((int)check_player_state_flag_2__6TLobbyFPv(temp_r3)) == 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        M2C_FIELD(&lbl_804DB1F0, s32 *, 0x20) = 1;
        return 1;
    }
    goto loop_3;
}

#define GCW_80292AB4 ((u8 *(*)(u32))get_card_window__17TWindowSubComCardFUi)
s32 TLobby__sub_80292AB4(s32 arg0, s32 arg1, s32 arg2) {
    s32 lo;
    s32 hi;
    s32 *flags;
    s32 i;
    Ent_80292AB4 *e;
    s32 w;
    lo = calc_entry_offset__20TWindowSubStatusDispFv(arg2);
    hi = calc_layout_hash__20TWindowSubStatusDispFv(arg2);
    if (GCW_80292AB4((u16)arg1) == NULL) {
        return -4;
    }
    if (arg0 < lo || arg0 > hi) {
        return -4;
    }
    w = ((s32 (*)(u32))get_card_window__17TWindowSubComCardFUi)((u16)arg1) + 0x21C4;
    flags = TWindowSubStatusDisp__sub_8006F134((u8 *)w, arg2);
    e = (Ent_80292AB4 *)((u8 *)lbl_804DB1F0 + 0x254);
    for (i = 2; i >= 0; i--, e--) {
        if (e->id != 0 && e->id >= arg0) {
            if (e->id < lo || e->id > hi) {
                return -4;
            }
            if ((*flags & e->mask) == 0) {
                break;
            }
        }
    }
    if (i < 0) {
        return -2;
    }
    return i;
}

s32 TLobby__sub_80292BB8(s32 seed, u16 card, s32 id) {
    u8 *win = ((u8 *(*)(u32))get_card_window__17TWindowSubComCardFUi)(card);
    s32 layout = get_layout_id__20TWindowSubStatusDispFv(id);
    s32 *arr;
    s32 idx;
    s32 limit;
    s32 ok;
    if (win == NULL || lbl_804DB1F0[0] < 0 || lbl_804DB1F0[0] >= layout) {
        return 0;
    }
    arr = TWindowSubStatusDisp__sub_8006F0D8(win + 0x21C4, id);
    ok = 0;
    idx = lbl_804DB1F0[0] * 4;
    if (*(s32 *)((u8 *)arr + idx) == 0) {
        ok = 1;
    } else {
        limit = get_valid_slot__6TLobbyFi(*(s32 *)((u8 *)arr + idx));
        if (TLobby__sub_80292F34(limit) != 0) {
            *(s32 *)((u8 *)arr + idx) = 0;
            return 0;
        }
        if (seed < limit) {
            ok = 1;
        }
    }
    if (ok == 0) {
        return 0;
    }
    *(s32 *)((u8 *)arr + idx) = mix_seed_checked__6TLobbyFi(seed);
    return 1;
}

s32 TLobby__sub_80292CA4(void) {
    u8 *win = get_card_window__17TWindowSubComCardFUi();
    s32 layout;
    s32 id;
    s32 *arr;
    s32 n;
    s32 i;
    if (win == NULL) {
        return 0;
    }
    id = resolve_player_slot__20TWindowSubStatusDispFi(-1);
    arr = TWindowSubStatusDisp__sub_8006F0D8(win + 0x21C4, id);
    layout = get_layout_id__20TWindowSubStatusDispFv((M2C_UNK)(id));
    n = 0;
    for (i = 0; i < layout; i++) {
        if (arr[i] == 0) {
            break;
        }
        n++;
    }
    return n;
}

}
