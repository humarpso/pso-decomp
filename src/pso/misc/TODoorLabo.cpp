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
s32 get_bml_model(s32, s32);
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

void init_field_d4__16TODoorLaboNormalFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = get_bml_model((s32)(lbl_805D6624), 0); }

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
    M2C_FIELD(arg0, s32 *, 0xD4) = get_bml_model(lbl_805D6618, tbl[M2C_FIELD(arg0, s32 *, 0x88)]);
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

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_all_resources__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void free_all_resources__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D6620 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6620);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6620);
        lbl_805D6620 = 0U;
    }
    if ((u32) lbl_805D661C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D661C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D661C);
        lbl_805D661C = 0U;
    }
    if ((u32) lbl_805D6618 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6618, 1);
        lbl_805D6618 = 0U;
    }
}

}

#include "types.h"
extern "C" {
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_80466074[];
extern u8 lbl_80466090[];
extern u8 lbl_804DC834[];
extern s32 lbl_805D6618;
extern s32 lbl_805D661C;
extern s32 lbl_805D6620;
void fn_8029FC88(void);
}

extern "C" {

void fn_8029FC88(void) {
    s32 r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = TLobby__sub_80020004(r, 5, lbl_804DC834, 0, 0, 0);
    }
    lbl_805D6618 = r;
    lbl_805D661C = TLanguage__sub_801E4874(lbl_80466074);
    lbl_805D6620 = TLanguage__sub_801E4874(lbl_80466090);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorFourLightSeabedU__vt19(void);
s32 TODoorFourLightSeabedU__vt20(void);
void *__dt__22TODoorFourLightSeabedUFv(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);

extern s32 lbl_805D6610;

s32 TODoorFourLightSeabedU__vt20(void) {
    return lbl_805D6610;
}

extern s32 lbl_805D6614;

s32 TODoorFourLightSeabedU__vt19(void) {
    return lbl_805D6614;
}

extern M2C_UNK __vt__22TODoorFourLightSeabedU[];

void *__dt__22TODoorFourLightSeabedUFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TODoorFourLightSeabedU;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
extern "C" {

struct Tbl_8029FD70 { s32 w[8]; };
struct Info_8029FD70 { u8 pad[4]; u32 v4; };
struct Door_8029FD70 {
    s32 f0;
    u8 pad4[0x14];
    void *vt18;
    u8 pad1c[0xB4 - 0x1C];
    f32 fB4;
    f32 fB8;
    Info_8029FD70 *infoBC;
    u8 padC0[0xD4 - 0xC0];
    s32 fD4;
    s32 fD8[8];
};

M2C_UNK clamp_light_index__19TODoorFourLightBaseFPv(void *);
extern Tbl_8029FD70 lbl_80465FAC;
extern M2C_UNK __vt__22TODoorFourLightSeabedU[];
extern s32 lbl_805D3D68;
extern u32 lbl_805D660C;
extern const f32 lbl_805DDDB8;
extern const f32 lbl_805DDDBC;

#define self ((Door_8029FD70 *)arg0)
u8 *TODoorFourLightSeabedU__ct(u8 *arg0) {
    s32 i;
    TODoorFourLightBase__ct(arg0);
    self->vt18 = __vt__22TODoorFourLightSeabedU;
    self->f0 = lbl_805D3D68;
    TObjEneGibbles__sub_80156780(arg0, lbl_804DC864, 1);
    TObjPlayer__sub_80154E3C(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    self->fD4 = get_bml_model((s32)lbl_805D660C, 0);
    self->infoBC = (Info_8029FD70 *)TObjFish__sub_8001ED9C((s32)lbl_805D660C, 0);
    self->fB4 = (f32)self->infoBC->v4 - lbl_805DDDB8;
    self->fB8 = lbl_805DDDBC;
    {
        Tbl_8029FD70 tbl = lbl_80465FAC;
        for (i = 0; i < 8; i++) {
            self->fD8[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(self->fD4, tbl.w[i]);
        }
    }
    clamp_light_index__19TODoorFourLightBaseFPv(arg0);
    return arg0;
}
#undef self

}
#pragma pop

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
s32 get_global_state__14TOKeyMachine01Fv();
extern M2C_UNK lbl_804660AC[];
extern M2C_UNK lbl_804660C8[];
extern M2C_UNK lbl_804660DC[];
extern M2C_UNK lbl_804660FC[];
extern M2C_UNK lbl_804DC810[];
extern u32 lbl_805D660C;
void TLanguage__sub_8029FF0C(void);
}

extern "C" {

void free_global_buffers__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D660C;

void free_global_buffers__6TLobbyFv(void) {
    if ((u32) lbl_805D6614 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6614);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6614);
        lbl_805D6614 = 0U;
    }
    if ((u32) lbl_805D6610 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6610);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6610);
        lbl_805D6610 = 0U;
    }
    if ((u32) lbl_805D660C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D660C, 1);
        lbl_805D660C = 0U;
    }
}
void TLanguage__sub_8029FF0C(void) {
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 28:
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r0 != 0) {
            var_r0 = TLobby__sub_80020004(var_r0, (int) (5), (void *) (lbl_804DC810), (int) (0), (int) (0), (int) (0));
        }
        lbl_805D660C = var_r0;
        lbl_805D6610 = TLanguage__sub_801E4874((void *) (lbl_804660AC));
        lbl_805D6614 = TLanguage__sub_801E4874((void *) (lbl_804660C8));
        return;
    case 29:
        var_r0_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x440));
        if (var_r0_2 != 0) {
            var_r0_2 = TLobby__sub_80020004(var_r0_2, (int) (5), (void *) (lbl_804DC810), (int) (0), (int) (0), (int) (0));
        }
        lbl_805D660C = var_r0_2;
        lbl_805D6610 = TLanguage__sub_801E4874((void *) (lbl_804660DC));
        lbl_805D6614 = TLanguage__sub_801E4874((void *) (lbl_804660FC));
        return;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorFourLightSeabed__vt19(void);
