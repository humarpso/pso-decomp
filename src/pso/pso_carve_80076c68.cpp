#include "types.h"

extern "C" {

void fn_80076DF4(void* p, void* q);

int fn_80076C68(void) { return 0; }
int fn_80076CD0(void) { return 0; }
int fn_80076D1C(void) { return 0; }
int fn_80076D40(void) { return 0; }
int fn_80076D68(void) { return 0; }
int fn_80076D9C(void) { return 0; }
void fn_80076DF4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
int fn_80076E00(void) { return 0; }
int fn_80076E2C(void) { return 0; }

}
