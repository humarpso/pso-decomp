#include "types.h"
#include "pso/misc/TLobby.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_14 { s32 v[5]; };

extern "C" {
void update_menu_cursor__6TLobbyFv();
void TLobby__sub_8023E4B4(s32, s32);
extern const s32 lbl_804661E4[];
extern const s32 lbl_804661F8[];
extern const s32 current_language;
extern u32 lbl_805D6630;
void TLobby__sub_802A0F70(void);
}

extern "C" {

int TObjPlayer__sub_802A1018(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6630;

void TLobby::free_dialog_global() {
    if ((u32) lbl_805D6630 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6630);
        lbl_805D6630 = 0U;
    }
}

    extern int lobby_cursor_active_flag;

void TLobby__sub_802A0F70(void) {
    update_menu_cursor__6TLobbyFv();
    ByteBlock_14 a = *(const ByteBlock_14 *)lbl_804661E4;
    ByteBlock_14 b = *(const ByteBlock_14 *)lbl_804661F8;
    s32 r4 = b.v[current_language];
    lbl_805D6630 = r4;
    TLobby__sub_8023E4B4(a.v[current_language], r4);
}

int TObjPlayer__sub_802A1018(void) {  return lobby_cursor_active_flag; }

}
