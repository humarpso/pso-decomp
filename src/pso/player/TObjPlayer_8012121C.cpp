#include "types.h"

extern "C" {

int is_flag_b0_4__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121228(void* p, u32 v);
s16 TObjPlayer__sub_80121238(void* p);
u16 get_uid__10TObjPlayerFPv(void* p);

int is_flag_b0_4__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xb0) & 0x4; }
void TObjPlayer__sub_80121228(void* p, u32 v) { *(u32*)((char*)p + 0x28) |= v; }
s16 TObjPlayer__sub_80121238(void* p) { return *(s16*)((char*)p + 0x2); }
u16 get_uid__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

}
