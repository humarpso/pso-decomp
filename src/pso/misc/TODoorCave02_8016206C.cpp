#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_8016226C_lbl_804B1488 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8016226C___vt__12TODoorCave02 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80154E3C(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8016226C_lbl_804B1488 lbl_804B1488;
extern M2C_UNK __vt__12TODoorCave02[];
extern s32 lbl_805D2F68;
extern u32 lbl_805D5960;
extern const f32 lbl_805DB4B8;
extern const f32 lbl_805DB4C8;
u8 *TODoorCave02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
s32 is_online_ready__6TLobbyFv();
extern u8 lbl_80440E24[];
extern u8 lbl_80440E3C[];
extern u8 lbl_804B1458[];
extern u8 lbl_804B1478[];
extern s32 enable_v2_features;
extern u32 lbl_805D5960;
extern s32 *TODoorCave02__data_805D5964;
void TODoorCave02__sub_8016211C(void);
}

extern "C" {

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1);
void *create__12TODoorCave02FPv(void *arg0);
void free_globals__12TODoorCave02Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *tl_05;

void *create__12TODoorCave02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorCave02__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5960;
extern s32 *TODoorCave02__data_805D5964;

void free_globals__12TODoorCave02Fv(void) {
    if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorCave02__data_805D5964);
        if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorCave02__data_805D5964);
            TODoorCave02__data_805D5964 = NULL;
        }
    }
    if ((u32) lbl_805D5960 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5960, 1);
        lbl_805D5960 = 0U;
    }
}

extern M2C_UNK __vt__12TODoorCave02[];

void TODoorCave02__sub_8016211C(void) {
    void *o;
    TODoorCave02__data_805D5964 = (s32 *)alloc_buffer__11TOBoss4RockFPv(8);
    if (enable_v2_features == 1 && is_online_ready__6TLobbyFv() != 0) {
        o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != NULL) {
            o = TLobby__sub_80020004(o, 1, lbl_804B1478, 0, 0, 0);
        }
        lbl_805D5960 = (u32)o;
        TODoorCave02__data_805D5964[0] = TLanguage__sub_801E4874(lbl_80440E24);
    } else {
        o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != NULL) {
            o = TLobby__sub_80020004(o, 1, lbl_804B1458, 0, 0, 0);
        }
        lbl_805D5960 = (u32)o;
        TODoorCave02__data_805D5964[0] = TLanguage__sub_801E4874(lbl_80440E3C);
    }
    TODoorCave02__data_805D5964[1] = *(s32 *)(*(u8 **)(lbl_805D5960 + 0x42C) + 0xC);
}

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TODoorCave02;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8016226C_lbl_804B1488_size[sizeof(RecoveredGlobal_8016226C_lbl_804B1488) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8016226C___vt__12TODoorCave02_size[sizeof(RecoveredGlobal_8016226C___vt__12TODoorCave02) == 0x54 ? 1 : -1];
u8 *TODoorCave02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016226C___vt__12TODoorCave02 *)&__vt__12TODoorCave02).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F68;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5960), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5960), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5960), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB4B8);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB4C8;
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B1488.value), (int) (1));
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) lbl_805DB4B8;
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DB4B8;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB4B8;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB4B8;
    return arg0;
}

}
