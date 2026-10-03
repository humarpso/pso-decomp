#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_percent__9TItemDataFPv(void *);
s32 get_stat_percent__9TItemDataFPv(void *);
s32 get_mag_mind_level__9TItemDataFPv(void *);
s32 get_level__9TItemDataFPv(void *);
s16 TItemMagSub__sub_8011455C(void *mag);
}

extern "C" {

void reset_initial_stats__11TItemMagSubFPv(void *arg0);
void update_stat__11TItemMagSubFPv(void *arg0);
s32 is_level_maxed__11TItemMagSubFPv();

void reset_initial_stats__11TItemMagSubFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0x28;
    M2C_FIELD(arg0, s8 *, 0xE) = 0x12;
}

s16 TItemMagSub__sub_8011455C(void *mag) {
    return get_stat_percent__9TItemDataFPv(mag) + get_percent__9TItemDataFPv(mag) + get_mag_mind_level__9TItemDataFPv(mag) + get_level__9TItemDataFPv(mag);
}

void update_stat__11TItemMagSubFPv(void *arg0) {
    s8 temp_r3;
    s32 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r0;

    if (is_level_maxed__11TItemMagSubFPv() == 0) {
        temp_r3 = M2C_FIELD(arg0, s8 *, 0);
        if (temp_r3 & 0x10) {
            temp_r3_2 = M2C_FIELD(arg0, s16 *, 2) + M2C_FIELD(arg0, s16 *, 6);
            M2C_FIELD(arg0, s16 *, 2) = temp_r3_2;
            if (((s16) temp_r3_2 != 0) && ((s16) M2C_FIELD(arg0, s16 *, 6) < (s16) M2C_FIELD(arg0, s16 *, 2))) {
                M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg0, s16 *, 4);
            }
        } else if (temp_r3 & 8) {
            M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + (s8) M2C_FIELD(arg0, u8 *, 1));
            temp_r3_3 = M2C_FIELD(arg0, s16 *, 6);
            if (temp_r3_3 < (s16) M2C_FIELD(arg0, s16 *, 2)) {
                M2C_FIELD(arg0, s16 *, 2) = temp_r3_3;
                M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xFFFFFFF7);
            }
        } else {
            M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) - (s8) M2C_FIELD(arg0, u8 *, 1));
            if ((s16) M2C_FIELD(arg0, s16 *, 2) < (s16) (temp_r3_3 = M2C_FIELD(arg0, s16 *, 4))) {
                M2C_FIELD(arg0, s16 *, 2) = temp_r3_3;
                M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | 8);
            }
        }
    }
}

}
