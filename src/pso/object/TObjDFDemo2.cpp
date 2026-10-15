#include "types.h"
#pragma readonly_strings on

typedef struct Rec_8004E918 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004E918;

typedef struct Obj_8004E918 {
    u8 pad0[0x90];
    Rec_8004E918 recs[2];
    s32 fa8;
    f32 fac[3];
    s32 fb8;
    s32 fbc;
    f32 fc0;
} Obj_8004E918;

typedef struct Obj_8004EA2C {
    u8 pad0[0xA8];
    s32 fa8;
    f32 fac[3];
    u8 padb8[4];
    s32 ftimer;
    f32 fc0;
} Obj_8004EA2C;

extern "C" {
void TObjPlayer__sub_8004E918(Obj_8004E918 *arg0);
void fn_8004EA2C(Obj_8004EA2C *arg0);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
s32 queue_destruction__7TObjectFv(void *);
s32 request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, s32);
u32 create_particle_emitter(void *, s32);
s32 set_flags__11TBoss4Type2FPvUi(void *, s32);
s32 copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 play_sound_effect(s32, void *, s32, s32);
void update_timed_effect__11TBoss4Type2FPv(u8 *arg0);
s32 sync_player_globals__10TObjPlayerFv();
s32 TObjPlayer__sub_80052390(f32);
s32 clear_render_callback__8TObjFishFv(s32);
s32 set_draw_callback_list__8TObjFishFPv(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(s32);
s32 func_803e11e8__FUl(u32);
s32 func_803e11f0__Fv();
s32 draw_model_motion(s32, s32, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
void TObjPlayer__sub_8004ED28(u8 *arg0);
struct Ent_8004EB78 { s32 a; s32 b; s32 c; };
struct Obj_8004EB78 {
    s32 vt0;
    u8 pad4[0x18 - 0x4];
    void *vt18;
    u8 pad1c[0x90 - 0x1C];
    Ent_8004EB78 ent[2];
    void *a8;
    u8 pos[0xC];
    void *b8;
    s32 bc;
    f32 c0;
};
struct Pose_8004EB78 { s32 a; s32 b; s32 c; };
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 get_instance_count__9TBoss4UroFv();
s32 activate_camera_mode(int);
void set_scripted_camera_pose(void *, void *, void *);
void cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 construct_world_actor_base(void *, void *);
extern s32 boss4_zanzo_bml_index_table[];
}

extern "C" {

void *__dt__11TObjDFDemo2Fv(void *arg0, s16 arg1);
void * create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjDFDemo2__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void TLobby__sub_801A1FD8();
void TObjRoomId__sub_801A1E2C();
void TParticleCtrl__sub_801A2124();
void apply_object_set_data();
void classify_actor_view_detail();
void render_shadows__7TObjectFv();
void reset_motion_fields__10TObjPlayerFPv();
void update_object_view_visibility();

const char *TObjDFDemo2__name = "TObjDFDemo2";
__declspec(section ".rodata") Pose_8004EB78 lbl_80437384 = {0, 0, 0};
__declspec(section ".data") void *TObjDFDemo2__motion_index_table[2] = {
    (void *)0x12, (void *)0x11,
};
void *lbl_80485680[3] = {
    (void *)0x0, (void *)0x0, (void *)0x3f000000,
};
void *__vt__11TObjDFDemo2[13] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__11TObjDFDemo2Fv, (void *)&fn_8004EA2C,
    (void *)&TObjPlayer__sub_8004E918, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C,
};

void TObjPlayer__sub_8004E918(Obj_8004E918 *arg0) {
    f32 alpha;
    s32 i;
    alpha = 1.0f;
    if (arg0->fa8 == 0) {
        if (arg0->fbc >= 0xF0) {
            return;
        }
        if (arg0->fbc > 0xC8) {
            alpha = (f32)(0xF0 - arg0->fbc) / 40.0f;
        }
    }
    if (alpha <= 0.0f) {
        return;
    }
    if (alpha < 1.0f) {
        TObjPlayer__sub_80052390(alpha);
    }
    push_matrix();
    set_global_flag__10TObjPlayerFv();
    post_translate_matrix(arg0->fac);
    rotate_matrix_y(0, arg0->fb8);
    for (i = 0; i < 2; i++) {
        set_global_param__8TObjFishFi(arg0->recs[i].b);
        draw_model_motion(arg0->recs[i].a, arg0->recs[i].c, arg0->fc0);
    }
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    if (alpha < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}
void fn_8004EA2C(Obj_8004EA2C *arg0) {
    void *e;
    if (arg0->ftimer == 0x90) {
        e = (void *)spawn_particle_effect(arg0->fac, 0xC3);
        if (e != NULL) {
            set_flags__11TBoss4Type2FPvUi(e, 0x40);
        }
        play_sound_effect(0x4003AD15, arg0->fac, 0, 1);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    while (arg0->ftimer >= 0xB4) {
        if (arg0->fa8 != 0 || arg0->ftimer <= 0xDC) {
            e = (void *)spawn_particle_effect(arg0->fac, 0x14E);
            if (e != NULL) {
                set_flags__11TBoss4Type2FPvUi(e, 0x40);
            }
        }
        break;
    }
    if ((arg0->fc0 += 0.5f) > 119.0f) {
        arg0->fc0 = 119.0f;
    }
    if (++arg0->ftimer >= 0x118) {
        queue_destruction__7TObjectFv(arg0);
    }
}

void *__dt__11TObjDFDemo2Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__11TObjDFDemo2;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#define self ((Obj_8004EB78 *)arg0)
void *TObjDFDemo2__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    s32 k;
    s32 cnt;
    s32 i;

    construct_world_actor_base(self, arg1);
    self->vt18 = (u8 *)__vt__11TObjDFDemo2;
    self->vt0 = (s32) TObjDFDemo2__name;
    VecCopy__FP3VecPC3Vec(self->pos, arg2);
    self->b8 = arg3;
    self->a8 = arg4;
    cnt = get_instance_count__9TBoss4UroFv();
    for (i = 0; i < 2; i++) {
        s32 t = boss4_zanzo_bml_index_table[i];
        k = t;
        ((s32 *)self)[i * 3 + 0x24] = get_bml_model(cnt, t);
        ((s32 *)self)[i * 3 + 0x25] = TObjFish__sub_8001EDB0(cnt, k);
        ((s32 *)self)[i * 3 + 0x26] = get_bml_motion(cnt, ((s32 *)TObjDFDemo2__motion_index_table)[i]);
    }
    self->c0 = -0.5f;
    activate_camera_mode(5);
    {
        Pose_8004EB78 p = lbl_80437384;
        p.b = (s32) self->b8;
        set_scripted_camera_pose(self->pos, self->pos, &p);
    }
    cache_target_and_forward__11TCameraCtrlFii(lbl_80485680, 0x4444);
    play_sound_effect(0x4003A325, self->pos, 0, 1);
    self->bc = 0;
    return self;
}
#undef self
#pragma pop

void * create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjDFDemo2__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
