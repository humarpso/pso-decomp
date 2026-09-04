#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_feed_timer__8TItemMagFPv(void *arg0);
void feed_if_over_90__8TItemMagFPv(void* p);
void feed_if_over_45__8TItemMagFPv(void* p);
void update_feed__8TItemMagFPv(void *arg0);
void check_level_cap__8TItemMagFPv(void *arg0);
void check_level_evolve__8TItemMagFPv(void *arg0);
int TItemMag__sub_80112E20(void*, void*);
M2C_UNK transfer_energy__8TItemMagFPv(void *);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
M2C_UNK TItemMag__sub_80112BC4(void *, M2C_UNK);
M2C_UNK apply_feed_delta__8TItemMagFPv(void *);
M2C_UNK TItemMag__sub_80112FB4();

void update_feed_timer__8TItemMagFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 0) {
        TItemMag__sub_80112FB4();
    }
    transfer_energy__8TItemMagFPv(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x1CC)) {
        apply_feed_delta__8TItemMagFPv(arg0);
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
    if ((M2C_FIELD(arg0, s32 *, 0x1CC) % 60) == 0) {
        apply_switch_attack__5TItemFPvi(arg0, 0x6C);
    }
}

void feed_if_over_90__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 90) { TItemMag__sub_80112E20((void*)(p), (void*)((void*)1)); } }

void feed_if_over_45__8TItemMagFPv(void* p) { if (*(int*)((char*)p + 0x1cc) > 45) { TItemMag__sub_80112E20((void*)(p), (void*)((void*)1)); } }

void update_feed__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if ((temp_r0 != 0x5A) && (temp_r0 > 0x5A)) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

void check_level_cap__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        TItemMag__sub_80112BC4(arg0, 0x11);
        return;
    }
    if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

s16 obj_getS16_32C(s32);

void check_level_evolve__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        if (obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) > 0) {
            TItemMag__sub_80112BC4(arg0, 0xF);
        }
    } else if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8001A468
#include "types.h"

extern "C" {

s32 get_type__8TItemMagFPv(void* p);

s32 get_type__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102C4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
int test_item_flags__10TObjPlayerFPvUi(void* p, u32 m);
void clear_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
void add_item_flags__10TObjPlayerFPvUi(void* p, u32 v);
int has_flag_128__10TObjPlayerFPv(void* p);
u16 get_id__13TItemProArmorFPv(void* p);
u8 get_field_ec__12TOSwitchItemFPv(void* p);
int get_flag_40__8TItemMagFPv(void* p);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s16 get_stat__10TObjPlayerFPv(void* p);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

int get_flag_40__8TItemMagFPv(void* p) { return *(u32*)((char*)p + 0xdc) & 0x40; }

void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110B14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_preserve_flag__8TItemMagFPvi(void *arg0, s32 arg1);
void try_add_action__8TItemMagFii(s32 arg0, s32 arg1);
s32 TItemMag__sub_801117C0();
int fn_80100D9C(s32, s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, void *);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110C04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1);
u8 get_slot_count__14TItemProShieldFPv();
s32 activate_d04_slot__10TObjPlayerFPv();
s16 TObjPlayer__sub_80113D90(s32);
s16 get_mag_data__10TObjPlayerFPv(s32);
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent(s32);
s16 get_mag_item_stat_percent();

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110DC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_feed_state__8TItemMagFPvi(void *arg0, s32 arg1);

s16 obj_getS16_32C(s32);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110E20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_owner_data__8TItemMagFPv(u8 *arg0);
int get_field_ed__10TObjPlayerFPv();
M2C_UNK TItemMag__sub_80111140(void *, void *, void *);
u8 *get_pmt_record__10TObjPlayerFi(u8);

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
#endif
#if PSO_CLASS_PACKAGE == 0x80110FD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1);
s32 rand__11TOBoss4RockFv();

extern M2C_UNK TItemMag__data_8043E558;
extern const f32 lbl_805DAB9C;
extern const f32 lbl_805DABAC;

