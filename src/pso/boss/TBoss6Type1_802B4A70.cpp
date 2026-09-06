#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss6Type1__sub_802B4B04(u8 *arg0);
u8 TBoss6Type1__sub_802B5D9C(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32, f32);
extern const f32 lbl_805DE314;
extern const f32 TBoss6Type1__data_805DE318;
extern const f32 lbl_805DE31C;
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1);
}

extern "C" {

int TBoss6Type1__sub_802B4A70(void* p);
void TBoss6Type1__sub_802B4A90(void* p);
int TBoss6Type1__sub_802B4B14(void* p);
void TBoss6Type1__sub_802B4CF4(void* p);
void TBoss6Type1__sub_802B59A8(void);
void TBoss6Type1__sub_802B5AB0(void);
int TBoss6Type1__sub_802B5DD4(void);
int TBoss6Type1__sub_802B5E48(void);
int handle_6xa4_action__11TBoss6Type1FPv(void* p);
void init_parts__11TBoss6Type1FPv(void* p);
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0);
s32 is_ready__11TBoss6Type1FPv(void *arg0);
int is_time_up__11TBoss6Type1FPv(void *arg0);
void reset_fields_4e0__11TBoss6Type1FPv(void* p);
void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0);
void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1);
s32 TBoss6PlotFalz__sub_802AAC74(s32);
int TBoss6Type1__sub_802B4A9C(void*);
int TBoss6Type1__sub_802B4B64(void*, void*);
int TBoss6Type1__sub_802B570C(void*);
M2C_UNK TBoss6Type1__sub_802B5AD4(f32);
int TBoss6Type1__sub_802B60E8(void*);
s32 calc_field4b0_delta__11TBoss6Type1FPv();
int release_object__11TBoss6Type1FPv(void*);

int TBoss6Type1__sub_802B4A70(void* p) { return release_object__11TBoss6Type1FPv(p); }
void TBoss6Type1__sub_802B4A90(void* p) { *(s32*)((char*)p + 0x680) = 0; }

void TBoss6Type1__sub_802B4B04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x508) = (s32) (M2C_FIELD(arg0, s32 *, 0x508) + 1);
}

int TBoss6Type1__sub_802B4B14(void* p) { return TBoss6Type1__sub_802B4A9C(p); }

void TBoss6Type1__sub_802B4CF4(void* p) { { int i; for (i = 0; i < 4; i++) { TBoss6Type1__sub_802B4B64(p, (void*)i); } } }

#pragma push
#pragma fp_contract on
void TBoss6Type1__sub_802B5598(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 var_f31;
    s32 temp_r31;
    s32 var_r4;
    u32 temp_r5;
    u32 var_r5;
    {
        s32 k = M2C_FIELD(arg0, s32 *, 0x374) * 0x12D687;
        s8 c = M2C_FIELD(arg0, s8 *, 0x41C);
        temp_r5 = c * k;
    }
    var_r4 = ((temp_r5 & 3) * 0x1800) + 0x2000;
    var_r5 = (temp_r5 >> 3U) & 1;
    if ((temp_r5 >> 2U) & 1) {
        var_r4 = -var_r4;
    }
    var_f31 = lbl_805DE314;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x60) + var_r4;
    if ((s32) var_r5 != 0) {
        var_f31 = lbl_805DE31C;
    }
    temp_f1 = var_f31 * TBoss8Dragon__sub_803D64C0(temp_r31);
    M2C_FIELD(arg1, f32 *, 0) = temp_f1;
    M2C_FIELD(arg1, f32 *, 4) = (f32) TBoss6Type1__data_805DE318;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (var_f31 * TBoss8Dragon__sub_803D64DC(temp_r31, temp_f1));
}
#pragma pop

int handle_6xa4_action__11TBoss6Type1FPv(void* p) { return TBoss6Type1__sub_802B570C((char*)p + 0x1); }

extern const f32 TBoss6Type1__data_805DE2D0;

void TBoss6Type1__sub_802B59A8(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE2D0);
}

extern const f32 TBoss6Type1__data_805DE32C;

void TBoss6Type1__sub_802B5AB0(void) {
    TBoss6Type1__sub_802B5AD4(TBoss6Type1__data_805DE32C);
}

u8 TBoss6Type1__sub_802B5D9C(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r5;
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4E0);
    if ((temp_r5 <= 0) || (temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4), ((temp_r0 < 0) != 0))) {
        return 1U;
    }
    return (u8) (temp_r5 <= temp_r0);
}

int TBoss6Type1__sub_802B5DD4(void) { return 0; }

void reset_fields_4e0__11TBoss6Type1FPv(void* p) { *(s32*)((char*)p + 0x4e0) = 0; *(s32*)((char*)p + 0x4e4) = 0; }
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0) {
    return TBoss6PlotFalz__sub_802AAC74(M2C_FIELD(arg0, s32 *, 0x3F8)) > 0x20;
}

int TBoss6Type1__sub_802B5E48(void) { return 0; }

s32 is_ready__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) && (calc_field4b0_delta__11TBoss6Type1FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x48C))) {
        return 1;
    }
    return 0;
}

int is_time_up__11TBoss6Type1FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x414) == 0) {
        return 0;
    }
    return calc_field4b0_delta__11TBoss6Type1FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x490) ? 1 : 0;
}

extern f32 lbl_805DE350;

void set_flag_on_threshold__11TBoss6Type1FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x4AC) == 0) && (M2C_FIELD(arg0, f32 *, 0x4D8) < lbl_805DE350)) {
        M2C_FIELD(arg0, s32 *, 0x4AC) = 1;
    }
}

    extern const float TBoss6Type1__data_805DE344;
void set_part_default_value__11TBoss6Type1FiPv(int a0, void* a1) { *(float*)((char*)a1 + 0x4) = TBoss6Type1__data_805DE344; }

void init_parts__11TBoss6Type1FPv(void* p) { set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5d8)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5e4)); set_part_default_value__11TBoss6Type1FiPv((int)(p), (void*)((char*)p + 0x5f0)); TBoss6Type1__sub_802B60E8(p); }

}
