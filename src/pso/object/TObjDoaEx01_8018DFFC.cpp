#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8018E1E0_lbl_804B7588 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018E1E0_lbl_804B7588_size[sizeof(RecoveredGlobal_8018E1E0_lbl_804B7588) == 0x10 ? 1 : -1];

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8018E064_lbl_804B7598 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018E064___vt__11TObjDoaEx01 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 get_bml_model(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8018E1E0_lbl_804B7588 lbl_804B7588;
extern u32 TObjDoaEx01__data_805D5BB0;
extern u8 *TObjDoaEx01__data_805D5BB4;
extern s32 TObjDoaEx01__data_805D5BB8;
void TObjDoaEx01__sub_8018E1E0(void);
u8 *TObjFish__sub_8001ED9C(s32, s32);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8018E064_lbl_804B7598 lbl_804B7598;
extern M2C_UNK __vt__11TObjDoaEx01[];
extern s32 lbl_805D3328;
extern u32 TObjDoaEx01__data_805D5BB0;
extern const f32 TObjDoaEx01__data_805DBDA0;
extern const f32 TObjDoaEx01__data_805DBDA8;
extern const f32 lbl_805DBDBC;
u8 *TObjDoaEx01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *TObjDoaEx01__create(void *arg0);
void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1);
void free_resource__11TObjDoaEx01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__11TObjDoaEx01[];

void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjDoaEx01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_8018E064_lbl_804B7598_size[sizeof(RecoveredGlobal_8018E064_lbl_804B7598) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018E064___vt__11TObjDoaEx01_size[sizeof(RecoveredGlobal_8018E064___vt__11TObjDoaEx01) == 0x54 ? 1 : -1];
u8 *TObjDoaEx01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018E064___vt__11TObjDoaEx01 *)&__vt__11TObjDoaEx01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3328;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B7598.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TObjDoaEx01__data_805DBDA0;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DBDBC;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(TObjFish__sub_8001ED9C((*(s32 *)&TObjDoaEx01__data_805D5BB0), 0), u32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xD0) = 0x100001;
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) TObjDoaEx01__data_805DBDA8;
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) TObjDoaEx01__data_805DBDA8;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) TObjDoaEx01__data_805DBDA8;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) TObjDoaEx01__data_805DBDA8;
    return arg0;
}

void *TObjDoaEx01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TObjDoaEx01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjDoaEx01__data_805D5BB0;

void free_resource__11TObjDoaEx01Fv(void) {
    if ((u32) TObjDoaEx01__data_805D5BB0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjDoaEx01__data_805D5BB0, 1);
        TObjDoaEx01__data_805D5BB0 = 0U;
    }
}
void TObjDoaEx01__sub_8018E1E0(void) {
    s32 temp_r3;
    s32 var_r0;
    u8 *temp_r3_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B7588.value, 0, 0, 0));
    }
    (*(u8 * *)&TObjDoaEx01__data_805D5BB0) = (unsigned char *) ((void *) var_r0);
    temp_r3_2 = (u8 *)(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(get_bml_model((void *) var_r0, 0), void **, 0x2C), void **, 0x30), void **, 0x2C), void **, 0x2C));
    TObjDoaEx01__data_805D5BB4 = temp_r3_2;
    TObjDoaEx01__data_805D5BB8 = M2C_FIELD(temp_r3_2, s32 *, 0x30);
}

}
