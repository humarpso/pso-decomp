#include "types.h"
#include "pso/misc/TOVS2Wall01.h"

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

struct VBase_8017C0A4 { char pad[0x18]; };

struct VObj_8017C0A4 : VBase_8017C0A4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
s32 TOVS2Wall01__sub_8017B9AC(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
s32 update_obstruction_fade(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
s32 draw_ginja_object(int);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void calc_attach_pos__10TObjPlayerFv(void *);
void construct_actor_base__10TObjPlayerFPvPv(void *, void *);
void obj_setFlags30(void *, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
void activate_and_dispatch__10TObjPlayerFv(void *, s32, f32);
void init_and_activate__10TObjPlayerFv(void *);
void set_indexed_flags(void *, s32, s32);
void reset_photon_effect__10TObjPlayerFv(void *);
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
void unregister_object_by_id(void *);
int submit_cursor_candidate(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
int queue_destruction__7TObjectFv(void*);
int set_flag8__6TLobbyFPv(void*);

void TOVS2Wall01::release() { set_flag8__6TLobbyFPv(this); queue_destruction__7TObjectFv(this); }
int TOVS2Wall01::interact_player_neg1() { return submit_cursor_candidate(this, -1); }

void TOVS2Wall01::run_task() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOVS2Wall01__sub_8017B9AC((void *) (arg0));
        return;
    }
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    default:
        *(s16 *)((s8 *)arg0 + 0x326) = 0;
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
    *(s32 *)((s8 *)arg0 + 0x35C) = ((VObj_18_26a62c *)(arg0))->m8(*(f32 *)((s8 *)arg0 + 0x334), *(f32 *)((s8 *)arg0 + 0x338));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x35C) == 1) {
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            var_r31 = 0;
        } else {
            var_r31 = updateFromCamera__15RenderFadeStateFPCf((void *) (arg0 + 0x340), (void *) (arg0 + 0x38));
        }
        if (var_r31 != 0) {
            lbl_805D5660 = model_render_flags;
            lbl_805D5664 = chunk_polygon_flags_and_mask;
            lbl_805D5668 = chunk_polygon_flags_or_mask;
            ((VObj_14_1eb8da *)((u8 *)(arg0) + (832)))->m6(chunk_polygon_flags_and_mask, model_render_flags);
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        draw_ginja_object((int) (*(s32 *)((s8 *)arg0 + 0x34)));
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
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
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
    init_and_activate__10TObjPlayerFv((u8 *)arg0 + 0x340);
    *(s32 *)((s8 *)arg0 + 0) = TOVS2Wall01__class_name;
    ((VObj_8017C0A4 *)arg0)->m5(arg1);
    calc_attach_pos__10TObjPlayerFv(arg0);
    obj_setFlags30(arg0, 0x60000000);
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model(TOVS2Wall01__bml_resource, 6);
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0(TOVS2Wall01__bml_resource, 6);
    init_collision_body_parts(arg0, ovs2wall01_collision_parts + 0x108, 1);
    set_indexed_flags(arg0, 0, 0x08000000);
    reset_photon_effect__10TObjPlayerFv(arg0);
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
