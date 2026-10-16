#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/misc/TOVS2Wall01.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct VBase_14_1eb8da { char pad[0x14]; };

struct VObj_14_1eb8da : VBase_14_1eb8da {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6(s32, s32);
    virtual s32 m7();
};

extern "C" {
s32 TOVS2Wall01__sub_8017B9AC(void *);
s32 update_obstruction_fade(void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_object(int);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void construct_actor_base__10TObjPlayerFPvPv(void *, void *);
void obj_setFlags30(void *, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
void activate_and_dispatch__10TObjPlayerFv(void *, s32, f32);
void set_indexed_flags(void *, s32, s32);
void init_collision_body_parts(void *, void *, s32);
extern u8 ovs2wall01_collision_parts[];
extern s32 __vt__11TOVS2Wall01[];
extern s32 TOVS2Wall01__class_name;
extern s32 TOVS2Wall01__bml_resource;
extern void *tl_05;
extern const f32 lbl_805DBAAC;
extern const f32 lbl_805DBAB0;
void *TOVS2Wall01__ct(void *arg0, void *arg1);
}

extern "C" {

void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1);
void free_collision_body_parts(void *);
void TObjPlayer__sub_800D7C58(void *, int);
int submit_cursor_candidate(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
int queue_destruction__7TObjectFv(void*);

void TOVS2Wall01::release() { set_flag8(); queue_destruction__7TObjectFv(this); }
int TOVS2Wall01::interact_player_neg1() { return submit_cursor_candidate(this, -1); }

void TOVS2Wall01::run_task() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    if (TObjPlayer::check_demo_mode() == 1) {
        TOVS2Wall01__sub_8017B9AC((void *) (arg0));
        return;
    }
    temp_r0 = this->mode;
    switch (temp_r0) {
    default:
        this->mode = 0;
    case 0:
        interact_player_neg1();
        return;
    case 1:
        release();
        return;
    }
}

void TOVS2Wall01::render() {
    u8 *arg0 = (u8 *)this;
    s32 var_r31;
    update_obstruction_fade((void *) (arg0 + 0x340));
    *(s32 *)&this->m_35c = ((VObj_18_26a62c *)(arg0))->m8(*(f32 *)((s8 *)arg0 + 0x334), this->m_338);
    if ((s32) *(s32 *)&this->m_35c == 1) {
        if (TRaderMapCore::is_not_split_screen() == 1) {
            var_r31 = 0;
        } else {
            var_r31 = ((RenderFadeState *)(arg0 + 0x340))->updateFromCamera((const f32*)(arg0 + 0x38));
        }
        if (var_r31 != 0) {
            lbl_805D5660 = model_render_flags;
            lbl_805D5664 = chunk_polygon_flags_and_mask;
            lbl_805D5668 = chunk_polygon_flags_or_mask;
            ((VObj_14_1eb8da *)((u8 *)(arg0) + (832)))->m6(chunk_polygon_flags_and_mask, model_render_flags);
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->rotation_y));
        TObjFish::set_global_param((int) (this->texture_id));
        draw_ginja_object((int) (*(s32 *)&this->model));
        pop_matrix();
        if (var_r31 != 0) {
            ((VObj_14_1eb8da *)((u8 *)(arg0) + (832)))->m7();
            chunk_polygon_flags_and_mask = lbl_805D5664;
            chunk_polygon_flags_or_mask = lbl_805D5668;
            model_render_flags = lbl_805D5660;
        }
    }
}

void *TOVS2Wall01::create() {
    void *o = __nw__7TObjectFUl(0x360);
    if (o != NULL) {
        o = TOVS2Wall01__ct((void *)(o), (void *)(this));
    }
    return o;
}

extern s32 __vt__11TOVS2Wall01[];

void *__dt__11TOVS2Wall01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TOVS2Wall01;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x340, -1);
        ((TUnk_804806E8 *)arg0)->destroy_motion_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
void *TOVS2Wall01__ct(void *arg0, void *arg1) {
    s32 t;
    construct_actor_base__10TObjPlayerFPvPv(arg0, tl_05);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TOVS2Wall01;
    ((TObjPlayer *)((u8 *)arg0 + 0x340))->init_and_activate();
    *(s32 *)((s8 *)arg0 + 0) = TOVS2Wall01__class_name;
    ((TOVS2Wall01 *)arg0)->vfunc_7(arg1);
    ((TObjPlayer *)arg0)->calc_attach_pos();
    obj_setFlags30(arg0, 0x60000000);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model(TOVS2Wall01__bml_resource, 6);
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0(TOVS2Wall01__bml_resource, 6);
    init_collision_body_parts(arg0, ovs2wall01_collision_parts + 0x108, 1);
    set_indexed_flags(arg0, 0, 0x08000000);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(f32 *)((s8 *)arg0 + 0x334) = lbl_805DBAAC;
    *(f32 *)((s8 *)arg0 + 0x338) = lbl_805DBAB0 + *(f32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    t = *(s32 *)((s8 *)arg0 + 0x84);
    *(s32 *)((s8 *)arg0 + 0x33C) = t + 0x100;
    activate_and_dispatch__10TObjPlayerFv((u8 *)arg0 + 0x340, t, lbl_805DBAB0);
    *(s32 *)((s8 *)arg0 + 0x35C) = 1;
    return arg0;
}
#pragma pop

}
