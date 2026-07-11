#include "types.h"

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi(s32);
s32 fn_801BEAB0();
s32 fn_801CB874(s32);
s32 TObjPlayer__sub_801D0BC0(s32, s32, s32);
void TObjPlayer__sub_801C999C(void);
void TObjPlayer__sub_801C9A14(void);

void TObjPlayer__sub_801C9A14(void) {  }
void set_motion__10TObjPlayerFi(s32 arg0) {
    if (fn_801BEAB0() != 0) {
        if (obj_testFlags30(arg0, 0x400) != 0) {
            TObjPlayer__sub_801D0BC0(arg0, 0xE, 5);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 0xD, 5);
        return;
    }
    if (fn_801CB874(arg0) != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0xA, 5);
        return;
    }
    if (check_flag30_bit20__10TObjPlayerFi(arg0) != 0) {
        TObjPlayer__sub_801D0BC0(arg0, 0x13, 5);
    }
}

}
