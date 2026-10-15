#include "types.h"
#include "pso/object/TObjLuker.h"

struct RecoveredGlobal_801329B0_lbl_8043EA58 {
    s32 value;
    u8 remaining[0x8C];
};

extern "C" {
extern u8 *text_language_group_table;
extern s32 game_difficulty_selection;
s32 enemy_name_for_rt_index(s32 arg0);
s32 get_localized_text_entry(s32, s32);
extern RecoveredGlobal_801329B0_lbl_8043EA58 floor_destination_text_id_table;
extern s32 game_difficulty_selection;
void get_floor_destination_name(u32 arg0);
}

extern "C" {

    extern int luker_stat_entry_ptr_table[];

typedef char RecoveredGlobal_801329B0_lbl_8043EA58_size[sizeof(RecoveredGlobal_801329B0_lbl_8043EA58) == 0x90 ? 1 : -1];
void get_floor_destination_name(u32 arg0) {
    u32 var_r3;
    var_r3 = arg0;
    if ((var_r3 == 0xB) && ((s32) game_difficulty_selection >= 3)) {
        var_r3 = 0xE;
    }
    get_localized_text_entry(9, *(s32 *)((s8 *)(&floor_destination_text_id_table.value) + (var_r3 * 4)));
}

int TObjLuker::get_stat_table_entry(int a0) {  return luker_stat_entry_ptr_table[a0]; }
s32 enemy_name_for_rt_index(s32 arg0) {
    s32 var_r3;
    var_r3 = arg0;
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    if (var_r3 >= 0x58) {
        var_r3 = 0;
    }
    if ((s32) game_difficulty_selection >= 3) {
        return *(s32 *)((s8 *)(*(s32 *)((s8 *)text_language_group_table + 0xC)) + (var_r3 * 4));
    }
    return *(s32 *)((s8 *)(*(s32 *)((s8 *)text_language_group_table + 8)) + (var_r3 * 4));
}

}
