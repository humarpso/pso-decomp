#include "types.h"

extern "C" {

f32 fn_803094D8(void* p);
void fn_803094E0(void* p, s16 v);
int fn_803094E8(void* p);
int fn_80269078(void*);

int fn_803094BC(void) { return 0; }
int fn_803094C0(void) { return 0; }
int fn_803094C4(void) { return 0; }
int fn_803094C8(void) { return 0; }
int fn_803094CC(void) { return 0; }
int fn_803094D0(void) { return 0; }
int fn_803094D4(void) { return 0; }
f32 fn_803094D8(void* p) { return *(f32*)((char*)p + 0xc8); }
void fn_803094E0(void* p, s16 v) { *(s16*)((char*)p + 0xb8) = v; }
int fn_803094E8(void* p) { return fn_80269078(p); }
int fn_80309508(void) { return 0; }

}
