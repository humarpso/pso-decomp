#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1);
s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1);
s32 check_feed_state__8TItemMagFPvi(void *arg0, s32 arg1);
void copy_owner_data__8TItemMagFPv(u8 *arg0);
void try_add_action__8TItemMagFii(s32 arg0, s32 arg1);
M2C_UNK TItemMag__sub_80111140(void *, void *, void *);
s32 TItemMag__sub_801117C0();
s16 TObjPlayer__sub_80113D90(s32);
s32 activate_d04_slot__10TObjPlayerFPv();
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, void *);
int fn_80100D9C(s32, s32);
int get_field_ed__10TObjPlayerFPv();
s16 get_mag_data__10TObjPlayerFPv(s32);
s16 get_mag_item_data(s32);
s16 get_mag_item_percent(s32);
s16 get_mag_item_stat_percent();
s16 get_mag_level(s32);
u8 *get_pmt_record__10TObjPlayerFi(u8);
u8 get_slot_count__14TItemProShieldFPv();
s16 obj_getS16_32C(s32);

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1) {
    u8 temp_r31;

    temp_r31 = M2C_FIELD(arg0, u8 *, 1);
    copy_to_item_data__5TItemFPvPv(arg1, arg0);
    M2C_FIELD(arg0, u8 *, 1) = temp_r31;
}

void try_add_action__8TItemMagFii(s32 arg0, s32 arg1) {
    if (TItemMag__sub_801117C0() < 4) {
        fn_80100D9C(arg0, arg1);
    }
}

s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r30;

    if ((arg0 != 0U) && (temp_r3 = activate_d04_slot__10TObjPlayerFPv(), ((temp_r3 == 0) == 0))) {
        switch (arg1) {
        case 0:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 1:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 2:
            var_r30 = 0;
            if (get_mag_item_stat_percent() >= 0x46) {
                var_r30 = 1;
            }
            if (get_mag_item_percent(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (get_mag_level(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (get_mag_item_data(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (var_r30 >= 2) {
                return 1;
            }
            break;
        case 3:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 4:
            if ((get_slot_count__14TItemProShieldFPv() >= 0x78U) && (get_mag_data__10TObjPlayerFPv(temp_r3) >= 0xB4) && (TObjPlayer__sub_80113D90(temp_r3) >= 0x6E)) {
                return 1;
            }
            break;
        case 5:
            if ((get_mag_item_stat_percent() >= 0x23) && (get_mag_item_percent(temp_r3) >= 0x23) && (get_mag_level(temp_r3) >= 0x23) && (get_mag_item_data(temp_r3) >= 0x23)) {
                return 1;
            }
            break;
        }
    }
    return 0;
}

s32 check_feed_state__8TItemMagFPvi(void *arg0, s32 arg1) {
    s16 temp_r3;

    temp_r3 = obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0));
    if (arg1 == 7) {
        if (temp_r3 != 0) {
            return 0;
        }
        goto block_5;
    }
    if (temp_r3 == 0) {
        return 0;
    }
block_5:
    return 1;
}

void copy_owner_data__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_pmt_record__10TObjPlayerFi(get_field_ed__10TObjPlayerFPv());
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) M2C_FIELD(temp_r3, s16 *, 8);
        M2C_FIELD(arg0, u8 *, 0x1BC) = (u8) M2C_FIELD(temp_r3, u8 *, 0xB);
        TItemMag__sub_80111140(arg0, temp_r3 + 0xC, temp_r3 + 0x10);
    }
}

}
