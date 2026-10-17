#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjLazerFenceNorm.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80192E70_lbl_804B7FB0 {
    s32 value;
    u8 remaining[0x104];
};

struct RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
extern RecoveredGlobal_80192E70_lbl_804B7FB0 laser_fence_collision_body_parts;
extern s32 __vt__18TObjLazerFenceNorm[];
extern s32 obj_lazer_fence_norm_class_name;
extern const f32 lbl_805DBE58;
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 free_collision_body_parts(void *);
s32 update_closed__18TObjLazerFenceNormFv();
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 reset_by_door__18TObjLazerFenceNormFv();

void TObjLazerFenceNorm::run_task() {
    s32 temp_r0;

    temp_r0 = *(s32 *)&this->m_b4;
    switch (temp_r0) {
    case 0:
        update_closed__18TObjLazerFenceNormFv();
        return;
    case 1:
        reset_by_door__18TObjLazerFenceNormFv();
        return;
    }
}

void *__dt__18TObjLazerFenceNormFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjLazerFenceNorm;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
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
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80192E70___vt__18TObjLazerFenceNorm *)&__vt__18TObjLazerFenceNorm).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) obj_lazer_fence_norm_class_name;
    ((TObjLazerFenceNorm *)(arg0))->apply_object_set_data((void *)arg2);
    *(s32 *)&((TObjLazerFenceNorm *)arg0)->m_b4 = 0;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DBE58;
    *(s32 *)&((TObjLazerFenceNorm *)arg0)->m_ac = (s32) ((TObjLazerFenceNorm *)arg0)->scale;
    if ((s32) *(s32 *)&((TObjLazerFenceNorm *)arg0)->m_ac< 0) {
        *(s32 *)&((TObjLazerFenceNorm *)arg0)->m_ac = 0;
    }
    if ((s32) *(s32 *)&((TObjLazerFenceNorm *)arg0)->m_ac> 3) {
        *(s32 *)&((TObjLazerFenceNorm *)arg0)->m_ac = 3;
    }
    *(s16 *)&((TObjLazerFenceNorm *)arg0)->m_b0 = (s16) ((TObjLazerFenceNorm *)arg0)->m_84;
    ((TObjLazerFenceNorm *)arg0)->select_models();
    temp_r4 = ((TObjLazerFenceNorm *)arg0)->m_8c;
    temp_r6 = temp_r4 >> 0x1FU;
    init_collision_body_parts((void *) (arg0), (void *) ((u8 *)&laser_fence_collision_body_parts.value + ((((temp_r4 & 1) ^ temp_r6) - temp_r6) * 0x84)), (int) (3));
    *(s32 *)&((TObjLazerFenceNorm *)arg0)->actorFlags = (s32) (*(s32 *)&((TObjLazerFenceNorm *)arg0)->actorFlags| 0x40000000);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
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

void TObjLazerFenceNorm::free_resources() {
    if ((u32) lazer_fence_norm_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)lazer_fence_norm_bml_resource, 1);
        lazer_fence_norm_bml_resource = 0U;
    }
    if ((u32) lazer_fence_norm_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)lazer_fence_norm_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(lazer_fence_norm_texture_list);
        lazer_fence_norm_texture_list = 0U;
    }
}

}
