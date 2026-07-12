#include "types.h"

extern "C" {

void TLobby__sub_80132F68(void);
int TLanguage__ct(void*);
int TWindowKeyBoardSoft__sub_80132DA0(void*);
int update_menu_cursor__6TLobbyFv(void);

    extern int lbl_805D5544;
void TLobby__sub_80132F68(void) { update_menu_cursor__6TLobbyFv(); TWindowKeyBoardSoft__sub_80132DA0((void*)(lbl_805D5544)); TLanguage__ct((void*)(lbl_805D5544)); }

}
