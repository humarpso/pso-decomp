#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80158078_lbl_80440200 { char value[0x17]; };
typedef char RecoveredGlobal_80158078_lbl_80440200_size[sizeof(RecoveredGlobal_80158078_lbl_80440200) == 0x17 ? 1 : -1];

struct RecoveredGlobal_80158078_lbl_804AFB24 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80158078_lbl_804AFB24_size[sizeof(RecoveredGlobal_80158078_lbl_804AFB24) == 0x10 ? 1 : -1];

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

struct RecoveredGlobal_80158188_lbl_804AFB34 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80158188___vt__17TOBarrierEnergy01 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_80158078_lbl_80440200 lbl_80440200;
extern RecoveredGlobal_80158078_lbl_804AFB24 lbl_804AFB24;
extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;
extern s32 lbl_805D5898;
void TOBarrierEnergy01__sub_80158078(void);
u8 *TObjFish__sub_8001ED9C(s32, s32);
s32 get_bml_model(void *, s32);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80158188_lbl_804AFB34 lbl_804AFB34;
extern M2C_UNK __vt__17TOBarrierEnergy01[];
extern s32 lbl_805D2EA0;
extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;
extern const f32 lbl_805DB2D8;
extern const f32 lbl_805DB2DC;
extern const f32 lbl_805DB2E0;
extern const f32 lbl_805DB2E4;
u8 *TOBarrierEnergy01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1);
void free_resources__17TOBarrierEnergy01Fv(void);
void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;

void free_resources__17TOBarrierEnergy01Fv(void) {
    if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOBarrierEnergy01__data_805D5894);
        if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
            free__11TOBoss4RockFUi((void*)TOBarrierEnergy01__data_805D5894);
            TOBarrierEnergy01__data_805D5894 = NULL;
        }
    }
    if ((u32) lbl_805D5890 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5890, 1);
        lbl_805D5890 = 0U;
    }
}

extern M2C_UNK __vt__17TOBarrierEnergy01[];

void TOBarrierEnergy01__sub_80158078(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804AFB24.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5890) = (unsigned char *) ((void *) var_r0);
    lbl_805D5898 = get_bml_model((void *) var_r0, 0);
    (*(s32 *)&TOBarrierEnergy01__data_805D5894) = alloc_buffer__11TOBoss4RockFPv((void *)0xC);
    M2C_FIELD((*(s32 *)&TOBarrierEnergy01__data_805D5894), u8 **, 0) = load_gvm_texture_file((s32) &lbl_80440200.value);
    M2C_FIELD((*(s32 *)&TOBarrierEnergy01__data_805D5894), s32 *, 4) = TObjFish__sub_8001EDB0((*(u8 * *)&lbl_805D5890), 1);
    M2C_FIELD((*(s32 *)&TOBarrierEnergy01__data_805D5894), s32 *, 8) = TObjFish__sub_8001EDB0((*(u8 * *)&lbl_805D5890), 0);
}

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOBarrierEnergy01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80158188_lbl_804AFB34_size[sizeof(RecoveredGlobal_80158188_lbl_804AFB34) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80158188___vt__17TOBarrierEnergy01_size[sizeof(RecoveredGlobal_80158188___vt__17TOBarrierEnergy01) == 0x54 ? 1 : -1];
u8 *TOBarrierEnergy01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80158188___vt__17TOBarrierEnergy01 *)&__vt__17TOBarrierEnergy01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2EA0;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((void *)((void *) ((*(s32 *)&lbl_805D5890))), (s32)((int) (1)));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TOBarrierEnergy01__data_805D5894;
    M2C_FIELD(arg0, u8 **, 0xBC) = TObjFish__sub_8001ED9C((*(s32 *)&lbl_805D5890), 0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB2D8);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB2DC;
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804AFB34.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB2E0;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB2E4;
    return arg0;
}

void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;

    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
