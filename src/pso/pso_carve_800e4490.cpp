#include "types.h"

extern "C" {

int fn_800E3B6C(void);
int fn_800E4554(void* a0 = 0, void* a1 = 0);
void fn_800E4490(void* p);
int fn_800E7680(void*);
int fn_800E76F0(void*);
int fn_800E45D4(void* a0 = 0);
void fn_800E44D8(void* p);
void fn_800E4614(void* p);
void fn_800E4648(void* p);
u16 fn_800E45CC(void* p);

void fn_800E4490(void* p) { { int i; for (i = 0; i < 4; i++) { fn_800E4554(p, (void*)i); fn_800E3B6C(); } } }
void fn_800E44D8(void* p) { fn_800E45D4(p); }
int fn_800E44F8(void) { return 0; }
int fn_800E4554(void*, void*) { return 0; }
u16 fn_800E45CC(void* p) { return *(u16*)((char*)p + 0x38c); }
int fn_800E45D4(void*) { return 0; }
void fn_800E4614(void* p) { fn_800E45D4(p); fn_800E7680(p); }
void fn_800E4648(void* p) { fn_800E45D4(p); fn_800E76F0(p); }

}
