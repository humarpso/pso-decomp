#include "types.h"

extern "C" {

int fn_8028B8B8(void* p);

int fn_8028B810(void) { return 0; }
int fn_8028B8B8(void* p) { return *(u32*)((char*)p + 0x4a8) == 0; }

}
