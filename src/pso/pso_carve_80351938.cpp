#include "types.h"

extern "C" {

int fn_803519CC(void* p);
int fn_803519F0(void* p);

int fn_80351938(void) { return 0; }
int fn_80351974(void) { return 0; }
int fn_803519CC(void* p) { return (*(u32*)((char*)p + 0x4) >> 1) & 0x1; }
int fn_803519D8(void) { return 0; }
int fn_803519F0(void* p) { return *(u32*)((char*)p + 0x4) & 0x1; }
int fn_803519FC(void) { return 0; }
int fn_80351A14(void) { return 0; }

}
