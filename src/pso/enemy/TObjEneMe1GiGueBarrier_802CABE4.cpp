#include "types.h"

extern "C" {

void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
int TObjEneMe1GiGueBarrier__sub_802CAC04(void);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p);
int TObjEneMe1GiGue__sub_802CB03C(void*);

void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfff7ffff; }
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p) { *(u32*)((char*)p + 0x388) |= 0x80000; }

int TObjEneMe1GiGueBarrier__sub_802CAC04(void) { return 0; }

s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x44c); }
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x60); }
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p) { TObjEneMe1GiGue__sub_802CB03C(p); return (char*)p + 0x3b4; }

}
