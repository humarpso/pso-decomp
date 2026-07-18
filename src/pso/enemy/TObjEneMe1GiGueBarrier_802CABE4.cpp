#include "types.h"

extern "C" {

int TObjEneMe1GiGue__sub_802CB03C(void*);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);

void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfff7ffff; }
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p) { *(u32*)((char*)p + 0x388) |= 0x80000; }

}
