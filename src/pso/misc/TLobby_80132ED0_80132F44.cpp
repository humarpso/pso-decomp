#include "types.h"

extern "C" {

void free_keyboard_soft_resources__6TLobbyFv(void);
void update_keyboard_menu__6TLobbyFv(void);
int TLanguage__ct(void*);
int TWindowKeyBoardSoft__sub_80132DA0(void*);
int free_instance__19TWindowKeyBoardSoftFv(void);
int free_resources__19TWindowKeyBoardSoftFv(void);
int update_menu_cursor__6TLobbyFv(void);

void free_keyboard_soft_resources__6TLobbyFv(void) { free_instance__19TWindowKeyBoardSoftFv(); free_resources__19TWindowKeyBoardSoftFv(); }

    extern int lbl_805D5544;
void update_keyboard_menu__6TLobbyFv(void) { update_menu_cursor__6TLobbyFv(); TWindowKeyBoardSoft__sub_80132DA0((void*)(lbl_805D5544)); TLanguage__ct((void*)(lbl_805D5544)); }

}
