#include "types.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TObjPlayer__sub_80121064(void* p);
void TObjPlayer__sub_8012106C(void* p, u32 v);
void TObjPlayer__sub_8012107C(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801210C0(void* p, s16 v);
void TObjPlayer__sub_801210C8(void* p, s16 v);
int TObjPlayer__sub_801210D0(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121170(void* p, s16 v);
void* TObjPlayer__sub_80121178(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void TObjPlayer__sub_801210C0(void* p, s16 v) { *(s16*)((char*)p + 0x118) = v; }
void TObjPlayer__sub_801210C8(void* p, s16 v) { *(s16*)((char*)p + 0x116) = v; }
int TObjPlayer__sub_801210D0(void* p) { return TObjPlayer__sub_801D2F4C((char*)p + 0x7cc); }
void* get_extended_state__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80121178((char*)p + 0x7cc); }
int query_extended_state__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80121180((char*)p + 0x7cc); }
void test_flag30_bit0x100000__10TObjPlayerFPv(void* p) { obj_testFlags30(p, (void*)1048576); }
void* TObjPlayer__sub_80121160(void* a0, int a1) {  return (char*)(*(int*)((char*)a0 + 0xdb4)) + a1 * 48; }
void TObjPlayer__sub_80121170(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
