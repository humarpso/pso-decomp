#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_800F7744(void);
s32 get_main_phase();

void TLobby__sub_800F7744(void) {  }

extern s32 area_random_seed;

void TLobby::clear_flag_on_phase_e() {
    if (get_main_phase() == 0xE) {
        area_random_seed = 0;
    }
}

}
