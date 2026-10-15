#include "types.h"

extern "C" {

s32 apply_choice__20TWindowChoiceSettingFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 pack_flags__13TRaderMapCoreFii(s32, s32);
s32 input_press_or_repeat(s32, s32, s32, s32);

s32 apply_choice__20TWindowChoiceSettingFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = pack_flags__13TRaderMapCoreFii(arg0, arg1);
    return input_press_or_repeat(arg0, t, arg2, arg3);
}

}
