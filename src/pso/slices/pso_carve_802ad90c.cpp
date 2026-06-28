#include "types.h"

extern "C" {

s32 fn_802AD740(s32);
void fn_802ADB0C(void* p);
int fn_802ADB1C(void* p);
int fn_802ADB28(void* p);

int fn_802AD90C(void) { return 0; }
int fn_802AD980(void) { return 0; }
int fn_802ADA48(void) { return 0; }
int fn_802ADAAC(void) { return 0; }
int fn_802ADADC(void) { return 0; }
int fn_802ADB00(void) { return 0; }
void fn_802ADB0C(void* p) { *(u8*)((char*)p + 0x60) &= 0xfc; }
int fn_802ADB1C(void* p) { return (*(u8*)((char*)p + 0x60) >> 1) & 0x1; }
int fn_802ADB28(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int fn_802ADB34(void) { return 0; }
s32 fn_802ADBAC(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (fn_802AD740(ptr) == 0) {
        return ptr;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 0;
    }
    goto loop_1;
}
int fn_802ADC04(void) { return 0; }
s32 fn_802ADC40(s32 arg0) {
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
