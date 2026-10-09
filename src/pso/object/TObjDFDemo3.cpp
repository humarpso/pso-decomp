#include "types.h"
#pragma readonly_strings on
typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, M2C_UNK);
u32 create_particle_emitter(void *, M2C_UNK);
M2C_UNK set_flags__11TBoss4Type2FPvUi(void *, M2C_UNK);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D89D0;
extern const f32 lbl_805D89DC;
void update_timed_effect__11TBoss4Type2FPv(u8 *arg0);
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK set_draw_callback_list__8TObjFishFPv(s32);
M2C_UNK rotate_matrix_y(s32, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK func_803e11e8__FUl(u32);
M2C_UNK func_803e11f0__Fv();
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
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
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern Pose_8004EB78 lbl_80437384;
extern s32 boss4_zanzo_bml_index_table[];
extern s32 lbl_805D2788;
extern const f32 lbl_805D89CC;
}

struct Vec_8004F030 { f32 x, y, z; };

struct IVec_8004F030 { s32 x, y, z; };

struct D_8004F030 { u8 head[0x20]; };

struct S_EF94 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0x90 - 0x1c];
    void *ptr[1];
    u8 pad94[0xb8 - 0x94];
    void *fb8;
};

extern "C" {
s32 is_ending_or_split_screen__14TBoss4DarkFalzFv();
void restore_player_cameras();
void init_state_1__8TObjFishFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, s32);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 TObjFish__sub_800E3124(void *, void *);
M2C_UNK vec3_add_to(void *, void *);
f32 vector_length(void *);
M2C_UNK normalize_vector(void *);

void render_shadows__7TObjectFv();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void reset_motion_fields__10TObjPlayerFPv();
void TParticleCtrl__sub_801A2124();
void update_object_view_visibility();
void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C();
S_EF94 *fn_8004EF94(S_EF94 *o, s16 flag);
u8 *TObjDFDemo3__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void * create__11TObjDFDemo3FPvPvPv(void *arg0, void *arg1, void *arg2);

const char *lbl_805D2790 = "TObjDFDemo3";
__declspec(section ".rodata") IVec_8004F030 lbl_804373A4 = {0, 0, 0};
void *lbl_804856C0[8] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0xffffffff, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804856E0[3] = {
    (void *)0x60000, (void *)0x0, (void *)0x3f800000,
};
void *lbl_804856EC[13] = {
    (void *)0x0, (void *)0x0, (void *)&fn_8004EF94, (void *)&update_timed_effect__11TBoss4Type2FPv,
    (void *)&TObjPlayer__sub_8004ED28, (void *)&render_shadows__7TObjectFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__10TObjPlayerFPv, (void *)&TParticleCtrl__sub_801A2124, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&TObjRoomId__sub_801A1E2C,
};

