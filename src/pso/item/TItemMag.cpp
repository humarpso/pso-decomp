#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMag__sub_8011271C(void);
int TItemMag__vt15(void* p);
void apply_feed_delta__8TItemMagFPv(u8 *arg0);
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
M2C_UNK TItemMag__sub_80112BC4(void *, M2C_UNK);
int TItemMag__sub_80112DB4(void*);
int TItemMag__sub_80112E20(void*, void*);
M2C_UNK TItemMag__sub_80112FB4();
M2C_UNK TItemMag__sub_801140F4(void *, int);
M2C_UNK TItemMag__sub_80114198(void *, int);
M2C_UNK TItemMag__sub_8011423C(void *, int);
M2C_UNK TItemMag__sub_801142E0(void *, int);
M2C_UNK TObjPlayer__sub_8010069C(void *);
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK TObjPlayer__sub_801B9EDC(int, int);
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

int TItemMag__vt15(void* p) { return TItemMag__sub_80112DB4(p); }

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
        apply_feed_delta__8TItemMagFPv((u8 *)(arg0));
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
