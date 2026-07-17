#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_feed_anim__8TItemMagFPv(void *arg0);
void do_action_by_class__8TItemMagFi(s32 arg0);
s32 get_max_stat_flags__8TItemMagFi();
u8 get_field_ed__10TObjPlayerFPv(s32);
s32 TItemMag__sub_80105348(void *, M2C_UNK);
M2C_UNK try_add_action__8TItemMagFii(void *, M2C_UNK);
s16 fn_80113DA0(void *);
s16 fn_80113DC4(void *);
s16 fn_80113DE8(void *, void *);
s16 fn_80113E0C(void *);

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
        temp_r29 = fn_80113DE8(arg0, temp_r4);
        temp_r30 = fn_80113DC4(arg0);
        temp_r31 = fn_80113DA0(arg0);
        temp_r26 = fn_80113E0C(arg0);
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

}
