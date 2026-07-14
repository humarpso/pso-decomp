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
int is_status_subsystem_ready__10TObjPlayerFPv(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80121170(void* p, s16 v);
void* TObjPlayer__sub_80121178(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void TObjPlayer__sub_8012105C(void) {  }
void TObjPlayer__sub_80121060(void) {  }
u8 TObjPlayer__sub_80121064(void* p) { return *(u8*)((char*)p + 0x1d3); }
void TObjPlayer__sub_8012106C(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) |= v; }
void TObjPlayer__sub_8012107C(void* p, u32 v) { *(u32*)((char*)p + 0x1b8) &= ~v; }
void set_flag_8__10TObjPlayerFPv(void* p) { TObjPlayer__sub_8012106C(p, 8); }

}
