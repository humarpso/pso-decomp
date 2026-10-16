#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TOSensorGeneral01.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TOKey.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
extern char lbl_80442A38[];
extern char lbl_80442A4C[];
extern const char *bm_fs_obj_sensor_model_names[2];
extern BmlResourceDescriptor TOSensorGeneral01__resource_descriptor;
extern const char *bm_fs_obj_sensor_motion_names[1];
}

struct RecoveredGlobal_80176308_lbl_80442A80 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80176308_lbl_804B4278 {
    s32 value;
    u8 remaining[0xC];
};

struct VBase_801760A8 { char pad[0x18]; };

struct VObj_801760A8 : VBase_801760A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Node_801760A8 {
    u8 pad0[4];
    s32 model;
    f32 x, y, z;
    u8 pad14[0x2C - 0x14];
    Node_801760A8 *child;
    Node_801760A8 *next;
};

struct Base_801763E4 { char pad[0x18]; };

struct VObj_801763E4 : Base_801763E4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

extern "C" {
u8 *load_resource_from_descriptor(void *, s32, BmlResourceDescriptor *, s32, s32, s32);
s32 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern RecoveredGlobal_80176308_lbl_80442A80 lbl_80442A80;
extern u32 sensor_general_shared_bml_archive;
extern s32 *TOSensorGeneral01__texture_lists;
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
extern s32 *TOSensorGeneral01__texture_lists;
s32 TOSensor__ct(void *, void *);
extern s32 __vt__17TOSensorGeneral01[];
extern s32 lbl_805D3154;
extern u32 sensor_general_shared_bml_archive;
extern s32 *TOSensorGeneral01__texture_lists;
void *TOSensorGeneral01__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *__dt__17TOSensorGeneral01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__8TOSensorFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 mem_free(void*);

void TOSensorGeneral01::vfunc_17() {
    *(s32 *)((s8 *)this + 0x60) = (s32) (*(s32 *)((s8 *)this + 0x60) + 0x147);
    *(s32 *)((s8 *)this + 0xE8) = (s32) (*(s32 *)((s8 *)this + 0xE8) + 0x28F);
}

extern const f32 lbl_805DB9B0;
extern const f32 lbl_805DB9B4;
extern const f32 lbl_805DB9B8;
extern const f32 lbl_805DB9BC;

void TOSensorGeneral01::vfunc_16() {
    s32 temp_r0;

    *(s32 *)((s8 *)this + 0xE8) = (s32) (*(s32 *)((s8 *)this + 0xE8) + 0x28F);
    *(s32 *)((s8 *)this + 0xF0) = (s32) (*(s32 *)((s8 *)this + 0xF0) - 1);
    temp_r0 = *(s32 *)((s8 *)this + 0xF0);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)this + 0xF0) = 0;
        *(s32 *)((s8 *)this + 0xEC) = 0;
        *(s32 *)((s8 *)this + 0x60) = (s32) (*(s32 *)((s8 *)this + 0x60) + 0xCCC);
        *(f32 *)((s8 *)this + 0x3C) = (f32) (*(f32 *)((s8 *)this + 0x3C) + lbl_805DB9B0);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B4) {
        *(s32 *)((s8 *)this + 0xEC) = 1;
        *(s32 *)((s8 *)this + 0x60) = (s32) (*(s32 *)((s8 *)this + 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B8) {
        *(s32 *)((s8 *)this + 0xEC) = 2;
        *(s32 *)((s8 *)this + 0x60) = (s32) (*(s32 *)((s8 *)this + 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9BC) {
        *(s32 *)((s8 *)this + 0xEC) = 3;
        *(s32 *)((s8 *)this + 0x60) = (s32) (*(s32 *)((s8 *)this + 0x60) + 0x147);
    }
}

extern void *tl_05;

void TOSensorGeneral01::render() {
    u8 *arg0 = (u8 *)this;
    Node_801760A8 *n;
    if (((VObj_801760A8 *)(arg0))->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        push_matrix();
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x38));
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        n = *(Node_801760A8 **)((s8 *)arg0 + 0x34);
        translate_matrix(0, n->x, n->y, n->z);
        TObjFish::set_global_param(TOSensorGeneral01__texture_lists[0]);
        draw_ginja_model(n->model);
        TParticleCtrl::begin_effect_render();
        n = n->child;
        translate_matrix(0, n->x, n->y, n->z);
        TObjFish::set_global_param(TOSensorGeneral01__texture_lists[*(s32 *)((s8 *)arg0 + 0xEC) < 1]);
        draw_ginja_model(n->model);
        n = n->next;
        translate_matrix(0, n->x, n->y, n->z);
        TObjFish::set_global_param(TOSensorGeneral01__texture_lists[*(s32 *)((s8 *)arg0 + 0xEC) < 2]);
        draw_ginja_model(n->model);
        n = n->next;
        translate_matrix(0, n->x, n->y, n->z);
        TObjFish::set_global_param(TOSensorGeneral01__texture_lists[*(s32 *)((s8 *)arg0 + 0xEC) < 3]);
        draw_ginja_model(n->model);
        TParticleCtrl::end_effect_render();
        n = n->next;
        push_matrix();
        translate_matrix(0, n->x, n->y, n->z);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0xE8));
        TObjFish::set_global_param(TOSensorGeneral01__texture_lists[1]);
        draw_ginja_model(n->model);
        pop_matrix();
        pop_matrix();
    }
}

