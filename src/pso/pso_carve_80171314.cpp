#include "types.h"

extern "C" {

u16 fn_80171338(void* p);
s16 fn_80171340(void* p);
void fn_80171348(void* p, s16 v);

int fn_80171314(void) { return 0; }
u16 fn_80171338(void* p) { return *(u16*)((char*)p + 0x2d8); }
s16 fn_80171340(void* p) { return *(s16*)((char*)p + 0x326); }
void fn_80171348(void* p, s16 v) { *(s16*)((char*)p + 0x2d8) = v; }

}
