#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_8029C9C8_lbl_804DC3A0 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_8029C9C8_lbl_804DC424 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_8029C9C8___vt__15TORockJungleS01 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

typedef s32 M2C_UNK;
extern "C" {
u8 * TObjFish__sub_8001EDC4(void *, int);
extern u32 lbl_805D65D0;
u8 *TORockJungleS01__sub_8029CAFC(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 TORockCaveBrakable__ct(void *);
s32 create__10TObjMapCsnFi(void *);
u8 *TORockJungleS01__sub_8029CAFC(s32 arg0);
extern RecoveredGlobal_8029C9C8_lbl_804DC3A0 lbl_804DC3A0;
extern RecoveredGlobal_8029C9C8_lbl_804DC424 lbl_804DC424;
extern M2C_UNK __vt__15TORockJungleS01[];
extern s32 lbl_805D3D3C;
extern const f32 lbl_805DDD1C;
u8 *TORockJungleS01__ct(u8 *arg0, s32 arg1);
extern u32 lbl_805D65D4;
s32 TORockJungleS01__sub_8029CAE8(s32 a);
void *TLobby__sub_80020004(void *, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
void *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 TLanguage__sub_801E4874(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 TORockJungleS01__sub_8029CAE8(s32 a);
u8 *TORockJungleS01__sub_8029CAFC(s32 arg0);
M2C_UNK add_entry__11TMotorcycleFsiiff(M2C_UNK, void *, s32, f32, f32);
extern u8 lbl_804658EC[];
extern u8 lbl_80465904[];
extern u8 lbl_8046591C[];
extern u8 lbl_804DC390[];
extern u32 lbl_805D65D0;
extern u32 lbl_805D65D4;
extern const f32 lbl_805DDD20;
extern const f32 lbl_805DDD24;
void TORockJungleS01__sub_8029CB90(void);
}

extern "C" {

void TORockJungleS01__vt16(s32 arg0);
void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1);
void *create__15TORockJungleS01FPv(void *arg0);
void free_globals__15TORockJungleS01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void TORockJungleS01__vt16(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4BC19, arg0 + 0x38, 0, 0);
}

void *create__15TORockJungleS01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TORockJungleS01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__15TORockJungleS01[];

void *__dt__15TORockJungleS01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORockJungleS01;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D65D0;
extern u32 lbl_805D65D4;

typedef char RecoveredGlobal_8029C9C8_lbl_804DC3A0_size[sizeof(RecoveredGlobal_8029C9C8_lbl_804DC3A0) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_8029C9C8_lbl_804DC424_size[sizeof(RecoveredGlobal_8029C9C8_lbl_804DC424) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_8029C9C8___vt__15TORockJungleS01_size[sizeof(RecoveredGlobal_8029C9C8___vt__15TORockJungleS01) == 0x50 ? 1 : -1];
u8 *TORockJungleS01__ct(u8 *arg0, s32 arg1) {
    struct CopyStack_8029C9C8 { u8 bytes[0x3C]; };
    CopyStack_8029C9C8 copy_storage_8029C9C8;
    s32 temp_r0;
    s32 temp_r4;
    TORockCaveBrakable__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029C9C8___vt__15TORockJungleS01 *)&__vt__15TORockJungleS01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D3C;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, u8 **, 0x34) = TORockJungleS01__sub_8029CAFC(0);
    M2C_FIELD(arg0, s32 *, 0x24) = TORockJungleS01__sub_8029CAE8((s32)((int) (0)));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (lbl_805DDD1C + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14));
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804DC3A0.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -1;
    }
    temp_r4 = arg1 - 4;
    *(M2CCopy_3C *)(copy_storage_8029C9C8.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
    VecCopy__FP3VecPC3Vec((void *) ((copy_storage_8029C9C8.bytes + 0x24)), (void *) (&lbl_804DC424.value));
    M2C_FIELD(arg0, s32 *, 0xBC) = create__10TObjMapCsnFi((void *) ((copy_storage_8029C9C8.bytes)));
    return arg0;
}

s32 TORockJungleS01__sub_8029CAE8(s32 a) {
    if ((*(void * *)&lbl_805D65D4) != 0) return (s32)(*(void * *)&lbl_805D65D4);
    return 0;
}

u8 *TORockJungleS01__sub_8029CAFC(s32 arg0) {
    if ((void *) (*(u8 * *)&lbl_805D65D0) != NULL) {
        return TObjFish__sub_8001EDC4((*(u8 * *)&lbl_805D65D0), arg0);
    }
    return NULL;
}

void free_globals__15TORockJungleS01Fv(void) {
    if ((u32) lbl_805D65D4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65D4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D65D4);
        lbl_805D65D4 = 0U;
    }
    if ((u32) lbl_805D65D0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D65D0, 1);
        lbl_805D65D0 = 0U;
    }
}
void TORockJungleS01__sub_8029CB90(void) {
    void *o;
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != NULL) {
        o = TLobby__sub_80020004(o, 1, lbl_804DC390, 0, 0, 0);
    }
    lbl_805D65D0 = (u32)o;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 27:
        lbl_805D65D4 = TLanguage__sub_801E4874(lbl_804658EC);
        break;
    case 26:
        lbl_805D65D4 = TLanguage__sub_801E4874(lbl_80465904);
        break;
    case 25:
    default:
        lbl_805D65D4 = TLanguage__sub_801E4874(lbl_8046591C);
        break;
    }
    add_entry__11TMotorcycleFsiiff(0x3E, TORockJungleS01__sub_8029CAFC(0), TORockJungleS01__sub_8029CAE8(0), lbl_805DDD20, lbl_805DDD24);
}

}
