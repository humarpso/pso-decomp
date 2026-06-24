#include "types.h"

extern "C" {

void fn_8019A6F8(void* p);

int fn_8019A678(void) { return 0; }
int fn_8019A6AC(void) { return 0; }
void fn_8019A6F8(void* p) { *(u8*)((char*)p + 0x0) = 121; *(u8*)((char*)p + 0x1) = 6; }

}
