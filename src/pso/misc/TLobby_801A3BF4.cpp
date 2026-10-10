#include "types.h"

extern "C" {

    extern int lbl_805D5C80;
void reset_quest_counter__6TLobbyFv(void) { lbl_805D5C80 = 0; }

    extern int quest_warp_enabled;
void set_cleanup_flag__6TLobbyFv(void) { quest_warp_enabled = 1; }

}
