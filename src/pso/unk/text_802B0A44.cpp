#include "types.h"
#include "pso/render/depth_buffer.h"
#include "pso/misc/TWindowCtrlMain.h"

#include <stddef.h>
struct Stack_802B0DCC {
    s32 * sp8;
    s32 * spC;
    s32 sp10;
    s32 sp14;
};

extern "C" {
void restore_saved_depth_alpha_state(void);
extern s32 empty_warp_overlay_zero_vec[];
extern s32 empty_warp_overlay_vertices[];
extern const f32 lbl_805DE228;
void draw_empty_warp_overlay(void);
void draw_empty_warp_overlay(void) {
    typedef char sp8_offset[(offsetof(Stack_802B0DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802B0DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802B0DCC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802B0DCC, sp14) == 0xC) ? 1 : -1];
    Stack_802B0DCC stack;
    stack.spC = (s32 *)(empty_warp_overlay_zero_vec);
    stack.sp10 = 0;
    stack.sp14 = 4;
    stack.sp8 = (s32 *)(empty_warp_overlay_vertices);
    set_depth_buffer_settings_1();
    ((TWindowCtrlMain *)(&stack.sp8))->draw_strip_swap_color(4, 2, lbl_805DE228);
    restore_saved_depth_alpha_state();
}

}
