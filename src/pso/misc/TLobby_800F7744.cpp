#include "types.h"

extern "C" {

void TLobby__sub_800F7744(void);
void clear_flag_on_phase_e__6TLobbyFv(void);
s32 get_main_phase();

void TLobby__sub_800F7744(void) {  }

extern s32 area_random_seed;

void clear_flag_on_phase_e__6TLobbyFv(void) {
    if (get_main_phase() == 0xE) {
        area_random_seed = 0;
    }
}

}
