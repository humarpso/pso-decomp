#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 get_field_ed__10TObjPlayerFPv(void *);
s32 TItemMag__sub_80105348(void *, int);
void try_add_action__8TItemMagFii(void *, int);
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent();
M2C_UNK get_mag_item_stat_percent(s32);
s16 TItemMagSub__sub_8011455C(void *);
extern u8 lbl_8043E540[];
u8 TItemMag__sub_80111978(u8 *arg0);
}

extern "C" {

s32 get_max_stat_flags__8TItemMagFi(s32 arg0);
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent();
M2C_UNK get_mag_item_stat_percent(s32);

s32 get_max_stat_flags__8TItemMagFi(s32 arg0) {
    s32 var_r31;
    s16 temp_r30;
    s16 temp_r29;
    s16 temp_r28;
    s16 var_r0;
    s32 var_r4;

    var_r31 = 0;
    temp_r30 = get_mag_item_percent();
    temp_r29 = get_mag_level(arg0);
    temp_r28 = get_mag_item_data(arg0);
    get_mag_item_stat_percent(arg0);
    if ((temp_r29 < temp_r30) && (temp_r28 < temp_r30)) {
        var_r31 |= 8;
    }
    if ((temp_r30 < temp_r29) && (temp_r28 < temp_r29)) {
        var_r31 |= 0x10;
    }
    if ((temp_r29 < temp_r28) && (temp_r30 < temp_r28)) {
        var_r31 |= 0x20;
    }
    var_r0 = temp_r29;
    var_r4 = 0;
    if (temp_r30 > temp_r29) {
        var_r0 = temp_r30;
    }
    if (var_r0 > temp_r28) {
        var_r0 = temp_r29;
        if (temp_r30 > temp_r29) {
            var_r0 = temp_r30;
        }
    } else {
        var_r0 = temp_r28;
    }
    {
        s32 max32 = var_r0;
        if (temp_r30 == max32) {
            var_r4 = 1;
        }
        if (temp_r29 == max32) {
            var_r4 += 1;
        }
        if (temp_r28 == max32) {
            var_r4 += 1;
        }
    }
    if (var_r4 >= 2) {
        var_r31 |= 0x100;
    }
    return var_r31;
}
u8 TItemMag__sub_80111978(u8 *arg0) {
    s16 stat;
    s16 data;
    s16 level;
    u8 before;
    s32 idx;
    s16 pct;
    s8 group;
    before = get_field_ed__10TObjPlayerFPv(arg0);
    if (M2C_FIELD(arg0, u8 **, 0xF0) != NULL && TItemMagSub__sub_8011455C(arg0 + 0x198) >= 100) {
        group = (s8)M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), u8 *, 0x88C) % 3;
        pct = ((s16 (*)(s32))get_mag_item_percent)((s32)arg0);
        level = get_mag_level((s32)arg0);
        data = get_mag_item_data((s32)arg0);
        stat = ((s16 (*)(s32))get_mag_item_stat_percent)((s32)arg0);
        idx = (u32)__cntlzw(TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0x7F)) >> 5;
        idx += group * 2;
        if (TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0xF9) == 0) {
            if (TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0xFA) != 0) {
                idx += 6;
            } else if (TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0xFC) != 0) {
                idx += 12;
            }
        }
        if (TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0xF9) != 0) {
            switch (group) {
            case 0:
                if (pct + data == stat + level) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            case 1:
                if (pct + level == data + stat) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            case 2:
                if (pct + stat == data + level) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            }
        } else if (TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0xFA) != 0) {
            switch (group) {
            case 0:
                if (pct + data == stat + level) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            case 1:
                if (pct + level == data + stat) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            case 2:
                if (pct + stat == data + level) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            }
        } else if (TItemMag__sub_80105348(M2C_FIELD(arg0, u8 **, 0xF0), 0xFC) != 0) {
            switch (group) {
            case 0:
                if (pct + data == stat + level) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            case 1:
                if (pct + level == data + stat) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            case 2:
                if (pct + stat == data + level) {
                    try_add_action__8TItemMagFii(arg0, lbl_8043E540[idx]);
                }
                break;
            }
        }
    }
    return get_field_ed__10TObjPlayerFPv(arg0) != before;
}

}
