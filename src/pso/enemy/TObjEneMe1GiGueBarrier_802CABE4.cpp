#include "types.h"

struct O_802CAC04 { u8 pad[0x326]; s16 v; };

extern "C" {
u8 TObjEneMe1GiGueBarrier__sub_802CAC04(O_802CAC04 *self);
}

extern "C" {

void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p);
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p);
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p);
int TObjEneMe1GiGue__sub_802CB03C(void*);

void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void* p) { *(u32*)((char*)p + 0x388) &= 0xfff7ffff; }
void TObjEneMe1GiGueBarrier__sub_802CABF4(void* p) { *(u32*)((char*)p + 0x388) |= 0x80000; }

u8 TObjEneMe1GiGueBarrier__sub_802CAC04(O_802CAC04 *self) {
    s32 r = 0;
    s16 v = self->v;
    if (v == 9) goto yes;
    if (v == 10) goto yes;
    if (v == 11) goto yes;
    if (v == 4) goto yes;
    if (v != 5) goto done;
yes:
    r = 1;
done:
    return r;
}

s32 get_field_44c__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x44c); }
s32 get_timer__22TObjEneMe1GiGueBarrierFPv(void* p) { return *(s32*)((char*)p + 0x60); }
void* update_and_get_pos__22TObjEneMe1GiGueBarrierFPv(void* p) { TObjEneMe1GiGue__sub_802CB03C(p); return (char*)p + 0x3b4; }

}
