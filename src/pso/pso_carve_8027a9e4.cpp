#include "types.h"

extern "C" {

int fn_80266CF8(void*);
int fn_80266D78(void*);
int fn_80266DB0(void*);
int fn_80266EB8(void*);
int fn_8027ABFC(void* a0 = 0);
void fn_8027ABA8(void* p);
void fn_8027A9E4(void* p);
void fn_8027AA3C(void* p);
void fn_8027AA48(void* p, s16 v);

void fn_8027A9E4(void* p) { *(u16*)((char*)p + 0x60) |= 0x10; }
int fn_8027A9F4(void) { return 0; }
int fn_8027AA30(void) { return 0; }
void fn_8027AA3C(void* p) { *(s16*)((char*)p + 0x88) = -1; }
void fn_8027AA48(void* p, s16 v) { *(s16*)((char*)p + 0x74) = v; }
int fn_8027AA50(void) { return 0; }
int fn_8027AA78(void) { return 0; }
int fn_8027AA80(void) { return 0; }
int fn_8027AB10(void) { return 0; }
void fn_8027ABA8(void* p) { fn_80266D78(p); fn_80266DB0(p); fn_8027ABFC(p); fn_80266CF8(p); fn_80266EB8(p); fn_8027AA3C(p); }
int fn_8027ABFC(void*) { return 0; }

}
