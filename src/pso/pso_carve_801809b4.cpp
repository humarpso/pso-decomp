#include "types.h"

extern "C" {

int TObjChip__vt6(void* p);

int TObjChip__vt6(void* p) { return *(u32*)((char*)p + 0x230) == 0; }

}
