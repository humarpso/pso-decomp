#include "types.h"

extern "C" {

void TLobby__sub_80077608(void);
void TLobby__sub_8007760C(void);
void open_symbol_chat__11TWindowChatFPv(s32 *arg0);
int TWindowSubSymbolChat__sub_80077480(s32);
int TWindowSubSymbolChat__sub_800774E4(void*);

void open_symbol_chat__11TWindowChatFPv(s32 *arg0) {
    TWindowSubSymbolChat__sub_80077480(*arg0);
}

void TLobby__sub_80077608(void) {  }

    extern unsigned char lbl_804FF968[];
    extern unsigned char lbl_805D4E54;
void TLobby__sub_8007760C(void) { lbl_805D4E54 = 0; TWindowSubSymbolChat__sub_800774E4(lbl_804FF968); }

}
