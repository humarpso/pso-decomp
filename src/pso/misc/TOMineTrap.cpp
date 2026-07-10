#include "types.h"

extern "C" {

u16 TOMineTrap__sub_80171338(void* p);
void TOMineTrap__sub_80171348(void* p, s16 v);
void fn_80171314(void* p);
s16 TOMineTrap__sub_80171340(void* p);

int check_flag__10TObjPlayerFPvi(void*, void*);

void fn_80171314(void* p) { check_flag__10TObjPlayerFPvi(p, (void*)65536); }
u16 TOMineTrap__sub_80171338(void* p) { return *(u16*)((char*)p + 0x2d8); }
s16 TOMineTrap__sub_80171340(void* p) { return *(s16*)((char*)p + 0x326); }
void TOMineTrap__sub_80171348(void* p, s16 v) { *(s16*)((char*)p + 0x2d8) = v; }

}
