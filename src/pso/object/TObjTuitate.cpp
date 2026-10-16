#include "types.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjMotion.h"
#include "pso/object/TObjTuitate.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/object/TObjMapCsn.h"
#include "pso/player/TObjPlayer.h"

struct FadeBase_8019ADA0 { char pad[0x14]; };

struct Fade_8019ADA0 : FadeBase_8019ADA0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void begin();
    virtual void end();
};

struct ObjBase_8019ADA0 { char pad[0x18]; };

struct Obj_8019ADA0 : ObjBase_8019ADA0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 is_visible(f32, f32);
};

struct Vec_8019ADA0 { f32 x, y, z; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct ByteBlock_3C { u8 bytes[0x3c]; };

extern "C" {
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 isFading__15RenderFadeStateCFv(void *);
s32 matrix_mult_vec(int, void *, void *);
void rotate_matrix_y(int, int);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFl(void);
void draw_ginja_object(void);
extern u32 TObjTuitate__bml_resource;
extern const f32 lbl_805DBFA8;
extern const f32 lbl_805DBFAC;
extern const f32 lbl_805DBFC0;
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__13TUnk_804AF8A0Fv();
extern s32 TObjTuitate__collision_parts[];
extern s32 __vt__11TObjTuitate[];
extern s32 TObjTuitate__class_name;
extern const f32 lbl_805DBFB4;
extern const f32 lbl_805DBFAC;
extern const f32 lbl_805DBFBC;
void *TObjTuitate__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *TObjTuitate__create(void *arg0);
void *__dt__11TObjTuitateFv(void *arg0, s16 arg1);
void fn_8019B09C(void);
void TLobby__sub_8001FE7C(void*, int);
void free_collision_body_parts(void *);
int update_obstruction_fade(void*);
void __dt__13TUnk_804949A8Fv(void *, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void queue_destruction__7TObjectFv(void *);

void TObjTuitate::render() {
    Obj_8019ADA0 *self = (Obj_8019ADA0 *)this;
    u8 *arg0 = (u8 *)self;
    Vec_8019ADA0 v;
    s32 fading;
    if (self->is_visible(lbl_805DBFA8, lbl_805DBFAC) == 0) {
        return;
    }
    matrix_mult_vec(0, arg0 + 0x38, &v);
    if (v.z > lbl_805DBFC0) {
        ((RenderFadeState *)(arg0 + 0xAC))->fadeOut();
    } else {
        ((RenderFadeState *)(arg0 + 0xAC))->restore();
    }
    TObjFish::set_cull_back();
    if (TRaderMapCore::is_not_split_screen() == 1) {
        fading = 0;
    } else {
        fading = isFading__15RenderFadeStateCFv(arg0 + 0xAC);
    }
    if (fading != 0) {
        ((Fade_8019ADA0 *)(arg0 + 0xAC))->begin();
    }
    TObjFish__sub_8001EDB0((*(s32 *)&TObjTuitate__bml_resource), 0);
    set_global_param__8TObjFishFl();
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
    get_bml_model((*(s32 *)&TObjTuitate__bml_resource), 0);
    draw_ginja_object();
    pop_matrix();
    if (fading != 0) {
        ((Fade_8019ADA0 *)(arg0 + 0xAC))->end();
    }
    TObjFish::set_cull_none();
}

void TObjTuitate::run_task() { { (void)(update_obstruction_fade((char*)this + 0xac)); return; } }

extern s32 __vt__11TObjTuitate[];

void *__dt__11TObjTuitateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TObjTuitate;
        if (*(void **)((s8 *)arg0 + 0xC8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xC8)); *(s32 *)((s8 *)arg0 + 0xC8) = 0; }
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__13TUnk_804949A8Fv((s8 *)arg0 + 0xAC, -1);
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

#pragma push
#pragma opt_common_subs off
void *TObjTuitate__ct(void *arg0, void *arg1, void *arg2) {
    struct CopyStack_8019AF6C { u8 bytes[0x3C]; };
    CopyStack_8019AF6C copy_storage_8019AF6C;
    s32 temp_r4;
    construct_collider_proxy__13TUnk_804AF8A0Fv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TObjTuitate;
    ((TObjPlayer *)((u8 *)arg0 + 0xAC))->init_and_activate();
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjTuitate__class_name;
    ((VObj_18_1a504b *)(arg0))->m5((s32)arg2);
    init_collision_body_parts((void *) (arg0), (void *) (TObjTuitate__collision_parts), (int) (1));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    temp_r4 = (s32)arg2 - 4;
    *(ByteBlock_3C *)(copy_storage_8019AF6C.bytes) = *(const ByteBlock_3C *)(temp_r4 + 4);
    (*(f32 *)(copy_storage_8019AF6C.bytes + 0x24)) = lbl_805DBFB4;
    (*(f32 *)(copy_storage_8019AF6C.bytes + 0x28)) = lbl_805DBFAC;
    (*(f32 *)(copy_storage_8019AF6C.bytes + 0x2C)) = lbl_805DBFBC;
    *(s32 *)((s8 *)arg0 + 0xC8) = TObjMapCsn::create((s32)((void *) ((copy_storage_8019AF6C.bytes))));
    ((TObjPlayer *)((u8 *)arg0 + 0xAC))->activate_and_dispatch();
    return arg0;
}
#pragma pop

void *TObjTuitate__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjTuitate__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 TObjTuitate__bml_resource;

void fn_8019B09C(void) {
    if ((u32) TObjTuitate__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjTuitate__bml_resource, 1);
        TObjTuitate__bml_resource = 0U;
    }
}

}
