#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_choice__20TWindowChoiceSettingFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 pack_flags__13TRaderMapCoreFii();
M2C_UNK input_press_or_repeat(s32, s32, s32, s32);

void apply_choice__20TWindowChoiceSettingFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 t = pack_flags__13TRaderMapCoreFii();
    input_press_or_repeat(arg0, t, arg2, arg3);
}

}