void TObjPlayer__sub_8004ED28(u8 *arg0) {
    f32 a = 1.0f;
    s32 t = M2C_FIELD(arg0, s32 *, 0xB0);
    if (t < 5) {
        a = (f32)t / 5.0f;
    } else if (t > 0x86) {
        a = (f32)(0x8B - t) / 5.0f;
    }
    if (a <= 0.0f) {
        return;
    }
    if (a < 1.0f) {
        TObjPlayer__sub_80052390(a);
    }
    push_matrix();
    set_global_flag__10TObjPlayerFv();
    post_translate_matrix(arg0 + 0xA0);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xAC));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x98));
    set_draw_callback_list__8TObjFishFPv(M2C_FIELD(arg0, s32 *, 0xB8));
    func_803e11e8__FUl(1);
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xB4));
    clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0xB8));
    func_803e11e8__FUl(2);
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xB4));
    func_803e11f0__Fv();
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    if (a < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

#pragma push
#pragma opt_common_subs off
void update_timed_effect__11TBoss4Type2FPv(u8 *arg0) {
    f32 cur;
    f32 nxt;
    s32 temp_r0;
    s32 temp_r0_2;
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) >= 0x5A) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x90));
            M2C_FIELD(arg0, u32 *, 0x90) = 0U;
        }
    } else {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x90);
        if (temp_r3 == 0U) {
            M2C_FIELD(arg0, u32 *, 0x90) = create_particle_emitter(arg0 + 0xBC, 0x1BD);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
                set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x90), 0x40);
            }
        } else if (temp_r3 != 0U) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3, arg0 + 0xBC);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) == 0x86) {
        temp_r3 = spawn_particle_effect(arg0 + 0xA0, 0x9B);
        if (temp_r3 != 0U) {
            set_flags__11TBoss4Type2FPvUi((void *) temp_r3, 0x40);
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((temp_r0 == 0x28) || (temp_r0 == 0x3C)) {
        play_sound_effect(0x4003D03A, arg0 + 0xA0, 0, 1);
    }
    if ((M2C_FIELD(arg0, f32 *, 0xB4) += 1.0f) > 119.0f) {
        M2C_FIELD(arg0, f32 *, 0xB4) = 119.0f;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB0) + 1;
    M2C_FIELD(arg0, s32 *, 0xB0) = temp_r0_2;
    if (temp_r0_2 >= 0x8C) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

S_EF94 *fn_8004EF94(S_EF94 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = lbl_804856EC;
        if (o->fb8 != 0) {
            init_state_1__8TObjFishFPv(o->fb8);
            o->fb8 = 0;
        }
        for (i = 0; i < 1; i++) {
            if (o->ptr[i] != 0) {
                request_destroy__11TBoss4Type2FUi(o->ptr[i]);
                o->ptr[i] = 0;
            }
        }
        if (is_ending_or_split_screen__14TBoss4DarkFalzFv() == 0) {
            restore_player_cameras();
        }
        destroy_particle__13TParticleCtrlFPvs(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

#define lbl_804856C0 ((u8 *)lbl_804856C0)
u8 *TObjDFDemo3__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 cnt;
    TPhotonMagicSquare__sub_801A2640(arg0, (void *)arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *)lbl_804856EC;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2790;
    VecCopy__FP3VecPC3Vec(arg0 + 0xA0, (void *)arg2);
    M2C_FIELD(arg0, f32 *, 0xA4) = 0.0f;
    {
        Vec_8004F030 v = *(Vec_8004F030 *)(arg0 + 0xA0);
        v.y = 0.0f;
        if (!(vector_length(&v) <= 0.01f)) {
            normalize_vector(&v);
            v.x *= -50.0f;
            v.z *= -50.0f;
            vec3_add_to(arg0 + 0xA0, &v);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = arg3;
    cnt = get_instance_count__9TBoss4UroFv();
    M2C_FIELD(arg0, s32 *, 0x94) = get_bml_model(cnt, 0x12);
    M2C_FIELD(arg0, s32 *, 0x98) = TObjFish__sub_8001EDB0(cnt, 0x12);
    M2C_FIELD(arg0, s32 *, 0x9C) = get_bml_motion(cnt, 0x45);
    M2C_FIELD(arg0, f32 *, 0xB4) = -1.0f;
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    activate_camera_mode(5);
    {
        IVec_8004F030 c = lbl_804373A4;
        c.y = M2C_FIELD(arg0, s32 *, 0xAC);
        set_scripted_camera_pose(arg0 + 0xA0, arg0 + 0xA0, &c);
    }
    cache_target_and_forward__11TCameraCtrlFii((void *)lbl_804856E0, 0x1555);
    M2C_FIELD(arg0, s32 *, 0xB8) = TObjFish__sub_800E3124((u8 *)lbl_804856C0, arg0 + 0xBC);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    return arg0;
}
#undef lbl_804856C0

void * create__11TObjDFDemo3FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *, void *))TObjDFDemo3__ct)(o, arg0, arg1, arg2);
    }
    return o;
}

}
