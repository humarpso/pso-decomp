#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802072E0___vt__10TSceneSora {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802075F8_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80207340___vt__10TSceneSora {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct SkyMotion_80207238 { u32 rows; u32 frame_count; };

struct TSceneSora_80207238 {
    u8 pad[0x60];
    s32 yaw;
    u8 pad64[0x94 - 0x64];
    SkyMotion_80207238 *motion;
    void *textures;
    f32 rate;
    f32 frame;
};

typedef s32 M2C_UNK;
struct Ref_80207478 { s32 id; s32 idx; s32 pad; };

struct Ent_80207478 { s32 f0; char *name; };

struct Res_80207478 { void *buf; s32 n; };

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
extern s32 TSceneSora__data_805D3620;
extern s32 TSceneSora__data_805D6050;
extern u32 TSceneSora__data_805D6054;
void TSceneSora__sub_80207430(void);
u8 * destroy_particle__13TParticleCtrlFPvs(void *, s16);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_802072E0___vt__10TSceneSora __vt__10TSceneSora;
extern s32 TSceneSora__data_805D6050;
u8 *__dt__10TSceneSoraFv(u8 *arg0, s16 arg1);
void TLobby__sub_80141038(void *, s32, s32);
s32 TLobby__sub_80207770(s32);
void TOBoss4Rock__sub_802078A4(void);
extern RecoveredGlobal_802075F8_lbl_80515BA0 lbl_80515BA0;
extern s32 lbl_805D2CD8;
void TLobby__sub_802075F8(void);
s32 TObjFish__sub_8001ED9C(int, int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
s32 TPhotonMagicSquare__sub_801A2640(void *);
extern RecoveredGlobal_802072E0___vt__10TSceneSora __vt__10TSceneSora;
extern s32 lbl_805D3624;
extern u32 TSceneSora__data_805D6054;
extern s32 lbl_805D6058;
extern const f32 lbl_805DC608;
extern const f32 lbl_805DC60C;
u8 *TSceneSora__ct(u8 *arg0, s32 _w1);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
s32 TObjFish__sub_8001EDB0(int, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi();
extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6054;
void render__10TSceneSoraFv(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
extern const f32 lbl_805DC608;
void run_task__10TSceneSoraFv(TSceneSora_80207238 *sky);
void *TObjPlayer__sub_800196EC();
u32 TLobby__sub_8002058C(void *, int, Res_80207478 *, Res_80207478 *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 update_lobby_scene__6TSceneFPv(void *);
M2C_UNK TLobby__sub_801317E4(char *, char *, char *);
s32 lookup_scene_object__6TLobbyFPv(void *, Ref_80207478 *);
Ent_80207478 *TLobby__sub_80207E88(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK TLobby__sub_803CCE9C(void *);
void *TLobby__sub_803CD3A8(char *, int);
extern char lbl_8044A9D0[];
extern char lbl_8044A9D8[];
extern char lbl_8044A9E0[];
extern s32 TSceneSora__data_805D3620;
extern s32 TSceneSora__data_805D6050;
extern u32 TSceneSora__data_805D6054;
extern s32 lbl_805D6058;
void TSceneSora__sub_80207478(void);
}

extern "C" {

void TLobby__sub_802075F4(void);
void create_instance__10TSceneSoraFv(void);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 TSceneSora__data_805D6050;
extern u32 TSceneSora__data_805D6054;
extern s32 tl_05;

typedef char RecoveredGlobal_802072E0___vt__10TSceneSora_size[sizeof(RecoveredGlobal_802072E0___vt__10TSceneSora) == 0x38 ? 1 : -1];

void render__10TSceneSoraFv(u8 *arg0) {
    if ((s32) TSceneSora__data_805D3620 != 0) {
        begin_effect_render__13TParticleCtrlFv();
        TObjFish__sub_8001EDB0((int) ((*(s32 *)&TSceneSora__data_805D6054)), (int) (0));
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x90)), (int) (M2C_FIELD(arg0, s32 *, 0x94)), (f32) (M2C_FIELD(arg0, f32 *, 0xA0)));
        } else {
            TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x90)));
        }
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__10TSceneSoraFv(TSceneSora_80207238 *sky) {
    if (sky->motion != NULL) {
        sky->frame += sky->rate;
        if (sky->frame > (f32)(sky->motion->frame_count - 1)) {
            sky->frame = lbl_805DC608;
        }
    } else {
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 1:
        case 2:
            sky->yaw++;
            break;
        }
    }
}

