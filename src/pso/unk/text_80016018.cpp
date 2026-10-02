#include "types.h"
extern "C" {
s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 obj_testFlags30(s32, u32);
s32 obj_getField1c(s32);
void create_font_small_task(u32, s32, s32, s32, void *, s16, s32);
extern u8 lbl_804340A8[];
void TObjPlayer__sub_80016018(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TObjPlayer__sub_80016018(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 size;
    if (obj_testFlags30(arg0, 0x02000000) == 0 && arg1 != 0) {
        size = 0x14;
        if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
            size <<= 1;
        }
        create_font_small_task(arg1, -0x100, size, arg2, lbl_804340A8, arg3, obj_getField1c(arg0));
    }
}

}
