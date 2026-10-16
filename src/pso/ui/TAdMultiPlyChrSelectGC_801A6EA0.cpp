#include "types.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {
s32 pack_flags__13TRaderMapCoreFii();
s32 check_packed_flag_match(s32, s32, s32, s32);
}

extern "C" {

s32 input_press_or_repeat(s32, s32, s32, s32);

s32 TAdMultiPlyChrSelectGC::dispatch_draw_command(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = TRaderMapCore::pack_color_bits(arg0, arg1);
    return input_press_or_repeat(arg0, t, arg2, arg3);
}

void TRaderMapCore::apply_packed_flags(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = pack_flags__13TRaderMapCoreFii();
    check_packed_flag_match(arg0, t, arg2, arg3);
}

}
