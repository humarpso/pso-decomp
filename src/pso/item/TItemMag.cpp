#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredFields_80113244_arg0 {
    u8 unknown_0[0x1CC];
    s32 field_1CC;
};

typedef struct TargetList_80112BC4 { s32 count; s16 ids[46]; } TargetList_80112BC4;

struct MagStats_80112A3C {
    s16 a;
    s16 b;
    s16 c;
    s16 d;
    s16 e;
    s16 f;
    u8 pad[0x4];
};

struct Mag_80112A3C {
    u8 pad0[0x1A8];
    u8 *subs[2];
};

extern "C" {
M2C_UNK TItemMag__sub_801112B8(void *, int);
M2C_UNK TItemMag__sub_80111758(void *, int);
void apply_feed_delta__8TItemMagFPv(u8 *arg0);
extern const f32 lbl_805DABB4;
void TItemMag__sub_80112DB4(u8 *arg0, s32 arg1);
int TItemMag__sub_80112E20(void*, void*);
void TItemMag__sub_80113244(struct RecoveredFields_80113244_arg0 *arg0);
s16 obj_getField1c(void *);
void TObjPlayer__sub_8004433C(void *);
void create__10TTecDebandFiii(void *, void *, int);
void create__9TTecRestaFPvPvPv(void *, void *, int);
void create__12TTecReverserFPvPvPvPv(void *, void *, void *, int);
void create__9TTecSiftaFPvPvPv(void *, void *, int);
void TItemMag__sub_80112BC4(u8 *self, s32 technique);
s32 spawn_particle_effect(void *, int);
s32 get_flag_40__8TItemMagFPv(void *);
void initialize_mag_data__9TItemDataFPv(void *);
s32 *lookup_item_pmt_record(u8 *);
s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1);
void set_flags__8TItemMagFPvUi(void *, u32);
s32 TItemMagSub__sub_80114DB8(u8 *arg0, u32 arg1);
u8 *TObjPlayer__sub_8011C940(s32, s32);
void play_sound_effect(int, int, int, int);
extern const f32 TItemMag__data_805DABA4;
extern const f32 TItemMag__data_805DABA8;
extern const f32 lbl_805DABB0;
s32 TItemMag__vt39(u8 *arg0, u8 *arg1);
}

