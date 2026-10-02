#include "types.h"

struct Pkt_801CB27C { u16 hdr; s16 id; s16 a; s16 b; f32 x; f32 z; };

extern "C" {
s32 obj_isState2_324();
s16 obj_getField1c(void *);
void reset_action_state__10TObjPlayerFPv(void *);
void handle_recv_state__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CB27C(u8 *arg0);
}

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int run_action_state_phase__10TObjPlayerFisi(void*, void*, void*);
void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CB2F0(void);
void TObjPlayer__sub_801CB360(void);

void TObjPlayer__sub_801CB27C(u8 *arg0) {
    struct Pkt_801CB27C pkt;
    if (arg0 == NULL || obj_isState2_324() == 0) {
        reset_action_state__10TObjPlayerFPv(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.a = *(s32 *)(arg0 + 0x60);
        pkt.b = *(s16 *)(arg0 + 0x32C);
        pkt.x = *(f32 *)(arg0 + 0x308);
        pkt.z = *(f32 *)(arg0 + 0x310);
        handle_recv_state__10TObjPlayerFPv(&pkt);
    }
}

}
