#include "types.h"

struct Pkt_801C9084 { u16 hdr; s16 id; s32 c; f32 x1, y1, z1; f32 x2, y2, z2; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState2_324();
s16 obj_getField1c(void *);
void swap_and_send__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1658(void *);
void TObjPlayer__sub_801C9084(u8 *arg0);
}

extern "C" {

int update_position_from_target__10TObjPlayerFPv(void*);
void check_state_dead__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C90F8(void);
void TObjPlayer__sub_801C9128(void);
void TObjPlayer__sub_801C912C(void);

void TObjPlayer__sub_801C9084(u8 *arg0) {
    struct Pkt_801C9084 pkt;
    if (arg0 == NULL || obj_isState2_324() == 0) {
        TObjPlayer__sub_801D1658(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.c = *(s32 *)(arg0 + 0x60);
        VecCopy__FP3VecPC3Vec(&pkt.x1, arg0 + 0x38);
        VecCopy__FP3VecPC3Vec(&pkt.x2, arg0 + 0x38);
        swap_and_send__10TObjPlayerFPv(&pkt);
    }
}

}
