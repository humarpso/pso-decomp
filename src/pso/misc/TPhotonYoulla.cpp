#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Color_801AE744 { f32 a, r, g, b; };

struct Vec_801AE744 { f32 x, y, z; };

struct Self_801AE744 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AE744 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x184 - 0x64];
    Color_801AE744 color;
    u8 pad4[0x1A0 - 0x194];
    s32 started;
};

extern "C" {
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 set_photon_blast_joint_callback__10TObjPlayerFPv(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 set_current_scene__6TSceneFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801AE744 lbl_8050BEC0;
extern Color_801AE744 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__13TPhotonYoullaFv(Self_801AE744 *self);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, s32);
void set_animation__10TObjPlayerFPvs(void *, s16);
u8 * find_entity_by_id(u16);
u8 * photon_base_ct(void *);
void TObjPlayer__sub_801AE72C(void *, u8);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK spawn_photon_blast_opening_effects(int, int);
M2C_UNK spawn_photon_blast_attachment_effects(void *, M2C_UNK);
extern u8 lbl_804C3B48[];
extern M2C_UNK __vt__13TPhotonYoulla[];
extern s32 lbl_805D3528;
extern u8 *lbl_805D5D28;
u8 *TPhotonYoulla__ct(u8 *arg0, u8 *arg1);
}

extern "C" {

void TObjPlayer__sub_801AEB74(void);
void TObjPlayer__sub_801AEB80(void);
void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1);
void run_task__13TPhotonYoullaFv(void *arg0);
M2C_UNK advance_animation_playback(void *);
s32 test_action_mask__10TObjPlayerFPvi(s32, s32);
s32 get_game_play_mode();
int is_locally_controlled__10TObjPlayerFPv(void*);
M2C_UNK update_photon_blast_attachments(void *);
M2C_UNK spawn_photon_blast_attachment_effects(void *, M2C_UNK);
s32 TObjPlayer__sub_801AF868(s32);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
s32 emit_idle_water_effect(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 has_water_ground_flag(s32);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 get_player_by_client_id(u16);
void __dl__7TObjectFPv(void *);
s32 check_camera_mode__10TObjPlayerFv();
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 check_flag_800000__10TObjPlayerFPv(s32);
void destroy_photon_motion_object(void *, int);
void free_photon__10TObjPlayerFPv(void *);
s32 get_main_phase();
int get_max_level__10TObjPlayerFv(void);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 reset_volopt_state__10TObjPlayerFv(s32);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, M2C_UNK);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
int test_flag_2000000__10TObjPlayerFPv(void*);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
s32 update_movement_by_screen__10TObjPlayerFv(s32);

extern const f64 lbl_80446F18;
extern const f32 lbl_805DC264;
extern const f32 lbl_805DC268;
extern const f32 lbl_805DC26C;
extern const f32 lbl_805DC270;
extern const f32 lbl_805DC274;

void render__13TPhotonYoullaFv(Self_801AE744 *self) {
    if (self->started != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        push_matrix();
        post_translate_matrix(&self->pos);
        rotate_matrix_y(0, self->f60);
        lbl_805D5660 = some_id_805c6f74;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8050BEC0, &lbl_8058D4C0);
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 |= 0x200820;
        set_global_flag__10TObjPlayerFv();
        set_current_scene__6TSceneFi(0);
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        set_photon_blast_joint_callback__10TObjPlayerFPv(self);
        draw__16TObjEneRe7BeruraFPv(self);
        clear_global_state__10TObjPlayerFv();
        set_current_scene__6TSceneFi(0xBF);
        clear_render_context__10TObjPlayerFv(self);
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&lbl_8058D4C0, &lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__13TPhotonYoullaFv(void *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
    }
    if ((lbl_805DC264 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        spawn_photon_blast_attachment_effects(arg0, 6);
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
    }
    M2C_FIELD(arg0, s16 *, 0x194) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    advance_animation_playback(arg0);
    update_photon_blast_attachments(arg0);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    M2C_FIELD(arg0, s32 *, 0x1A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A4) + 1);
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A4) > lbl_805DC268) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x184);
        if (temp_f1 > lbl_805DC26C) {
            M2C_FIELD(arg0, f32 *, 0x184) = (f32) (temp_f1 - lbl_805DC270);
        }
    }
    if (lbl_805DC274 == (f32) M2C_FIELD(arg0, s32 *, 0x1A4)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__13TPhotonYoulla[];

void *__dt__13TPhotonYoullaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TPhotonYoulla;
        free_photon__10TObjPlayerFPv(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D5D60;

u8 *TPhotonYoulla__ct(u8 *arg0, u8 *arg1) {
    u8 *temp_r3;
    photon_base_ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TPhotonYoulla;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3528;
    M2C_FIELD(arg0, s32 *, 0x138) = 5;
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x38), (void *) (arg1));
    M2C_FIELD(arg0, u16 *, 0x17C) = (u16) M2C_FIELD(arg1, u16 *, 0xC);
    M2C_FIELD(arg0, u8 **, 0x180) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x180));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 0xBC);
    set_field_d8__10TObjPlayerFPvi(arg0, (s32) lbl_804C3B48);
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD(lbl_805D5D28, s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, s16 *, 0x194) = 1;
    M2C_FIELD(arg0, s32 *, 0x198) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    TObjPlayer__sub_801AE72C(arg0, M2C_FIELD(arg1, u8 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x198) == 0) {
        set_field_b8__14TObjEnePanarmsFPvs(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x198) = 1;
        M2C_FIELD(arg0, s16 *, 0x194) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A0) = 1;
        spawn_photon_blast_attachment_effects(arg0, 6);
    } else {
        spawn_photon_blast_opening_effects((int) (6), (int) (M2C_FIELD(arg0, u16 *, 0x17C)));
    }
    return arg0;
}

void TObjPlayer__sub_801AEB74(void) { lbl_805D5D60 = 0; }

void TObjPlayer__sub_801AEB80(void) {  }

}
