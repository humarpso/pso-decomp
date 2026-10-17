#include "types.h"

struct Stack_801424DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
void set_global_draw_flag_bits(s32, s32);
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(f32 *arg);
void fn_801424DC(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_801424DC(s32 arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    Stack_801424DC stack;
    stack.sp8 = farg0;
    stack.spC = farg1;
    stack.sp10 = farg2;
    stack.sp14 = farg3;
    set_global_draw_flag_bits(arg0, 0x810);
    set_chunk_material_override_pair(-1, 0x800);
    set_chunk_material_color((&stack.sp8));
}

}
