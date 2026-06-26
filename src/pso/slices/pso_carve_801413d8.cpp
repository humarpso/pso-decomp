#include "types.h"

extern "C" {

void fn_80141404(void);
int GXSetTevSwapMode(int, int, int);
int GXSetTevSwapModeTable(int, int, int, int, int);

int fn_801413D8(void) { return 0; }
void fn_80141404(void) { GXSetTevSwapModeTable(1, 0, 0, 0, 3); GXSetTevSwapMode(0, 0, 0); }

}
