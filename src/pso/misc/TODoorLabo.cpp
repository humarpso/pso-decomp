#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_8029F7E0 { s32 v[8]; };

struct Res_8029F7E0 { u32 f0; u32 f4; };

struct Self_8029F7E0 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0xB4 - 0x1C];
    f32 fB4;
    f32 fB8;
    Res_8029F7E0 *fBC;
    u8 padc0[4];
    f32 fC4;
    u8 padc8[0xD8 - 0xC8];
    s32 fD8[8];
    s32 fF8;
};

struct Tbl_8029FAE4 { s32 v[8]; };
struct Door_8029FAE4 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1c[0xB4 - 0x1C];
    f32 fB4;
    f32 fB8;
    u8 *fBC;
    u8 padC0[0xC4 - 0xC0];
    f32 fC4;
    u8 padC8[0xD4 - 0xC8];
    s32 fD4;
    s32 sw[8];
    s32 fF8;
};

extern "C" {
Res_8029F7E0 *TObjFish__sub_8001ED9C(s32, s32);
void reset_photon_effect__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80154E3C(void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
void init_field_d4__16TODoorLaboNormalFPv(void* a0);
void TODoorFourLightBase__ct(void *);
s32 count_linked_switches__23TObjSeabedSuisoBrakableFUii(u32, s32);
extern Tbl_8029F7E0 lbl_80466014;
extern Tbl_8029FAE4 lbl_80465FD8;
extern u8 lbl_804DC864[];
extern M2C_UNK __vt__16TODoorLaboNormal[];
extern M2C_UNK __vt__10TODoorLabo[];
extern s32 lbl_805D3D70;
extern s32 lbl_805D3D6C;
extern const f32 lbl_805DDDB8;
extern const f32 lbl_805DDDBC;
extern const f32 lbl_805DDDC0;
Self_8029F7E0 *TODoorLaboNormal__ct(Self_8029F7E0 *self);
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_80466040[];
extern u8 lbl_8046605C[];
extern u8 lbl_804DC854[];
extern u32 lbl_805D6624;
extern u32 lbl_805D6628;
extern u32 lbl_805D662C;
void TODoorLabo__sub_8029F97C(void);
s32 TObjFish__sub_8001EDC4(s32, s32);
extern s32 lbl_80465FF8[];
extern s32 lbl_805D6618;
void TODoorLabo__sub_8029F9EC(void *arg0);
Door_8029FAE4 *TODoorLabo__ct(Door_8029FAE4 *arg0);
}

extern "C" {

s32 TODoorLaboNormal__vt19(void);
s32 TODoorLaboNormal__vt20(void);
void *__dt__16TODoorLaboNormalFv(void *arg0, s16 arg1);
s32 TODoorLabo__vt19(void);
s32 TODoorLabo__vt20(void);
void *__dt__10TODoorLaboFv(void *arg0, s16 arg1);
void free_resources__10TODoorLaboFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void init_field_d4__16TODoorLaboNormalFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = TObjFish__sub_8001EDC4((s32)(lbl_805D6624), 0); }

s32 TODoorLaboNormal__vt20(void) {
    return lbl_805D6628;
}

s32 TODoorLaboNormal__vt19(void) {
    return lbl_805D662C;
}

void *__dt__16TODoorLaboNormalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorLaboNormal;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Self_8029F7E0 *TODoorLaboNormal__ct(Self_8029F7E0 *self) {
    s32 i;
    TODoorFourLightBase__ct(self);
    self->vt = ((s32 *)&__vt__16TODoorLaboNormal);
    self->f0 = lbl_805D3D70;
    TObjEneGibbles__sub_80156780(self, lbl_804DC864, 1);
    TObjPlayer__sub_80154E3C(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    init_field_d4__16TODoorLaboNormalFPv((void*)(self));
    self->fBC = TObjFish__sub_8001ED9C((s32)lbl_805D6624, 0);
    self->fB4 = (f32)self->fBC->f4 - lbl_805DDDB8;
    self->fB8 = lbl_805DDDBC;
    {
        Tbl_8029F7E0 t = lbl_80466014;
        for (i = 0; i < 8; i++) {
            if (t.v[i] != -1) {
                self->fD8[i] = 0;
            }
        }
    }
    self->fF8 = 1;
    self->fC4 = lbl_805DDDC0;
    return self;
}

void free_resources__10TODoorLaboFv(void) {
    if ((u32) lbl_805D662C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D662C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D662C);
        lbl_805D662C = 0U;
    }
    if ((u32) lbl_805D6628 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6628);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6628);
        lbl_805D6628 = 0U;
    }
    if ((u32) lbl_805D6624 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6624, 1);
        lbl_805D6624 = 0U;
    }
}

extern s32 lbl_805D661C;

void TODoorLabo__sub_8029F97C(void) {
    s32 r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = TLobby__sub_80020004(r, 5, lbl_804DC854, 0, 0, 0);
    }
    (*(s32 *)&lbl_805D6624) = r;
    (*(s32 *)&lbl_805D6628) = TLanguage__sub_801E4874(lbl_80466040);
    (*(s32 *)&lbl_805D662C) = TLanguage__sub_801E4874(lbl_8046605C);
}

void TODoorLabo__sub_8029F9EC(void *arg0) {
    s32 tbl[2];
    tbl[0] = lbl_80465FF8[0];
    tbl[1] = lbl_80465FF8[1];
    if (M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x88) > 1) {
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = TObjFish__sub_8001EDC4(lbl_805D6618, tbl[M2C_FIELD(arg0, s32 *, 0x88)]);
}

s32 TODoorLabo__vt20(void) {
    return lbl_805D661C;
}

extern s32 lbl_805D6620;

s32 TODoorLabo__vt19(void) {
    return lbl_805D6620;
}

void *__dt__10TODoorLaboFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TODoorLabo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Door_8029FAE4 *TODoorLabo__ct(Door_8029FAE4 *arg0) {
    Tbl_8029FAE4 tbl;
    s32 i;

    TODoorFourLightBase__ct(arg0);
    arg0->vt = __vt__10TODoorLabo;
    arg0->f0 = lbl_805D3D6C;
    TObjEneGibbles__sub_80156780(arg0, lbl_804DC864, 1);
    TObjPlayer__sub_80154E3C(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    TODoorLabo__sub_8029F9EC(arg0);
    arg0->fBC = (u8 *)TObjFish__sub_8001ED9C(lbl_805D6618, 0);
    arg0->fB4 = (f32)M2C_FIELD(arg0->fBC, u32 *, 4) - lbl_805DDDB8;
    arg0->fB8 = lbl_805DDDBC;
    tbl = lbl_80465FD8;
    for (i = 0; i < 8; i++) {
        if (tbl.v[i] != -1) {
            arg0->sw[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(arg0->fD4, tbl.v[i]);
        }
    }
    arg0->fF8 = 1;
    arg0->fC4 = lbl_805DDDC0;
    return arg0;
}

}
