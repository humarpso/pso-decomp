#include "types.h"

struct RecoveredGlobal_80158078_lbl_80440200 { char value[0x17]; };
typedef char RecoveredGlobal_80158078_lbl_80440200_size[sizeof(RecoveredGlobal_80158078_lbl_80440200) == 0x17 ? 1 : -1];

struct RecoveredGlobal_80158078_lbl_804AFB24 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80158078_lbl_804AFB24_size[sizeof(RecoveredGlobal_80158078_lbl_804AFB24) == 0x10 ? 1 : -1];

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
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
    virtual s32 m17();
};

struct RecoveredGlobal_80158188_lbl_804AFB34 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80158188___vt__17TOBarrierEnergy01 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_80158078_lbl_80440200 lbl_80440200;
extern RecoveredGlobal_80158078_lbl_804AFB24 bm_fs_obj_lazerguard_resource_descriptor;
extern u32 barrier_energy_shared_bml_archive;
extern s32 *TOBarrierEnergy01__texture_lists;
extern s32 barrier_energy_model;
void load_resources__17TOBarrierEnergy01Fv(void);
u8 *get_bml_motion(s32, s32);
s32 get_bml_model(void *, s32);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80158188_lbl_804AFB34 lbl_804AFB34;
extern s32 __vt__17TOBarrierEnergy01[];
extern s32 lbl_805D2EA0;
extern u32 barrier_energy_shared_bml_archive;
extern s32 *TOBarrierEnergy01__texture_lists;
extern const f32 lbl_805DB2D8;
extern const f32 lbl_805DB2DC;
extern const f32 lbl_805DB2E0;
extern const f32 lbl_805DB2E4;
u8 *TOBarrierEnergy01__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1);
void free_resources__17TOBarrierEnergy01Fv(void);
void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_ancient_door_base__15TODoorAncient01FPvs(void *, s32);
s32 free__11TOBoss4RockFUi(void*);
s32 free_if_valid__10TObjPlayerFi(s32);

extern u32 barrier_energy_shared_bml_archive;
extern s32 *TOBarrierEnergy01__texture_lists;

void free_resources__17TOBarrierEnergy01Fv(void) {
    if ((s32 *) TOBarrierEnergy01__texture_lists != NULL) {
        free_if_valid__10TObjPlayerFi(*TOBarrierEnergy01__texture_lists);
        if ((s32 *) TOBarrierEnergy01__texture_lists != NULL) {
            free__11TOBoss4RockFUi((void*)TOBarrierEnergy01__texture_lists);
            TOBarrierEnergy01__texture_lists = NULL;
        }
    }
    if ((u32) barrier_energy_shared_bml_archive != 0U) {
        TLobby__sub_8001FE7C((void*)barrier_energy_shared_bml_archive, 1);
        barrier_energy_shared_bml_archive = 0U;
    }
}

extern s32 __vt__17TOBarrierEnergy01[];

void load_resources__17TOBarrierEnergy01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_fs_obj_lazerguard_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&barrier_energy_shared_bml_archive) = (unsigned char *) ((void *) var_r0);
    barrier_energy_model = get_bml_model((void *) var_r0, 0);
    (*(s32 *)&TOBarrierEnergy01__texture_lists) = alloc_buffer__11TOBoss4RockFPv((void *)0xC);
    *(u8 **)((s8 *)(*(s32 *)&TOBarrierEnergy01__texture_lists) + 0) = load_gvm_texture_file((s32) &lbl_80440200.value);
    *(s32 *)((s8 *)(*(s32 *)&TOBarrierEnergy01__texture_lists) + 4) = TObjFish__sub_8001EDB0((*(u8 * *)&barrier_energy_shared_bml_archive), 1);
    *(s32 *)((s8 *)(*(s32 *)&TOBarrierEnergy01__texture_lists) + 8) = TObjFish__sub_8001EDB0((*(u8 * *)&barrier_energy_shared_bml_archive), 0);
}

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TOBarrierEnergy01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80158188_lbl_804AFB34_size[sizeof(RecoveredGlobal_80158188_lbl_804AFB34) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80158188___vt__17TOBarrierEnergy01_size[sizeof(RecoveredGlobal_80158188___vt__17TOBarrierEnergy01) == 0x54 ? 1 : -1];
u8 *TOBarrierEnergy01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80158188___vt__17TOBarrierEnergy01 *)&__vt__17TOBarrierEnergy01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2EA0;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((void *)((void *) ((*(s32 *)&barrier_energy_shared_bml_archive))), (s32)((int) (1)));
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *TOBarrierEnergy01__texture_lists;
    *(u8 **)((s8 *)arg0 + 0xBC) = get_bml_motion((*(s32 *)&barrier_energy_shared_bml_archive), 0);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB2D8);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DB2DC;
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804AFB34.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB2E0;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB2E4;
    return arg0;
}

void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;

    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (*(f32 *)((s8 *)arg0 + 0xB0) + *(f32 *)((s8 *)arg0 + 0xB8));
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xB4);
    temp_f0 = *(f32 *)((s8 *)arg0 + 0xB0);
    if (temp_f1 < temp_f0) {
        *(f32 *)((s8 *)arg0 + 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
