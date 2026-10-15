#include "types.h"

extern "C" {
void fn_801A6A28(void *, s32, s32);
void map_c_stick_to_buttons(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
void fn_801A6A28(void *, s32, s32);
void map_main_stick_to_buttons(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
void update_button_hold_counter(void *, void *, int, int);
void update_button_hold_counters(u8 *arg0);
}

extern "C" {

void map_c_stick_to_buttons(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    if (arg2 > 0x30) {
        fn_801A6A28(arg0, 0x08000000, arg3);
    } else if (arg2 < -0x30) {
        fn_801A6A28(arg0, 0x04000000, arg3);
    }
    if (arg1 > 0x30) {
        fn_801A6A28(arg0, 0x20000000, arg3);
        return;
    }
    if (arg1 < -0x30) {
        fn_801A6A28(arg0, 0x10000000, arg3);
    }
}
void map_main_stick_to_buttons(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    if (arg2 > 0x30) {
        fn_801A6A28(arg0, 0x200000, arg3);
    } else if (arg2 < -0x30) {
        fn_801A6A28(arg0, 0x100000, arg3);
    }
    if (arg1 > 0x30) {
        fn_801A6A28(arg0, 0x800000, arg3);
        return;
    }
    if (arg1 < -0x30) {
        fn_801A6A28(arg0, 0x400000, arg3);
    }
}
void update_button_hold_counter(void *arg0, void *arg1, int mask, int held) {
    s16 value = *(s16 *)arg1;
    if (held & mask) {
        value++;
    } else {
        value = 0;
    }
    *(s16 *)arg1 = value;
}
void update_button_hold_counters(u8 *arg0) {
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x2C), (int) (0x10), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x2E), (int) (0x20), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x30), (int) (0x40), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x32), (int) (0x80), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x34), (int) (0x100000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x36), (int) (0x200000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x38), (int) (0x400000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x3A), (int) (0x800000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x3C), (int) (0x04000000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x3E), (int) (0x08000000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x40), (int) (0x10000000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x42), (int) (0x20000000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x44), (int) (0x20000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
    update_button_hold_counter((void *) (arg0), (void *) (arg0 + 0x46), (int) (0x10000), (int) (*(s32 *)((s8 *)arg0 + 0x48)));
}

}
