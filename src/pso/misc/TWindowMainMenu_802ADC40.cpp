#include "types.h"

extern "C" {

s32 fn_802AD740(s32);
void TWindowMainMenu__sub_802ADB0C(void* p);
int TWindowMainMenu__sub_802ADB1C(void* p);
int TWindowMainMenu__sub_802ADB28(void* p);

s32 TWindowMainMenu__sub_802ADC40(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (fn_802AD740(ptr) == 0) {
        return counter;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 8;
    }
    goto loop_1;
}

}
