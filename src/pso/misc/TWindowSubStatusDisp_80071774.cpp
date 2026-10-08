#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80071820_lbl_804FF820 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct E_80071868 { s32 a; s32 b; };

struct W_80071868 { u8 pad[0x2288]; E_80071868 e[3]; u8 pad2[0xc]; s32 def; };

struct G_800718D0 { u8 pad[0xC]; s32 fc; u8 rest[0x100]; };

extern "C" {
s32 get_layout_id__20TWindowSubStatusDispFv(void *);
s32 TWindowSubStatusDisp__sub_8006F0D8(void *, void *);
s32 get_valid_slot__6TLobbyFi(int);
u32 get_card_window__17TWindowSubComCardFUi(u32);
s32 TWindowSubStatusDisp__sub_80071A24(s32 arg0, u16 arg1, s32 arg2);
s32 decode_obfuscated_string__6TLobbyFPvPvi(void *, void *, int);
extern RecoveredGlobal_80071820_lbl_804FF820 lbl_804FF820;
extern M2C_UNK lbl_805D2858;
M2C_UNK *TWindowSubStatusDisp__sub_80071820(u32 arg0);
u32 get_card_window__17TWindowSubComCardFUi(u32);
s32 resolve_player_slot__20TWindowSubStatusDispFi(s32 slot);
s32 get_slot_clamped__6TLobbyFv(s32);
s32 TWindowSubStatusDisp__sub_80071868(u16 id, s32 slot);
s32 get_layout_id__20TWindowSubStatusDispFv(void *);
s32 TWindowSubStatusDisp__sub_8006F0D8(void *, void *);
s32 get_valid_slot__6TLobbyFi(int);
u32 get_card_window__17TWindowSubComCardFUi(u32);
s32 TWindowSubStatusDisp__sub_80071988(s32 arg0, s32 arg1);
s32 calc_layout_hash__20TWindowSubStatusDispFv(int);
s32 get_layout_id__20TWindowSubStatusDispFv(void *);
s32 is_flag_set__6TLobbyFv();
s32 TWindowSubStatusDisp__sub_80071A24(s32 arg0, u16 arg1, s32 arg2);
u32 get_card_window__17TWindowSubComCardFUi(u32);
extern G_800718D0 lbl_8048C9D8;
s32 TWindowSubStatusDisp__sub_800718D0(void);
}

extern "C" {

s32 get_status_index__20TWindowSubStatusDispFi(int arg0);
s32 get_status_index_or_default__20TWindowSubStatusDispFPv(u16 *arg0);
M2C_UNK *get_status_window__20TWindowSubStatusDispFi(int arg0);
s32 TLobby__sub_80071654(u16);
u32 get_card_window__17TWindowSubComCardFUi(u32);

s32 get_status_index__20TWindowSubStatusDispFi(int arg0) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi((u16)arg0);
    if (temp_r3 == 0U) {
        return -1;
    }
    return get_status_index_or_default__20TWindowSubStatusDispFPv((u16 *)(temp_r3 + 0x21C4));
}

s32 get_status_index_or_default__20TWindowSubStatusDispFPv(u16 *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return TLobby__sub_80071654(*arg0);
}

extern M2C_UNK lbl_805D285C;

M2C_UNK *get_status_window__20TWindowSubStatusDispFi(int arg0) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi((u16)arg0);
    if (temp_r3 == 0U) {
        return &lbl_805D285C;
    }
    return TWindowSubStatusDisp__sub_80071820((u32)(temp_r3 + 0x21C4));
}

typedef char RecoveredGlobal_80071820_lbl_804FF820_size[sizeof(RecoveredGlobal_80071820_lbl_804FF820) == 0xC ? 1 : -1];
M2C_UNK *TWindowSubStatusDisp__sub_80071820(u32 arg0) {
    if (arg0 == 0U) {
        return &lbl_805D2858;
    }
    decode_obfuscated_string__6TLobbyFPvPvi((void *) (&lbl_804FF820.value), (void *) (arg0 + 0xD8), (int) (0xC));
    return &lbl_804FF820.value;
}

s32 TWindowSubStatusDisp__sub_80071868(u16 id, s32 slot) {
    W_80071868 *w = (W_80071868 *)get_card_window__17TWindowSubComCardFUi(id);
    s32 idx;
    s32 v;
    if (w == 0) {
        return 0;
    }
    idx = resolve_player_slot__20TWindowSubStatusDispFi(slot);
    if (idx < 3) {
        v = w->e[idx].a;
    } else {
        v = w->def;
    }
    return get_slot_clamped__6TLobbyFv(v);
}

s32 TWindowSubStatusDisp__sub_800718D0(void) {
    s32 last;
    s32 hash;
    s32 sum;
    s32 i;
    s32 r;
    hash = calc_layout_hash__20TWindowSubStatusDispFv(-1);
    if (is_flag_set__6TLobbyFv() == 0 || get_card_window__17TWindowSubComCardFUi(0xFFFF) == 0) {
        return hash;
    }
    sum = 0;
    last = get_layout_id__20TWindowSubStatusDispFv((void *)-1);
    for (i = 0; i <= last - 2; i++) {
        r = TWindowSubStatusDisp__sub_80071A24(i, 0xFFFF, -1);
        if (r == 0) {
            return hash;
        }
        sum += r;
    }
    sum += lbl_8048C9D8.fc;
    return sum;
}

s32 TWindowSubStatusDisp__sub_80071988(s32 arg0, s32 arg1) {
    s32 *p;
    s32 n;
    s32 r;
    s32 sum;
    s32 i;
    u32 w;
    w = get_card_window__17TWindowSubComCardFUi((u16)arg0);
    if (w == 0U) {
        return 0;
    }
    p = (s32 *)TWindowSubStatusDisp__sub_8006F0D8((void *)(w + 0x21C4), (void *)arg1);
    sum = 0;
    n = get_layout_id__20TWindowSubStatusDispFv((void *)arg1);
    for (i = 0; i < n; i++, p++) {
        r = get_valid_slot__6TLobbyFi(*p);
        if (r == 0) {
            return 0;
        }
        sum += r;
    }
    return sum;
}

s32 TWindowSubStatusDisp__sub_80071A24(s32 arg0, u16 arg1, s32 arg2) {
    s32 temp_r3;
    u32 temp_r31;
    temp_r31 = get_card_window__17TWindowSubComCardFUi((u32)arg1);
    temp_r3 = get_layout_id__20TWindowSubStatusDispFv((void *) (arg2));
    if ((arg0 < 0) || (arg0 >= temp_r3) || (temp_r31 == 0U)) {
        return 0;
    }
    return get_valid_slot__6TLobbyFi((int) (M2C_FIELD(TWindowSubStatusDisp__sub_8006F0D8((void *) (temp_r31 + 0x21C4), (void *) (arg2)), M2C_UNK *, (arg0 * 4))));
}

}
