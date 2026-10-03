#include "types.h"

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
s32 is_status_flag_200__10TObjPlayerFPv();
s32 can_guard__10TObjPlayerFPv(s32);
s32 run_action_state_phase__10TObjPlayerFisi(s32, s32, s32);
void TObjPlayer__sub_801C999C(void);
void TObjPlayer__sub_801C9A14(void);

void TObjPlayer__sub_801C9A14(void) {  }
void set_motion__10TObjPlayerFi(s32 arg0) {
    if (is_status_flag_200__10TObjPlayerFPv() != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0xE, 5);
            return;
        }
        run_action_state_phase__10TObjPlayerFisi(arg0, 0xD, 5);
        return;
    }
    if (can_guard__10TObjPlayerFPv(arg0) != 0) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 0xA, 5);
        return;
    }
    if (check_flag30_bit20__10TObjPlayerFi(arg0) != 0) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 0x13, 5);
    }
}

}
