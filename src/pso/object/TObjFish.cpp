#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjFish__create(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
s32 TObjFish__sub_8029E170(void *, void *, int, int);
extern void *__vt__8TObjFish[];
extern s32 lbl_805D3D58;
u8 *TObjFish__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
s32 get_global_state__14TOKeyMachine01Fv(void);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern void *lbl_804DC640[];
extern u32 TObjFish__data_805D65E8;
extern s32 TObjFish__data_805D65EC;
void TObjFish__sub_8029E5E8(void);
}

extern "C" {

void *__dt__8TObjFishFv(void *arg0, s16 arg1);
void free_resource__8TObjFishFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern void *__vt__8TObjFish[];

void *__dt__8TObjFishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__8TObjFish;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0xA0)); M2C_FIELD(arg0, M2C_UNK *, 0xA0) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TObjFish__data_805D65E8;

u8 *TObjFish__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    f32 temp_f0;
    f32 var_f1;
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__8TObjFish;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3D58;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    var_f1 = M2C_FIELD(arg0, f32 *, 0x68);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (var_f1 < temp_f0) {
        var_f1 = temp_f0;
    }
    if (var_f1 < temp_f0) {
        var_f1 = temp_f0;
    }
    M2C_FIELD(arg0, f32 *, 0x9C) = var_f1;
    M2C_FIELD(arg0, s32 *, 0x94) = M2C_FIELD(arg2, s32 *, 0x30) + M2C_FIELD(arg2, s32 *, 0x34) + M2C_FIELD(arg2, s32 *, 0x38);
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) < 1) {
        M2C_FIELD(arg0, s32 *, 0x94) = 1;
    }
    if (TObjFish__sub_8029E170((void *) (arg0), (void *) (arg0 + 0x68), (int) (M2C_FIELD(arg2, s32 *, 0x30)), (int) (M2C_FIELD(arg2, s32 *, 0x34))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    return arg0;
}

u8 *TObjFish__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xA4));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjFish__ct((u8 *)(temp_r3), (M2C_UNK)(tl_05), (u8 *)(arg0)));
    }
    return var_r0;
}

void free_resource__8TObjFishFv(void) {
    if ((u32) TObjFish__data_805D65E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjFish__data_805D65E8, 1);
        TObjFish__data_805D65E8 = 0U;
    }
}
void TLobby__sub_801A1FD8();
void TObjRoomId__sub_801A1E2C();
void TParticleCtrl__sub_801A2124();
void apply_object_set_data();
void classify_actor_view_detail();
void render__8TObjFishFv();
void render_shadows__7TObjectFv();
void reset_motion_fields__10TObjPlayerFPv();
void run_task__8TObjFishFv();
void update_object_view_visibility();
#pragma push
extern const char lbl_80465A48[] = "lobby_suisou_sakana01_yellow.gj";
extern const char lbl_80465A68[] = "lobby_suisou_sakana02_red.gj";
extern const char lbl_80465A88[] = "lobby_suisou_sakana03_bule.gj";
extern const char lbl_80465AA8[] = "lobby_suisou_sakana01_yellow.njm";
extern const char lbl_80465ACC[] = "lobby_suisou_sakana02_red.njm";
extern const char lbl_80465AEC[] = "lobby_suisou_sakana03_bule.njm";
extern const char lbl_80465B0C[] = "bm_sakana_obj_lobby.bml";
extern const char lbl_80465B24[] = "sakana_jungle21.gj";
extern const char lbl_80465B38[] = "sakana_jungle22.gj";
extern const char lbl_80465B4C[] = "sakana_jungle23.gj";
extern const char lbl_80465B60[] = "sakana_jungle21.njm";
extern const char lbl_80465B74[] = "sakana_jungle22.njm";
extern const char lbl_80465B88[] = "sakana_jungle23.njm";
extern const char lbl_80465B9C[] = "bm_sakana_obj_jungle2.bml";
extern const char lbl_80465BB8[] = "sakana_jungle51.gj";
extern const char lbl_80465BCC[] = "sakana_jungle52.gj";
extern const char lbl_80465BE0[] = "sakana_jungle53.gj";
extern const char lbl_80465BF4[] = "sakana_jungle51.njm";
extern const char lbl_80465C08[] = "sakana_jungle52.njm";
extern const char lbl_80465C1C[] = "sakana_jungle53.njm";
extern const char lbl_80465C30[] = "bm_sakana_obj_jungle5.bml";
extern const char lbl_80465C4C[] = "sakana01_obj1.gj";
extern const char lbl_80465C60[] = "sakana02_obj1.gj";
extern const char lbl_80465C74[] = "sakana03_obj1.gj";
extern const char lbl_80465C88[] = "sakana01_obj1.njm";
extern const char lbl_80465C9C[] = "sakana02_obj1.njm";
extern const char lbl_80465CB0[] = "sakana03_obj1.njm";
extern const char lbl_80465CC4[] = "bm_sakana_obj_seabed1.bml";
extern const char lbl_80465CE0[] = "sakana04_obj1.gj";
extern const char lbl_80465CF4[] = "sakana05_obj1.gj";
extern const char lbl_80465D08[] = "sakana06_obj1.gj";
extern const char lbl_80465D1C[] = "sakana04_obj1.njm";
extern const char lbl_80465D30[] = "sakana05_obj1.njm";
extern const char lbl_80465D44[] = "sakana06_obj1.njm";
extern const char lbl_80465D58[] = "bm_sakana_obj_seabed2.bml";

