#include "pso/TParticleCtrl.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "types.h"
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

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
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008BF58_TParticleCtrl__data_8048E7A8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8008BF58_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Vec_8008A92C { f32 x, y, z; };

typedef s32 M2C_UNK;
struct Vec_8008BAF8 { f32 x, y, z; };

struct Ang_8008BAF8 { s32 x, y, z; };

struct Scr_8008BAF8 { f32 x, y; };

struct RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70;
struct Fields0_800896E4 {
    u8 pad_0[0x18]; M2C_UNK *field_18; u16 field_1C; u8 pad_1E[6]; u16 field_24; s16 field_26;
    f32 field_28; f32 field_2C; f32 field_30; f32 field_34; f32 field_38; f32 field_3C; f32 field_40; f32 field_44;
    u8 pad_48[0x14]; f32 field_5C; u8 pad_60[8]; f32 field_68; u8 pad_6C[4]; f32 field_70; f32 field_74; f32 field_78;
    u8 pad_7C[0x19]; s8 field_95; s16 field_96; s32 field_98; s32 field_9C; s32 field_A0;
    u8 pad_A4[0x20]; f32 field_C4; f32 field_C8; f32 field_CC;
};

struct Fields1_800896E4 {
    u8 pad_0[0x18]; f32 field_18; f32 field_1C; f32 field_20; f32 field_24; f32 field_28; u8 pad_2C[4];
    f32 field_30; f32 field_34; f32 field_38; f32 field_3C; u8 pad_40[8]; s32 field_48; s32 field_4C;
    u8 pad_50[4]; f32 field_54; u8 pad_58[0x30]; u8 field_88;
};

struct Fields2_800896E4 { f32 field_0; f32 field_4; f32 field_8; };

struct Fields3_800896E4 { s32 field_0; s32 field_4; s32 field_8; };

struct Vec_800890F4 { f32 x, y, z; };

struct Ang_800890F4 { s32 x, y, z; };

struct Scr_800890F4 { f32 x, y; };

struct Def_800890F4 {
    u8 pad0[0x64];
    f32 sx;
    f32 sy;
    u8 pad6C[0x88 - 0x6C];
    u8 flags;
};

struct Part_800890F4 {
    u8 pad0[0x1C];
    u16 tex;
    u8 pad1E[0x20 - 0x1E];
    Def_800890F4 *def;
    u16 flags;
    u8 pad26[0x28 - 0x26];
    f32 w;
    f32 h;
    u8 pad30[0x6C - 0x30];
    u8 f6C[4];
    Vec_800890F4 pos;
    Vec_800890F4 ofs;
    f32 sw;
    f32 sh;
    u8 pad90[0x96 - 0x90];
    s16 angle;
    u8 pad98[0x9C - 0x98];
    s32 rotY;
    u8 padA0[0xA4 - 0xA0];
    f32 scx;
    f32 scy;
    u8 padAC[0xB0 - 0xAC];
    u32 model;
    u32 texlist;
    u32 motion;
    f32 frame;
    u8 padC0[0xC4 - 0xC0];
    Vec_800890F4 vel;
};

