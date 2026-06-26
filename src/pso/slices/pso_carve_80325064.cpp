#include "types.h"

extern "C" {

void fn_80325064(void* p);

void fn_80325064(void* p) { *(u8*)((char*)p + 0x260) = 1; }

}
