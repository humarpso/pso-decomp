#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemMag__sub_80113CA8(void);
void TItemMag__sub_80113CB8(u8 *arg0, s32 arg1, u32 arg2);
int TItemMag__vt12(void);
int TItemMag__vt13(void* p);
void TItemMag__vt16(s32 arg0, s32 arg1);
void TItemMag__vt44(s32 arg0);
void *__dt__8TItemMagFv(void *arg0, s16 arg1);
void cleanup__8TItemMagFv(void);
int is_feed_empty__8TItemMagFPv(void* p);
void scale_field_c8__8TItemMagFPvf(void* p, f32 v);
void set_flags64__8TItemMagFPvUi(void* p, u32 v);
void set_target__8TItemMagFPviiPv(void *arg0, s32 arg1, s32 arg2, void *arg3);
void update__8TItemMagFPv(void *arg0);
M2C_UNK TItemData__sub_8010D510(s32, s32, s32);
int TItemData__sub_8010EE40(void*);
M2C_UNK TItemEquipBase__sub_8010B58C(s32, u8);
int TItemMag__sub_80110F04(void*);
M2C_UNK TItemMag__sub_80111758(void *, M2C_UNK);
void TItemMag__sub_80113E3C(void* p);
u8 TItemMag__sub_80113E74(void* p);
f32 TItemMag__sub_80113EEC(void* p);
s16 TObjPlayer__sub_80113D90(void* p);
void __dt__14TItemEquipBaseFv(void *, int);
int __dt__9TItemLoadFPvs(void*, void*);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
int fn_800F953C(void*);
void free_obj_heap__10TObjPlayerFPv(void *);
u8 get_field_ed__10TObjPlayerFPv();
s16 get_item_type__8TItemMagFPv(void* p);
int get_level__9TItemDataFPv(void*);
s16 get_mag_data__10TObjPlayerFPv(void* p);
int get_mag_item_data(void* p);
int get_mag_item_percent(void* p);
int get_mag_item_stat_percent(void* p);
int get_mag_level(void* p);
int get_percent__9TItemDataFPv(void*);
int get_stat_percent__9TItemDataFPv(void*);
int get_status_flag__8TItemMagFPv(void* p);
s16 get_sync__8TItemMagFPv(void* p);
int is_active__8TItemMagFPv(void* p);
s32 obj_testFlags30(void *, M2C_UNK);
int test_feed_flags__11TItemMagSubFPvUi(void* p, u32 m);

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

int TItemMag__vt13(void* p) { return TItemMag__sub_80110F04(p); }

int TItemMag__vt12(void) { return 0; }

void TItemMag__vt16(s32 arg0, s32 arg1) {
    TItemData__sub_8010D510(arg1, arg0 + 0x198, arg0);
}

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

    extern int TItemMag__data_805D54A8;
    extern int lbl_805D54AC;
    extern int lbl_805D54B0;
void cleanup__8TItemMagFv(void) { __dt__9TItemLoadFPvs((void*)(TItemMag__data_805D54A8), (void*)1); fn_800F953C((void*)(lbl_805D54B0)); TItemMag__data_805D54A8 = 0; lbl_805D54AC = 0; lbl_805D54B0 = 0; }

void set_flags64__8TItemMagFPvUi(void* p, u32 v) { *(u32*)((char*)p + 0x64) |= v; }

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

int TItemMag__sub_80113CA8(void) { return 0; }

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void TItemMag__sub_80113CB8(u8 *arg0, s32 arg1, u32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    if (arg2 != 0U) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xB8), (void *) (arg2));
    }
}

}

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

void scale_field_c8__8TItemMagFPvf(void* p, f32 v) { *(f32*)((char*)p + 0xc8) *= v; }
int is_feed_empty__8TItemMagFPv(void* p) { return (test_feed_flags__11TItemMagSubFPvUi(p, 64)) == 0; }

}
