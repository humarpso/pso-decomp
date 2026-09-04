#include "types.h"

extern "C" {

int test_flags_1b8__10TObjPlayerFPvUi(void* p, u32 m);

int test_flags_1b8__10TObjPlayerFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0x1b8) & m; }

}
