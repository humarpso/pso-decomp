#include "types.h"

extern "C" {

void setup_tev_swap__10TObjPlayerFv(void);
int GXSetTevSwapMode(int, int, int);
int GXSetTevSwapModeTable(int, int, int, int, int);

void setup_tev_swap__10TObjPlayerFv(void) { GXSetTevSwapModeTable(1, 0, 0, 0, 3); GXSetTevSwapMode(0, 0, 0); }

}
