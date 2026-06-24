#include "types.h"

extern "C" {

void fn_802E0110(void* p);

void fn_802E0110(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

}
