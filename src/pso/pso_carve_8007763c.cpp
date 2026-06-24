#include "types.h"

extern "C" {

void* fn_8007763C(void* p);
void fn_80077704(void* p);

void* fn_8007763C(void* p) { return (char*)p + 0x1c; }
int fn_80077644(void) { return 0; }
int fn_80077680(void) { return 0; }
int fn_800776D0(void) { return 0; }
void fn_80077704(void* p) { *(u8*)((char*)p + 0x0) = 7; *(u8*)((char*)p + 0x1) = 17; }

}
