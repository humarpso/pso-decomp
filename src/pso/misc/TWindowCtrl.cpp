#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int update_game_modes__6TLobbyFv(void);

void TWindowCtrl::render() {  }
void TWindowCtrl::run_task() { update_open_sequence(); update(); update_game_modes__6TLobbyFv(); }

}
