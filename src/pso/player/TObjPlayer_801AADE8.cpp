#include "types.h"

struct Color_801AAF00 { f32 a, r, g, b; };

struct Vec_801AAF00 { f32 x, y, z; };

struct Self_801AAF00 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x38 - 0x28];
    Vec_801AAF00 pos;
    u8 pad2[0x60 - 0x44];
    s32 f60;
    u8 pad3[0x14C - 0x64];
    s16 f14C;
    u8 pad4[0x184 - 0x14E];
    Color_801AAF00 color;
    u8 pad5[0x1A0 - 0x194];
    s32 started;
};

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * alloc_tables__6TLobbyFPvii(void *, s32, s32);
extern u8 *photon_blast_shared_resource;
extern u32 estlla_photon_blast_model;
void create_estlla_photon_blast_model(void);
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
extern Color_801AAF00 saved_model_draw_color;
extern Color_801AAF00 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern void *farlla_photon_blast_model_buffers;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
void render__13TPhotonFarllaFPv(Self_801AAF00 *self);
}

extern "C" {

void TObjPlayer__sub_801AAE6C(void* a0);
void destroy_global_buffer__10TObjPlayerFv(void);
void update_all_slots__10TObjPlayerFPv(void *arg0);
s32 mark_enemy_body_contacts(void *);
s32 queue_photon_blast_hit(u16, s32, s32, f32);
s32 destroy_buffer_pair(void*, s32);
u32 get_battle_param__10TObjPlayerFi(s32);
s32 init_all_slots__10TObjPlayerFv();
u32 obj_getField1c();

extern u32 estlla_photon_blast_model;

void destroy_global_buffer__10TObjPlayerFv(void) {
    if ((u32) estlla_photon_blast_model != 0U) {
        destroy_buffer_pair((void*)estlla_photon_blast_model, 1);
    }
    estlla_photon_blast_model = 0U;
}

    extern const float lbl_805DC158;

void create_estlla_photon_blast_model(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFPvii((void *) temp_r3, *(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)photon_blast_shared_resource + 0x42C)) + 0x98)) + 0x2C), 0));
    }
    (*(s32 *)&estlla_photon_blast_model) = var_r0;
}

void TObjPlayer__sub_801AAE6C(void* a0) { *(float*)((char*)a0 + 0x184) = lbl_805DC158; *(float*)((char*)a0 + 0x188) = lbl_805DC158; *(float*)((char*)a0 + 0x18c) = lbl_805DC158; *(float*)((char*)a0 + 0x190) = lbl_805DC158; }

void update_all_slots__10TObjPlayerFPv(void *arg0) {
    s32 var_r31;

    init_all_slots__10TObjPlayerFv();
    mark_enemy_body_contacts(arg0);
    if (*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 0x18) & 0x100000) {
        var_r31 = 0;
        do {
            if (get_battle_param__10TObjPlayerFi(var_r31) != 0U) {
                queue_photon_blast_hit((u16) obj_getField1c(), 0, 0, *(f32 *)((s8 *)arg0 + 0x150));
            }
            var_r31 += 1;
        } while (var_r31 < 0x10);
    }
}
void render__13TPhotonFarllaFPv(Self_801AAF00 *self) {
    if (self->started != 0) {
        scroll_strip_uvs(farlla_photon_blast_model_buffers, self->f14C, 0);
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

}
