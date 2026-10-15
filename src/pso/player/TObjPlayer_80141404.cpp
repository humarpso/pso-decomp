#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Q_80141448 { s32 w[4]; };

extern "C" {
int GXSetTevSwapMode(int, int, int);
extern Q_80141448 player_tev_swap_mode_table;
}

extern "C" {

int GXSetTevSwapMode(int, int, int);
int GXSetTevSwapModeTable(int, int, int, int, int);

void TObjPlayer::setup_tev_swap() { GXSetTevSwapModeTable(1, 0, 0, 0, 3); GXSetTevSwapMode(0, 0, 0); }
void TObjPlayer::set_tev_swap_mode(u8 arg0) {
    if (arg0 < 4) {
        Q_80141448 q = player_tev_swap_mode_table;
        s32 t = q.w[arg0];
        GXSetTevSwapMode(0, t, t);
    }
}

}
