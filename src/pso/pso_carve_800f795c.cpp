#include "types.h"

extern "C" {

void fn_800F7A50(void* p);
int fn_800F7A64(void);

int fn_800F795C(void) { return 0; }
int fn_800F7990(void) { return 0; }
int fn_800F79C4(void) { return 0; }
int fn_800F79E0(void) { return 0; }
int fn_800F7A1C(void) { return 0; }
void fn_800F7A50(void* p) { *(u8*)((char*)p + 0x0) = 10; *(u8*)((char*)p + 0x1) = 3; }
int fn_800F7A64(void) { return 4; }

}
