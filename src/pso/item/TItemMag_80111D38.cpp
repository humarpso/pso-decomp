#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void do_action_by_class__8TItemMagFi(s32 arg0);
void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1);
void update_feed_anim__8TItemMagFPv(void *arg0);
s32 TItemMag__sub_80105348(void *, M2C_UNK);
M2C_UNK TItemMag__sub_80112E20(void *, u8);
s32 check_action_probability__8TItemMagFPvi(void *, M2C_UNK);
u8 get_field_ed__10TObjPlayerFPv(s32);
s16 get_mag_item_data(void *);
s16 get_mag_item_percent(void *, void *);
s16 get_mag_item_stat_percent(void *);
s16 get_mag_level(void *);
s32 get_max_stat_flags__8TItemMagFi();
M2C_UNK rand__11TOBoss4RockFv();
M2C_UNK try_add_action__8TItemMagFii(void *, M2C_UNK);

void update_feed_anim__8TItemMagFPv(void *arg0) {
    s16 temp_r26;
    s16 temp_r29;
    s16 temp_r30;
    s16 temp_r31;
    s32 temp_r25;
    s8 temp_r28;
    void *temp_r4;

    if ((void *) M2C_FIELD(arg0, void **, 0xF0) != NULL) {
        temp_r25 = get_max_stat_flags__8TItemMagFi();
        temp_r4 = M2C_FIELD(arg0, void **, 0xF0);
        temp_r28 = (s8) M2C_FIELD(temp_r4, u8 *, 0x88C);
        temp_r29 = get_mag_item_percent(arg0, temp_r4);
        temp_r30 = get_mag_level(arg0);
        temp_r31 = get_mag_item_data(arg0);
        temp_r26 = get_mag_item_stat_percent(arg0);
        if (TItemMag__sub_80105348(M2C_FIELD(arg0, void **, 0xF0), 0xF9) != 0) {
            if (temp_r25 & 0x108) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(5));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(6));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(8));
                return;
            }
            if (temp_r25 & 0x10) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x13));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x17));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x10));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x12));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1E));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(7));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x24));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x16));
            }
        } else if (TItemMag__sub_80105348(M2C_FIELD(arg0, void **, 0xF0), 0xFA) != 0) {
            if (temp_r25 & 0x110) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(6));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(5));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xA));
                return;
            }
            if (temp_r25 & 8) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(6));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x26));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xA));
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(5));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(8));
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1E));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x18));
            }
        } else if (TItemMag__sub_80105348(M2C_FIELD(arg0, void **, 0xF0), 0xFC) != 0) {
            if (temp_r25 & 0x120) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r30 <= temp_r29) {
                            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1C));
                            return;
                        }
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1E));
                        return;
                    }
                    if (temp_r30 <= temp_r29) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(9));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x17));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x24));
                return;
            }
            if (temp_r25 & 8) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r31 <= temp_r30) {
                            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x25));
                            return;
                        }
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1F));
                        return;
                    }
                    if (temp_r31 <= temp_r30) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x20));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1C));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x23));
                return;
            }
            if (temp_r25 & 0x10) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r29 <= temp_r31) {
                            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x11));
                            return;
                        }
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x15));
                        return;
                    }
                    if (temp_r29 <= temp_r31) {
                        try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xC));
                        return;
                    }
                    try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x12));
                    return;
                }
                try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x24));
            }
        }
    }
}

void do_action_by_class__8TItemMagFi(s32 arg0) {
    s32 temp_r31;
    u8 temp_r3;

    temp_r31 = get_max_stat_flags__8TItemMagFi();
    temp_r3 = get_field_ed__10TObjPlayerFPv(arg0);
    switch ((s32) temp_r3) {
    case 1:
        if (temp_r31 & 0x108) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xE));
            return;
        }
        if (temp_r31 & 0x10) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xF));
            return;
        }
        if (temp_r31 & 0x20) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(4));
        }
        break;
    case 13:
        if (temp_r31 & 0x110) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(2));
            return;
        }
        if (temp_r31 & 8) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(3));
            return;
        }
        if (temp_r31 & 0x20) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0xB));
            return;
        }
        break;
    case 25:
        if (temp_r31 & 0x120) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1A));
            return;
        }
        if (temp_r31 & 8) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x1B));
            return;
        }
        if (temp_r31 & 0x10) {
            try_add_action__8TItemMagFii((void *)(arg0), (M2C_UNK)(0x14));
        }
        break;
    }
}

void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1) {
    rand__11TOBoss4RockFv();
    if (arg1 & 0x40) {
        if (check_action_probability__8TItemMagFPvi(arg0, 0) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1BD));
        }
    } else if (arg1 & 1) {
        if (check_action_probability__8TItemMagFPvi(arg0, 1) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1BE));
        }
    } else if (arg1 & 2) {
        if (check_action_probability__8TItemMagFPvi(arg0, 2) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1BF));
        }
    } else if (arg1 & 0x80) {
        if (check_action_probability__8TItemMagFPvi(arg0, 3) != 0) {
            TItemMag__sub_80112E20(arg0, M2C_FIELD(arg0, u8 *, 0x1C0));
        }
    } else {
        if (arg1 & 0x20) {
            TItemMag__sub_80112E20(arg0, 2U);
            return;
        }
        if (arg1 & 0x10) {
            TItemMag__sub_80112E20(arg0, 3U);
            return;
        }
        if (arg1 & 4) {
            TItemMag__sub_80112E20(arg0, 5U);
            return;
        }
        if (arg1 & 8) {
            TItemMag__sub_80112E20(arg0, 4U);
        }
    }
}

}