s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r3;
    u8 var_r31;
    u8 var_r5;
    u8 *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x19A);
    if (temp_r0 < 0x1F) {
        var_r5 = 0;
    } else if (temp_r0 < 0x3D) {
        var_r5 = 0xF;
    } else if (temp_r0 < 0x51) {
        var_r5 = 0x19;
    } else if (temp_r0 < 0x65) {
        var_r5 = 0x1E;
    } else {
        var_r5 = 0x23;
    }
    temp_r4 = arg0 + arg1;
    var_r31 = 0;
    if ((u8) M2C_FIELD(temp_r4, u8 *, 0x1BD) != 0) {
        temp_r0_2 = M2C_FIELD(temp_r4, u8 *, 0x1C1);
        switch ((s32) temp_r0_2) {
        case 0:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC);
            break;
        case 1:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC) + var_r5;
            break;
        case 2:
            var_r31 = var_r5;
            break;
        case 3:
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x1BC);
            if (temp_r3 > 0xAU) {
                var_r31 = temp_r3 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        case 4:
            if (var_r5 > 0xAU) {
                var_r31 = var_r5 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        }
        if ((u8) (s32) (lbl_805DABAC * (lbl_805DAB9C * (f32) rand__11TOBoss4RockFv())) < var_r31) {
            return 1;
        }
        goto block_29;
    }
block_29:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801112B0
#include "types.h"

extern "C" {

int TItemMag__sub_801112B0(void);

int TItemMag__sub_801112B0(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80111828
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80111D38
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
s16 get_mag_item_data(void *);
s16 get_mag_level(void *);
s16 get_mag_item_percent(void *, void *);
s16 get_mag_item_stat_percent(void *);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x801125DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void feed_by_item_flags__8TItemMagFPvc(void *arg0, s8 arg1);
M2C_UNK TItemMag__sub_80112E20(void *, u8);
M2C_UNK rand__11TOBoss4RockFv();
s32 check_action_probability__8TItemMagFPvi(void *, M2C_UNK);

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
#endif
#if PSO_CLASS_PACKAGE == 0x8011271C
#include "types.h"

extern "C" {

void TItemMag__sub_8011271C(void);

void TItemMag__sub_8011271C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80112C90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1);
u8 TItemMagSub__sub_8011455C(void *);
M2C_UNK set_field_EE__8TItemMagFPvUc(void *, void *);
M2C_UNK TItemMag__sub_801124C4(void *);
M2C_UNK TItemMag__sub_801140F4(void *, int);
M2C_UNK TItemMag__sub_80114198(void *, int);
M2C_UNK TItemMag__sub_8011423C(void *, int);
M2C_UNK TItemMag__sub_801142E0(void *, int);
s32 get_field_d8__10TObjPlayerFPv(int);
M2C_UNK TObjPlayer__sub_8010069C(void *);
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK TObjPlayer__sub_801B9EDC(int, int);
M2C_UNK add_clamped_stat__8TItemMagFPvi(void *, int);
M2C_UNK add_stat_clamped__8TItemMagFPvi(void *, int);
s32 get_item_field_6__10TObjPlayerFPv(int);
s32 get_item_info__10TObjPlayerFiiPv(int, int, int);
s32 obj_isState2_324(int);

s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1) {
    if (arg1 != NULL) {
        TItemMag__sub_801142E0((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 4)));
        TItemMag__sub_8011423C((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 6)));
        TItemMag__sub_801140F4((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 0xA)));
        TItemMag__sub_80114198((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 8)));
        add_stat_clamped__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 0)));
        add_clamped_stat__8TItemMagFPvi((void *) (arg0 + 0x198), (int) (M2C_FIELD(arg1, s16 *, 2)));
        set_field_EE__8TItemMagFPvUc((void *) (arg0), (void *) (TItemMagSub__sub_8011455C((void *) (arg0 + 0x198))));
        if (TObjPlayer__sub_80102C30((void *) (arg0)) == 2) {
            TObjPlayer__sub_8010069C((void *) (arg0));
            if (obj_isState2_324((int) (M2C_FIELD(arg0, s32 *, 0xF0))) == 0) {
                arg1 = (u8 *) get_item_field_6__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)));
                if ((arg1 != NULL) && (get_item_info__10TObjPlayerFiiPv((int) (arg1), (int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (0)) == 0)) {
                    TObjPlayer__sub_801B9EDC((int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (get_field_d8__10TObjPlayerFPv((int) (arg1))));
                }
            }
        }
        TItemMag__sub_801124C4((void *) (arg0));
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80112D94
#include "types.h"

