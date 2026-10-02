#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_14 { s32 v[5]; };

extern "C" {
void update_menu_cursor__6TLobbyFv();
void TLobby__sub_8023E4B4(s32, s32);
extern const s32 lbl_804661E4[];
extern const s32 lbl_804661F8[];
extern const s32 lbl_805D5544;
extern u32 lbl_805D6630;
void TLobby__sub_802A0F70(void);
}

extern "C" {

int TObjPlayer__sub_802A1018(void);
void free_dialog_global__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6630;

void free_dialog_global__6TLobbyFv(void) {
    if ((u32) lbl_805D6630 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6630);
        lbl_805D6630 = 0U;
    }
}

    extern int lbl_805D663C;

void TLobby__sub_802A0F70(void) {
    update_menu_cursor__6TLobbyFv();
    M2CCopy_14 a = *(const M2CCopy_14 *)lbl_804661E4;
    M2CCopy_14 b = *(const M2CCopy_14 *)lbl_804661F8;
    s32 r4 = b.v[lbl_805D5544];
    lbl_805D6630 = r4;
    TLobby__sub_8023E4B4(a.v[lbl_805D5544], r4);
}

int TObjPlayer__sub_802A1018(void) {  return lbl_805D663C; }

}
