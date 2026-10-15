#include "types.h"

extern "C" {

s32 calc_list_content_extent(void *);
s32 advance_status_disp_entry(void *, s32);
s32 add_battle_stat_entry(void *, u32, s32, s32);
s32 TWindowSubEquip__sub_80279044(void *);
s32 TWindowSubItem__sub_8027AA78(u32);

void refresh_battle_stat_list(void *arg0) {
    u32 var_r31;

    var_r31 = 0U;
    do {
        add_battle_stat_entry(arg0, var_r31, TWindowSubItem__sub_8027AA78(var_r31), 1);
        var_r31 += 1;
    } while (var_r31 < 5U);
    if (*(s16 *)((s8 *)arg0 + 0x72) <= 0) {
        advance_status_disp_entry(arg0, -1);
    }
    TWindowSubEquip__sub_80279044(arg0);
    calc_list_content_extent(arg0);
}

}
