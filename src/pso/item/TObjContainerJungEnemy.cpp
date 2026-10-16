#include "types.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/item/TObjContainerJungEnemy.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8018CEDC_lbl_804B7168 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy {
    s32 value;
    u8 remaining[0x148];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_container_base(void *, s32);
extern RecoveredGlobal_8018CEDC_lbl_804B7168 container_jung_collision_desc;
extern s32 __vt__22TObjContainerJungEnemy[];
extern s32 TObjContainerJungEnemy__name;
u8 *TObjContainerJungEnemy__ct(u8 *arg0, s32 arg1, s32 _w2);
}

extern "C" {

void vfunc_80__22TObjContainerJungEnemyFv(void *arg0);
void *__dt__22TObjContainerJungEnemyFv(void *arg0, s16 arg1);
s32 TObjContainerJungEx__sub_8018D900(s32);
s32 get_model__19TObjContainerJungExFl(s32);
s32 TObjContainerJung__sub_8018D3B8(s32);
s32 get_model_by_index__17TObjContainerJungFl(s32);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id__13TUnk_804AF8A0Fv(void *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjContainerJungEnemy::vfunc_80() {
    s16 temp_r0;

    temp_r0 = this->mode;
    switch (temp_r0) {
    case 0:
        if ((s32) this->m_364 != 0) {
            submit_cursor_candidate(this, -1);
        }
    case 1:
        return;
    }
}

void TObjContainerJungEnemy::load_models() {
    s32 var_r0;
    s32 temp_r3 = *(s32 *)&this->m_88;
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
        if (temp_r3 <= 1) {
            var_r0 = temp_r3;
        }
    }
    switch (var_r0) {
    case 0:
        *(s32 *)&this->m_368 = get_model_by_index__17TObjContainerJungFl(0);
        *(s32 *)&this->m_36c = get_model_by_index__17TObjContainerJungFl(1);
        *(s32 *)&this->m_370 = get_model_by_index__17TObjContainerJungFl(2);
        *(s32 *)&this->m_374 = get_model_by_index__17TObjContainerJungFl(3);
        this->texture_id = TObjContainerJung__sub_8018D3B8(0);
        return;
    default:
    case 1:
        *(s32 *)&this->m_368 = get_model__19TObjContainerJungExFl(0);
        *(s32 *)&this->m_36c = get_model__19TObjContainerJungExFl(1);
        *(s32 *)&this->m_370 = get_model__19TObjContainerJungExFl(2);
        *(s32 *)&this->m_374 = get_model__19TObjContainerJungExFl(3);
        this->texture_id = TObjContainerJungEx__sub_8018D900(0);
        return;
    }
}

extern void *tl_05;

void *TObjContainerJungEnemy::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x378);
    if (o != NULL) {
        o = TObjContainerJungEnemy__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__22TObjContainerJungEnemy[];

void *__dt__22TObjContainerJungEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjContainerJungEnemy;
        unregister_object_by_id__13TUnk_804AF8A0Fv(arg0);
        free_collision_body_parts(arg0);
        ((TUnk_804B6C24 *)arg0)->destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018CEDC_lbl_804B7168_size[sizeof(RecoveredGlobal_8018CEDC_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy_size[sizeof(RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy) == 0x14C ? 1 : -1];
u8 *TObjContainerJungEnemy__ct(u8 *arg0, s32 arg1, s32 _w2) {
    init_container_base(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018CEDC___vt__22TObjContainerJungEnemy *)&__vt__22TObjContainerJungEnemy).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjContainerJungEnemy__name;
    ((TObjContainerJungEnemy *)arg0)->load_models();
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &container_jung_collision_desc.value, 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&container_jung_collision_desc.value) + 4));
    return arg0;
}

}
