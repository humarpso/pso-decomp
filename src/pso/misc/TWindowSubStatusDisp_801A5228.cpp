#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_801A5228_lbl_80446970 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_801A5228_lbl_80446970 card_window_scale_table;
}

extern "C" {

void *get_character_save_record(s32);

extern s32 local_client_id;

typedef char RecoveredGlobal_801A5228_lbl_80446970_size[sizeof(RecoveredGlobal_801A5228_lbl_80446970) == 0x10 ? 1 : -1];
f32 TWindowSubStatusDisp::get_card_window_scale(s32 _w0) {
    return *(f32 *)((s8 *)((u8 *)(&card_window_scale_table.value) + (TWindowSubStatusDisp::get_card_window_flags((s32)(_w0)) * 4)) + 0);
}

s32 TWindowSubStatusDisp::get_card_window_flags(s32 arg0) {
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
    return ((u32) *(u32 *)((s8 *)temp_r3 + 0x10) >> 8U) & 3;
}

}
