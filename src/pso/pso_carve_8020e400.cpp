#include "types.h"

extern "C" {

void fn_8020E470(void* p);

int fn_8020E400(void) { return 0; }
int fn_8020E43C(void) { return 0; }
void fn_8020E470(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }
int fn_8020E484(void) { return 0; }
int fn_8020E4C0(void) { return 0; }
int fn_8020E550(void) { return 0; }
int fn_8020E5E0(void) { return 0; }
int fn_8020E670(void) { return 0; }

}
