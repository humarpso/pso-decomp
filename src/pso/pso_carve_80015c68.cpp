#include "types.h"

extern "C" {

void fn_80015DB0(void* p, void* q);

int fn_80015C68(void) { return 0; }
int fn_80015CB8(void) { return 0; }
int fn_80015D74(void) { return 0; }
void fn_80015DB0(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); }
int fn_80015DC4(void) { return 0; }

}
