#include "types.h"

extern "C" {

s32 TWindowMainMenu__sub_802AD740(s32);
void TWindowMainMenu__sub_802ADB0C(void* p);
int TWindowMainMenu__sub_802ADB1C(void* p);
int TWindowMainMenu__sub_802ADB28(void* p);

s32 TWindowMainMenu__sub_802ADBAC(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (TWindowMainMenu__sub_802AD740(ptr) == 0) {
        return ptr;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 0;
    }
    goto loop_1;
}

}
