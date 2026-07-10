#include "types.h"

extern "C" {

int fn_80114524(void*);
void fn_801058E8(void* p);
int fn_8010590C(void* p);
int fn_80105934(void* p);
int fn_8010595C(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int fn_801C675C(void*, int);

void fn_801058E8(void* p) { *(u8*)((char*)p + 0x7) |= 0x1; }
int fn_801058F8(void) { return 0; }
int fn_8010590C(void* p) { return fn_801C675C((char*)p + 0xd04, 1); }
int fn_80105934(void* p) { return fn_801C675C((char*)p + 0xd04, 3); }
int fn_8010595C(void* p) { return fn_801C675C((char*)p + 0xd04, 2); }
void* fn_80105984(void* p) { fn_80114524(p); return p; }

}
