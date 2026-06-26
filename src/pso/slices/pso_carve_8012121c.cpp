#include "types.h"

extern "C" {

int fn_8012121C(void* p);
void fn_80121228(void* p, u32 v);
s16 fn_80121238(void* p);
u16 fn_80121240(void* p);

int fn_8012121C(void* p) { return *(u32*)((char*)p + 0xb0) & 0x4; }
void fn_80121228(void* p, u32 v) { *(u32*)((char*)p + 0x28) |= v; }
s16 fn_80121238(void* p) { return *(s16*)((char*)p + 0x2); }
u16 fn_80121240(void* p) { return *(u16*)((char*)p + 0x0); }
int fn_80121248(void) { return 0; }
int fn_8012125C(void) { return 0; }

}
