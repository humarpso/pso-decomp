#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_snap_shot_window__17TWindowOptionCtrlFv(void);
s32 create_sound_balance_window__17TWindowOptionCtrlFv(void);
s32 TWindowSnapShot__ct(s32, s32);
s32 TWindowSoundBalance__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 fn_8026CBA4(M2C_UNK);

s32 create_snap_shot_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowSnapShot__ct(var_r31, fn_8026CBA4(0xCF));
    }
    return var_r31;
}

s32 create_sound_balance_window__17TWindowOptionCtrlFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x68);
    if (var_r31 != 0) {
        var_r31 = TWindowSoundBalance__ct(var_r31, fn_8026CBA4(0xCF));
    }
    return var_r31;
}

}
