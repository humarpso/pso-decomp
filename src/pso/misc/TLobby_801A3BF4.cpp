#include "types.h"

extern "C" {

    extern int lobby_quest_progress_flag;
void reset_quest_counter__6TLobbyFv(void) { lobby_quest_progress_flag = 0; }

    extern int quest_warp_enabled;
void set_cleanup_flag__6TLobbyFv(void) { quest_warp_enabled = 1; }

}
