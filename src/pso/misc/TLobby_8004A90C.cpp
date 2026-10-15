#include "types.h"

extern "C" {

int is_boss_phase_reached__6TLobbyFv(void);
s32 get_phase__9TBoss4UroFPv(void*);

extern void* dark_falz_controller_instance;
extern s32 game_difficulty_selection;

int is_boss_phase_reached__6TLobbyFv(void) {
    s32 temp_r3;

    if (dark_falz_controller_instance == 0) {
        return 0;
    }
    temp_r3 = get_phase__9TBoss4UroFPv(dark_falz_controller_instance);
    if (game_difficulty_selection == 0) {
        return (temp_r3 >= 9) ? 1 : 0;
    }
    return (temp_r3 >= 0xE) ? 1 : 0;
}

}
