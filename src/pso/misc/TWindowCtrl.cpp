#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowCtrl.h"

void TWindowCtrl::render() {  }
void TWindowCtrl::run_task() { update_open_sequence(); update(); TLobby::update_game_modes(); }
