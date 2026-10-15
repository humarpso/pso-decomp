#include "types.h"

extern "C" {
void apply_packed_flags__13TRaderMapCoreFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 pack_flags__13TRaderMapCoreFii();
s32 check_packed_flag_match(s32, s32, s32, s32);
void apply_packed_flags__13TRaderMapCoreFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 pack_color_bits__13TRaderMapCoreFii(s32, s32);
s32 input_press_or_repeat(s32, s32, s32, s32);

s32 dispatch_draw_command__22TAdMultiPlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = pack_color_bits__13TRaderMapCoreFii(arg0, arg1);
    return input_press_or_repeat(arg0, t, arg2, arg3);
}

void apply_packed_flags__13TRaderMapCoreFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = pack_flags__13TRaderMapCoreFii();
    check_packed_flag_match(arg0, t, arg2, arg3);
}

}
