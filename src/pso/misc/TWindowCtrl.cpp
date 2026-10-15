#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int update__11TWindowCtrlFv(void*);
int update_open_sequence__11TWindowCtrlFv(void*);
int update_game_modes__6TLobbyFv(void);

void TWindowCtrl::render() {  }
void TWindowCtrl::run_task() { update_open_sequence__11TWindowCtrlFv(this); update__11TWindowCtrlFv(this); update_game_modes__6TLobbyFv(); }

}
