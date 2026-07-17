#include "types.h"

extern "C" {

int TObjEneMe1GiGue__sub_802CB03C(void*);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
s32 TObjEneMe1GiGueBarrier__sub_802CAC40(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);

s32 TObjEneMe1GiGueBarrier__sub_802CAC40(void* p) { return *(s32*)((char*)p + 0x44c); }
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x60); }
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p) { TObjEneMe1GiGue__sub_802CB03C(p); return (char*)p + 0x3b4; }

}
