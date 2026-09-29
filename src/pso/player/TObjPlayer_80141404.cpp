#include "types.h"

struct Q_80141448 { s32 w[4]; };

extern "C" {
int GXSetTevSwapMode(int, int, int);
extern Q_80141448 lbl_8043F288;
void TObjPlayer__sub_80141448(u8 arg0);
}

extern "C" {

void setup_tev_swap__10TObjPlayerFv(void);
int GXSetTevSwapMode(int, int, int);
int GXSetTevSwapModeTable(int, int, int, int, int);

void setup_tev_swap__10TObjPlayerFv(void) { GXSetTevSwapModeTable(1, 0, 0, 0, 3); GXSetTevSwapMode(0, 0, 0); }
void TObjPlayer__sub_80141448(u8 arg0) {
    if (arg0 < 4) {
        Q_80141448 q = lbl_8043F288;
        s32 t = q.w[arg0];
        GXSetTevSwapMode(0, t, t);
    }
}

}
