#include "pso/TParticleCtrl.h"

#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_C { u8 bytes[0xc]; };

struct Stack_80088844 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

struct RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70 {
    s32 value;
    u8 remaining[0x1AC];
};

struct Vec_8008A92C { f32 x, y, z; };

struct Vec_8008BAF8 { f32 x, y, z; };

struct Ang_8008BAF8 { s32 x, y, z; };

struct Scr_8008BAF8 { f32 x, y; };

extern "C" {
void attach_model__13TParticleCtrlFPviiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *, void *);
void set_particle_tint_color(u8 *arg0, void *arg1);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
int free__11TOBoss4RockFUi(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
extern s32 particle_area_entry_table;
extern u32 TParticleCtrl__regular_bml_resource;
extern u32 TParticleCtrl__texture_list;
void free_all__13TParticleCtrlFv(void);
s32 read_disc_file(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern s32 TParticleCtrl__particle_entry_path;
extern u32 particle_pool_limit;
extern int particle_global_entry_table;
void init_particle_buffer__13TParticleCtrlFv(void);
extern s32 particle_area_entry_table;
extern int particle_global_entry_table;
s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0);
void *alloc_particle_memory(int);
u8 * construct_ballistic_particle(void *, void *, void *, void *, s32, u16, s16);
u8 *create_ballistic_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *alloc_particle_memory(int);
void *init_particle_random_spread__13TParticleCtrlFPvPvPvPv(void *, void *, void *, void *);
void * create_random_spread__13TParticleCtrlFPvPvPv(void *arg0, void *arg1, void *arg2);
int queue_destruction__7TObjectFv(void *);
f32 vec_squared_length(void *);
extern const f32 TParticleCtrl__data_805D94F8;
extern const f32 TParticleCtrl__data_805D94FC;
void retire_ballistic_particle_if_done(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern s32 TParticleCtrl__data_8048E778[];
void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1);
void *alloc_particle_memory(int);
u8 * init_orbit_sprite_particle(void *, void *, void *, void *, s32, u16, s16);
u8 *create_orbit_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *alloc_particle_memory(int);
void *init_random_particle__13TParticleCtrlFPvPvPvPvPv(void *, void *, void *, void *, void *);
void *init_random_particle__13TParticleCtrlFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void * alloc_child_particle__13TParticleCtrlFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
extern const f32 TParticleCtrl__data_805D9528;
int queue_destruction__7TObjectFv(void *);
void retire_orbit_particle(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern s32 TParticleCtrl__data_8048E790[];
void *TParticleCtrl__sub_8008ABCC(void *arg0, s16 arg1);
void *alloc_particle_memory(int);
u8 *create_radial_particle(u8 *arg0, u8 *arg1, s32 arg2, u16 arg3, s16 arg4);
void *alloc_particle_memory(int);
void * create_random_particle(void *arg0, void *arg1, void *arg2);
int queue_destruction__7TObjectFv(void *);
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
f32 vec_squared_length(void *);
void check_radial_particle_retire(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern s32 TParticleCtrl__data_8048E7A8[];
void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1);
int queue_destruction__7TObjectFv(void *);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F9CC(int);
int stop_cue_stream(void);
int stop_audio_streams__6TLobbyFv(void);
void destroy_keyboard_objects(void * _w0);
u8 * init_particle_base(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern s32 TParticleCtrl__data_8048E7A8[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9568;
extern const f32 lbl_805D956C;
u8 *init_random_particle__13TParticleCtrlFPvPvPvi(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
u8 * init_particle_base(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern s32 TParticleCtrl__data_8048E7A8[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9568;
extern const f32 lbl_805D956C;
u8 *construct_radial_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 read_disc_file(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
u32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);
extern char lbl_80439494[];
extern char lbl_804394A4[];
extern char lbl_804394BC[];
extern char lbl_804394D4[];
extern u8 particle_regular_bml_descriptor[];
extern s32 particle_area_entry_table;
extern u32 TParticleCtrl__regular_bml_resource;
extern u32 TParticleCtrl__texture_list;
void load_particle_entry_resources(void);
s32 is_split_screen();
s32 disable_if_single_screen__13TParticleCtrlFv();
s32 setup_particle_tev(s32);
s32 load_projected_texture_matrix(f32);
s32 is_particle_sprite_additive(void *, s32);
s32 draw_particle_refraction_quad(void *);
s32 apply_particle_model_fade_color(void *, s32);
s32 set_depth_buffer_settings_id__FUl(s32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 append_node_to_tail__13TParticleCtrlFPvPv(s32, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
f32 cos_table_lookup(s32);
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_y(s32, s32);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 push_matrix(f32);
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(u32);
s32 draw_ginja_object(u32);
s32 draw_ginja_model_with_motion(u32, u32, f32);
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern u8 *camera_ctrl_instance;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 TParticleCtrl__data_805D9528;
extern const f32 lbl_805D9540;
void draw_orbit_particle_sprite(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 is_split_screen();
f32 atan2_float(f32, f32);
s32 disable_if_single_screen__13TParticleCtrlFv();
s32 setup_particle_tev(s32);
s32 load_projected_texture_matrix(f32);
s32 is_particle_sprite_additive(void *, s32);
s32 draw_particle_refraction_quad(void *);
s32 apply_particle_model_fade_color(void *, s32);
s32 set_depth_buffer_settings_id__FUl(s32);
void direction_to_rotation_xz(void *, s32 *, s32 *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 append_node_to_tail__13TParticleCtrlFPvPv(s32, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 scale_matrix(s32, f32, f32, f32);
f32 vector_length(void *);
void project_world_to_screen(s32, void *, void *);
s32 rotate_matrix_y(s32, s32);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 push_matrix(f32);
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(u32);
s32 draw_ginja_object(u32);
s32 draw_ginja_model_with_motion(u32, u32, f32);
extern const Ang_8008BAF8 lbl_80439540;
extern const f64 lbl_80439560[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern u8 *camera_ctrl_instance;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9564;
void draw_radial_sprite_particle(u8 *arg0);
}

extern "C" {

struct ParticleVec {
    s32 x;
    s32 y;
    s32 z;
};

struct ParticleCtrlData {
    s32 descriptor;
    u8 pad04[0x14];
    void *vtable;
    f32 field1C;
    s32 field20;
    f32 field24;
    s32 particle_index;
    u16 flags;
    u16 field2E;
    s32 field30;
    s32 field34;
    s32 field38;
    s32 field3C;
    f32 field40;
    f32 field44;
    s32 field48;
    s32 field4C;
    s32 field50;
    s32 field54;
    void *owner;
    u8 pad5C[4];
    ParticleVec position;
    ParticleVec direction;
};

void __ct__7TObjectFP7TObject(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, const void *);

extern void *__vt__13TParticleCtrl[];
extern s32 TParticleCtrl__class_name_descriptor;
extern void *tl_07;
extern void *tl_clipout;
extern const f32 TParticleCtrl__data_805D94E0;
extern const f32 TParticleCtrl__data_805D94E4;

#define COPY_PARTICLE_DIRECTION(particle, direction) do {                      \
    s32 component;                                                             \
    component = direction->x;                                                  \
    particle->direction.x = component;                                         \
    component = direction->z;                                                  \
    particle->direction.z = component;                                         \
    component = direction->y;                                                  \
    particle->direction.y = component;                                         \
} while (0)
#define CLEAR_PARTICLE_DIRECTION(particle, unused) do {                        \
    particle->direction.x = 0;                                                 \
    particle->direction.y = 0;                                                 \
    particle->direction.z = 0;                                                 \
} while (0)

#define INITIALIZE_PARTICLE(particle, position, particle_index, field30,       \
                            field34, field38, use_self, particle_flags,        \
                            direction_action, direction_source) do {           \
    __ct__7TObjectFP7TObject(particle, tl_07);                                 \
    particle->vtable = __vt__13TParticleCtrl;                                  \
    particle->descriptor = TParticleCtrl__class_name_descriptor;                       \
    particle->field4C = 0;                                                     \
    particle->field50 = 0;                                                     \
    particle->field54 = 0;                                                     \
    particle->field48 = 0;                                                     \
    particle->field40 = TParticleCtrl__data_805D94E4;                          \
    particle->field44 = TParticleCtrl__data_805D94E4;                          \
    particle->field1C = TParticleCtrl__data_805D94E0;                          \
    particle->field20 = 0;                                                     \
    particle->field24 = TParticleCtrl__data_805D94E4;                          \
    particle->particle_index = particle_index;                                 \
    VecCopy__FP3VecPC3Vec(&particle->position, position);                      \
    particle->flags = particle_flags;                                          \
    particle->field2E = 0xFFFF;                                                \
    direction_action(particle, direction_source);                              \
    particle->field30 = field30;                                               \
    particle->field34 = field34;                                               \
    particle->field38 = field38;                                               \
    particle->field3C = 0;                                                     \
    if (use_self != 0) {                                                       \
        particle->owner = particle;                                            \
    } else if (particle->flags & 0x800) {                                      \
        if (particle->flags & 0x4000) {                                        \
            particle->owner = tl_clipout;                                      \
        } else {                                                               \
            particle->owner = tl_07;                                           \
        }                                                                      \
    } else {                                                                   \
        particle->owner = tl_07;                                               \
    }                                                                          \
} while (0)

}

#include "types.h"

extern "C" {

int TParticleCtrl__sub_800884F0(void* p);
void set_particle_draw_scale(void* p, f32 a, f32 b);
void clear_active_flag__13TParticleCtrlFPv(void* p);
void enable__13TParticleCtrlFPv(void* p);
void free_system__13TParticleCtrlFv(void);
int copy_xyz__10TObjPlayerFPvPv(void*);
int free__11TOBoss4RockFUi(void*);

void clear_active_flag__13TParticleCtrlFPv(void* p) { *(u16*)((char*)p + 0x2c) &= 0xfffe; }
u8 *create_radial_particle(u8 *arg0, u8 *arg1, s32 arg2, u16 arg3, s16 arg4) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((u8 *)alloc_particle_memory((int)(0xC4))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(construct_radial_particle((u8 *)(temp_r3), (u8 *)(arg0), (u8 *)(arg1), (s32)(arg2), arg3, arg4));
    }
    return var_r0;
}
void * create_random_particle(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = alloc_particle_memory(0xc4);
    if (o != NULL) {
        o = init_random_particle__13TParticleCtrlFPvPvPvi((u8 *)(o), (u8 *)(arg0), (u8 *)(arg1), (s32)(arg2));
    }
    return o;
}
void check_radial_particle_retire(u8 *arg0) {
    if ((*(f32 *)((s8 *)arg0 + 0x58) >= TParticleCtrl__data_805D9558) || (TParticleCtrl__data_805D955C == vec_squared_length((void *) (arg0 + 0x3C)))) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

void draw_radial_sprite_particle(u8 *arg0) {
    Scr_8008BAF8 s1;
    Scr_8008BAF8 s2;
    Vec_8008BAF8 end;
    Vec_8008BAF8 pos;
    f32 len;
    u16 flags;
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        return;
    }
    if (*(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 0x88) & 4) {
        if (*(u16 *)((s8 *)arg0 + 0x24) & 0x10) {
            pos.x = *(f32 *)((s8 *)arg0 + 0x70) + *(f32 *)((s8 *)arg0 + 0x7C);
            pos.y = *(f32 *)((s8 *)arg0 + 0x74) + *(f32 *)((s8 *)arg0 + 0x80);
            pos.z = *(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)arg0 + 0x84);
        } else {
            VecCopy__FP3VecPC3Vec(&pos, arg0 + 0x70);
        }
        end.x = pos.x + *(f32 *)((s8 *)arg0 + 0x3C);
        end.y = pos.y + *(f32 *)((s8 *)arg0 + 0x40);
        end.z = pos.z + *(f32 *)((s8 *)arg0 + 0x44);
        len = vector_length(arg0 + 0x3C);
        if (TParticleCtrl__data_805D955C == len) {
            return;
        }
        project_world_to_screen(0, &pos, &s1);
        project_world_to_screen(0, &end, &s2);
        s2.x = s2.x - s1.x;
        s2.y = s2.y - s1.y;
        *(s16 *)((s8 *)arg0 + 0x96) = (s16)(lbl_80439560[0] * atan2_float(s2.y, s2.x));
        *(f32 *)((s8 *)arg0 + 0x88) = *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 0x60) * len;
        *(f32 *)((s8 *)arg0 + 0x8C) = *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 0x64) * len;
    } else {
        *(f32 *)((s8 *)arg0 + 0x88) = *(f32 *)((s8 *)arg0 + 0x28);
        *(f32 *)((s8 *)arg0 + 0x8C) = *(f32 *)((s8 *)arg0 + 0x2C);
    }
    *(f32 *)((s8 *)arg0 + 0x88) = *(f32 *)((s8 *)arg0 + 0x88) * *(f32 *)((s8 *)arg0 + 0xA4);
    *(f32 *)((s8 *)arg0 + 0x8C) = *(f32 *)((s8 *)arg0 + 0x8C) * *(f32 *)((s8 *)arg0 + 0xA8);
    flags = *(u16 *)((s8 *)arg0 + 0x24);
    if (flags & 0x200) {
        if (((is_split_screen() == 0) || !(*(u16 *)((s8 *)arg0 + 0x24) & 0x400)) && (*(u32 *)((s8 *)arg0 + 0xB4) != 0U) && (*(u32 *)((s8 *)arg0 + 0xB0) != 0U)) {
            Ang_8008BAF8 ang = lbl_80439540;
            Vec_8008BAF8 pos2;
            direction_to_rotation_xz(arg0 + 0x3C, &ang.x, &ang.z);
            if (*(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 0x88) & 4) {
                pos2.x = *(f32 *)((s8 *)arg0 + 0x70) + *(f32 *)((s8 *)arg0 + 0x7C);
                pos2.y = *(f32 *)((s8 *)arg0 + 0x74) + *(f32 *)((s8 *)arg0 + 0x80);
                pos2.z = *(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)arg0 + 0x84);
            } else {
                VecCopy__FP3VecPC3Vec(&pos2, arg0 + 0x70);
            }
            ((void (*)(void))push_matrix)();
            post_translate_matrix(&pos2);
            scale_matrix(0, *(f32 *)((s8 *)arg0 + 0x88), *(f32 *)((s8 *)arg0 + 0x88), *(f32 *)((s8 *)arg0 + 0x88));
            if (*(u8 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x20)) + 0x88) & 4) {
                rotate_matrix_z(0, ang.z);
                rotate_matrix_x(0, ang.x);
                rotate_matrix_y(0, ang.y);
            }
            if ((*(u16 *)((s8 *)arg0 + 0x24) & 0x1000) && (camera_ctrl_instance != NULL)) {
                rotate_matrix_y(0, *(s32 *)((s8 *)camera_ctrl_instance + 0x194));
            }
            begin_effect_render__13TParticleCtrlFv();
            if (*(u16 *)((s8 *)arg0 + 0x24) & 0x400) {
                load_projected_texture_matrix(lbl_805D9564);
            }
            rotate_matrix_y(0, *(s16 *)((s8 *)arg0 + 0x96));
            if (*(u16 *)((s8 *)arg0 + 0x24) & 0x400) {
                setup_particle_tev(0);
            } else {
                s32 temp_r4 = model_render_flags;
                lbl_805D5660 = temp_r4;
                model_render_flags = temp_r4 | 0x8021;
                if (is_particle_sprite_additive(arg0, temp_r4) != 0) {
                    apply_particle_model_fade_color(arg0, 1);
                } else {
                    apply_particle_model_fade_color(arg0, 0);
                }
            }
            set_global_param__8TObjFishFi(*(u32 *)((s8 *)arg0 + 0xB4));
            set_depth_buffer_settings_id__FUl(3);
            if (*(u32 *)((s8 *)arg0 + 0xB8) != 0U) {
                draw_ginja_model_with_motion(*(u32 *)((s8 *)arg0 + 0xB0), *(u32 *)((s8 *)arg0 + 0xB8), *(f32 *)((s8 *)arg0 + 0xBC));
            } else {
                draw_ginja_object(*(u32 *)((s8 *)arg0 + 0xB0));
            }
            if (*(u16 *)((s8 *)arg0 + 0x24) & 0x400) {
                disable_if_single_screen__13TParticleCtrlFv();
            } else {
                model_render_flags = lbl_805D5660;
            }
            end_effect_render__13TParticleCtrlFv();
            pop_matrix();
        }
    } else {
        if (flags & 0x2000) {
            draw_particle_refraction_quad(arg0);
            return;
        }
        if (*(u8 *)((s8 *)(*(void **)((s8 *)arg0 + 0x20)) + 0x88) & 0x20) {
            append_node_to_tail__13TParticleCtrlFPvPv(((s32 *)((u8 *)&TParticleCtrl__data_80511F70 + 0xD8))[*(u16 *)((s8 *)arg0 + 0x1C)], arg0 + 0x6C);
            return;
        }
        append_node_to_tail__13TParticleCtrlFPvPv(((s32 *)&TParticleCtrl__data_80511F70)[*(u16 *)((s8 *)arg0 + 0x1C)], arg0 + 0x6C);
    }
}

void *TParticleCtrl__sub_8008BF00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = TParticleCtrl__data_8048E7A8;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8_size[sizeof(RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8_size[sizeof(RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];
u8 *construct_radial_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5) {
    struct Fields_arg0 { u8 pad_0[24]; s32 * field_18; u16 field_1C; u8 pad_1E[6]; u16 field_24; s16 field_26; f32 field_28; f32 field_2C; f32 field_30; f32 field_34; f32 field_38; f32 field_3C; f32 field_40; f32 field_44; u8 pad_48[20]; f32 field_5C; u8 pad_60[8]; f32 field_68; u8 pad_6C[4]; f32 field_70; f32 field_74; f32 field_78; u8 pad_7C[25]; s8 field_95; };
    struct Fields_arg1 { u8 pad_0[24]; f32 field_18; f32 field_1C; f32 field_20; f32 field_24; f32 field_28; u8 pad_2C[4]; f32 field_30; u8 pad_34[4]; f32 field_38; u8 pad_3C[12]; s32 field_48; s32 field_4C; u8 pad_50[56]; u8 field_88; };
    struct Fields_arg2 { f32 field_0; f32 field_4; f32 field_8; };
    s32 temp_r0;
    init_particle_base(arg0, arg1, arg3);
    ((Fields_arg0*)arg0)->field_18 = &(*(RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8 *)&TParticleCtrl__data_8048E7A8).value;
    ((Fields_arg0*)arg0)->field_70 = (f32) ((((Fields_arg1*)arg1)->field_18 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_0);
    ((Fields_arg0*)arg0)->field_74 = (f32) ((((Fields_arg1*)arg1)->field_1C * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_4);
    ((Fields_arg0*)arg0)->field_78 = (f32) ((((Fields_arg1*)arg1)->field_20 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_8);
    ((Fields_arg0*)arg0)->field_24 = arg4;
    if (((Fields_arg0*)arg0)->field_24 & 0x80) {
        ((Fields_arg0*)arg0)->field_95 = 1;
    }
    ((Fields_arg0*)arg0)->field_26 = arg5;
    ((Fields_arg0*)arg0)->field_30 = (f32) ((Fields_arg2*)arg2)->field_0;
    ((Fields_arg0*)arg0)->field_34 = (f32) ((Fields_arg2*)arg2)->field_4;
    ((Fields_arg0*)arg0)->field_38 = (f32) ((Fields_arg2*)arg2)->field_8;
    ((Fields_arg0*)arg0)->field_28 = (f32) ((((Fields_arg1*)arg1)->field_28 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_24);
    ((Fields_arg0*)arg0)->field_2C = (f32) ((Fields_arg0*)arg0)->field_28;
    temp_r0 = (s32) (((f32) ((Fields_arg1*)arg1)->field_4C * (lbl_805D9568 * (f32) rand())) + (f32) ((Fields_arg1*)arg1)->field_48);
    if (((Fields_arg1*)arg1)->field_88 & 1) {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) *(s32 *)((s8 *)(*(void **)((s8 *)(*(s32 *)((s8 *)(&(*(RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70 *)&TParticleCtrl__data_80511F70).value) + (((Fields_arg0*)arg0)->field_1C * 4))) + 0x28)) + 0xC));
    } else {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) temp_r0);
    }
    ((Fields_arg0*)arg0)->field_68 = (f32) ((((Fields_arg1*)arg1)->field_38 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_30);
    ((Fields_arg0*)arg0)->field_3C = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_40 = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_44 = (f32) TParticleCtrl__data_805D955C;
    if (((Fields_arg0*)arg0)->field_24 & 0x2000) {
        get_object__13TParticleCtrlFPv((void *)0x1F);
    }
    return arg0;
}
#pragma pop

u8 *init_random_particle__13TParticleCtrlFPvPvPvi(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    struct Fields_arg0 { u8 pad_0[24]; s32 * field_18; u16 field_1C; u8 pad_1E[6]; u16 field_24; u8 pad_26[2]; f32 field_28; f32 field_2C; f32 field_30; f32 field_34; f32 field_38; f32 field_3C; f32 field_40; f32 field_44; u8 pad_48[20]; f32 field_5C; u8 pad_60[8]; f32 field_68; u8 pad_6C[4]; f32 field_70; f32 field_74; f32 field_78; };
    struct Fields_arg1 { u8 pad_0[24]; f32 field_18; f32 field_1C; f32 field_20; f32 field_24; f32 field_28; u8 pad_2C[4]; f32 field_30; u8 pad_34[4]; f32 field_38; u8 pad_3C[12]; s32 field_48; s32 field_4C; u8 pad_50[56]; u8 field_88; };
    struct Fields_arg2 { f32 field_0; f32 field_4; f32 field_8; };
    s32 temp_r0;
    init_particle_base(arg0, arg1, arg3);
    ((Fields_arg0*)arg0)->field_18 = &(*(RecoveredGlobal_8008C21C_TParticleCtrl__data_8048E7A8 *)&TParticleCtrl__data_8048E7A8).value;
    ((Fields_arg0*)arg0)->field_70 = (f32) ((((Fields_arg1*)arg1)->field_18 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_0);
    ((Fields_arg0*)arg0)->field_74 = (f32) ((((Fields_arg1*)arg1)->field_1C * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_4);
    ((Fields_arg0*)arg0)->field_78 = (f32) ((((Fields_arg1*)arg1)->field_20 * ((lbl_805D9568 * (f32) rand()) - lbl_805D956C)) + ((Fields_arg2*)arg2)->field_8);
    ((Fields_arg0*)arg0)->field_30 = (f32) ((Fields_arg2*)arg2)->field_0;
    ((Fields_arg0*)arg0)->field_34 = (f32) ((Fields_arg2*)arg2)->field_4;
    ((Fields_arg0*)arg0)->field_38 = (f32) ((Fields_arg2*)arg2)->field_8;
    ((Fields_arg0*)arg0)->field_28 = (f32) ((((Fields_arg1*)arg1)->field_28 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_24);
    ((Fields_arg0*)arg0)->field_2C = (f32) ((Fields_arg0*)arg0)->field_28;
    temp_r0 = (s32) (((f32) ((Fields_arg1*)arg1)->field_4C * (lbl_805D9568 * (f32) rand())) + (f32) ((Fields_arg1*)arg1)->field_48);
    if (((Fields_arg1*)arg1)->field_88 & 1) {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) *(s32 *)((s8 *)(*(void **)((s8 *)(*(s32 *)((s8 *)(&TParticleCtrl__data_80511F70.value) + (((Fields_arg0*)arg0)->field_1C * 4))) + 0x28)) + 0xC));
    } else {
        ((Fields_arg0*)arg0)->field_5C = (f32) (TParticleCtrl__data_805D9558 / (f32) temp_r0);
    }
    ((Fields_arg0*)arg0)->field_68 = (f32) ((((Fields_arg1*)arg1)->field_38 * (lbl_805D9568 * (f32) rand())) + ((Fields_arg1*)arg1)->field_30);
    ((Fields_arg0*)arg0)->field_3C = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_40 = (f32) TParticleCtrl__data_805D955C;
    ((Fields_arg0*)arg0)->field_44 = (f32) TParticleCtrl__data_805D955C;
    if (((Fields_arg0*)arg0)->field_24 & 0x2000) {
        get_object__13TParticleCtrlFPv((void *)0x1F);
    }
    return arg0;
}
#pragma pop

void destroy_keyboard_objects(void * _w0) { queue_destruction__7TObjectFv((void *)(_w0)); TKeyBoardControl__sub_8000F91C(2); TKeyBoardControl__sub_8000F9CC(18); stop_audio_streams__6TLobbyFv(); stop_cue_stream(); }

}
