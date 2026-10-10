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
extern RecoveredGlobal_801A5228_lbl_80446970 card_window_scale_table;
f32 get_card_window_scale__20TWindowSubStatusDispFi(s32 _w0);
}

extern "C" {

void *get_character_save_record(s32);

extern s32 local_client_id;

typedef char RecoveredGlobal_801A5228_lbl_80446970_size[sizeof(RecoveredGlobal_801A5228_lbl_80446970) == 0x10 ? 1 : -1];
f32 get_card_window_scale__20TWindowSubStatusDispFi(s32 _w0) {
    return M2C_FIELD(((u8 *)(&card_window_scale_table.value) + (get_card_window_flags__20TWindowSubStatusDispFi((s32)(_w0)) * 4)), f32 *, 0);
}

s32 get_card_window_flags__20TWindowSubStatusDispFi(s32 arg0) {
    s32 var_r3;
    void *temp_r3;

    var_r3 = arg0;
    if (var_r3 >= 4) {
        var_r3 = local_client_id;
    }
    temp_r3 = get_character_save_record(var_r3);
    if (temp_r3 == NULL) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 8U) & 3;
}

}
