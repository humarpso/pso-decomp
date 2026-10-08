#include "types.h"
#include "pso/object/TObjDoor.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Node_8018E358 { s32 pad0; void *f4; };
struct Glob_8018E358 { s32 f0; s32 pad4; s32 pad8; Node_8018E358 *a; Node_8018E358 *b; };
struct Door_8018E358 { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; };

typedef s32 M2C_UNK;
struct DoorMotionHeader;
struct Color_8018E40C { f32 a; f32 r; f32 g; f32 b; };

struct Node_8018E40C { s32 pad0; void *f4; };

struct Glob_8018E40C { s32 f0; s32 pad4; Node_8018E40C *c; Node_8018E40C *a; Node_8018E40C *b; };

struct Door_8018E40C { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; u8 padB8[0xC]; f32 fC4; u8 padC8[8]; s32 fD0; };

struct Color_8018E5F4 { f32 a; f32 r; f32 g; f32 b; };

struct Node_8018E5F4 { s32 pad0; void *f4; };

struct Glob_8018E5F4 { s32 f0; s32 pad4; Node_8018E5F4 *c; Node_8018E5F4 *a; Node_8018E5F4 *b; };

struct Door_8018E5F4 { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; u8 padB8[0xC]; f32 fC4; u8 padC8[8]; s32 fD0; };

struct Color_8018E74C { f32 a; f32 r; f32 g; f32 b; };

struct Node_8018E74C { s32 pad0; void *f4; };

struct Glob_8018E74C { s32 f0; s32 f4; Node_8018E74C *c; Node_8018E74C *a; Node_8018E74C *b; };

struct Door_8018E74C { u8 pad0[0x38]; u8 f38[0x28]; s32 f60; u8 pad64[0x50]; f32 fB4; f32 fB8; u8 padBC[0x8]; f32 fC4; u8 padC8[8]; s32 fD0; };

struct Door_8018F15C;
struct DoorVB_8018F15C { char pad[0x18]; };

struct DoorVt_8018F15C : DoorVB_8018F15C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Door_8018F15C {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1c[0x30 - 0x1C];
    u32 f30;
    u8 pad34[0x84 - 0x34];
    u32 f84;
    u8 pad88[4];
    s32 f8C;
    u8 pad90[0xAC - 0x90];
    s32 fAC;
    s32 fB0;
    f32 fB4;
    f32 fB8;
    s8 fBC;
    u8 padbd[3];
    s32 fC0;
    f32 fC4;
    s32 fC8;
    s32 fCC;
    s32 fD0;
};

