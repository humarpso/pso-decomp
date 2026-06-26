#include "types.h"

extern "C" {

int fn_800E1D94(void* p);
int fn_800E1DB8(void* p);
void fn_800E1E64(void* p);
int fn_800E1C98(void*, int);

int fn_800E1D64(void) { return 0; }
int fn_800E1D94(void* p) { return fn_800E1C98(p, 5); }
int fn_800E1DB8(void* p) { return fn_800E1C98(p, 2); }
int fn_800E1DDC(void) { return 0; }
int fn_800E1E14(void) { return 0; }
void fn_800E1E64(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }
int fn_800E1E74(void) { return 0; }

}
