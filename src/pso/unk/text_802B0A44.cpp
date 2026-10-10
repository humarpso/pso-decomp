#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802B0DCC {
    M2C_UNK * sp8;
    M2C_UNK * spC;
    s32 sp10;
    s32 sp14;
};

extern "C" {
void set_depth_buffer_settings_1__Fv(void);
void restore_saved_depth_alpha_state(void);
void draw_strip_swap_color__15TWindowCtrlMainFPviif(void *, s32, s32, f32);
extern M2C_UNK lbl_804709D0[];
extern M2C_UNK empty_warp_overlay_vertices[];
extern const f32 lbl_805DE228;
void draw_empty_warp_overlay(void);
}

extern "C" {

void draw_empty_warp_overlay(void) {
    typedef char sp8_offset[(offsetof(Stack_802B0DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B0DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802B0DCC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802B0DCC, sp14) == 0xC) ? 1 : -1];
    Stack_802B0DCC stack;
    stack.spC = (M2C_UNK *)(lbl_804709D0);
    stack.sp10 = 0;
    stack.sp14 = 4;
    stack.sp8 = (M2C_UNK *)(empty_warp_overlay_vertices);
    set_depth_buffer_settings_1__Fv();
    draw_strip_swap_color__15TWindowCtrlMainFPviif(&stack.sp8, 4, 2, lbl_805DE228);
    restore_saved_depth_alpha_state();
}

}
