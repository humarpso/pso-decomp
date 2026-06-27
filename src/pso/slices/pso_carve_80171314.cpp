#include "types.h"

extern "C" {

int TObjPlayer__sub_800495E0(void*, void*);
u16 TOMineTrap__sub_80171338(void* p);
s16 fn_80171340(void* p);
void TOMineTrap__sub_80171348(void* p, s16 v);

void fn_80171314(void* p) { TObjPlayer__sub_800495E0(p, (void*)65536); }
u16 TOMineTrap__sub_80171338(void* p) { return *(u16*)((char*)p + 0x2d8); }
s16 fn_80171340(void* p) { return *(s16*)((char*)p + 0x326); }
void TOMineTrap__sub_80171348(void* p, s16 v) { *(s16*)((char*)p + 0x2d8) = v; }

}
