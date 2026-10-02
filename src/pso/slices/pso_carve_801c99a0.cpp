#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
s32 is_status_flag_200__10TObjPlayerFPv();
s32 TObjPlayer__sub_801CB874(s32);
s32 run_action_state_phase__10TObjPlayerFisi(s32, s32, s32);
void TObjPlayer__sub_801C999C(void);
void TObjPlayer__sub_801C9A14(void);
M2C_UNK set_action_id__10TObjPlayerFPvs(void *, int);
s16 get_action_id__10TObjPlayerFPv(void *);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C99A0(u8 *arg0);

void TObjPlayer__sub_801C99A0(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x10000)) {
        if (get_action_id__10TObjPlayerFPv((void *) (arg0 + 0x5F0)) == 0) {
            update_position_from_target__10TObjPlayerFPv((void *) (arg0));
            return;
        }
        ((M2C_UNK (*)(void *, s16, int))run_action_state_phase__10TObjPlayerFisi)((void *) (arg0), get_action_id__10TObjPlayerFPv((void *) (arg0 + 0x5F0)), (int) (5));
        set_action_id__10TObjPlayerFPvs((void *) (arg0 + 0x5F0), (int) (0));
    }
}

}
