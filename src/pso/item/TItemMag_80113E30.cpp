#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemMag__sub_80113E3C(void* p);
int TItemMag__sub_80113E48(void);
u8 TItemMag__sub_80113E74(void* p);
int TItemMag__sub_80113EC8(void);
int TItemMag__sub_80113EDC(void);
f32 TItemMag__sub_80113EEC(void* p);
void add_clamped_stat__8TItemMagFPvi(void *arg0, s32 arg1);
void add_stat_clamped__8TItemMagFPvi(s16 *arg0, s32 arg1);
int check_state_flag_1__8TItemMagFPv(void* p);
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v);
s16 get_item_type__8TItemMagFPv(void* p);
s32 get_mag_id__8TItemMagFPv(void* p);
f32 get_stat_f32__8TItemMagFPv(void* p);
int get_status_flag__8TItemMagFPv(void* p);
s32 get_sub_value__8TItemMagFi(s32 arg0);
s16 get_sync__8TItemMagFPv(void* p);
void init_feed_timer__8TItemMagFPv(void *arg0);
int is_active__8TItemMagFPv(void* p);
s32 is_pb_registered__8TItemMagFiUc(s32 arg0, u8 arg1);
void set_flags__8TItemMagFPvUi(void* p, u32 v);
int test_flags__8TItemMagFPvUi(void* p, u32 m);
int TItemData__sub_8010EE40(void*);
s32 TItemMag__sub_801143E8(s32, s32);
int TObjPlayer__sub_8001BEF8(void*, int);
s16 TObjPlayer__sub_80113D90(void* p);
int get_level__9TItemDataFPv(void*);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_mag_level(void* p);
int get_percent__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
int is_feed_empty__8TItemMagFPv(void* p);
void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);

int get_status_flag__8TItemMagFPv(void* p) { return *(u32*)((char*)p + 0x18c) & 0x10; }
void TItemMag__sub_80113E3C(void* p) { *(s8*)((char*)p + 0x0) = -32; }

int TItemMag__sub_80113E48(void) { return 0; }

u8 TItemMag__sub_80113E74(void* p) { return *(u8*)((char*)p + 0xe); }
s16 get_item_type__8TItemMagFPv(void* p) { return *(s16*)((char*)p + 0x0); }
s16 get_sync__8TItemMagFPv(void* p) { return *(s16*)((char*)p + 0x2); }
int is_active__8TItemMagFPv(void* p) { return (*(u32*)((char*)p + 0x334) >> 9) & 0x1; }
s32 get_sub_value__8TItemMagFi(s32 arg0) {
    return (s32) TItemMag__sub_80113EEC((void*)((void*)(arg0 + 0x4AC)));
}

int TItemMag__sub_80113EC8(void) { return 0; }
int TItemMag__sub_80113EDC(void) { return 0; }

f32 TItemMag__sub_80113EEC(void* p) { return *(f32*)((char*)p + 0x3c); }

extern f32 TItemMag__data_805DABA4;

void init_feed_timer__8TItemMagFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TItemMag__data_805DABA4;
}

s32 get_mag_id__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x0); }
f32 get_stat_f32__8TItemMagFPv(void* p) { return *(f32*)((char*)p + 0x8); }
int check_state_flag_1__8TItemMagFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x4, 1); }
void clear_feed_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) &= ~v; }
void set_flags__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x4) |= v; }
int test_flags__8TItemMagFPvUi(void* p, u32 m) { return *(u32*)((char*)p + 0x4) & m; }

void add_clamped_stat__8TItemMagFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
    if (M2C_FIELD(arg0, s16 *, 2) < 0) {
        M2C_FIELD(arg0, s16 *, 2) = 0;
    }
    if (M2C_FIELD(arg0, s16 *, 2) > 0x78) {
        M2C_FIELD(arg0, s16 *, 2) = 0x78;
    }
}

void add_stat_clamped__8TItemMagFPvi(s16 *arg0, s32 arg1) {
    *arg0 += arg1;
    if (*arg0 < 0) {
        *arg0 = 0;
    }
    if (*arg0 > 0xC8) {
        *arg0 = 0xC8;
    }
}

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
