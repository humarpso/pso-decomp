#include "types.h"

extern "C" {

s32 is_item_active__15TWindowMainMenuFPv(s32);
void TWindowMainMenu__sub_802ADB0C(void* p);
int TWindowMainMenu__sub_802ADB1C(void* p);
int TWindowMainMenu__sub_802ADB28(void* p);

s32 count_active_items__15TWindowMainMenuFi(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (is_item_active__15TWindowMainMenuFPv(ptr) == 0) {
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