extern const f32 lbl_80465D74[15] = { 1.0f, 1.0f, 1.0f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.4f, 0.0f, 0.0f, 0.0f };
extern const f32 lbl_80465DB0[15] = { 30.0f, 30.0f, 30.0f, 5.0f, 20.0f, 30.0f, 5.0f, 5.0f, 5.0f, 30.0f, 30.0f, 30.0f, 30.0f, 30.0f, 30.0f };
extern const char lbl_80465DEC[] = "TObjFish";
extern const f64 TObjFish__data_80465DF8 = 4503601774854144.0;
extern const f64 lbl_80465E00 = 10430.38043493439;
#pragma pop
void *lbl_804DC640[60] = {
    (void *)lbl_80465A48,
    (void *)lbl_80465A68,
    (void *)lbl_80465A88,
    0,
    (void *)lbl_80465AA8,
    (void *)lbl_80465ACC,
    (void *)lbl_80465AEC,
    0,
    (void *)lbl_80465B0C,
    (void *)&lbl_804DC640[0],
    (void *)&lbl_804DC640[4],
    (void *)0x30003,
    (void *)lbl_80465B24,
    (void *)lbl_80465B38,
    (void *)lbl_80465B4C,
    0,
    (void *)lbl_80465B60,
    (void *)lbl_80465B74,
    (void *)lbl_80465B88,
    0,
    (void *)lbl_80465B9C,
    (void *)&lbl_804DC640[12],
    (void *)&lbl_804DC640[16],
    (void *)0x30003,
    (void *)lbl_80465BB8,
    (void *)lbl_80465BCC,
    (void *)lbl_80465BE0,
    0,
    (void *)lbl_80465BF4,
    (void *)lbl_80465C08,
    (void *)lbl_80465C1C,
    0,
    (void *)lbl_80465C30,
    (void *)&lbl_804DC640[24],
    (void *)&lbl_804DC640[28],
    (void *)0x30003,
    (void *)lbl_80465C4C,
    (void *)lbl_80465C60,
    (void *)lbl_80465C74,
    0,
    (void *)lbl_80465C88,
    (void *)lbl_80465C9C,
    (void *)lbl_80465CB0,
    0,
    (void *)lbl_80465CC4,
    (void *)&lbl_804DC640[36],
    (void *)&lbl_804DC640[40],
    (void *)0x30003,
    (void *)lbl_80465CE0,
    (void *)lbl_80465CF4,
    (void *)lbl_80465D08,
    0,
    (void *)lbl_80465D1C,
    (void *)lbl_80465D30,
    (void *)lbl_80465D44,
    0,
    (void *)lbl_80465D58,
    (void *)&lbl_804DC640[48],
    (void *)&lbl_804DC640[52],
    (void *)0x30003,
};
void *__vt__8TObjFish[13] = {
    0,
    0,
    (void *)__dt__8TObjFishFv,
    (void *)run_task__8TObjFishFv,
    (void *)render__8TObjFishFv,
    (void *)render_shadows__7TObjectFv,
    (void *)TLobby__sub_801A1FD8,
    (void *)apply_object_set_data,
    (void *)reset_motion_fields__10TObjPlayerFPv,
    (void *)TParticleCtrl__sub_801A2124,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)TObjRoomId__sub_801A1E2C,
};

void TObjFish__sub_8029E5E8(void) {
    u8 *base = (u8 *)lbl_804DC640;
    u8 *p;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 24:
        TObjFish__data_805D65EC = 1;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x50, 0, 0, 0);
        }
        TObjFish__data_805D65E8 = (u32)p;
        break;
    case 27:
    case 34:
        TObjFish__data_805D65EC = 2;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x80, 0, 0, 0);
        }
        TObjFish__data_805D65E8 = (u32)p;
        break;
    case 28:
        TObjFish__data_805D65EC = 3;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0xB0, 0, 0, 0);
        }
        TObjFish__data_805D65E8 = (u32)p;
        break;
    case 29:
        TObjFish__data_805D65EC = 4;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0xE0, 0, 0, 0);
        }
        TObjFish__data_805D65E8 = (u32)p;
        break;
    case 15:
    default:
        TObjFish__data_805D65EC = 0;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x20, 0, 0, 0);
        }
        TObjFish__data_805D65E8 = (u32)p;
        break;
    }
}

}
