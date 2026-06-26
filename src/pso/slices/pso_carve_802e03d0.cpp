#include "types.h"

extern "C" {

void fn_802E03D0(void* p);
int fn_802E03DC(void* p);
int fn_802E0400(void* p);
int fn_802E0424(void* p);
void fn_802E0448(void* p);
int fn_802E072C(void*, int);

void fn_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }
int fn_802E03DC(void* p) { return fn_802E072C(p, 2); }
int fn_802E0400(void* p) { return fn_802E072C(p, 1); }
int fn_802E0424(void* p) { return fn_802E072C(p, 0); }
void fn_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }
int fn_802E0454(void) { return 0; }

}
