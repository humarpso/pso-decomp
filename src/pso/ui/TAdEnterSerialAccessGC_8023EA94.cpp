#include "types.h"

extern "C" {

void init_state__22TAdEnterSerialAccessGCFv(void);
s32 sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 multi_chg_game_mode_state;
extern s32 lbl_805D63C8;

void init_state__22TAdEnterSerialAccessGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    multi_chg_game_mode_state = 0x10;
    lbl_805D63C8 = 1;
}

}
