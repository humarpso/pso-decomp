#include "types.h"

extern "C" {

void run_task__11TWindowCtrlFv(void* p);
void render__11TWindowCtrlFv(void);
int update__11TWindowCtrlFPv(void*);
int update_open_sequence__11TWindowCtrlFPv(void*);
int update_game_modes__6TLobbyFv(void);

void render__11TWindowCtrlFv(void) {  }
void run_task__11TWindowCtrlFv(void* p) { update_open_sequence__11TWindowCtrlFPv(p); update__11TWindowCtrlFPv(p); update_game_modes__6TLobbyFv(); }

}
