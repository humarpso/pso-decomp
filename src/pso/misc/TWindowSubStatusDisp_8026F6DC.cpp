#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_802575C0(void *, M2C_UNK, f32);
extern const f32 lbl_805DD388;
extern const f32 lbl_805DD38C;
void TWindowSubStatusDisp__sub_8026F6DC(u8 *arg0);
s16 get_field_2b8__14TItemProShieldFPv(int);
void *TPlayerBattleCtrl4P__sub_801BA74C();
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK get_width__11TWindowCtrlFPv();
M2C_UNK TWindowSubStatusDisp__sub_802575C0(void *, M2C_UNK, f32);
void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0);
extern const f32 lbl_805DD390;
extern const f32 lbl_805DD394;
s32 fn_8026F8CC(u8 *arg0);
}

extern "C" {

void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0);
s32 update_hp_gauge__20TWindowSubStatusDispFi(s32 arg0);
void update_status_entry__20TWindowSubStatusDispFi(s32 arg0);
void *TPlayerBattleCtrl4P__sub_801BA74C();
M2C_UNK get_width__11TWindowCtrlFPv();
M2C_UNK TWindowSubStatusDisp__sub_802575C0(void *, M2C_UNK, f32);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 obj_getS16_2BA(void *);

struct VtBase4_8026f71c_more_8026f8cc_0 { void *vtable; };
struct VObj3_8026f71c_more_8026f8cc_0 : VtBase4_8026f71c_more_8026f8cc_0 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); };

extern const f32 lbl_805DD388;
extern const f32 lbl_805DD38C;

void TWindowSubStatusDisp__sub_8026F6DC(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(4))));
    M2C_FIELD(temp_r3, f32 *, 0x20) = (f32) (*(const f32 *)&lbl_805DD388);
    M2C_FIELD(temp_r3, f32 *, 0x24) = (f32) (*(const f32 *)&lbl_805DD388);
    TWindowSubStatusDisp__sub_802575C0((void *)(temp_r3), (M2C_UNK)(0xFF008CFCU), (*(const f32 *)&lbl_805DD38C));
}

void init_gauge_entry__20TWindowSubStatusDispFPv(void *arg0) {
    VObj3_8026f71c_more_8026f8cc_0 *temp_r3;
    f32 temp_f0;

    temp_r3 = (VObj3_8026f71c_more_8026f8cc_0 *) get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(3));
    temp_f0 = lbl_805DD388;
    M2C_FIELD(temp_r3, f32 *, 0x20) = temp_f0;
    M2C_FIELD(temp_r3, f32 *, 0x24) = temp_f0;
    temp_r3->m3();
    TWindowSubStatusDisp__sub_802575C0(temp_r3, 0xFF00FF15, lbl_805DD38C);
}

struct Base_8026F77C_more_8026f8cc_0 { char pad[0x18]; };
struct VObj_8026F77C_more_8026f8cc_0 : Base_8026F77C_more_8026f8cc_0 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();virtual void m7();
    virtual void m8();virtual void m9();virtual void m10();virtual void m11();
    virtual void m12();virtual void m13();
    virtual int m14();
};

void update_status_entry__20TWindowSubStatusDispFi(s32 arg0) {
    void *temp_r31;
    VObj_8026F77C_more_8026f8cc_0 *temp_r3;

    get_width__11TWindowCtrlFPv();
    temp_r3 = (VObj_8026F77C_more_8026f8cc_0 *) TPlayerBattleCtrl4P__sub_801BA74C();
    if (temp_r3 != NULL) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(2));
        M2C_FIELD(temp_r31, s32 *, 0x20) = temp_r3->m14() + 1;
    }
}

extern M2C_UNK lbl_8044F608;
extern const f32 lbl_805DD390;
extern const f32 lbl_805DD394;