extern "C" {

int TItemMag__vt15(void* p);
int TItemMag__sub_80112DB4(void*);

int TItemMag__vt15(void* p) { return TItemMag__sub_80112DB4(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80112EE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void transfer_energy__8TItemMagFPv(void *arg0);
M2C_UNK set_type__10TObjPlayerFPvi(s32, s32);
s32 get_mag_id__8TItemMagFPv(s32);

void transfer_energy__8TItemMagFPv(void *arg0) {
    u32 temp_r3;
    s32 temp_r4;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if ((temp_r3 != 0U) && (get_mag_id__8TItemMagFPv(temp_r3 + 0x644) == 0)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1D0) - M2C_FIELD(arg0, s32 *, 0x1CC);
        if (temp_r4 > 0) {
            set_type__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xF0) + 0x644, temp_r4);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80112F44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_feed_delta__8TItemMagFPv(u8 *arg0);
M2C_UNK clear_feed_flags__8TItemMagFPvUi(void *, M2C_UNK);
u32 test_flags__8TItemMagFPvUi(void *, M2C_UNK);
M2C_UNK decrement_clamp__10TObjPlayerFPvi(s32, s32);

void apply_feed_delta__8TItemMagFPv(u8 *arg0) {
    s32 temp_r4;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x100) != 0U)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x1D0) - M2C_FIELD(arg0, s32 *, 0x1CC);
        if (temp_r4 > 0) {
            decrement_clamp__10TObjPlayerFPvi(M2C_FIELD(arg0, u32 *, 0xF0) + 0x644, temp_r4);
        }
        clear_feed_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x100);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011329C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__8TItemMagFPv(void *arg0);
M2C_UNK TItemMag__sub_80111758(void *, M2C_UNK);

s32 obj_testFlags30(void *, M2C_UNK);
extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;