extern "C" {
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_object(void *);
void draw_ginja_model_with_motion(int, int, void *, f32);
extern Glob_8018E358 TObjDoor__data_8050DC80[];
void TObjDoor__sub_8018E8BC(void);
f32 sin_table_lookup(s32);
void update_anim__8TObjDoorFPv(void *arg0);
f32 xyz_distance_squared(void *, void *);
M2C_UNK project_world_to_screen(int, void *, void *);
extern s32 lbl_805D4DF0;
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
extern M2C_UNK __vt__8TObjDoor[];
void *__dt__8TObjDoorFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *TObjDoor__create(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
extern s32 TObjDoor__data_805D5BC0;
extern u32 lbl_805D5BC4;
void free_resources__8TObjDoorFv(void);
void *TObjDoorJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *TObjDoorJung__create(void *arg0);
void update_opening_glow__8TObjDoorFPv(u8 *arg0);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_object(void *);
void draw_ginja_model_with_motion(int, int, void *, f32);
void set_chunk_material_color(Color_8018E40C *);
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern s32 lbl_805D5660;
extern s32 TObjDoor__data_805D5BC0;
extern s32 some_id_805c6f74;
void render__8TObjDoorFPv(Door_8018E40C *arg0);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_object(void *);
void set_chunk_material_color(Color_8018E40C *);
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern s32 lbl_805D5660;
extern s32 TObjDoor__data_805D5BC0;
extern s32 some_id_805c6f74;
M2C_UNK draw_closed__8TObjDoorFPv(Door_8018E5F4 *arg0);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 load_gvm_texture_file(void *);
s32 get_bml_model(s32, s32);
s32 get_bml_motion(s32, s32);
extern u32 lbl_805D5BC4;
extern s32 TObjDoor__data_805D5BC0;
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
void load_resources__8TObjDoorFv(void);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_y(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_object(void *);
void draw_ginja_model_with_motion(int, int, void *, f32);
void set_chunk_material_color(Color_8018E40C *);
extern Glob_8018E358 TObjDoor__data_8050DC80[];
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
extern s32 lbl_805D5660;
extern s32 TObjDoor__data_805D5BC0;
extern s32 some_id_805c6f74;
M2C_UNK draw_locked__8TObjDoorFPv(Door_8018E74C *arg0);
void VecCopy__FP3VecPC3Vec(f32*,const f32*);
void set_active_camera_pose(f32*,f32*);
void restore_player_cameras();
s32 activate_camera_mode(s32);
void clear_player_status_flag__10TObjPlayerFPviUi(TObjDoor*,s32,u32);
void set_indexed_flags(TObjDoor*,s32,u32);
s32 check_player_door_proximity(TObjDoor*,s32,f32);
void play_persistent_sound(s32,TObjDoor*,f32*,s32,s32);
u8 is_current_floor_switch_set(u16);
extern s32 TObjDoor__data_805D5BC8;
void update_state__8TObjDoorFPv(TObjDoor* door);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK init_collision_body_parts(void *, void *, M2C_UNK);
M2C_UNK construct_collider_proxy__10TObjPlayerFPv(void *, void *);
extern M2C_UNK __vt__8TObjDoor[];
extern s32 lbl_805D3330;
void *TObjDoor__ct(void *arg0, void *arg1, void *arg2);
void draw_closed_glow__8TObjDoorFPv(TObjDoor* door);
}

extern "C" {

struct DoorMotionHeader { void* rows; u32 frameCount; };

void VecCopy__FP3VecPC3Vec(f32*,const f32*);
void set_active_camera_pose(f32*,f32*);
void restore_player_cameras();
s32 activate_camera_mode(s32);
void clear_player_status_flag__10TObjPlayerFPviUi(TObjDoor*,s32,u32);
void set_indexed_flags(TObjDoor*,s32,u32);
s32 check_player_door_proximity(TObjDoor*,s32,f32);
void play_persistent_sound(s32,TObjDoor*,f32*,s32,s32);
u8 is_current_floor_switch_set(u16);
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
extern s32 TObjDoor__data_805D5BC8;

void TObjDoor__sub_8018E890(void);
void update_timer__8TObjDoorFPv(void *arg0);

extern "C" {
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
}

extern "C" {
extern DoorMotionHeader* TObjDoor__data_8050DC78[];
}

extern "C" void update_locked_pulse__8TObjDoorFPv(TObjDoor *door);
extern "C" void draw_closing__8TObjDoorFPv(Door_8018E358 *arg0);
extern "C" void draw_model__8TObjDoorFPv(Door_8018E358 *arg0);
extern "C" u8 lbl_804454A0[];
extern "C" u8 lbl_804454B8[];
extern "C" u8 lbl_804454D4[];
extern "C" u8 lbl_804454F0[];
extern "C" u8 lbl_8044550C[];
extern "C" u8 lbl_80445524[];
extern "C" u8 lbl_80445538[];
extern "C" u8 lbl_80445558[];
extern void *lbl_804B7618[6];
extern void *lbl_804B7630[3];
void *lbl_804B7618[6] = {
    (void *)&lbl_804454A0, (void *)&lbl_804454B8, (void *)&lbl_804454D4, (void *)&lbl_804454F0,
    (void *)&lbl_8044550C, (void *)0x0,
};
void *lbl_804B7630[3] = {
    (void *)&lbl_80445524, (void *)&lbl_80445538, (void *)0x0,
};
void *lbl_804B763C[4] = {
    (void *)&lbl_80445558, (void *)&lbl_804B7618, (void *)&lbl_804B7630, (void *)0x50002,
};
void *lbl_804B764C[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41200000,
    (void *)0x42200000, (void *)0x1, (void *)0x10003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TObjDoor__data_804B7678[40] = {
    (void *)0x3f800000, (void *)0x3f52d2d3, (void *)0x3dc8c8c9, (void *)0x3dc8c8c9,
    (void *)0x3f800000, (void *)0x3dc8c8c9, (void *)0x3dc8c8c9, (void *)0x3f52d2d3,
    (void *)0x3f800000, (void *)0x3f52d2d3, (void *)0x3f52d2d3, (void *)0x3dc8c8c9,
    (void *)0x3f800000, (void *)0x3dc8c8c9, (void *)0x3f52d2d3, (void *)0x3f52d2d3,
    (void *)0x3f800000, (void *)0x3f52d2d3, (void *)0x3dc8c8c9, (void *)0x3f52d2d3,
    (void *)0x3f800000, (void *)0x3f52d2d3, (void *)0x3f008081, (void *)0x3dc8c8c9,
    (void *)0x3f800000, (void *)0x3dc8c8c9, (void *)0x3f008081, (void *)0x3f52d2d3,
    (void *)0x3f800000, (void *)0x3f34b4b5, (void *)0x3f66e6e7, (void *)0x3dc8c8c9,
    (void *)0x3f800000, (void *)0x3f52d2d3, (void *)0x3dc8c8c9, (void *)0x3ec8c8c9,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f800000, (void *)0x3f800000,
};
void *lbl_804B7718[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&update_locked_pulse__8TObjDoorFPv,
};
void *lbl_804B7724[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&update_anim__8TObjDoorFPv,
};
void *lbl_804B7730[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&draw_closed_glow__8TObjDoorFPv,
};
void *lbl_804B773C[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&TObjDoor__sub_8018E8BC,
};
void *lbl_804B7748[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&update_opening_glow__8TObjDoorFPv,
};
void *lbl_804B7754[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&TObjDoor__sub_8018E890,
};
void *lbl_804B7760[18] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
void *lbl_804B77A8[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&draw_locked__8TObjDoorFPv,
};
void *lbl_804B77B4[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&update_timer__8TObjDoorFPv,
};
void *lbl_804B77C0[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&draw_closed__8TObjDoorFPv,
};
void *lbl_804B77CC[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&draw_closing__8TObjDoorFPv,
};
void *lbl_804B77D8[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&render__8TObjDoorFPv,
};
void *lbl_804B77E4[3] = {
    (void *)0x0, (void *)0xffffffff, (void *)&draw_model__8TObjDoorFPv,
};
void *lbl_804B77F0[18] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0,
};
#define lbl_804B763C ((u8 *)lbl_804B763C)
#define lbl_804B764C ((u8 *)lbl_804B764C)
#define TObjDoor__data_804B7678 ((Color_8018E40C *)TObjDoor__data_804B7678)

void draw_model__8TObjDoorFPv(Door_8018E358 *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    push_matrix();
    post_translate_matrix(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    draw_ginja_model_with_motion(TObjDoor__data_8050DC80->f0, (int)TObjDoor__data_8050DC78[0], TObjDoor__data_8050DC80, arg0->fB4);
    begin_effect_render__13TParticleCtrlFv();
    Glob_8018E358 *g1 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E358 *g2 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    draw_ginja_object(g1->a);
    draw_ginja_object(g2->b);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void render__8TObjDoorFPv(Door_8018E40C *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    push_matrix();
    post_translate_matrix(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    draw_ginja_model_with_motion(((Glob_8018E40C *)&TObjDoor__data_8050DC80)->f0, (int)((DoorMotionHeader * *)&TObjDoor__data_8050DC78)[0], ((Glob_8018E40C *)&TObjDoor__data_8050DC80), arg0->fB4);
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    Color_8018E40C color = TObjDoor__data_804B7678[arg0->fD0];
    color.a = arg0->fC4;
    set_chunk_material_color(&color);
    Glob_8018E40C *g0 = ((Glob_8018E40C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g0->c->f4, (u16)arg0->fD0);
    draw_ginja_object(g0->c);
    some_id_805c6f74 = lbl_805D5660;
    Glob_8018E40C *g1 = ((Glob_8018E40C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E40C *g2 = ((Glob_8018E40C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    draw_ginja_object(g1->a);
    draw_ginja_object(g2->b);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void draw_closing__8TObjDoorFPv(Door_8018E358 *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    push_matrix();
    post_translate_matrix(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    draw_ginja_model_with_motion(TObjDoor__data_8050DC80->f0, (int)TObjDoor__data_8050DC78[0], TObjDoor__data_8050DC80, arg0->fB4);
    begin_effect_render__13TParticleCtrlFv();
    Glob_8018E358 *g1 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E358 *g2 = TObjDoor__data_8050DC80;
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    draw_ginja_object(g1->a);
    draw_ginja_object(g2->b);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

M2C_UNK draw_closed__8TObjDoorFPv(Door_8018E5F4 *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    push_matrix();
    post_translate_matrix(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    draw_ginja_object((void *)((Glob_8018E5F4 *)&TObjDoor__data_8050DC80)->f0);
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    Color_8018E5F4 color = ((Color_8018E5F4 *)TObjDoor__data_804B7678)[arg0->fD0];
    color.a = arg0->fC4;
    set_chunk_material_color((Color_8018E40C *)(&color));
    Glob_8018E5F4 *g0 = ((Glob_8018E5F4 *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g0->c->f4, (u16)arg0->fD0);
    draw_ginja_object(g0->c);
    some_id_805c6f74 = lbl_805D5660;
    Glob_8018E5F4 *g1 = ((Glob_8018E5F4 *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xA);
    Glob_8018E5F4 *g2 = ((Glob_8018E5F4 *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xA);
    draw_ginja_object(g1->a);
    draw_ginja_object(g2->b);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void update_timer__8TObjDoorFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) < 0x3C) {
        draw_closed__8TObjDoorFPv((Door_8018E5F4 *)(arg0));
        return;
    }
    draw_locked__8TObjDoorFPv((Door_8018E74C *)(arg0));
}

M2C_UNK draw_locked__8TObjDoorFPv(Door_8018E74C *arg0) {
    set_global_param__8TObjFishFi(TObjDoor__data_805D5BC0);
    push_matrix();
    post_translate_matrix(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    draw_ginja_object((void *)((Glob_8018E74C *)&TObjDoor__data_8050DC80)->f0);
    begin_effect_render__13TParticleCtrlFv();
    draw_ginja_model_with_motion(((Glob_8018E74C *)&TObjDoor__data_8050DC80)->f4, (int) ((DoorMotionHeader * *)&TObjDoor__data_8050DC78)[1], TObjDoor__data_8050DC80, arg0->fB8);
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    Color_8018E74C color = ((Color_8018E74C *)TObjDoor__data_804B7678)[arg0->fD0];
    color.a = arg0->fC4;
    set_chunk_material_color((Color_8018E40C *)(&color));
    Glob_8018E74C *g0 = ((Glob_8018E74C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g0->c->f4, (u16)arg0->fD0);
    draw_ginja_object(g0->c);
    some_id_805c6f74 = lbl_805D5660;
    Glob_8018E74C *g1 = ((Glob_8018E74C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g1->a->f4, 0xB);
    Glob_8018E74C *g2 = ((Glob_8018E74C *)&TObjDoor__data_8050DC80);
    free_children__12TObjDoorJungFPvPv(g2->b->f4, 0xB);
    draw_ginja_object(g1->a);
    draw_ginja_object(g2->b);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}

void TObjDoor__sub_8018E890(void) {  }

#pragma push
#pragma opt_common_subs off
void update_opening_glow__8TObjDoorFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) - (0.05f));
    if (M2C_FIELD(arg0, f32 *, 0xC4) < (0.0f)) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (0.0f);
    }
}
#pragma pop

void TObjDoor__sub_8018E8BC(void) {  }

void draw_closed_glow__8TObjDoorFPv(TObjDoor* door) {
    door->frame+=(1.5f);
    if(door->frame>(f32)(TObjDoor__data_8050DC78[0]->frameCount-1))door->frame=(0.0f);
    door->glow+=0.05f;
    if(door->glow>0.5f)door->glow=0.5f;
}

#pragma push
#pragma fp_contract on
void update_anim__8TObjDoorFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x300);
    M2C_FIELD(arg0, f32 *, 0xC4) = (0.2f) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0xC8)) + (0.4f);
}
void update_locked_pulse__8TObjDoorFPv(TObjDoor* door) {
    door->accentFrame+=(2.0f);
    if(door->accentFrame>(f32)(TObjDoor__data_8050DC78[1]->frameCount-1))door->accentFrame=(0.0f);
    door->phase+=0x300;
    door->glow=(0.2f)*sin_table_lookup(door->phase)+(0.4f);
}

#pragma push
#pragma fp_contract on
s32 TObjDoor__sub_8018EA2C(s32 arg0, f32 farg0, f32 farg1) {
    f32 sp8;
    f32 temp_f1;
    temp_f1 = xyz_distance_squared((void *) (arg0 + 0x38), (void *) (lbl_805D4DF0 + 0x178));
    if (temp_f1 > (farg0 * farg0)) {
        return 0;
    }
    if (temp_f1 < (farg1 * farg1)) {
        return 1;
    }
    project_world_to_screen((int) (0), (void *) (arg0 + 0x38), (void *) (&sp8));
    if ((-farg1 <= sp8) && (sp8 <= ((6.4e+02f) + farg1))) {
        return 1;
    }
    return 0;
}
#pragma pop

struct VBase_8018EAF8 { char pad[0x18]; };
struct VObj_8018EAF8 : VBase_8018EAF8 {
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
typedef void (VObj_8018EAF8::*Pmf_8018EAF8)();

s32 TObjDoor__data_805D5BC0;
u32 lbl_805D5BC4;
s32 TObjDoor__data_805D5BC8;
static s8 lbl_805D5BCC;
static s8 lbl_805D5BCD;
void render__8TObjDoorFv(VObj_8018EAF8 *self) {
    s32 saved;
    if (!lbl_805D5BCD) {
        ((Pmf_8018EAF8 *)lbl_804B77F0)[0] = *(Pmf_8018EAF8 *)lbl_804B77A8;
        ((Pmf_8018EAF8 *)lbl_804B77F0)[1] = *(Pmf_8018EAF8 *)lbl_804B77B4;
        ((Pmf_8018EAF8 *)lbl_804B77F0)[2] = *(Pmf_8018EAF8 *)lbl_804B77C0;
        ((Pmf_8018EAF8 *)lbl_804B77F0)[3] = *(Pmf_8018EAF8 *)lbl_804B77CC;
        ((Pmf_8018EAF8 *)lbl_804B77F0)[4] = *(Pmf_8018EAF8 *)lbl_804B77D8;
        ((Pmf_8018EAF8 *)lbl_804B77F0)[5] = *(Pmf_8018EAF8 *)lbl_804B77E4;
        lbl_805D5BCD = 1;
    }
    saved = *(s32 *)((u8 *)self + 0xAC);

    if (TObjDoor__data_805D5BC8 != 0) {
        *(s32 *)((u8 *)self + 0xAC) = 0;
    }
    if (*(s32 *)((u8 *)self + 0xAC) == 0 || *(s32 *)((u8 *)self + 0xAC) == 2) {
        if (TObjDoor__sub_8018EA2C((s32) self, (7e+02f), (2.5e+02f)) != 0) {
            (self->*((Pmf_8018EAF8 *)lbl_804B77F0)[*(s32 *)((u8 *)self + 0xAC)])();
        }
    } else if (self->m8((7e+02f), (2.5e+02f)) != 0) {
        (self->*((Pmf_8018EAF8 *)lbl_804B77F0)[*(s32 *)((u8 *)self + 0xAC)])();
    }
    if (TObjDoor__data_805D5BC8 != 0) {
        *(s32 *)((u8 *)self + 0xAC) = saved;
    }
}

void update_state__8TObjDoorFPv(TObjDoor* door) {
    f32 target[3],position[3];
    switch(door->state) {
    case 0:
        if(is_current_floor_switch_set((u16)door->switchId)==1) {
            if(TObjDoor__data_805D5BC8==0)door->accentFrame=(0.0f);
            if(door->cameraMode==0)door->state=2;
            else door->state=1;
        }
        set_indexed_flags(door,0,1);return;
    case 1:
        if(door->cameraMode==1 && activate_camera_mode(9)!=0) {
            VecCopy__FP3VecPC3Vec(target,door->position);
            VecCopy__FP3VecPC3Vec(position,door->cameraPosition);
            set_active_camera_pose(position,target);door->cameraMode=2;
        }
        if(door->cameraMode==2) {
            s32 ticks=door->cameraTicks-1;door->cameraTicks=ticks;
            if(ticks==0) {restore_player_cameras();door->state=2;return;}
        }
        if(door->cameraTicks>60) {
            door->accentFrame+=(2.0f);
            if(door->accentFrame>(f32)(TObjDoor__data_8050DC78[1]->frameCount-1))door->accentFrame=(0.0f);
        }
        return;
    case 2:
        set_indexed_flags(door,0,1);
        if(check_player_door_proximity(door,0,(7e+01f))!=0) {
            door->frame=(0.0f);door->state=4;clear_player_status_flag__10TObjPlayerFPviUi(door,0,1);
        }
        break;
    case 4:
        play_persistent_sound(0x49e08,door,door->position,0,0);
        door->frame+=(1.8f);
        if(door->frame>(f32)(TObjDoor__data_8050DC78[0]->frameCount-1)) {
            door->frame=(f32)(TObjDoor__data_8050DC78[0]->frameCount-1);door->state=5;
        }
        break;
    case 3:
        play_persistent_sound(0x49e08,door,door->position,0,0);
        door->frame-=1.8f;
        if(door->frame<0.0f) {door->frame=0.0f;door->state=2;}
        break;
    case 5:
        clear_player_status_flag__10TObjPlayerFPviUi(door,0,1);
        if(check_player_door_proximity(door,1,100.0f)!=0) {door->state=3;set_indexed_flags(door,0,1);}
        break;
    }
}

struct VBase_8018EF70 { char pad[0x18]; };
struct VObj_8018EF70 : VBase_8018EF70 {
    virtual void m0();
};
typedef void (VObj_8018EF70::*Pmf_8018EF70)();
void minimap_render_gate(void *, u32, u16, int, int);

void run_task__8TObjDoorFv(VObj_8018EF70 *self) {
    s32 saved;
    if (!lbl_805D5BCC) {
        ((Pmf_8018EF70 *)lbl_804B7760)[0] = *(Pmf_8018EF70 *)lbl_804B7718;
        ((Pmf_8018EF70 *)lbl_804B7760)[1] = *(Pmf_8018EF70 *)lbl_804B7724;
        ((Pmf_8018EF70 *)lbl_804B7760)[2] = *(Pmf_8018EF70 *)lbl_804B7730;
        ((Pmf_8018EF70 *)lbl_804B7760)[3] = *(Pmf_8018EF70 *)lbl_804B773C;
        ((Pmf_8018EF70 *)lbl_804B7760)[4] = *(Pmf_8018EF70 *)lbl_804B7748;
        ((Pmf_8018EF70 *)lbl_804B7760)[5] = *(Pmf_8018EF70 *)lbl_804B7754;
        lbl_805D5BCC = 1;
    }
    saved = *(s32 *)((u8 *)self + 0xAC);

    if (TObjDoor__data_805D5BC8 != 0) {
        *(s32 *)((u8 *)self + 0xAC) = 0;
        set_indexed_flags((TObjDoor *) self, 0, 1);
    } else {
        update_state__8TObjDoorFPv((TObjDoor *) self);
    }
    (self->*((Pmf_8018EF70 *)lbl_804B7760)[*(s32 *)((u8 *)self + 0xAC)])();
    if (*(s32 *)((u8 *)self + 0xAC) == 0) {
        minimap_render_gate((u8 *)self + 0x38, 0xFFFF0000, *(s32 *)((u8 *)self + 0x60), 0, 0);
    } else {
        minimap_render_gate((u8 *)self + 0x38, 0xFF00FF00, *(s32 *)((u8 *)self + 0x60), 0, 0);
    }
    if (TObjDoor__data_805D5BC8 != 0) {
        *(s32 *)((u8 *)self + 0xAC) = saved;
    }
}
void *__dt__8TObjDoorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjDoor;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define d ((Door_8018F15C *)arg0)
void *TObjDoor__ct(void *arg0, void *arg1, void *arg2) {
    construct_collider_proxy__10TObjPlayerFPv(arg0, arg1);
    d->vt = __vt__8TObjDoor;
    d->f0 = lbl_805D3330;
    ((DoorVt_8018F15C *)d)->m5(arg2);
    d->fAC = 0;
    d->fB8 = (0.0f);
    d->fB4 = (0.0f);
    d->fB0 = 1;
    d->fBC = d->f8C % 2;
    d->fC0 = 0x50;
    d->fC4 = (0.0f);
    d->fC8 = 0;
    d->fCC = (u8)d->f84;
    d->fD0 = (u8)(d->f84 >> 8) % 10;
    if (d->fBC < 0) {
        d->fBC = 0;
    }
    if (d->fBC > 1) {
        d->fBC = 1;
    }
    init_collision_body_parts(d, lbl_804B764C, 1);
    d->f30 |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(d);
    return d;
}

void *TObjDoor__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjDoor__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}
void free_resources__8TObjDoorFv(void) {
    free_if_valid__10TObjPlayerFi(TObjDoor__data_805D5BC0);
    TObjDoor__data_805D5BC0 = 0;
    if ((u32) lbl_805D5BC4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BC4, 1);
        lbl_805D5BC4 = 0U;
    }
}

extern "C" const char lbl_80445588[] = "fe_obj_door.gvm";
void load_resources__8TObjDoorFv(void) {
    s32 p = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = (s32)load_resource_from_descriptor((void *)p, 5, lbl_804B763C, 0, 0, 0);
    }
    lbl_805D5BC4 = p;
    TObjDoor__data_805D5BC0 = load_gvm_texture_file((void *)lbl_80445588);
    ((s32 *)&TObjDoor__data_8050DC80)[0] = get_bml_model(lbl_805D5BC4, 4);
    ((s32 *)&TObjDoor__data_8050DC80)[1] = get_bml_model(lbl_805D5BC4, 3);
    ((s32 *)&TObjDoor__data_8050DC80)[2] = get_bml_model(lbl_805D5BC4, 0);
    ((s32 *)&TObjDoor__data_8050DC80)[3] = get_bml_model(lbl_805D5BC4, 1);
    ((s32 *)&TObjDoor__data_8050DC80)[4] = get_bml_model(lbl_805D5BC4, 2);
    ((s32 *)&TObjDoor__data_8050DC78)[0] = get_bml_motion(lbl_805D5BC4, 0);
    ((s32 *)&TObjDoor__data_8050DC78)[1] = get_bml_motion(lbl_805D5BC4, 1);
}

void *TObjDoorJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjDoorJung__ct(o, tl_05, arg0);
    }
    return o;
}

#pragma pop

}
