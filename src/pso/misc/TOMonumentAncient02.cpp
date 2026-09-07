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

struct RecoveredGlobal_80172EA0_lbl_804B39A8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02 {
    M2C_UNK value;
    u8 remaining[0x38];
};

extern "C" {
s32 TBoss4Type2__sub_800874F4(s32, s32);
u32 TObjEneGibbles__sub_80156780(void *, s32, s32);
u8 * init_map_object_base(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TLobby__sub_8030A7B0(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK set_type__14TOKeyAncient01FPv(void *);
extern RecoveredGlobal_80172EA0_lbl_804B39A8 lbl_804B39A8;
extern M2C_UNK __vt__19TOMonumentAncient02[];
extern s32 enable_v2_features;
extern s32 lbl_805D30CC;
extern u32 TOMonumentAncient02__data_805D5A68;
extern const f32 lbl_805DB92C;
extern const f32 lbl_805DB934;
extern const f32 lbl_805DB938;
u8 *TOMonumentAncient02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1);
void *create__19TOMonumentAncient02FPv(void *arg0);
void free_shared_data__19TOMonumentAncient02Fv(void);
void run_task__19TOMonumentAncient02Fv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOTrapAncient01__sub_80226578(s32, void *, void *, M2C_UNK, M2C_UNK);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK enable__13TParticleCtrlFPv(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
void request_destroy__11TBoss4Type2FUi(void *);

void run_task__19TOMonumentAncient02Fv(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xE8));
        }
        return;
    case 1:
        if ((is_not_split_screen__13TRaderMapCoreFv() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 1)) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xE8));
            return;
        }
        break;
    case 2:
        TOTrapAncient01__sub_80226578(M2C_FIELD(arg0, s32 *, 0xD4), arg0, arg0 + 0x38, 0, 0);
        break;
    }
}

extern void *tl_05;

void *create__19TOMonumentAncient02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF0);
    if (o != NULL) {
        o = TOMonumentAncient02__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOMonumentAncient02__data_805D5A68;

void free_shared_data__19TOMonumentAncient02Fv(void) {
    if ((u32) TOMonumentAncient02__data_805D5A68 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMonumentAncient02__data_805D5A68, 1);
        TOMonumentAncient02__data_805D5A68 = 0U;
    }
}

extern M2C_UNK __vt__19TOMonumentAncient02[];

void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOMonumentAncient02;
        request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0xE8));
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80172EA0_lbl_804B39A8_size[sizeof(RecoveredGlobal_80172EA0_lbl_804B39A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02_size[sizeof(RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02) == 0x3C ? 1 : -1];
u8 *TOMonumentAncient02__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r3;
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80172EA0___vt__19TOMonumentAncient02 *)&__vt__19TOMonumentAncient02).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D30CC;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOMonumentAncient02__data_805D5A68), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TOMonumentAncient02__data_805D5A68), u8 **, 0x42C), s32 *, 0xC);
    TObjEneGibbles__sub_80156780(arg0, (s32) &lbl_804B39A8.value, 1);
    TObjPlayer__sub_80154E3C((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x4C119;
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0x2D;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x44116;
        break;
    case 7:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0x2E;
        M2C_FIELD(arg0, s32 *, 0xD4) = 0x4004C10F;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    set_type__14TOKeyAncient01FPv((void *) (arg0 + 0x98));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB934;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB938;
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DB92C;
    M2C_FIELD(arg0, s32 *, 0xE8) = TBoss4Type2__sub_800874F4((s32) (arg0 + 0x38), 0x7F);
    M2C_FIELD(arg0, s32 *, 0xEC) = 1;
    if ((s32) enable_v2_features == 1) {
        if (TLobby__sub_8030A7B0() == 1) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
    return arg0;
}

}