s32 update_hp_gauge__20TWindowSubStatusDispFi(s32 arg0) {
    M2C_UNK var_r4;
    s32 var_r31;
    void *temp_r30;
    void *temp_r3;

    get_width__11TWindowCtrlFPv();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C();
    if (temp_r3 == NULL) {
        TWindowSubStatusDisp__sub_8026F6DC((u8 *)(arg0));
        return 0xFF008CFC;
    }
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(4));
    M2C_FIELD(temp_r30, f32 *, 0x20) = (f32) obj_getS16_2BA(temp_r3);
    M2C_FIELD(temp_r30, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, s16 *, 0x32E);
    if (M2C_FIELD(temp_r30, f32 *, 0x24) > (lbl_805DD390 * M2C_FIELD(temp_r30, f32 *, 0x20))) {
        var_r31 = -1;
        var_r4 = 0xFF008CFC;
    } else {
        var_r4 = -0x3EEC;
        var_r31 = -0x3EEC;
    }
    TWindowSubStatusDisp__sub_802575C0(temp_r30, var_r4, lbl_805DD394);
    return var_r31;
}
s32 fn_8026F8CC(u8 *arg0) {
    s32 var_r30;
    s32 var_r4;
    u8 *temp_r31;
    u8 *temp_r3;
    get_width__11TWindowCtrlFPv();
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C()));
    if (temp_r3 == NULL) {
        init_gauge_entry__20TWindowSubStatusDispFPv((void *) (arg0));
        return 0xFF00FF15;
    }
    temp_r31 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3)));
    M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) get_field_2b8__14TItemProShieldFPv((int) (temp_r3));
    if (M2C_FIELD(temp_r31, f32 *, 0x24) > (f32) M2C_FIELD(temp_r3, s16 *, 0x32C)) {
        M2C_FIELD(arg0, s32 *, 0x60) = 4;
    }
    M2C_FIELD(temp_r31, f32 *, 0x24) = (f32) M2C_FIELD(temp_r3, s16 *, 0x32C);
    if (M2C_FIELD(temp_r31, f32 *, 0x24) > (lbl_805DD390 * M2C_FIELD(temp_r31, f32 *, 0x20))) {
        var_r30 = -1;
        var_r4 = 0xFF00FF15;
    } else {
        var_r4 = 0xFFF2FF19;
        var_r30 = 0xFFF2FF19;
    }
    TWindowSubStatusDisp__sub_802575C0((void *)((int) (temp_r31)), (M2C_UNK)((int) (var_r4)), (f32) (lbl_805DD394));
    return var_r30;
}

}

#pragma pop

#pragma push

extern "C" {

}

#pragma pop

extern "C" {
#define get_array_entry__20TWindowSubStatusDispFPvi ((s32 (*)(void *, int))get_array_entry__20TWindowSubStatusDispFPvi)
void update_status_entry__20TWindowSubStatusDispFi(s32);
s32 update_hp_gauge__20TWindowSubStatusDispFi(s32);
#define fn_8026F8CC ((s32 (*)(void *))fn_8026F8CC)
void fn_8026FEA8(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on

s32 rand(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805DD3A0;
extern const f32 lbl_805DD3A4;
extern const f32 lbl_805DD3A8;

void fn_8026FDC0(u8 *arg0) {
    s32 ang;
    f32 dist;

    if (*(u32 *)(arg0 + 0x60) != 0) {
        (*(u32 *)(arg0 + 0x60))--;
        ang = (s32)(lbl_805DD3A0 * (lbl_805DD3A4 * (f32)rand()));
        dist = lbl_805DD3A8 * (lbl_805DD3A4 * (f32)rand());
        *(f32 *)(arg0 + 0x40) += dist * TBoss8Dragon__sub_803D64DC(ang);
        *(f32 *)(arg0 + 0x44) += dist * TBoss8Dragon__sub_803D64C0(ang);
    }
}
#pragma pop
void fn_8026FEA8(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    M2C_FIELD(temp_r31, s32 *, 0x2C) = fn_8026F8CC((void *) (arg0));
    temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
    M2C_FIELD(temp_r31_2, s32 *, 0x2C) = update_hp_gauge__20TWindowSubStatusDispFi((s32) arg0);
    update_status_entry__20TWindowSubStatusDispFi((s32) arg0);
}

}

#undef get_array_entry__20TWindowSubStatusDispFPvi
#undef fn_8026F8CC
