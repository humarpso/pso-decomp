#include "types.h"

extern "C" {

u8 fn_80121064(void* p);
void fn_801210C0(void* p, s16 v);
void fn_801210C8(void* p, s16 v);
int fn_801210D0(void* p);
void* fn_801210F4(void* p);
int fn_80121118(void* p);
void fn_80121170(void* p, s16 v);
void* fn_80121178(void* p);
int fn_80121180(void*);
int fn_801D2F4C(void*);

int fn_8012105C(void) { return 0; }
int fn_80121060(void) { return 0; }
u8 fn_80121064(void* p) { return *(u8*)((char*)p + 0x1d3); }
int fn_8012106C(void) { return 0; }
int fn_8012107C(void) { return 0; }
int fn_8012108C(void) { return 0; }
int fn_801210B0(void) { return 0; }
void fn_801210C0(void* p, s16 v) { *(s16*)((char*)p + 0x118) = v; }
void fn_801210C8(void* p, s16 v) { *(s16*)((char*)p + 0x116) = v; }
int fn_801210D0(void* p) { return fn_801D2F4C((char*)p + 0x7cc); }
void* fn_801210F4(void* p) { return fn_80121178((char*)p + 0x7cc); }
int fn_80121118(void* p) { return fn_80121180((char*)p + 0x7cc); }
int fn_8012113C(void) { return 0; }
int fn_80121160(void) { return 0; }
void fn_80121170(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void* fn_80121178(void* p) { return (char*)p + 0x30; }

}