void update__8TItemMagFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C8);
    if (TItemMag__data_805DABA4 < temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (temp_f1 - TItemMag__data_805DABA8);
    }
    if (obj_testFlags30(arg0, 0x08000000) == 0) {
        TItemMag__sub_80111758(arg0, 1);
        return;
    }
    TItemMag__sub_80111758(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113428
#include "types.h"

extern "C" {

int TItemMag__vt13(void* p);
int TItemMag__sub_80110F04(void*);

int TItemMag__vt13(void* p) { return TItemMag__sub_80110F04(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011370C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMag__vt16(s32 arg0, s32 arg1);
M2C_UNK TItemData__sub_8010D510(s32, s32, s32);

void TItemMag__vt16(s32 arg0, s32 arg1) {
    TItemData__sub_8010D510(arg1, arg0 + 0x198, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113954
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMag__vt44(s32 arg0);
u8 get_field_ed__10TObjPlayerFPv();
M2C_UNK TItemEquipBase__sub_8010B58C(s32, u8);

void TItemMag__vt44(s32 arg0) {
    u8 temp_r3;
    u8 var_r4;

    temp_r3 = get_field_ed__10TObjPlayerFPv();
    var_r4 = temp_r3;
    if (temp_r3 >= 0x42U) {
        var_r4 = 0x42;
    }
    TItemEquipBase__sub_8010B58C(arg0, var_r4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011399C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__8TItemMagFv(void *arg0, s16 arg1);
void __dt__14TItemEquipBaseFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__8TItemMag[];

void *__dt__8TItemMagFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TItemMag;
        __dt__14TItemEquipBaseFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113B2C
#include "types.h"

extern "C" {

void cleanup__8TItemMagFv(void);
int fn_800F953C(void*);
int __dt__9TItemLoadFPvs(void*, void*);

    extern int TItemMag__data_805D54A8;
    extern int lbl_805D54AC;
    extern int lbl_805D54B0;
void cleanup__8TItemMagFv(void) { __dt__9TItemLoadFPvs((void*)(TItemMag__data_805D54A8), (void*)1); fn_800F953C((void*)(lbl_805D54B0)); TItemMag__data_805D54A8 = 0; lbl_805D54AC = 0; lbl_805D54B0 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113C98
#include "types.h"

extern "C" {

void set_flags64__8TItemMagFPvUi(void* p, u32 v);

void set_flags64__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) |= v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113CB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void set_flags64__8TItemMagFPvUi(void* p, u32 v);

void TItemMag__sub_80113CB8(u8 *arg0, s32 arg1, u32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    if (arg2 != 0U) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xB8), (void *) (arg2));
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3);

extern M2C_UNK lbl_8043E560;
extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;

void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    M2C_FIELD(arg0, void **, 0x28) = arg3;
    if ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) TItemMag__data_805DABA4;
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u32 *, 4) - TItemMag__data_805DABA8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113D48
#include "types.h"

extern "C" {

void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_level(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_status_flag__8TItemMagFPv(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 get_item_type__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int TItemData__sub_8010EE40(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);

void scale_field_c8__8TItemMagFPvf(void* p, f32 v) { *(f32*)((char*)p + 0xc8) *= v; }
int is_feed_empty__8TItemMagFPv(void* p) { return (test_feed_flags__11TItemMagSubFPvUi(p, 64)) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113E30
#include "types.h"

extern "C" {

void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_level(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_status_flag__8TItemMagFPv(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 get_item_type__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int TItemData__sub_8010EE40(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);

int get_status_flag__8TItemMagFPv(void* p) { return *(u32*)((char*)p + 0x18c) & 0x10; }
void TItemMag__sub_80113E3C(void* p) { *(s8*)((char*)p + 0x0) = -32; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113E74
#include "types.h"

extern "C" {

void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_level(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_status_flag__8TItemMagFPv(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 get_item_type__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int TItemData__sub_8010EE40(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);

u8 TItemMag__sub_80113E74(void* p) { return *(u8*)((char*)p + 0xe); }
s16 get_item_type__8TItemMagFPv(void* p) { return *(s16*)((char*)p + 0x0); }
s16 get_sync__8TItemMagFPv(void* p) { return *(s16*)((char*)p + 0x2); }
int is_active__8TItemMagFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 9) & 0x1; }
s32 get_sub_value__8TItemMagFi(s32 arg0) {
    return (s32) TItemMag__sub_80113EEC((void*)(arg0 + 0x4AC));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113EEC
#include "types.h"

extern "C" {

void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int is_feed_empty__8TItemMagFPv(void* p);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);
s16 TObjPlayer__sub_80113D90(void* p);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_level(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_status_flag__8TItemMagFPv(void* p);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
s16 get_item_type__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
f32 TItemMag__sub_80113EEC(void* p);
int TItemData__sub_8010EE40(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_level__9TItemDataFPv(void*);
int get_percent__9TItemDataFPv(void*);

f32 TItemMag__sub_80113EEC(void* p) { return *(f32*)((char*)p + 0x3c); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113EF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_feed_timer__8TItemMagFPv(void *arg0);

extern f32 TItemMag__data_805DABA4;

void init_feed_timer__8TItemMagFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TItemMag__data_805DABA4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80113F00
#include "types.h"

extern "C" {

f32 get_stat_f32__8TItemMagFPv(void* p);
s32 get_mag_id__8TItemMagFPv(void* p);
int check_state_flag_1__8TItemMagFPv(void* p);
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v);
void set_flags__8TItemMagFPvUi(void* p, u32 v);
int test_flags__8TItemMagFPvUi(void* p, u32 m);
int TObjPlayer__sub_8001BEF8(void*, int);

s32 get_mag_id__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x0); }
f32 get_stat_f32__8TItemMagFPv(void* p) { return *(f32*)((char*)p + 0x8); }
int check_state_flag_1__8TItemMagFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x4, 1); }
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) &= ~v; }
void set_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) |= v; }
int test_flags__8TItemMagFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0x4) & m; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114384
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1);
s32 TItemMag__sub_801143E8(s32, s32);

s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1) {
    s32 var_r30;

    if (arg1 < 6U) {
        var_r30 = 0;
loop_2:
        if ((s32) arg1 == TItemMag__sub_801143E8(arg0, var_r30)) {
            return 1;
        }
        var_r30 += 1;
        if (var_r30 == 3) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80114950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80114950 { char pad[0x18]; };
struct VObj_80114950 : Base_80114950 {
    virtual void m00(); virtual void m01(); virtual void m02(); virtual void m03();
    virtual void m04(); virtual void m05(); virtual void m06(); virtual void m07();
    virtual void m08(); virtual void m09(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual void m63(s32, void *);
};

extern "C" {

void set_mag_type__8TItemMagFPvi(u8 *arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK reset__11TItemMagSubFPv();

extern s32 lbl_805D54B0;

void set_mag_type__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    u8 *temp_r5;

    reset__11TItemMagSubFPv();
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 **, 0x30) = (s32 *) (lbl_805D54B0 + (arg1 * 0x64));
    temp_r5 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x20));
    if (temp_r5 != NULL) {
        s32 elem = *M2C_FIELD(arg0, s32 **, 0x30);
        if (elem == -1) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xA0), (void *) (temp_r5 + 0x2FC));
            return;
        }
        ((VObj_80114950 *)temp_r5)->m63(elem, (void *)(arg0 + 0xA0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801149D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_type__8TItemMagFPvi(u8 *arg0, s32 arg1);
M2C_UNK reset_stats__11TItemMagSubFPv(void *, s32, s32);
M2C_UNK set_flags64__8TItemMagFPvUi(void *, s32);

extern s32 lbl_805D54B0;

void set_type__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    set_flags64__8TItemMagFPvUi(arg0, 0x18);
    reset_stats__11TItemMagSubFPv(arg0, M2C_FIELD(arg0, s32 *, 0x68), arg1);
    M2C_FIELD(arg0, s32 *, 0x68) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (lbl_805D54B0 + (arg1 * 0x64));
}

}
#endif
#endif
