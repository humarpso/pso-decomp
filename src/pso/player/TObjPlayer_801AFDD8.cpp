#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801AEE84();
s32 TTecCtrl__sub_801B0EE8();
s32 TObjPlayer__sub_801B3540(s32);
s32 TObjPlayer__sub_801B3564(s32);
s32 TObjPlayer__sub_80203418();
s32 TOKeyMachine01__sub_802034A8();
s32 TBoss3Volopt__sub_8003F108();
s32 TRaderMapCore__sub_801AFD84(void* p);
s32 TObjPlayer__sub_801AFDA8(void* p);

s32 TObjPlayer__sub_801AFDD8(s32 arg0) {
    s32 temp_r3;

    if ((TTecCtrl__sub_801B0EE8() != 0) || (TObjPlayer__sub_801AEE84() != 0) || (TObjPlayer__sub_80203418() != 0)) {
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
u8 TObjPlayer__sub_801AFE78(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = TOKeyMachine01__sub_802034A8();
    var_r0 = 0;
    if ((temp_r3 == 0) || (temp_r3 == 0x12)) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}
u8 TObjPlayer__sub_801AFEB4(void) {
    return (u8) (TBoss3Volopt__sub_8003F108() == 0xF);
}

}
