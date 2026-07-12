#include "types.h"

extern "C" {

void TObjPlayer__sub_80141404(void);
int GXSetTevSwapMode(int, int, int);
int GXSetTevSwapModeTable(int, int, int, int, int);

void TObjPlayer__sub_80141404(void) { GXSetTevSwapModeTable(1, 0, 0, 0, 3); GXSetTevSwapMode(0, 0, 0); }

}
