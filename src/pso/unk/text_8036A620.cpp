#include "types.h"
#include "pso/unk/text_8036A620.h"

struct RecoveredGlobal_8036A648_lbl_804F351C {
    s32 value;
    u8 remaining[0xC0];
};

struct RecoveredGlobal_8036A67C_lbl_804F3458 {
    s32 value;
    u8 remaining[0xC0];
};

extern RecoveredGlobal_8036A648_lbl_804F351C bgm_adx_filename_table;
extern RecoveredGlobal_8036A67C_lbl_804F3458 option_name_table;
extern "C" {
s32 check_flag_index_set(s32);
typedef char RecoveredGlobal_8036A648_lbl_804F351C_size[sizeof(RecoveredGlobal_8036A648_lbl_804F351C) == 0xC4 ? 1 : -1];

s32 fn_8036A620(s32 idx) {
    if (check_flag_index_set(idx) == 0) {
        return 1;
    }
    return 1;
}

s32 fn_8036A648(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0x31) {
        return 0;
    }
    return *(s32 *)((s8 *)&bgm_adx_filename_table.value + (arg0 * 4));
}
}
typedef char RecoveredGlobal_8036A67C_lbl_804F3458_size[sizeof(RecoveredGlobal_8036A67C_lbl_804F3458) == 0xC4 ? 1 : -1];
s32 get_option_table_entry(s32 arg0) {
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0x31) {
        return 0;
    }
    return *(s32 *)((s8 *)&option_name_table.value + (arg0 * 4));
}
