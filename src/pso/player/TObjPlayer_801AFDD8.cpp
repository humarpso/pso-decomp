#include "types.h"

extern "C" {

s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 TObjPlayer__sub_801B3540(s32);
s32 TObjPlayer__sub_801B3564(s32);
s32 TObjPlayer__sub_80203418();
s32 TOKeyMachine01__sub_802034A8();
s32 TBoss3Volopt__sub_8003F108();
s32 TRaderMapCore__sub_801AFD84(void* p);
s32 TObjPlayer__sub_801AFDA8(void* p);

s32 check_technique_castable__10TObjPlayerFi(s32 arg0) {
    s32 temp_r3;

    if ((is_technique_ready__8TTecCtrlFv() != 0) || (is_camera_mode_active__10TObjPlayerFv() != 0) || (TObjPlayer__sub_80203418() != 0)) {
        TObjPlayer__sub_801B3564(arg0);
        return 0;
    }
    temp_r3 = TOKeyMachine01__sub_802034A8();
    switch (temp_r3) {
    case 0:
    case 15:
    case 18:
        TObjPlayer__sub_801B3564(arg0);
        return 0;
    default:
        TObjPlayer__sub_801B3540(arg0);
        return 1;
    }
}
u8 is_key_machine_ready__10TObjPlayerFv(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = TOKeyMachine01__sub_802034A8();
    var_r0 = 0;
    if ((temp_r3 == 0) || (temp_r3 == 0x12)) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}
u8 is_volopt_phase_final__10TObjPlayerFv(void) {
    return (u8) (TBoss3Volopt__sub_8003F108() == 0xF);
}

}
