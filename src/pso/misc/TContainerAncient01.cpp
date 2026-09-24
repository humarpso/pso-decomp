#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018BD00_lbl_804B6DEC {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_8018BD00___vt__19TContainerAncient01 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

struct B_8018BE30 { u8 pad[0x18]; };

struct V_8018BE30 : B_8018BE30 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct B_8018BE98 { u8 pad[0x18]; };

struct V_8018BE98 : B_8018BE98 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

extern "C" {
s32 TObjPlayer__sub_80019038(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TContainerAncient01__sub_8018B5D0(void *);
extern RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0 TContainerAncient01__data_804B6DC0;
extern RecoveredGlobal_8018BD00_lbl_804B6DEC lbl_804B6DEC;
extern M2C_UNK __vt__19TContainerAncient01[];
extern s32 lbl_805D3300;
extern s32 TContainerAncient01__data_805D5B90;
extern const f32 lbl_805DBD5C;
u8 *TContainerAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD14;
f32 TContainerAncient01__sub_8018BE30(V_8018BE30 *self);
extern const f32 TContainerAncient01__data_805DBD10;
extern const f32 TContainerAncient01__data_805DBD14;
f32 TContainerAncient01__vt22(V_8018BE98 *self);
}

extern "C" {

void TContainerAncient01__sub_8018BE68(void);
int TContainerAncient01__sub_8018BE6C(void);
int TContainerAncient01__sub_8018BE74(void);
s32 TContainerAncient01__sub_8018BE90(void);
void TContainerAncient01__vt23(void);
int TContainerAncient01__vt24(void);
int TContainerAncient01__vt25(void);
void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1);
int get_table_entry__19TContainerAncient01Fi(int a0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__19TContainerAncient01[];

void *__dt__19TContainerAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TContainerAncient01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0_size[sizeof(RecoveredGlobal_8018BD00_TContainerAncient01__data_804B6DC0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018BD00_lbl_804B6DEC_size[sizeof(RecoveredGlobal_8018BD00_lbl_804B6DEC) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_8018BD00___vt__19TContainerAncient01_size[sizeof(RecoveredGlobal_8018BD00___vt__19TContainerAncient01) == 0x140 ? 1 : -1];
u8 *TContainerAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjPlayer__sub_80019038((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018BD00___vt__19TContainerAncient01 *)&__vt__19TContainerAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3300;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((int) ((*(u8 * *)&TContainerAncient01__data_805D5B90)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((int) ((*(u8 * *)&TContainerAncient01__data_805D5B90)), (int) (0));
    M2C_FIELD(arg0, M2C_UNK **, 0xD8) = &lbl_804B6DEC.value;
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (M2C_FIELD(arg0, M2C_UNK **, 0xD8)));
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD((*(u8 * *)&TContainerAncient01__data_805D5B90), s32 *, 0x430);
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (M2C_FIELD(arg0, s16 *, 0xB8)));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&TContainerAncient01__data_804B6DC0.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) ((M2C_FIELD(&TContainerAncient01__data_804B6DC0.value, f32 *, 4) * lbl_805DBD5C) + M2C_FIELD(arg0, f32 *, 0x78));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x74));
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    TContainerAncient01__sub_8018B5D0((void *) (arg0));
    return arg0;
}
#pragma pop

f32 TContainerAncient01__sub_8018BE30(V_8018BE30 *self) {
    self->m20(0, TContainerAncient01__data_805DBD10);
    return TContainerAncient01__data_805DBD14;
}

void TContainerAncient01__sub_8018BE68(void) {  }
int TContainerAncient01__sub_8018BE6C(void) { return 1; }
int TContainerAncient01__sub_8018BE74(void) { return 1; }

    extern int lbl_8050DC68[];
int get_table_entry__19TContainerAncient01Fi(int a0) {  return lbl_8050DC68[a0]; }

extern s32 TContainerAncient01__data_805D5B90;

s32 TContainerAncient01__sub_8018BE90(void) {
    return TContainerAncient01__data_805D5B90;
}

f32 TContainerAncient01__vt22(V_8018BE98 *self) {
    self->m20(0, TContainerAncient01__data_805DBD10);
    return TContainerAncient01__data_805DBD14;
}

void TContainerAncient01__vt23(void) {  }
int TContainerAncient01__vt24(void) { return 1; }
int TContainerAncient01__vt25(void) { return 1; }

}
