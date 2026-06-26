#include "types.h"

extern "C" {

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
int fn_802ADBAC(void) { return 0; }
int fn_802ADC04(void) { return 0; }
int fn_802ADC40(void) { return 0; }

}
