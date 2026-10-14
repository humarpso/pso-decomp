#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801AA930 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Vec_801AA710 { f32 x, y, z; };

struct Packet_801AA710 { u32 w[8]; };

struct Self_801AA710 {
    u8 pad0[0x38];
    Vec_801AA710 pos;
    u8 pad1[0x150 - 0x44];
    f32 f150;
    u8 pad2[0x17C - 0x154];
    u16 id;
};

struct Owner_801AA710 { u8 pad[0x60]; s32 f60; };

struct Color_801AA818 { f32 a, r, g, b; };

struct Vec_801AA818 { f32 x, y, z; };

struct Self_801AA818 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AA818 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x180 - 0x14E];
    Color_801AA818 color;
    u8 pad5[0x19C - 0x190];
    s32 started;
};

extern "C" {
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 advance_animation_playback(void *);
u8 *find_entity_by_id(u16);
s32 begin_photon_summon_camera(void *, int);
s32 update_photon_blast_attachments(void *);
s32 spawn_photon_blast_attachment_effects(void *, int);
s32 update_state__10TSceneSoraFPv(void *);
s32 construct_photon_magic_square_normal(int, void *, int, void *, int);
s32 play_persistent_sound(int, void *, int, int, int);
u32 __nw__7TObjectFUl(int);
extern const f32 lbl_805DC140;
extern const f32 lbl_805DC144;
extern const f32 lbl_805DC148;
extern const f32 lbl_805DC14C;
extern const f32 lbl_805DC150;
void run_task__13TPhotonEstllaFv(u8 *arg0);
u8 *find_entity_by_id(u16);
s32 TPhotonLine__ct(void *, void *, void *, u16);
u32 __nw__7TObjectFUl(int);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern const Packet_801AA710 lbl_80446CE8;
extern u8 identity_matrix[];
extern const f32 lbl_805DC138;
extern const f32 lbl_805DC13C;
void spawn_line__13TPhotonEstllaFPv(Self_801AA710 *self);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 scroll_strip_uvs(void *, s16, int);
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 clear_render_context__10TObjPlayerFv(void *);
s32 set_photon_blast_joint_callback__10TObjPlayerFPv(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 translate_matrix(int, f32, f32, f32);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801AA818 saved_model_draw_color;
extern Color_801AA818 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *estlla_photon_blast_model;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void render__13TPhotonEstllaFv(Self_801AA818 *self);
}

extern "C" {

void spawn_line__13TPhotonEstllaFPv(Self_801AA710 *self) {
    Owner_801AA710 *owner;
    Vec_801AA710 forward;
    Vec_801AA710 direction;
    u32 line;
    owner = (Owner_801AA710 *)find_entity_by_id(self->id);
    forward.x = lbl_805DC138;
    forward.y = lbl_805DC138;
    forward.z = lbl_805DC13C;
    push_matrix_from(identity_matrix);
    if (owner) {
        rotate_matrix_y(0, owner->f60);
    }
    rotate_vector_by_matrix(0, &forward, &direction);
    pop_matrices(1);
    {
        Packet_801AA710 packet = lbl_80446CE8;
        *(Vec_801AA710 *)&packet.w[0] = self->pos;
        *(Vec_801AA710 *)&packet.w[3] = direction;
        *(f32 *)&packet.w[7] = self->f150;
        line = __nw__7TObjectFUl(0x378);
        if (line) {
            TPhotonLine__ct((void *)line, &packet, self, self->id);
        }
    }
}

void render__13TPhotonEstllaFv(Self_801AA818 *self) {
    if (self->started != 0) {
        scroll_strip_uvs(estlla_photon_blast_model, self->f14C, 0);
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        push_matrix();
        translate_matrix(0, self->pos.x, self->pos.y, self->pos.z);
        rotate_matrix_y(0, self->f60);
        set_photon_blast_joint_callback__10TObjPlayerFPv(self);
        lbl_805D5660 = model_render_flags;
        copy_vec4__13TRaderMapCoreFPvPv(&saved_model_draw_color, &model_material_color);
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        model_render_flags |= 0x200820;
        set_global_flag__10TObjPlayerFv();
        set_chunk_material_override_pair(-1, 0x800);
        set_chunk_material_color(&self->color);
        draw__16TObjEneRe7BeruraFPv(self);
        clear_global_state__10TObjPlayerFv();
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        copy_vec4__13TRaderMapCoreFPvPv(&model_material_color, &saved_model_draw_color);
        model_render_flags = lbl_805D5660;
        clear_render_context__10TObjPlayerFv(self);
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__13TPhotonEstllaFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AA930, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AA930, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801AA930, sp10) == 0x8) ? 1 : -1];
    Stack_801AA930 stack;
    f32 temp_f1;
    u32 temp_r3_2;
    u8 *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0x32) && ((s32) M2C_FIELD(arg0, s32 *, 0x19C) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x19C) = 1;
        temp_r3 = (u8 *)(find_entity_by_id(M2C_FIELD(arg0, u16 *, 0x17C)));
        if (temp_r3 != NULL) {
            stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0x38);
            stack.spC = lbl_805DC140 + M2C_FIELD(temp_r3, f32 *, 0x3C);
            stack.sp10 = M2C_FIELD(temp_r3, f32 *, 0x40);
        }
        temp_r3_2 = __nw__7TObjectFUl((int) (0xD0));
        if (temp_r3_2 != 0U) {
            construct_photon_magic_square_normal((int) (temp_r3_2), (void *) (arg0), (int) (1), (void *) (&stack.sp8), (int) (0x78));
        }
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 0x64) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1)) {
        begin_photon_summon_camera((void *) (arg0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        spawn_photon_blast_attachment_effects((void *) (arg0), (int) (1));
    }
    M2C_FIELD(arg0, s16 *, 0x190) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    update_state__10TSceneSoraFPv((void *) (arg0));
    advance_animation_playback((void *) (arg0));
    update_photon_blast_attachments((void *) (arg0));
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (M2C_FIELD(arg0, s16 *, 0x14C) + 0xF);
    M2C_FIELD(arg0, s16 *, 0x14C) = (s16) (u8) M2C_FIELD(arg0, s16 *, 0x14C);
    if (lbl_805DC144 == (f32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
        spawn_line__13TPhotonEstllaFPv((Self_801AA710 *)((void *) (arg0)));
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x1A0) > lbl_805DC148) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x180);
        if (temp_f1 > lbl_805DC14C) {
            M2C_FIELD(arg0, f32 *, 0x180) = (f32) (temp_f1 - lbl_805DC150);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x19C) != 0) {
        play_persistent_sound((int) (0x4002462F), (void *) (arg0), (int) (0), (int) (0), (int) (0));
    }
}

}
