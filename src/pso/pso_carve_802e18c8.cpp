#include "types.h"

extern "C" {

int fn_802E1A8C(void*, void*, void*, void*, void*);
int fn_802E1BF4(void*);
int fn_802E18C8(void);
int fn_8000F9CC(void*);

int fn_802E18C8(void) { return fn_8000F9CC((void*)(0)); }
int fn_802E18EC(void) { return 0; }
int fn_802E195C(void) { return 0; }
void fn_802E19B0(void* p, void* a1, void* a2, void* a3, void* a4) { fn_802E1BF4(p); fn_802E1A8C(p, a1, a2, a3, a4); }
int fn_802E1A04(void) { return 0; }

}
