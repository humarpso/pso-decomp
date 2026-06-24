#include "types.h"

extern "C" {

void fn_8012B658(void* p);

int fn_8012B618(void) { return 0; }
void fn_8012B658(void* p) { *(s32*)((char*)p + 0x1f8) = 0; }

}
