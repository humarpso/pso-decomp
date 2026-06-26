#include "types.h"

extern "C" {

int fn_800BA754(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void fn_800BA728(void* p, void* a1);
int fn_800BA6B8(void* p);
int fn_800BA6C4(void* p);

int fn_800BA6B8(void* p) { return (*(u32*)((char*)p + 0x890) >> 4) & 0x1; }
int fn_800BA6C4(void* p) { return (*(u32*)((char*)p + 0x890) >> 6) & 0x1; }
int fn_800BA6D0(void) { return 0; }
void fn_800BA728(void* p, void* a1) { fn_800BA754(a1, (char*)p + 0x2fc, p); }
int fn_800BA754(void*, void*, void*) { return 0; }
int fn_800BA7AC(void) { return 0; }
int fn_800BA804(void) { return 0; }
int fn_800BA828(void) { return 0; }
int fn_800BA838(void) { return 0; }
int fn_800BA870(void) { return 0; }
int fn_800BA88C(void) { return 0; }
int fn_800BA8A8(void) { return 0; }

}