void *TOSensorGeneral01::create() {
    void *o = __nw__7TObjectFUl(0xF4);
    if (o != NULL) {
        o = TOSensorGeneral01__ct((void *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

extern u32 sensor_general_shared_bml_archive;
extern s32 *TOSensorGeneral01__texture_lists;

void TOSensorGeneral01::free_rocks() {
    if ((s32 *) TOSensorGeneral01__texture_lists != NULL) {
        TObjPlayer::free_if_valid(*TOSensorGeneral01__texture_lists);
        if ((s32 *) TOSensorGeneral01__texture_lists != NULL) {
            mem_free((void*)TOSensorGeneral01__texture_lists);
            TOSensorGeneral01__texture_lists = NULL;
        }
    }
    if ((u32) sensor_general_shared_bml_archive != 0U) {
        TLobby__sub_8001FE7C((void*)sensor_general_shared_bml_archive, 1);
        sensor_general_shared_bml_archive = 0U;
    }
}

extern s32 __vt__17TOSensorGeneral01[];

typedef char RecoveredGlobal_80176308_lbl_80442A80_size[sizeof(RecoveredGlobal_80176308_lbl_80442A80) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80176308_lbl_804B4278_size[sizeof(RecoveredGlobal_80176308_lbl_804B4278) == 0x10 ? 1 : -1];
void TOSensorGeneral01::load_assets() {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((TAdSinglePlyChrSelectGC *)0x440)->alloc());
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &TOSensorGeneral01__resource_descriptor, 0, 0, 0));
    }
    (*(u8 * *)&sensor_general_shared_bml_archive) = var_r0;
    temp_r3_2 = (s32 *)(mem_alloc(8));
    TOSensorGeneral01__texture_lists = temp_r3_2;
    *(s32 *)((s8 *)temp_r3_2 + 4) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&sensor_general_shared_bml_archive) + 0x42C)) + 0xC);
    *TOSensorGeneral01__texture_lists = load_gvm_texture_file((void *) (&lbl_80442A80.value));
}

void *__dt__17TOSensorGeneral01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TOSensorGeneral01;
        __dt__8TOSensorFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TOSensorGeneral01__ct(void *arg0, void *arg1, void *arg2) {
    TOSensor__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TOSensorGeneral01;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3154;
    ((VObj_801763E4 *)arg0)->m5(arg2);
    ((TOKey *)arg0)->init_switch_id();
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *TOSensorGeneral01__texture_lists;
    *(void **)((s8 *)arg0 + 0x34) = (void *) *(void **)((s8 *)(*(void **)((s8 *)(*(void * *)&sensor_general_shared_bml_archive) + 0x42C)) + 8);
    *(f32 *)((s8 *)arg0 + 0xC0) = 400.0f;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(f32 *)((s8 *)arg0 + 0xCC) = 50.0f + *(f32 *)((s8 *)arg0 + 0x68);
    if (*(f32 *)((s8 *)arg0 + 0xCC) < 0.0f) {
        *(f32 *)((s8 *)arg0 + 0xCC) = 0.0f;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
        *(s32 *)((s8 *)arg0 + 0xD0) = 2;
    } else {
        *(s32 *)((s8 *)arg0 + 0xD0) = 1;
    }
    *(s32 *)((s8 *)arg0 + 0xE8) = 0;
    *(s32 *)((s8 *)arg0 + 0xEC) = 3;
    *(s32 *)((s8 *)arg0 + 0xF0) = 0x5A;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_fs_obj_sensor_model_names[2] = { lbl_80442A38, NULL };
BmlResourceDescriptor TOSensorGeneral01__resource_descriptor = { lbl_80442A4C, bm_fs_obj_sensor_model_names, bm_fs_obj_sensor_motion_names, 1, 0 };
__declspec(section ".sdata") const char *bm_fs_obj_sensor_motion_names[1] = { NULL };
}
