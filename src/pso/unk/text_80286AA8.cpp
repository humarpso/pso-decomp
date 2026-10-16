#include "types.h"
#include "pso/misc/TWindowSubTechnique.h"

extern "C" {
s32 get_selected_menu_value(int);
}

extern "C" {

s32 TWindowSubTechnique::sub_80286AA8() {
    u8 *arg0 = (u8 *)this;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
        return 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x2C) == get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x34)))) {
        return 0;
    }
    *(s32 *)((s8 *)arg0 + 0x2C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x34)));
    return 1;
}

}