s32 TODoorFourLightSeabed__vt20(void);
void *__dt__21TODoorFourLightSeabedFv(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);

extern s32 lbl_805D6604;

s32 TODoorFourLightSeabed__vt20(void) {
    return lbl_805D6604;
}

extern s32 lbl_805D6608;

s32 TODoorFourLightSeabed__vt19(void) {
    return lbl_805D6608;
}

extern M2C_UNK __vt__21TODoorFourLightSeabed[];

void *__dt__21TODoorFourLightSeabedFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TODoorFourLightSeabed;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
extern "C" {

struct Tbl_802A0068 { s32 w[8]; };
struct Info_802A0068 { u8 pad[4]; u32 v4; };
struct Door_802A0068 {
    s32 f0;
    u8 pad4[0x14];
    void *vt18;
    u8 pad1c[0xB4 - 0x1C];
    f32 fB4;
    f32 fB8;
    Info_802A0068 *infoBC;
    u8 padC0[0xD4 - 0xC0];
    s32 fD4;
    s32 fD8[8];
};

M2C_UNK clamp_light_index__19TODoorFourLightBaseFPv(void *);
extern Tbl_802A0068 lbl_80465F74;
extern M2C_UNK __vt__21TODoorFourLightSeabed[];
extern s32 lbl_805D3D64;
extern s32 lbl_805D6600;
extern const f32 lbl_805DDDB8;
extern const f32 lbl_805DDDBC;

#define self ((Door_802A0068 *)arg0)
u8 *TODoorFourLightSeabed__ct(u8 *arg0) {
    s32 i;
    TODoorFourLightBase__ct(arg0);
    self->vt18 = __vt__21TODoorFourLightSeabed;
    self->f0 = lbl_805D3D64;
    TObjEneGibbles__sub_80156780(arg0, lbl_804DC864, 1);
    TObjPlayer__sub_80154E3C(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    self->fD4 = get_bml_model(lbl_805D6600, 0);
    self->infoBC = (Info_802A0068 *)TObjFish__sub_8001ED9C(lbl_805D6600, 0);
    self->fB4 = (f32)self->infoBC->v4 - lbl_805DDDB8;
    self->fB8 = lbl_805DDDBC;
    {
        Tbl_802A0068 tbl = lbl_80465F74;
        for (i = 0; i < 8; i++) {
            self->fD8[i] = count_linked_switches__23TObjSeabedSuisoBrakableFUii(self->fD4, tbl.w[i]);
        }
    }
    clamp_light_index__19TODoorFourLightBaseFPv(arg0);
    return arg0;
}
#undef self

}
#pragma pop
