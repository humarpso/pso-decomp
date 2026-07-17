#include "types.h"

extern "C" {

s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 TObjPlayer__sub_801B3540(s32);
s32 check_technique_flag__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_80203418();
s32 get_global_state__14TOKeyMachine01Fv();
s32 get_field_3e0__12TBoss3VoloptFPv();
s32 get_map_id__13TRaderMapCoreFPv(void* p);
s32 get_move_mode__10TObjPlayerFPv(void* p);

s32 check_technique_castable__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if ((is_technique_ready__8TTecCtrlFv() != 0) || (is_camera_mode_active__10TObjPlayerFv() != 0) || (TObjPlayer__sub_80203418() != 0)) {
        check_technique_flag__10TObjPlayerFPv(arg0);
        return 0;
    }
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 0:
    case 15:
    case 18:
        check_technique_flag__10TObjPlayerFPv(arg0);
        return 0;
    default:
        TObjPlayer__sub_801B3540(arg0);
        return 1;
    }
}
u8 is_key_machine_ready__10TObjPlayerFv(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    var_r0 = 0;
    if ((temp_r3 == 0) || (temp_r3 == 0x12)) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}
u8 is_volopt_phase_final__10TObjPlayerFv(void) {
    return (u8) (get_field_3e0__12TBoss3VoloptFPv() == 0xF);
}

}
