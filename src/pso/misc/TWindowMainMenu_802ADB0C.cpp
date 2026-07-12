#include "types.h"

extern "C" {

s32 TWindowMainMenu__sub_802AD740(s32);
void TWindowMainMenu__sub_802ADB0C(void* p);
int TWindowMainMenu__sub_802ADB1C(void* p);
int TWindowMainMenu__sub_802ADB28(void* p);

void TWindowMainMenu__sub_802ADB0C(void* p) { *(u8*)((char*)p + 0x60) &= 0xfc; }
int TWindowMainMenu__sub_802ADB1C(void* p) { return (*(u8*)((char*)p + 0x60) >> 1) & 0x1; }
int TWindowMainMenu__sub_802ADB28(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }

}
