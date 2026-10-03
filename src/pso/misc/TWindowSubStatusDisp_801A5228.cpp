#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A5228_lbl_80446970 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 get_card_window_flags__20TWindowSubStatusDispFi(s32 arg0);
extern RecoveredGlobal_801A5228_lbl_80446970 lbl_80446970;
f32 get_card_window_scale__20TWindowSubStatusDispFi(s32 _w0);
}

extern "C" {

void *get_card_window__17TWindowSubComCardFUi(s32);

extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_801A5228_lbl_80446970_size[sizeof(RecoveredGlobal_801A5228_lbl_80446970) == 0x10 ? 1 : -1];
f32 get_card_window_scale__20TWindowSubStatusDispFi(s32 _w0) {
    return M2C_FIELD(((u8 *)(&lbl_80446970.value) + (get_card_window_flags__20TWindowSubStatusDispFi((s32)(_w0)) * 4)), f32 *, 0);
}

s32 get_card_window_flags__20TWindowSubStatusDispFi(s32 arg0) {
    s32 var_r3;
    void *temp_r3;

    var_r3 = arg0;
    if (var_r3 >= 4) {
        var_r3 = lbl_805D53A0;
    }
    temp_r3 = get_card_window__17TWindowSubComCardFUi(var_r3);
    if (temp_r3 == NULL) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 8U) & 3;
}

}
