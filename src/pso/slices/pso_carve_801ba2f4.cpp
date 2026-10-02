#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, M2C_UNK);
M2C_UNK obj_clearFlags30(s32, M2C_UNK);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 is_status_locked__10TObjPlayerFPv(s32);
s32 is_status_flag_200__10TObjPlayerFPv(s32);
M2C_UNK set_action_id__10TObjPlayerFPvs(s32, M2C_UNK);
s16 get_action_id__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801CB874(s32);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(s32, s16, M2C_UNK);

s32 try_apply_status_action__10TObjPlayerFi(s32 arg0) {
    if (check_flag30_bit20__10TObjPlayerFi() != 0) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 0x13, 5);
        return 1;
    }
    if (is_status_flag_200__10TObjPlayerFPv(arg0) != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0xE, 5);
        } else {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0xD, 5);
        }
        return 1;
    }
    if (TObjPlayer__sub_801CB874(arg0) != 0) {
        run_action_state_phase__10TObjPlayerFisi(arg0, 0xA, 5);
        return 1;
    }
    if (is_status_locked__10TObjPlayerFPv(arg0) != 0) {
        if (get_action_id__10TObjPlayerFPv(arg0 + 0x5F0) == 0x10) {
            run_action_state_phase__10TObjPlayerFisi(arg0, 0x10, 5);
        } else {
            obj_clearFlags30(arg0, 0x10000);
            run_action_state_phase__10TObjPlayerFisi(arg0, get_action_id__10TObjPlayerFPv(arg0 + 0x5F0), 5);
            set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
        }
        return 1;
    }
    return 0;
}

}
