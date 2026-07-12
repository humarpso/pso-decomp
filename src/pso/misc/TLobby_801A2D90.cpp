#include "types.h"

extern "C" {

void TLobby__sub_801A2DF4(void);
void TLobby__sub_801A2DF8(void);
void TLobby__sub_801A2DFC(void);
void reset_keyboard_input__6TLobbyFv(void);
void shutdown_keyboard_control__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F92C(void);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9A4(void);
int TKeyBoardControl__sub_801A57C4(void);
int TLobby__sub_801A3B84(void);
int reset_quest_state__6TLobbyFv(void);

void reset_keyboard_input__6TLobbyFv(void) { TKeyBoardControl__sub_801A57C4(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); TLobby__sub_801A3B84(); }
void shutdown_keyboard_control__6TLobbyFv(void) { TKeyBoardControl__sub_801A57C4(); reset_quest_state__6TLobbyFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); TLobby__sub_801A3B84(); }
void TLobby__sub_801A2DF4(void) {  }
void TLobby__sub_801A2DF8(void) {  }
void TLobby__sub_801A2DFC(void) {  }

}
