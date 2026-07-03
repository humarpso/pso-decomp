#include "types.h"

extern "C" {

int obj_testFlags30(void*, void*);
void fn_8012105C(void);
void fn_80121060(void);
u8 fn_80121064(void* p);
void fn_8012106C(void* p, u32 v);
void fn_8012107C(void* p, u32 v);
void fn_8012108C(void* p);
void fn_801210C0(void* p, s16 v);
void fn_801210C8(void* p, s16 v);
int fn_801210D0(void* p);
void* fn_801210F4(void* p);
int fn_80121118(void* p);
void fn_80121170(void* p, s16 v);
void* TObjPlayer__sub_80121178(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void fn_8012105C(void) {  }
void fn_80121060(void) {  }
u8 fn_80121064(void* p) { return *(u8*)((char*)p + 0x1d3); }
void fn_8012106C(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) |= v; }
void fn_8012107C(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) &= ~v; }
void fn_8012108C(void* p) { fn_8012106C(p, 8); }
int fn_801210B0(void) { return 0; }
void fn_801210C0(void* p, s16 v) { *(s16*)((char*)p + 0x118) = v; }
void fn_801210C8(void* p, s16 v) { *(s16*)((char*)p + 0x116) = v; }
int fn_801210D0(void* p) { return TObjPlayer__sub_801D2F4C((char*)p + 0x7cc); }
void* fn_801210F4(void* p) { return TObjPlayer__sub_80121178((char*)p + 0x7cc); }
int fn_80121118(void* p) { return TObjPlayer__sub_80121180((char*)p + 0x7cc); }
void fn_8012113C(void* p) { obj_testFlags30(p, (void*)1048576); }
void* fn_80121160(void* a0, int a1) {  return (char*)(*(int*)((char*)a0 + 0xdb4)) + a1 * 48; }
void fn_80121170(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
