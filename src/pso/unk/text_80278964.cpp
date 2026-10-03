#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK calc_list_content_extent(void *);
M2C_UNK advance_status_disp_entry(void *, M2C_UNK);
M2C_UNK add_battle_stat_entry(void *, u32, s32, M2C_UNK);
M2C_UNK TWindowSubEquip__sub_80279044(void *);
s32 TWindowSubItem__sub_8027AA78(u32);

void refresh_battle_stat_list(void *arg0) {
    u32 var_r31;

    var_r31 = 0U;
    do {
        add_battle_stat_entry(arg0, var_r31, TWindowSubItem__sub_8027AA78(var_r31), 1);
        var_r31 += 1;
    } while (var_r31 < 5U);
    if (M2C_FIELD(arg0, s16 *, 0x72) <= 0) {
        advance_status_disp_entry(arg0, -1);
    }
    TWindowSubEquip__sub_80279044(arg0);
    calc_list_content_extent(arg0);
}

}
