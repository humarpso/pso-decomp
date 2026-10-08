#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_802E4E44 { f32 x, y, z; };

struct Ent_802E4E44 { s32 active; u16 id; u8 pad[0x28 - 6]; };

struct Obj_802E4E44 {
    u8 pad0[0xA4];
    s32 state;
    Ent_802E4E44 ent[4];
    s32 count;
    s32 timer;
    f32 fade;
};

struct Cam_802E4E44 {
    u8 pad0[0x14];
    s32 f14;
    u8 pad18[4];
    Vec_802E4E44 a;
    Vec_802E4E44 b;
    u8 pad34[0x8];
};

typedef s32 M2C_UNK;
struct V2_802E4C70 { f32 x, y; };

struct Ent_802E4C70 { s32 active; u16 id; u8 name[0x12]; void *f18; s32 f1C; f32 f20; s32 f24; };

struct Obj_802E4C70 {
    u8 pad0[0x90];
    s32 f90;
    s32 f94;
    s32 f98;
    u8 pad9C[0xA8 - 0x9C];
    Ent_802E4C70 ent[4];
    s32 count;
    u8 pad14C[4];
    f32 f150;
};

extern "C" {
u32 get_player_by_client_id(u16);
M2C_UNK activate_camera_mode(s32);
M2C_UNK set_active_camera_pose_from_params(Cam_802E4E44 *);
void VecCopy__FP3VecPC3Vec(Vec_802E4E44 *, const Vec_802E4E44 *);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern Vec_802E4E44 lbl_80472B9C;
extern Vec_802E4E44 lbl_80472BA8;
void TObjOnlineEnding__sub_802E4E44(Obj_802E4E44 *arg0);
M2C_UNK draw_player_model_by_client__10TObjPlayerFUsiff(int, int, f32, f32);
u32 calc_text_width(void *);
M2C_UNK render_status_line__15TAdSubPlyItemGCFPvi(void *, int, f32, f32, f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_model_motion(int, int, f32);
extern f32 lbl_804E3A38[];
extern V2_802E4C70 lbl_804E3A44[];
extern const f32 lbl_805D3F94;
extern f32 lbl_805D3F98;
extern f32 lbl_805D68F0;
extern s8 lbl_805D68F8;
extern s8 lbl_805D68F9;
extern const f32 lbl_805DE930;
extern const f32 lbl_805DE934;
extern const f32 lbl_805DE938;
extern const f32 lbl_805DE93C;
extern const f32 lbl_805DE940;
extern const f32 lbl_805DE944;
void draw_scene__16TObjOnlineEndingFPv(Obj_802E4C70 *arg0);
}

extern "C" {

void create_result_window__16TObjOnlineEndingFPv(void *arg0);
void *destroy__16TObjOnlineEndingFPvs(void *arg0, s16 arg1);
M2C_UNK restore_player_cameras();
s32 TLobby__sub_8006F00C();
s32 TLobby__sub_80070ACC();
s32 TWindowChallengeResult__ct(s32, s32, s32, s32);
s32 TWindowSubStatusDisp__sub_800718D0();
M2C_UNK __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK close_window__16TObjOnlineEndingFPv(void *);
M2C_UNK destroy_particle__13TParticleCtrlFPvs(void *, M2C_UNK);
s32 get_card_window_value__16TObjOnlineEndingFv();
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 is_flag_set__6TLobbyFv();

void create_result_window__16TObjOnlineEndingFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r30_2;
    s32 temp_r30;
    s32 var_r29;

    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    if (is_flag_set__6TLobbyFv() != 0) {
        temp_r30 = get_layout_id__20TWindowSubStatusDispFv(-1) - 1;
        {
        s32 t = TLobby__sub_8006F00C();
        if (t == temp_r30) {
            var_r29 = __nw__7TObjectFUl(0x68);
            if (var_r29 != 0) {
                temp_r30_2 = get_card_window_value__16TObjOnlineEndingFv();
                temp_r31 = TWindowSubStatusDisp__sub_800718D0();
                var_r29 = TWindowChallengeResult__ct(var_r29, TLobby__sub_80070ACC(), temp_r31, temp_r30_2);
            }
            M2C_FIELD(arg0, s32 *, 0x154) = var_r29;
        }
        }
    }
}

extern const M2C_UNK lbl_804E3A64[];

void draw_scene__16TObjOnlineEndingFPv(Obj_802E4C70 *arg0) {
    s32 i;
    Ent_802E4C70 *e;
    if (lbl_805D68F8 == 0) {
        lbl_804E3A38[2] = lbl_805DE930 + lbl_805D68F0;
        lbl_805D68F8 = 1;
    }
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    post_translate_matrix(lbl_804E3A38);
    scale_matrix(0, lbl_805D3F94, lbl_805DE934, lbl_805DE934);
    set_global_param__8TObjFishFi(arg0->f94);
    draw_model_motion(arg0->f90, arg0->f98, arg0->f150);
    pop_matrix();
    for (i = 0; i < arg0->count; i++) {
        e = &arg0->ent[i];
        if (e->active != 0) {
            if (lbl_805D68F9 == 0) {
                lbl_804E3A44[0].y = lbl_805DE938 + lbl_805D3F98;
                lbl_804E3A44[1].y = lbl_805DE93C + lbl_805D3F98;
                lbl_804E3A44[2].y = lbl_805DE93C + lbl_805D3F98;
                lbl_804E3A44[3].y = lbl_805DE938 + lbl_805D3F98;
                lbl_805D68F9 = 1;
            }
            {
                u8 *name = e->name;
                u32 w = calc_text_width(name);
                V2_802E4C70 v = lbl_804E3A44[i];
                v.x -= (f32)(w >> 1);
                render_status_line__15TAdSubPlyItemGCFPvi(name, -1, v.x, v.y, lbl_805DE940);
            }
            push_matrix();
            post_translate_matrix(lbl_804E3A38);
            post_translate_matrix(e->f18);
            rotate_matrix_y(0, e->f1C);
            scale_matrix(0, e->f20, e->f20, e->f20);
            draw_player_model_by_client__10TObjPlayerFUsiff(e->id, e->f24, lbl_805DE944, lbl_805DE934);
            pop_matrix();
        }
    }
    end_effect_render__13TParticleCtrlFv();
}

void TObjOnlineEnding__sub_802E4E44(Obj_802E4E44 *arg0) {
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if (arg0->ent[i].active != 0 && get_player_by_client_id(arg0->ent[i].id) == 0) {
            arg0->ent[i].active = 0;
        }
    }
    switch (arg0->state) {
    case 0:
        arg0->state = 1;
        break;
    case 1: {
        activate_camera_mode(9);
        Vec_802E4E44 t1 = lbl_80472B9C;
        Vec_802E4E44 t2 = lbl_80472BA8;
        Cam_802E4E44 cam;
        VecCopy__FP3VecPC3Vec(&cam.a, &t1);
        VecCopy__FP3VecPC3Vec(&cam.b, &t2);
        cam.f14 = 0x1999;
        set_active_camera_pose_from_params(&cam);
        arg0->state = 2;
        break;
    }
    default:
        if ((arg0->fade += 0.3f) >= 17.0f) {
            arg0->fade = 17.0f;
        }
        if (++arg0->timer >= 450) {
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
}

void *destroy__16TObjOnlineEndingFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_804E3A64;
        close_window__16TObjOnlineEndingFPv(arg0);
        restore_player_cameras();
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
