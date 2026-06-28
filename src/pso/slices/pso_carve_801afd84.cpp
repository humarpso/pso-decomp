#include "types.h"

extern "C" {

s32 fn_801AEE84();
s32 fn_801B0EE8();
s32 fn_801B3540(s32);
s32 fn_801B3564(s32);
s32 fn_80203418();
s32 TOKeyMachine01__sub_802034A8();
s32 fn_8003F108();
s32 fn_801AFD84(void* p);
s32 fn_801AFDA8(void* p);

s32 fn_801AFD84(void* p) { return *(s32*)((char*)p + 0x3d0); }
int fn_801AFD8C(void) { return 0; }
s32 fn_801AFDA8(void* p) { return *(s32*)((char*)p + 0x890); }
int fn_801AFDB0(void) { return 0; }
int fn_801AFDBC(void) { return 0; }
s32 fn_801AFDD8(s32 arg0) {
    s32 temp_r3;

    if ((fn_801B0EE8() != 0) || (fn_801AEE84() != 0) || (fn_80203418() != 0)) {
        fn_801B3564(arg0);
        return 0;
    }
    temp_r3 = TOKeyMachine01__sub_802034A8();
    switch (temp_r3) {
    case 0:
    case 15:
    case 18:
        fn_801B3564(arg0);
        return 0;
    default:
        fn_801B3540(arg0);
        return 1;
    }
}
u8 fn_801AFE78(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = TOKeyMachine01__sub_802034A8();
    var_r0 = 0;
    if ((temp_r3 == 0) || (temp_r3 == 0x12)) {
        var_r0 = 1;
    }
    return (u8) var_r0;
}
u8 fn_801AFEB4(void) {
    return (u8) (fn_8003F108() == 0xF);
}

}