u8 *__dt__10TSceneSoraFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TSceneSora.value;
        TSceneSora__data_805D6050 = 0;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80207340___vt__10TSceneSora_size[sizeof(RecoveredGlobal_80207340___vt__10TSceneSora) == 0x38 ? 1 : -1];
u8 *TSceneSora__ct(u8 *arg0, s32 _w1) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80207340___vt__10TSceneSora *)&__vt__10TSceneSora).value;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3624;
    M2C_FIELD(arg0, s32 *, 0x90) = TObjFish__sub_8001EDC4((int) ((*(s32 *)&TSceneSora__data_805D6054)), (int) (0));
    if (lbl_805D6058 != 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = TObjFish__sub_8001ED9C((int) ((*(s32 *)&TSceneSora__data_805D6054)), (int) (0));
    } else {
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x98) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TSceneSora__data_805D6054)), (int) (0));
    M2C_FIELD(arg0, f32 *, 0x9C) = lbl_805DC60C;
    M2C_FIELD(arg0, f32 *, 0xA0) = lbl_805DC608;
    return arg0;
}

void create_instance__10TSceneSoraFv(void) {
    s32 var_r3;

    if ((u32) TSceneSora__data_805D6054 != 0U) {
        var_r3 = __nw__7TObjectFUl(0xA4);
        if (var_r3 != 0) {
            var_r3 = ((s32)TSceneSora__ct((u8 *)(var_r3), (s32)(tl_05)));
        }
        TSceneSora__data_805D6050 = var_r3;
        return;
    }
    TSceneSora__data_805D6050 = 0;
}

void TSceneSora__sub_80207430(void) {
    TSceneSora__data_805D3620 = 1;
    if ((void *) (*(u8 * *)&TSceneSora__data_805D6054) != NULL) {
        TLobby__sub_8001FE7C((*(u8 * *)&TSceneSora__data_805D6054), 1);
        (*(u8 * *)&TSceneSora__data_805D6054) = NULL;
    }
    TSceneSora__data_805D6050 = 0;
}

void TSceneSora__sub_80207478(void) {
    char name2[0x20];
    char name1[0x20];
    Ref_80207478 ref;
    Res_80207478 b;
    Res_80207478 a;
    Ent_80207478 *tbl;
    s32 ok;
    void *p;
    u32 o;
    TSceneSora__data_805D6050 = 0;
    TSceneSora__data_805D6054 = 0;
    lbl_805D6058 = 0;
    if (lookup_scene_object__6TLobbyFPv(TObjPlayer__sub_800196EC(), &ref) != 0) {
        ok = 0;
        tbl = TLobby__sub_80207E88(ref.id);
        TLobby__sub_801317E4(name1, tbl[ref.idx].name, lbl_8044A9D0);
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            TLobby__sub_801317E4(name2, tbl[ref.idx].name, lbl_8044A9D8);
            ok = update_lobby_scene__6TSceneFPv(name2);
        }
        if (ok <= 0) {
            TLobby__sub_801317E4(name2, tbl[ref.idx].name, lbl_8044A9E0);
        }
        p = TLobby__sub_803CD3A8(name2, 0);
        if (p != NULL) {
            b.buf = name2;
            TLobby__sub_803CCE9C(p);
        } else {
            return;
        }
        p = TLobby__sub_803CD3A8(name1, 0);
        if (p != NULL) {
            a.buf = name1;
            lbl_805D6058 = 1;
            TLobby__sub_803CCE9C(p);
        } else {
            a.buf = NULL;
        }
        b.n = 0;
        a.n = 0;
        o = (u32)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != 0) {
            o = TLobby__sub_8002058C((void *)o, 1, &b, &a, 0, 0, 0);
        }
        TSceneSora__data_805D6054 = o;
        TSceneSora__data_805D3620 = 1;
    }
}

void TLobby__sub_802075F4(void) {  }
typedef char RecoveredGlobal_802075F8_lbl_80515BA0_size[sizeof(RecoveredGlobal_802075F8_lbl_80515BA0) == 0x28 ? 1 : -1];
void TLobby__sub_802075F8(void) {
    TOBoss4Rock__sub_802078A4();
    if ((s32) lbl_805D2CD8 != -1) {
        TLobby__sub_80141038(&lbl_80515BA0.value, lbl_805D2CD8, TLobby__sub_80207770(lbl_805D2CD8));
        lbl_805D2CD8 = -1;
    }
}

}
