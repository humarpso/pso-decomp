#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80192E70_lbl_804B7FB0 {
    s32 value;
    u8 remaining[0x104];
};

struct RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
s32 select_models__18TObjLazerFenceNormFPv(void *);
extern RecoveredGlobal_80192E70_lbl_804B7FB0 laser_fence_collision_body_parts;
extern s32 __vt__18TObjLazerFenceNorm[];
extern s32 obj_lazer_fence_norm_class_name;
extern const f32 lbl_805DBE58;
u8 *TObjLazerFenceNorm__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjLazerFenceNorm__create(void *arg0);
void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1);
void free_resources__18TObjLazerFenceNormFv(void);
void run_task__18TObjLazerFenceNormFv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 free_collision_body_parts(void *);
s32 update_closed__18TObjLazerFenceNormFPv();
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_particle_controller__10TObjPlayerFPvs(void *, s32);
s32 reset_by_door__18TObjLazerFenceNormFPv();
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void run_task__18TObjLazerFenceNormFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB4);
    switch (temp_r0) {
    case 0:
        update_closed__18TObjLazerFenceNormFPv();
        return;
    case 1:
        reset_by_door__18TObjLazerFenceNormFPv();
        return;
    }
}

extern s32 __vt__18TObjLazerFenceNorm[];

void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjLazerFenceNorm;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80192E70_lbl_804B7FB0_size[sizeof(RecoveredGlobal_80192E70_lbl_804B7FB0) == 0x108 ? 1 : -1];
typedef char RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm_size[sizeof(RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm) == 0x38 ? 1 : -1];
u8 *TObjLazerFenceNorm__ct(u8 *arg0, s32 arg1, s32 arg2) {
    u32 temp_r4;
    u32 temp_r6;
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm *)&__vt__18TObjLazerFenceNorm).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) obj_lazer_fence_norm_class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DBE58;
    *(s32 *)((s8 *)arg0 + 0xAC) = (s32) *(f32 *)((s8 *)arg0 + 0x68);
    if ((s32) *(s32 *)((s8 *)arg0 + 0xAC) < 0) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xAC) > 3) {
        *(s32 *)((s8 *)arg0 + 0xAC) = 3;
    }
    *(s16 *)((s8 *)arg0 + 0xB0) = (s16) *(s32 *)((s8 *)arg0 + 0x84);
    select_models__18TObjLazerFenceNormFPv((void *) (arg0));
    temp_r4 = *(u32 *)((s8 *)arg0 + 0x8C);
    temp_r6 = temp_r4 >> 0x1FU;
    init_collision_body_parts((void *) (arg0), (void *) ((u8 *)&laser_fence_collision_body_parts.value + ((((temp_r4 & 1) ^ temp_r6) - temp_r6) * 0x84)), (int) (3));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    refresh_collision_body_centers((void *) (arg0));
    return arg0;
}

void *TObjLazerFenceNorm__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjLazerFenceNorm__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lazer_fence_norm_texture_list;
extern u32 lazer_fence_norm_bml_resource;

void free_resources__18TObjLazerFenceNormFv(void) {
    if ((u32) lazer_fence_norm_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)lazer_fence_norm_bml_resource, 1);
        lazer_fence_norm_bml_resource = 0U;
    }
    if ((u32) lazer_fence_norm_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)lazer_fence_norm_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lazer_fence_norm_texture_list);
        lazer_fence_norm_texture_list = 0U;
    }
}

}
