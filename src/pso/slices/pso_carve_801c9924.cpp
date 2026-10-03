#include "types.h"

struct Pkt_801C9924 { u16 hdr; s16 id; s16 a; s16 b; s32 c; };

extern "C" {
s32 obj_isState2_324();
s16 obj_getField1c(void *);
void TObjPlayer__sub_801D1768(void *);
void update_display__10TObjPlayerFPv(void *);
s32 get_field_4__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801D2824(void *);
s16 TObjPlayer__sub_801D282C(void *);
void TObjPlayer__sub_801C9924(u8 *arg0);
}

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
s32 is_status_flag_200__10TObjPlayerFPv();
s32 can_guard__10TObjPlayerFPv(s32);
s32 run_action_state_phase__10TObjPlayerFisi(s32, s32, s32);
void TObjPlayer__sub_801C999C(void);
void TObjPlayer__sub_801C9A14(void);

void TObjPlayer__sub_801C9924(u8 *arg0) {
    struct Pkt_801C9924 pkt;
    if (arg0 == NULL || obj_isState2_324() == 0) {
        TObjPlayer__sub_801D1768(&pkt);
        pkt.id = obj_getField1c(arg0);
        pkt.a = TObjPlayer__sub_801D2824(arg0 + 0x5F0);
        pkt.c = get_field_4__10TObjPlayerFPv(arg0 + 0x5F0);
        pkt.b = TObjPlayer__sub_801D282C(arg0 + 0x5F0);
        update_display__10TObjPlayerFPv(&pkt);
    }
}

}