extern "C" {
void attach_model__13TParticleCtrlFPviiiif(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *, void *);
void set_particle_tint_color(u8 *arg0, void *arg1);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
int free__11TOBoss4RockFUi(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;
void free_all__13TParticleCtrlFv(void);
s32 read_disc_file(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
extern s32 lbl_805D2944;
extern u32 lbl_805D2948;
extern int lbl_805D4EF8;
void init_particle_buffer__13TParticleCtrlFv(void);
extern s32 lbl_805D4EFC;
extern int lbl_805D4EF8;
s32 get_particle_by_index__13TParticleCtrlFi(s32 arg0);
void *alloc_particle_memory(int);
u8 *create_ballistic_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *alloc_particle_memory(int);
void *init_particle_random_spread__13TParticleCtrlFPvPvPvPv(void *, void *, void *, void *);
void * TParticleCtrl__sub_800887EC(void *arg0, void *arg1, void *arg2);
int queue_destruction__7TObjectFv(void *);
f32 vec_squared_length(void *);
extern const f32 TParticleCtrl__data_805D94F8;
extern const f32 TParticleCtrl__data_805D94FC;
void retire_ballistic_particle_if_done(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern M2C_UNK TParticleCtrl__data_8048E778[];
void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1);
void *alloc_particle_memory(int);
u8 * init_orbit_sprite_particle(void *, void *, void *, void *, s32, u16, s16);
u8 *create_orbit_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *alloc_particle_memory(int);
void *TParticleCtrl__sub_8008B060(void *, void *, void *, void *, void *);
void *TParticleCtrl__sub_8008B060(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void * alloc_child_particle__13TParticleCtrlFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
extern const f32 TParticleCtrl__data_805D9528;
int queue_destruction__7TObjectFv(void *);
void retire_orbit_particle(u8 *arg0);
void TParticleCtrl__sub_8008655C(void *, int);
void free_from_heap__13TParticleCtrlFPv(void *);
extern M2C_UNK TParticleCtrl__data_8048E790[];
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
extern M2C_UNK TParticleCtrl__data_8048E7A8[];
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
extern M2C_UNK TParticleCtrl__data_8048E7A8[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9568;
extern const f32 lbl_805D956C;
u8 *TParticleCtrl__sub_8008C21C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
u8 * init_particle_base(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern M2C_UNK TParticleCtrl__data_8048E7A8[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D9558;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9568;
extern const f32 lbl_805D956C;
u8 *construct_radial_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 read_disc_file(s32, s32);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
u32 load_gvm_texture_file(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);
extern char lbl_80439494[];
extern char lbl_804394A4[];
extern char lbl_804394BC[];
extern char lbl_804394D4[];
extern u8 lbl_8048E768[];
extern s32 lbl_805D4EFC;
extern u32 TParticleCtrl__data_805D4F00;
extern u32 TParticleCtrl__data_805D4F04;
void load_particle_entry_resources(void);
s32 is_split_screen();
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(M2C_UNK);
M2C_UNK load_projected_texture_matrix(f32);
s32 is_particle_sprite_additive(void *, s32);
M2C_UNK draw_particle_refraction_quad(void *);
M2C_UNK apply_particle_model_fade_color(void *, M2C_UNK);
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TParticleCtrl__sub_801E4E7C(s32, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
f32 cos_table_lookup(s32);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK push_matrix(f32);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(u32);
M2C_UNK draw_ginja_object(u32);
M2C_UNK draw_ginja_model_with_motion(u32, u32, f32);
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TParticleCtrl__data_805D9528;
extern const f32 lbl_805D9540;
void draw_orbit_particle_sprite(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(M2C_UNK);
M2C_UNK load_projected_texture_matrix(f32);
s32 is_particle_sprite_additive(void *, s32);
M2C_UNK draw_particle_refraction_quad(void *);
M2C_UNK apply_particle_model_fade_color(void *, M2C_UNK);
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TParticleCtrl__sub_801E4E7C(s32, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
f32 vector_length(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
M2C_UNK push_matrix(f32);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(u32);
M2C_UNK draw_ginja_object(u32);
M2C_UNK draw_ginja_model_with_motion(u32, u32, f32);
extern const Ang_8008BAF8 lbl_80439540;
extern const f64 lbl_80439560[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 TParticleCtrl__data_805D955C;
extern const f32 lbl_805D9564;
void draw_radial_sprite_particle(u8 *arg0);
void rotate_vec_xz(void *, void *, s32);
u8 * init_particle_base(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern M2C_UNK TParticleCtrl__data_8048E778[];
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern const f32 TParticleCtrl__data_805D94F8;
extern const f32 TParticleCtrl__data_805D94FC;
extern const f32 TParticleCtrl__data_805D9500;
extern const f32 TParticleCtrl__data_805D9504;
extern const f32 TParticleCtrl__data_805D950C;
extern const f32 lbl_805D9520;
u8 *construct_ballistic_particle(void *a0, void *a1, void *a2, void *a3, s32 arg4, u16 arg5, s16 arg6);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 is_split_screen();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(M2C_UNK);
M2C_UNK load_projected_texture_matrix(f32);
void draw_sprite_quad__13TParticleCtrlFPvi(void *, int);
s32 is_particle_sprite_additive(void *, s32);
M2C_UNK draw_particle_refraction_quad(void *);
M2C_UNK apply_particle_model_fade_color(void *, M2C_UNK);
void func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
void set_depth_buffer_settings_2__Fv();
void restore_saved_depth_alpha_state();
void direction_to_rotation_xz(void *, void *, void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TParticleCtrl__sub_801E4E7C(s32, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
f32 vec3_dot(void *, void *);
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
f32 vector_length(void *);
void project_world_to_screen(int, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
void push_matrix_from(void *);
void rotate_vector_by_current_matrix(void *, void *);
M2C_UNK push_matrix(f32);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(u32);
M2C_UNK draw_ginja_object(u32);
M2C_UNK draw_ginja_model_with_motion(u32, u32, f32);
extern Vec_800890F4 lbl_804394E8;
extern Vec_800890F4 lbl_804394F4;
extern Vec_800890F4 lbl_80439500;
extern Ang_800890F4 lbl_8043950C;
extern const f64 lbl_80439528;
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
extern u8 lbl_8058D490[];
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D951C;
void draw_ballistic_sprite_particle(Part_800890F4 *p);
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
extern s32 TParticleCtrl__data_805D2938;
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
    particle->descriptor = TParticleCtrl__data_805D2938;                       \
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

u8 *create_ballistic_particle(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, u16 arg4, s16 arg5) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((u8 *)alloc_particle_memory((int)(0xD0))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(construct_ballistic_particle((void *)(temp_r3), (void *)(arg0), (void *)(arg1), (void *)(arg2), (s32)(arg3), arg4, arg5));
    }
    return var_r0;
}
void * TParticleCtrl__sub_800887EC(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = alloc_particle_memory(0xd0);
    if (o != NULL) {
        o = init_particle_random_spread__13TParticleCtrlFPvPvPvPv(o, arg0, arg1, arg2);
    }
    return o;
}
void retire_ballistic_particle_if_done(u8 *arg0) {
    Stack_80088844 stack;
    f32 temp_f1;
    if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), u8 *, 0x88) & 8) {
        stack.sp8 = M2C_FIELD(arg0, f32 *, 0x70) - M2C_FIELD(arg0, f32 *, 0x30);
        stack.spC = M2C_FIELD(arg0, f32 *, 0x74) - M2C_FIELD(arg0, f32 *, 0x34);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x78);
        stack.sp10 = temp_f1 - M2C_FIELD(arg0, f32 *, 0x38);
        if (TParticleCtrl__data_805D94F8 == vec_squared_length((void *)((void *) (&stack.sp8)))) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x58) >= TParticleCtrl__data_805D94FC) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void draw_ballistic_sprite_particle(Part_800890F4 *p) {
    u16 flags;
    int id;
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        return;
    }
    if (p->def->flags & 4) {
        Vec_800890F4 b;
        Vec_800890F4 a;
        Scr_800890F4 s0;
        Scr_800890F4 s1;
        f32 len;
        if (p->flags & 0x10) {
            a.x = p->pos.x + p->ofs.x;
            a.y = p->pos.y + p->ofs.y;
            a.z = p->pos.z + p->ofs.z;
        } else {
            VecCopy__FP3VecPC3Vec(&a, &p->pos);
        }
        b.x = a.x + p->vel.x;
        b.y = a.y + p->vel.y;
        b.z = a.z + p->vel.z;
        len = vector_length(&p->vel);
        project_world_to_screen(0, &a, &s0);
        project_world_to_screen(0, &b, &s1);
        s1.x -= s0.x;
        s1.y -= s0.y;
        p->angle = lbl_80439528 * get_ad_end_text_start__10TObjPlayerFv(s1.y, s1.x);
        p->sw = p->def->sx * len;
        p->sh = p->def->sy * len;
    } else if (p->def->flags & 0x40) {
        Vec_800890F4 a = lbl_804394E8;
        Vec_800890F4 b = lbl_804394F4;
        Vec_800890F4 c = lbl_80439500;
        f32 d1;
        f32 d2;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, p->rotY);
        rotate_vector_by_current_matrix(&c, &c);
        pop_matrix();
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, *(s32 *)(lbl_805D4DF0 + 0x194));
        rotate_vector_by_current_matrix(&a, &a);
        pop_matrix();
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, *(s32 *)(lbl_805D4DF0 + 0x190));
        rotate_vector_by_current_matrix(&b, &b);
        pop_matrix();
        d1 = vec3_dot(&c, &a);
        d2 = vec3_dot(&c, &b);
        if (d2 < 0.0f) {
            d2 *= -1.0f;
        }
        if (d1 < 0.0f) {
            d1 *= -1.0f;
        }
        flags = p->flags;
        if (flags & 8) {
            p->sw = p->w;
            p->sh = p->h * d2;
        } else if (flags & 4) {
            p->sw = p->w * d1;
            p->sh = p->h;
        } else {
            p->sw = p->w * d1;
            p->sh = p->h * d2;
        }
    } else {
        p->sw = p->w;
        p->sh = p->h;
    }
    p->sw *= p->scx;
    p->sh *= p->scy;
    flags = p->flags;
    if (flags & 0x200) {
        Vec_800890F4 t;
        if (is_split_screen() != 0 && (p->flags & 0x400)) {
            return;
        }
        if (p->texlist == 0) {
            return;
        }
        if (p->model == 0) {
            return;
        }
        t.x = p->pos.x + p->ofs.x;
        t.y = p->pos.y + p->ofs.y;
        t.z = p->pos.z + p->ofs.z;
        Ang_800890F4 r = lbl_8043950C;
        direction_to_rotation_xz(&p->vel, &r.x, &r.z);
        ((M2C_UNK (*)())push_matrix)();
        post_translate_matrix(&t);
        scale_matrix(0, p->sw, p->sw, p->sw);
        rotate_matrix_z(0, r.z);
        rotate_matrix_x(0, r.x);
        if (p->flags & 0x1000) {
            if (lbl_805D4DF0 != NULL) {
                rotate_matrix_y(0, *(s32 *)(lbl_805D4DF0 + 0x194));
            }
        } else {
            rotate_matrix_y(0, r.y);
            rotate_matrix_y(0, p->angle);
        }
        if (p->flags & 0x400) {
            load_projected_texture_matrix(lbl_805D951C);
        }
        begin_effect_render__13TParticleCtrlFv();
        if (p->flags & 0x400) {
            setup_particle_tev(0);
        } else {
            s32 st = some_id_805c6f74;
            lbl_805D5660 = st;
            some_id_805c6f74 = st | 0x8021;
            if (is_particle_sprite_additive(p, st) != 0) {
                apply_particle_model_fade_color(p, 1);
            } else {
                apply_particle_model_fade_color(p, 0);
            }
        }
        set_global_param__8TObjFishFi(p->texlist);
        set_depth_buffer_settings_id__FUl(3);
        if (p->motion != 0) {
            draw_ginja_model_with_motion(p->model, p->motion, p->frame);
        } else {
            draw_ginja_object(p->model);
        }
        if (p->flags & 0x400) {
            disable_if_single_screen__13TParticleCtrlFv();
        } else {
            some_id_805c6f74 = lbl_805D5660;
        }
        func_80141618__Fv();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    } else if (flags & 0x2000) {
        draw_particle_refraction_quad(p);
    } else if (flags & 0x800) {
        if (p->def->flags & 0x20) {
            id = p->tex + 0x36;
        } else {
            id = p->tex;
        }
        set_depth_buffer_settings_2__Fv();
        draw_sprite_quad__13TParticleCtrlFPvi(p, id);
        restore_saved_depth_alpha_state();
    } else if (p->def->flags & 0x20) {
        id = p->tex + 0x36;
        TParticleCtrl__sub_801E4E7C(((s32 *)&TParticleCtrl__data_80511F70)[id], p->f6C);
    } else {
        TParticleCtrl__sub_801E4E7C(((s32 *)&TParticleCtrl__data_80511F70)[p->tex], p->f6C);
    }
}

void *TParticleCtrl__sub_8008968C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = TParticleCtrl__data_8048E778;
        TParticleCtrl__sub_8008655C(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *construct_ballistic_particle(void *a0, void *a1, void *a2, void *a3, s32 arg4, u16 arg5, s16 arg6) {
    Fields0_800896E4 *p = (Fields0_800896E4 *)a0;
    Fields1_800896E4 *d = (Fields1_800896E4 *)a1;
    Fields2_800896E4 *pos = (Fields2_800896E4 *)a2;
    Fields3_800896E4 *c = (Fields3_800896E4 *)a3;
    s32 temp_r0;
    f32 *v;
    init_particle_base(a0, a1, arg4);
    p->field_18 = TParticleCtrl__data_8048E778;
    p->field_C4 = TParticleCtrl__data_805D94F8;
    p->field_C8 = TParticleCtrl__data_805D94F8;
    p->field_CC = TParticleCtrl__data_805D94F8;
    p->field_24 = arg5;
    if (p->field_24 & 0x80) {
        p->field_95 = 1;
    }
    p->field_26 = arg6;
    p->field_98 = c->field_0;
    p->field_9C = c->field_4;
    p->field_A0 = c->field_8;
    p->field_70 = (d->field_18 * ((TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500)) + pos->field_0;
    p->field_78 = (d->field_20 * ((TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500)) + pos->field_8;
    if (d->field_88 & 2) {
        p->field_74 = pos->field_4 + d->field_1C;
    } else {
        p->field_74 = (d->field_1C * ((TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500)) + pos->field_4;
    }
    p->field_30 = pos->field_0;
    p->field_38 = pos->field_8;
    if (d->field_88 & 2) {
        p->field_34 = pos->field_4;
    } else {
        p->field_34 = pos->field_4;
    }
    p->field_28 = (d->field_28 * (TParticleCtrl__data_805D9504 * (f32)rand())) + d->field_24;
    p->field_2C = p->field_28;
    temp_r0 = (s32)(((f32)d->field_4C * (TParticleCtrl__data_805D9504 * (f32)rand())) + (f32)d->field_48);
    if (d->field_88 & 1) {
        p->field_5C = TParticleCtrl__data_805D94FC / (f32)((s32 **)(((void **)&TParticleCtrl__data_80511F70)[p->field_1C]))[0x28 / 4][0xC / 4];
    } else {
        p->field_5C = TParticleCtrl__data_805D94FC / (f32)temp_r0;
    }
    p->field_3C = (d->field_38 * (TParticleCtrl__data_805D9504 * (f32)rand())) + d->field_30;
    p->field_40 = (d->field_3C * (TParticleCtrl__data_805D9504 * (f32)rand())) + d->field_34;
    v = &p->field_3C;
    p->field_44 = TParticleCtrl__data_805D94F8;
    rotate_vec_xz(v, v, (s32)(TParticleCtrl__data_805D950C * (lbl_805D9520 * (TParticleCtrl__data_805D9504 * (f32)rand()))));
    if (TParticleCtrl__data_805D94F8 == d->field_54 && TParticleCtrl__data_805D94F8 == d->field_34 && TParticleCtrl__data_805D94F8 == d->field_30) {
        p->field_96 = 0;
        p->field_68 = TParticleCtrl__data_805D94F8;
    } else {
        p->field_96 = (s16)(TParticleCtrl__data_805D950C * (lbl_805D9520 * (TParticleCtrl__data_805D9504 * (f32)rand())));
        p->field_68 = (TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500;
    }
    if (p->field_24 & 0x2000) {
        get_object__13TParticleCtrlFPv((void *)0x1F);
    }
    return (u8 *)a0;
}
#pragma pop

}

typedef s32 M2C_UNK;
struct RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70;
extern RecoveredGlobal_8008C21C_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
struct BF0_80089B50 {
    u8 pad_0[0x18]; M2C_UNK *field_18; u16 field_1C; u8 pad_1E[6]; u16 field_24; s16 field_26;
    f32 field_28; f32 field_2C; f32 field_30; f32 field_34; f32 field_38; f32 field_3C; f32 field_40; f32 field_44;
    u8 pad_48[0x14]; f32 field_5C; u8 pad_60[8]; f32 field_68; u8 pad_6C[4]; f32 field_70; f32 field_74; f32 field_78;
    u8 pad_7C[0x19]; s8 field_95; s16 field_96; s32 field_98; s32 field_9C; s32 field_A0;
    u8 pad_A4[0x20]; f32 field_C4; f32 field_C8; f32 field_CC;
};
struct BF1_80089B50 {
    u8 pad_0[0x18]; f32 field_18; f32 field_1C; f32 field_20; f32 field_24; f32 field_28; u8 pad_2C[4];
    f32 field_30; f32 field_34; f32 field_38; f32 field_3C; u8 pad_40[8]; s32 field_48; s32 field_4C;
    u8 pad_50[4]; f32 field_54; u8 pad_58[0x30]; u8 field_88;
};
struct BF2_80089B50 { f32 field_0; f32 field_4; f32 field_8; };
void rotate_vec_xz(void *, void *, s32);
u8 * init_particle_base(void *, void *, s32);
int get_object__13TParticleCtrlFPv(void *);
s32 rand(void);
extern M2C_UNK TParticleCtrl__data_8048E778[];
extern const f32 TParticleCtrl__data_805D94F8;
extern const f32 TParticleCtrl__data_805D94FC;
extern const f32 TParticleCtrl__data_805D9500;
extern const f32 TParticleCtrl__data_805D9504;
extern const f32 TParticleCtrl__data_805D950C;
extern const f32 lbl_805D9520;
void *init_particle_random_spread__13TParticleCtrlFPvPvPvPv(void *, void *, void *, void *);

#pragma push
#pragma fp_contract on
void *init_particle_random_spread__13TParticleCtrlFPvPvPvPv(void *a0, void *a1, void *a2, void *a3) {
    BF0_80089B50 *p = (BF0_80089B50 *)a0;
    BF1_80089B50 *d = (BF1_80089B50 *)a1;
    BF2_80089B50 *pos = (BF2_80089B50 *)a2;
    s32 temp_r0;
    f32 *v;
    init_particle_base(a0, a1, (s32)a3);
    p->field_18 = TParticleCtrl__data_8048E778;
    p->field_C4 = TParticleCtrl__data_805D94F8;
    p->field_C8 = TParticleCtrl__data_805D94F8;
    p->field_CC = TParticleCtrl__data_805D94F8;
    p->field_70 = (d->field_18 * ((TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500)) + pos->field_0;
    p->field_78 = (d->field_20 * ((TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500)) + pos->field_8;
    if (d->field_88 & 2) {
        p->field_74 = pos->field_4 + d->field_1C;
    } else {
        p->field_74 = (d->field_1C * ((TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500)) + pos->field_4;
    }
    p->field_30 = pos->field_0;
    p->field_38 = pos->field_8;
    if (d->field_88 & 2) {
        p->field_34 = pos->field_4;
    } else {
        p->field_34 = pos->field_4;
    }
    p->field_28 = (d->field_28 * (TParticleCtrl__data_805D9504 * (f32)rand())) + d->field_24;
    p->field_2C = p->field_28;
    temp_r0 = (s32)(((f32)d->field_4C * (TParticleCtrl__data_805D9504 * (f32)rand())) + (f32)d->field_48);
    if (d->field_88 & 1) {
        p->field_5C = TParticleCtrl__data_805D94FC / (f32)((s32 **)(((void **)&TParticleCtrl__data_80511F70)[p->field_1C]))[0x28 / 4][0xC / 4];
    } else {
        p->field_5C = TParticleCtrl__data_805D94FC / (f32)temp_r0;
    }
    p->field_3C = (d->field_38 * (TParticleCtrl__data_805D9504 * (f32)rand())) + d->field_30;
    p->field_40 = (d->field_3C * (TParticleCtrl__data_805D9504 * (f32)rand())) + d->field_34;
    v = &p->field_3C;
    p->field_44 = TParticleCtrl__data_805D94F8;
    rotate_vec_xz(v, v, (s32)(TParticleCtrl__data_805D950C * (lbl_805D9520 * (TParticleCtrl__data_805D9504 * (f32)rand()))));
    if (TParticleCtrl__data_805D94F8 == d->field_54 && TParticleCtrl__data_805D94F8 == d->field_34 && TParticleCtrl__data_805D94F8 == d->field_30) {
        p->field_96 = 0;
        p->field_68 = TParticleCtrl__data_805D94F8;
    } else {
        p->field_96 = (s16)(TParticleCtrl__data_805D950C * (lbl_805D9520 * (TParticleCtrl__data_805D9504 * (f32)rand())));
        p->field_68 = (TParticleCtrl__data_805D9504 * (f32)rand()) - TParticleCtrl__data_805D9500;
    }
    if (p->field_24 & 0x2000) {
        get_object__13TParticleCtrlFPv((void *)0x1F);
    }
    return a0;
}
#pragma pop
