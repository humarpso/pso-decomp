#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8029C320 { char pad[0x14]; };
struct VObj_8029C320 : Base_8029C320 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_38 { u8 bytes[0x38]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_3C { u8 bytes[0x3C]; };

struct RecoveredGlobal_8029C588_lbl_804DC3A0 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8029C588_lbl_804DC424 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_8029C588___vt__15TORockJungleM01 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct VBase_8029C6FC { char pad[0x14]; };

struct VObj_8029C6FC : VBase_8029C6FC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Vec_8029C6FC { f32 x, y, z; };

struct Rd_8029C6FC {
    u8 pad0[0x38];
    u8 pos[0xBC - 0x38];
    VObj_8029C6FC fade;
    u8 padd[0xD8 - 0xBC - sizeof(VObj_8029C6FC)];
    s32 fading;
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 activate_and_dispatch__10TObjPlayerFPv(void *);
s32 init_and_activate__10TObjPlayerFPv(void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TORockCaveBrakable__ct(void *);
s32 create__10TObjMapCsnFi(void *);
s32 TORockJungleS01__sub_8029CAE8(int);
u8 *TORockJungleS01__sub_8029CAFC(s32);
extern RecoveredGlobal_8029C588_lbl_804DC3A0 lbl_804DC3A0;
extern RecoveredGlobal_8029C588_lbl_804DC424 lbl_804DC424;
extern M2C_UNK __vt__15TORockJungleM01[];
extern s32 lbl_805D3D40;
extern const f32 lbl_805DDD1C;
u8 *TORockJungleM01__ct(u8 *arg0, s32 arg1);
s32 isFading__15RenderFadeStateCFv(void *);
void restore__15RenderFadeStateFv(void *);
void fadeOut__15RenderFadeStateFv(void *);
void set_cull_back__8TObjFishFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
void TCameraCtrl__sub_803D8934(s32, void *, void *);
extern const f32 lbl_805DDD18;
void TORockJungleM01__vt12(Rd_8029C6FC *arg0);
}

extern "C" {

void TORockJungleM01__vt13(u8 *arg0);
void TORockJungleM01__vt16(s32 arg0);
void *__dt__15TORockJungleM01Fv(void *arg0, s16 arg1);
void *create__15TORockJungleM01FPv(void *arg0);
void run_task__15TORockJungleM01Fv(void* p);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjEneGibbles__sub_80156720(void *);
int TObjPlayer__sub_800D7BB0(void*);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_cull_none__8TObjFishFv();
int update_break_state__18TORockCaveBrakableFPv(void*);

void run_task__15TORockJungleM01Fv(void* p) { TObjPlayer__sub_800D7BB0((char*)p + 0xbc); update_break_state__18TORockCaveBrakableFPv(p); }

void TORockJungleM01__vt16(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4BC19, arg0 + 0x38, 0, 0);
}

void *create__15TORockJungleM01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORockJungleM01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__15TORockJungleM01[];

void *__dt__15TORockJungleM01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORockJungleM01;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xBC, -1);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8029C588_lbl_804DC3A0_size[sizeof(RecoveredGlobal_8029C588_lbl_804DC3A0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8029C588_lbl_804DC424_size[sizeof(RecoveredGlobal_8029C588_lbl_804DC424) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_8029C588___vt__15TORockJungleM01_size[sizeof(RecoveredGlobal_8029C588___vt__15TORockJungleM01) == 0x50 ? 1 : -1];
u8 *TORockJungleM01__ct(u8 *arg0, s32 arg1) {
    struct CopyStack_8029C588 { u8 bytes[0x3C]; };
    CopyStack_8029C588 copy_storage_8029C588;
    s32 temp_r0;
    s32 temp_r4;
    TORockCaveBrakable__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029C588___vt__15TORockJungleM01 *)&__vt__15TORockJungleM01).value;
    init_and_activate__10TObjPlayerFPv((void *) (arg0 + 0xBC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D40;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, u8 **, 0x34) = TORockJungleS01__sub_8029CAFC(2);
    M2C_FIELD(arg0, s32 *, 0x24) = TORockJungleS01__sub_8029CAE8((int) (2));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (lbl_805DDD1C + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) ((u8 *)&lbl_804DC3A0.value + 0x2C), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    }
    temp_r4 = arg1 - 4;
    *(M2CCopy_3C *)(copy_storage_8029C588.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
    VecCopy__FP3VecPC3Vec((void *) ((copy_storage_8029C588.bytes + 0x24)), (void *) (&lbl_804DC424.value));
    M2C_FIELD(arg0, s32 *, 0xDC) = create__10TObjMapCsnFi((void *) ((copy_storage_8029C588.bytes)));
    activate_and_dispatch__10TObjPlayerFPv((void *) (arg0 + 0xBC));
    return arg0;
}

void TORockJungleM01__vt13(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD8) != 0) {
        ((VObj_8029C320*)(arg0 + 0xBC))->m7();
    }
    set_cull_none__8TObjFishFv();
}
void TORockJungleM01__vt12(Rd_8029C6FC *arg0) {
    Vec_8029C6FC v;
    set_cull_back__8TObjFishFv();
    TCameraCtrl__sub_803D8934(0, arg0->pos, &v);
    if (-v.z < lbl_805DDD18) {
        fadeOut__15RenderFadeStateFv(&arg0->fade);
    } else {
        restore__15RenderFadeStateFv(&arg0->fade);
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        arg0->fading = 0;
    } else {
        arg0->fading = isFading__15RenderFadeStateCFv(&arg0->fade);
    }
    if (arg0->fading != 0) {
        arg0->fade.m6();
    }
}

}
