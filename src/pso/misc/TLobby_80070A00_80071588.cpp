#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80071698 { s32 f0; u8 pad[0x100]; };

struct G_80071698 { u8 pad[0x270]; E_80071698 e[4]; };

extern "C" {
u32 TLobby__sub_80071640(u32 c);
s32 count_set_bits__6TLobbyFUi(u32 x);
s32 get_layout_id__20TWindowSubStatusDispFv();
s32 TLobby__sub_80071B30(s32, s32);
u32 get_player_by_client_id(s32);
extern M2C_UNK lbl_8048C9D8[];
s32 get_party_min_tier__6TLobbyFi(s32 arg0);
}

extern "C" {

s32 TLobby__sub_80071654(s32 arg0);
s32 set_split_screen_flag__6TLobbyFi(s32 arg0);
s32 try_set_value__6TLobbyFf(f32 farg0);
s32 is_flag_set__6TLobbyFv();

extern M2C_UNK lbl_8048C9D8[];
extern f32 lbl_805D9108;
extern f32 lbl_805D910C;

s32 try_set_value__6TLobbyFf(f32 farg0) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    if ((farg0 < lbl_805D9108) || (farg0 > lbl_805D910C)) {
        return 0;
    }
    M2C_FIELD(&lbl_8048C9D8, f32 *, 4) = farg0;
    return 1;
}

extern s32 lbl_805D5550;

s32 set_split_screen_flag__6TLobbyFi(s32 arg0) {
    if (is_flag_set__6TLobbyFv() == 0) {
        return 0;
    }
    lbl_805D5550 = arg0;
    return 1;
}

u32 TLobby__sub_80071640(u32 c) {
    return ((c >> 9) & 0x7C00) | ((c >> 6) & 0x3E0) | ((c >> 3) & 0x1F);
}

s32 TLobby__sub_80071654(s32 arg0) {
    return ((arg0 * 8) & 0xF8) | (((arg0 << 9) & 0xF80000) | 0xFF000000 | ((arg0 << 6) & 0xF800));
}
s32 count_set_bits__6TLobbyFUi(u32 x) {
    s32 n = 0;
    while (x != 0) {
        if (x & 1) {
            n++;
        }
        x >>= 1;
    }
    return n;
}
s32 get_party_min_tier__6TLobbyFi(s32 arg0) {
    s32 best;
    s32 i;
    s32 t;
    best = get_layout_id__20TWindowSubStatusDispFv();
    for (i = 0; i < 4; i++) {
        if (get_player_by_client_id(i) != 0U) {
            if (((G_80071698 *)lbl_8048C9D8)->e[i].f0 == 0) {
                return -1;
            }
            t = TLobby__sub_80071B30(i, arg0);
            if (best > t) {
                best = t;
            }
        }
    }
    return best;
}

}
