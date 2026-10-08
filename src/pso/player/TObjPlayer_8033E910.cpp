#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct Item_8033EC40 { u8 b[0x24]; };

struct O_8033EC40 { u8 pad[0x1C]; Item_8033EC40 *items; s32 n; };

typedef s32 M2C_UNK;
struct Item_8033EB4C {
    u8 a[0xC];
    u8 b[0xC];
    s32 p18;
    s32 p1C;
    u16 scene;
    u8 obj;
    u8 pad23;
};

struct O_8033EB4C { u8 pad[0x1C]; Item_8033EB4C *items; s32 n; };

extern "C" {
s32 TCameraCtrl__sub_800689F4();
M2C_UNK calc_projection_screen_offset(void *, void *);
f64 calc_camera_fov_degrees();
M2C_UNK set_tex_coord_gen2(int, int, int, int);
M2C_UNK PSMTXConcat(void *, void *, void *);
M2C_UNK C_MTXLightPerspective(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
int set_global_effect_state__10TObjPlayerFi(void*);
int TObjPlayer__sub_803DC83C(void*);
int TObjPlayer__sub_803DC850(void*);
M2C_UNK load_current_pos_matrix(int);
M2C_UNK load_current_tex_matrix(int);
extern const f64 lbl_804783B0;
extern u32 lbl_805D4DF0;
extern s32 lbl_805D7774;
extern const f32 lbl_805DFAC8;
extern const f32 lbl_805DFACC;
extern const f32 lbl_805DFAD0;
void setup_projection_tex_matrix__10TObjPlayerFv(void);
void copy_node_record__10TObjPlayerFii(s32 arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *);
void TLobby__sub_8033EE38(void *);
void clear_item_list__6TLobbyFPv(O_8033EC40 *arg0);
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK set_tev_direct__13TParticleCtrlFi(int);
M2C_UNK play_indirect_effect_recipe(int, int, int);
M2C_UNK get_object__13TParticleCtrlFPv(int);
void init_particle_effect__10TObjPlayerFv(void);
void reset_effects__10TObjPlayerFv(void);
void setup_projection_tex_matrix__10TObjPlayerFv(void);
M2C_UNK rotate_matrix_by_node_angles(void *, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
int set_global_param__8TObjFishFi(void);
M2C_UNK draw_ginja_object(int);
M2C_UNK set_current_scene__6TSceneFi(int);
void draw_ginja_item_list__10TObjPlayerFPv(O_8033EB4C *self);
}

extern "C" {

void free_indexed_entry__10TObjPlayerFPv(void *arg0, s32 _w1);
void init_particle_effect__10TObjPlayerFv(void);
void reset_effects__10TObjPlayerFv(void);
int TObjPlayer__sub_803078B0(void);
int TObjPlayer__sub_803DC83C(void*);
int TObjPlayer__sub_803DC850(void*);
int load_list_texture(int, int, int, int);
int set_global_effect_state__10TObjPlayerFi(void*);
int set_global_param__8TObjFishFi(void);

void init_particle_effect__10TObjPlayerFv(void) { TObjPlayer__sub_803078B0(); set_global_param__8TObjFishFi(); load_list_texture(0, 0, 0, 2); }

    extern int some_id_805c6f74;
void reset_effects__10TObjPlayerFv(void) { TObjPlayer__sub_803DC850((void*)0); TObjPlayer__sub_803DC83C((void*)0); set_global_effect_state__10TObjPlayerFi((void*)0); some_id_805c6f74 = (some_id_805c6f74 & 0xfff7ffff); }

void setup_projection_tex_matrix__10TObjPlayerFv(void) {
    u8 sp10[0x30];
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    if ((u32) lbl_805D4DF0 != 0U) {
        push_matrix();
        calc_projection_screen_offset((void *) (&spC), (void *) (&sp8));
        temp_f31 = (f32) (lbl_804783B0 * calc_camera_fov_degrees());
        if (TCameraCtrl__sub_800689F4() != 0) {
            C_MTXLightPerspective((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DFAC8), (f32) (lbl_805DFACC), (f32) (lbl_805DFAD0), (f32) (lbl_805DFACC - spC), (f32) (lbl_805DFACC - sp8));
        } else {
            C_MTXLightPerspective((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DFAC8), (f32) (lbl_805DFACC), (f32) (lbl_805DFAD0), (f32) (lbl_805DFACC), (f32) (lbl_805DFACC));
        }
        PSMTXConcat((void *) (&sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
        load_current_tex_matrix((int) (2));
        pop_matrix();
        load_current_pos_matrix((int) (2));
        GXSetTevOrder((int) (1), (int) (1), (int) (2), (int) (4));
        GXSetTevOp((int) (1), (int) (1));
        set_tex_coord_gen2((int) (1), (int) (0), (int) (0), (int) (0x24));
        (*(s32 *)&some_id_805c6f74) |= 0x80000;
        TObjPlayer__sub_803DC850((void*)((int) (1)));
        TObjPlayer__sub_803DC83C((void*)((int) (1)));
        set_global_effect_state__10TObjPlayerFi((void*)((int) (1)));
    }
}

void free_indexed_entry__10TObjPlayerFPv(void *arg0, s32 _w1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r0 < 0x10) {
        copy_node_record__10TObjPlayerFii((s32)(M2C_FIELD(arg0, s32 *, 0x1C) + (temp_r0 * 0x24)), (s32)(_w1));
    }
}
void copy_node_record__10TObjPlayerFii(s32 arg0, s32 arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    *(M2CCopy_C *)(arg0 + 0xC) = *(const M2CCopy_C *)(arg1 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, u16 *, 0x20) = (u16) M2C_FIELD(arg1, u16 *, 0x20);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) M2C_FIELD(arg1, u8 *, 0x22);
    M2C_FIELD(arg0, u8 *, 0x23) = (u8) M2C_FIELD(arg1, u8 *, 0x23);
}

void draw_ginja_item_list__10TObjPlayerFPv(O_8033EB4C *self) {
    s32 i;
    for (i = 0; i < self->n; i++) {
        get_object__13TParticleCtrlFPv(self->items[i].obj);
        set_current_scene__6TSceneFi(self->items[i].scene);
        set_depth_buffer_settings_1__Fv();
        set_depth_buffer_settings_id__FUl(3);
        push_matrix();
        post_translate_matrix(self->items[i].a);
        rotate_matrix_by_node_angles(self->items[i].b, 1);
        play_indirect_effect_recipe(self->items[i].obj, 1, 1);
        ((void (*)(void *))init_particle_effect__10TObjPlayerFv)(self);
        ((void (*)(void *))setup_projection_tex_matrix__10TObjPlayerFv)(self);
        ((void (*)(s32))set_global_param__8TObjFishFi)(self->items[i].p18);
        draw_ginja_object(self->items[i].p1C);
        pop_matrix();
        set_tev_direct__13TParticleCtrlFi(1);
        ((void (*)(void *))reset_effects__10TObjPlayerFv)(self);
    }
}

void clear_item_list__6TLobbyFPv(O_8033EC40 *arg0) {
    s32 i;
    if (arg0->items == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    for (i = 0; i < arg0->n; i++) {
        TLobby__sub_8033EE38(&arg0->items[i]);
    }
    arg0->n = 0;
}

}
