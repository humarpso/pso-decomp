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
int reset__16TKeyBoardControlFv(void);
int clear_counter__6TLobbyFv(void);
int reset_quest_state__6TLobbyFv(void);

void reset_keyboard_input__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void shutdown_keyboard_control__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); reset_quest_state__6TLobbyFv(); TKeyBoardControl__sub_8000F92C(); TKeyBoardControl__sub_8000F9A4(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); }
void TLobby__sub_801A2DF4(void) {  }
void TLobby__sub_801A2DF8(void) {  }
void TLobby__sub_801A2DFC(void) {  }

}
