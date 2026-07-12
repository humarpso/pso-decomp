#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80337348(s32 arg0, s32 arg1, s32 arg2, u8 arg3);
s32 TObjPlayer__sub_8033741C();
u8 TObjPlayer__sub_80337480(s32);
int fn_803374F0(s32, s32, u8);
s32 fn_803374F8(s32, s32);

s32 TObjPlayer__sub_80337348(s32 arg0, s32 arg1, s32 arg2, u8 arg3) {
    s32 temp_r31;

    temp_r31 = TObjPlayer__sub_8033741C();
    if ((u8) (temp_r31 + arg3) > TObjPlayer__sub_80337480(arg1)) {
        return 0;
    }
    fn_803374F0(arg0, arg2, (u8) (arg3 + fn_803374F8(arg0, arg2)));
    return 1;
}

}
