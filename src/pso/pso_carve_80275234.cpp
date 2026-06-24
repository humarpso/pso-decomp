#include "types.h"

extern "C" {

void* fn_80275234(void* p);
void* fn_8027523C(void* p);
void* fn_80275244(void* p);
void* fn_8027524C(void* p);
void fn_80275254(void* p);
s16 fn_80275280(void* p);
void fn_80275288(void* p, s16 v);
void fn_80275290(void* p);
int fn_80247ED8(void*);

void* fn_80275234(void* p) { return (char*)p + 0x3b; }
void* fn_8027523C(void* p) { return (char*)p + 0x2a; }
void* fn_80275244(void* p) { return (char*)p + 0x19; }
void* fn_8027524C(void* p) { return (char*)p + 0x8; }
void fn_80275254(void* p) { void* m = *(void**)((char*)p + 0x28); if (m) fn_80247ED8(m); }
s16 fn_80275280(void* p) { return *(s16*)((char*)p + 0x72); }
void fn_80275288(void* p, s16 v) { *(s16*)((char*)p + 0x7a) = v; }
void fn_80275290(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }
int fn_802752A0(void) { return 0; }

}
