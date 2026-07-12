#include "types.h"

extern "C" {

void open_keyboard__6TLobbyFv(void);
void request_change_game_mode__6TLobbyFv(void);
void enter_game_mode_change__6TLobbyFv(void);
void enter_chg_game_mode__6TLobbyFv(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
int set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
int set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
int TKeyBoardControl__sub_8000F9CC(void*);

    extern int lbl_805D6D44;
void open_keyboard__6TLobbyFv(void) { lbl_805D6D44 = 3; TKeyBoardControl__sub_8000F9CC((void*)19); }

    extern int lbl_805D6D44;
void request_change_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 2; set_mode_change_state__21TAdMultiChgGameModeGCFv(); }

    extern int lbl_805D6D44;
void enter_game_mode_change__6TLobbyFv(void) { lbl_805D6D44 = 1; set_game_mode_state__21TAdMultiChgGameModeGCFv(); }

    extern int lbl_805D6D44;
void enter_chg_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 0; set_mode_0x15__21TAdMultiChgGameModeGCFv(); }

}