extern "C" {

void TItemMag__sub_8011271C(void);
void TItemMag__vt15(void* p, s32 _w1);
s32 apply_feed_stats__8TItemMagFPvPv(u8 *arg0, u8 *arg1);
void check_level_cap__8TItemMagFPv(void *arg0);
void check_level_evolve__8TItemMagFPv(void *arg0);
void feed_if_over_45__8TItemMagFPv(void* p);
void feed_if_over_90__8TItemMagFPv(void* p);
void transfer_energy__8TItemMagFPv(void *arg0);
void update_feed__8TItemMagFPv(void *arg0);
void update_feed_timer__8TItemMagFPv(void *arg0);
u8 TItemMagSub__sub_8011455C(void *);
M2C_UNK TItemMag__sub_801124C4(void *);
int TItemMag__sub_80112E20(void*, void*);
M2C_UNK TItemMag__sub_80112FB4();
M2C_UNK TItemMag__sub_801140F4(void *, int);
M2C_UNK TItemMag__sub_80114198(void *, int);
M2C_UNK TItemMag__sub_8011423C(void *, int);
M2C_UNK TItemMag__sub_801142E0(void *, int);
M2C_UNK refresh_owner_stats__5TItemFPv(void *);
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK send_6x26_unequip_item__10TObjPlayerFPvPv(int, int);
M2C_UNK add_clamped_stat__8TItemMagFPvi(void *, int);
M2C_UNK add_stat_clamped__8TItemMagFPvi(void *, int);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
M2C_UNK clear_feed_flags__8TItemMagFPvUi(void *, M2C_UNK);
M2C_UNK decrement_clamp__10TObjPlayerFPvi(s32, s32);
s32 get_field_d8__10TObjPlayerFPv(int);
s32 get_item_field_6__10TObjPlayerFPv(int);
s32 get_item_info__10TObjPlayerFiiPv(int, int, int);
s32 get_mag_id__8TItemMagFPv(s32);
s16 obj_getS16_32C(s32);
s32 obj_isState2_324(int);
M2C_UNK set_field_EE__8TItemMagFPvUc(void *, void *);
M2C_UNK set_type__10TObjPlayerFPvi(s32, s32);
u32 test_flags__8TItemMagFPvUi(void *, M2C_UNK);

void TItemMag__sub_8011271C(void) {  }

s32 TItemMag__vt39(u8 *arg0, u8 *arg1) {
    MagStats_80112A3C stats;
    u8 pos[0xC];
    s32 *rec;
    u8 *tbl;
    s32 i;
    if (arg1 == NULL) {
        return 0;
    }
    initialize_mag_data__9TItemDataFPv(&stats);
    stats.a = 0;
    stats.b = 0;
    stats.f = 0;
    stats.e = 0;
    stats.d = 0;
    stats.c = 0;
    if (*arg1 == 3) {
        rec = lookup_item_pmt_record(arg1);
        if (rec != NULL) {
            tbl = TObjPlayer__sub_8011C940(M2C_FIELD(arg0, s32 *, 0x1B8), *rec);
            if (tbl != NULL) {
                stats.c = (s8)tbl[0];
                stats.d = (s8)tbl[1];
                stats.e = (s8)tbl[2];
                stats.f = (s8)tbl[3];
                stats.a = (s8)tbl[4];
                stats.b = (s8)tbl[5];
                set_flags__8TItemMagFPvUi(arg0 + 0x1D4, 0x10);
                if (TItemMag__data_805DABA4 != M2C_FIELD(arg0, f32 *, 0x190)) {
                    M2C_FIELD(arg0, f32 *, 0x194) = M2C_FIELD(arg0, f32 *, 0x194) + TItemMag__data_805DABA8;
                } else {
                    M2C_FIELD(arg0, f32 *, 0x190) = lbl_805DABB0;
                }
            }
        }
    }
    if (get_flag_40__8TItemMagFPv(arg0) == 0) {
        for (i = 0; i != 2; i++) {
            if (((Mag_80112A3C *)arg0)->subs[i] != NULL &&
                ((s32 (*)(u8 *, void *))TItemMagSub__sub_80114DB8)(((Mag_80112A3C *)arg0)->subs[i], pos) != 0) {
                spawn_particle_effect(pos, 0x9B);
            }
        }
        play_sound_effect(0x5B211, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
    }
    return apply_feed_stats__8TItemMagFPvPv(arg0, (u8 *)&stats);
}

void TItemMag__sub_80112BC4(u8 *self, s32 technique) {
    TargetList_80112BC4 targets;
    s32 level = M2C_FIELD(self, s16 *, 0x198) / 40;
    if (M2C_FIELD(self, u8 **, 0xF0) == NULL) {
        return;
    }
    switch (technique) {
    case 13:
        create__9TTecSiftaFPvPvPv(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, level);
        break;
    case 10:
        create__10TTecDebandFiii(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, level);
        break;
    case 15:
        create__9TTecRestaFPvPvPv(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, level);
        break;
    case 17:
        TObjPlayer__sub_8004433C(&targets);
        targets.count = 1;
        targets.ids[0] = obj_getField1c(M2C_FIELD(self, u8 **, 0xF0));
        targets.ids[1] = 0;
        create__12TTecReverserFPvPvPvPv(M2C_FIELD(self, u8 **, 0xF0), M2C_FIELD(self, u8 **, 0xF0) + 0x38, &targets, level);
        break;
    case 11:
        return;
    case 12:
        return;
    case 14:
        return;
    case 16:
        return;
    }
}

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
            refresh_owner_stats__5TItemFPv((void *) (arg0));
            if (obj_isState2_324((int) (M2C_FIELD(arg0, s32 *, 0xF0))) == 0) {
                arg1 = (u8 *) get_item_field_6__10TObjPlayerFPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)));
                if ((arg1 != NULL) && (get_item_info__10TObjPlayerFiiPv((int) (arg1), (int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (0)) == 0)) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv((int) (M2C_FIELD(arg0, s32 *, 0xF0)), (int) (get_field_d8__10TObjPlayerFPv((int) (arg1))));
                }
            }
        }
        TItemMag__sub_801124C4((void *) (arg0));
        return 1;
    }
    return 0;
}

void TItemMag__vt15(void* p, s32 _w1) { TItemMag__sub_80112DB4((u8 *)(p), (s32)(_w1)); }

void TItemMag__sub_80112DB4(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    apply_feed_delta__8TItemMagFPv((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x18C) = (s32) (M2C_FIELD(arg0, s32 *, 0x18C) & 0xF0);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x18C) | arg1;
    M2C_FIELD(arg0, s32 *, 0x18C) = temp_r4;
    M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DABB4;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    TItemMag__sub_801112B8((void *) (arg0), (int) (temp_r4));
    TItemMag__sub_80111758((void *) (arg0), (int) (1));
}

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

void update_feed_timer__8TItemMagFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1CC) == 0) {
        TItemMag__sub_80112FB4();
    }
    transfer_energy__8TItemMagFPv((void *)(arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1D0) <= (s32) M2C_FIELD(arg0, s32 *, 0x1CC)) {
        apply_feed_delta__8TItemMagFPv((u8 *)((u8 *)(arg0)));
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
        TItemMag__sub_80112BC4((u8 *)(arg0), (s32)(0x11));
        return;
    }
    if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

void check_level_evolve__8TItemMagFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_r0 == 0x5A) {
        if (obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) > 0) {
            TItemMag__sub_80112BC4((u8 *)(arg0), (s32)(0xF));
        }
    } else if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}
void TItemMag__sub_80113244(struct RecoveredFields_80113244_arg0 *arg0) {
    s32 temp_r0;
    temp_r0 = arg0->field_1CC;
    if (temp_r0 == 0x5A) {
        TItemMag__sub_80112BC4((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(0xD)));
        TItemMag__sub_80112BC4((u8 *)((void *)(arg0)), (s32)((M2C_UNK)(0xA)));
        return;
    }
    if (temp_r0 > 0x5A) {
        TItemMag__sub_80112E20((void*)(arg0), (void*)(1));
    }
}

}
