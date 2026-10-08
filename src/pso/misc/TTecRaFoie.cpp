#include "types.h"
#pragma readonly_strings on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80237DAC { f32 x, y, z; };

struct RafoieBurst_80237DAC { s32 entry; s32 flags; f32 scale; };

struct RafoieBursts_80237DAC { RafoieBurst_80237DAC *entries; u32 count; };

struct Obj_80237DAC {
    u8 pad0[0x20];
    u16 band;
    u8 pad22[0x28 - 0x22];
    Vec_80237DAC position;
};

struct VBase_18_80237CCC { char pad[0x18]; };

struct VObj_18_80237CCC : VBase_18_80237CCC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

typedef struct Ids_80237CCC { u8 pad[0xF8]; u16 ids[32]; } Ids_80237CCC;

typedef struct Vec_80237FB8 { f32 x, y, z; } Vec_80237FB8;

typedef struct TTecRaFoie_80237FB8 {
    u8 pad0[0x7C];
    Vec_80237FB8 target;
    u8 pad1[0xEC - 0x88];
    s32 target_count;
    u16 first_id;
    u8 pad2[0x148 - 0xF2];
    s32 explicit_position;
} TTecRaFoie_80237FB8;

typedef struct TObjPlayer_80237FB8 {
    u8 pad0[0x2FC];
    Vec_80237FB8 pos;
} TObjPlayer_80237FB8;

struct VBase_18_80237BD8 { char pad[0x18]; };

struct VObj_18_80237BD8 : VBase_18_80237BD8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

struct Eff_80237BD8 { u8 pad[0xc]; f32 scale; };

struct Holder_80237BD8 { u8 pad[0xa4]; Eff_80237BD8 *eff; };

struct Self_80237BD8 {
    u32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    void *source;
    u8 pos[0xc];
    u8 pad2c[0x7c - 0x2c];
    u8 src_pos[0xc];
    u8 pad88[0x90 - 0x88];
    f32 range;
    u8 pad94[0xb4 - 0x94];
    u16 fb4;
    u8 padb6[0xe8 - 0xb6];
    Holder_80237BD8 *holder;
    u8 padec[4];
    s32 ff0;
    u8 padf4[4];
    u16 ids[32];
    s32 f138;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 find_entity_by_id(int);
void apply_technique_to_area_targets(void *);
#define apply_technique_to_area_targets ((M2C_UNK (*)(void *, int))apply_technique_to_area_targets)
void run_task__11TTecRaBartaFv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
#define VecCopy__FP3VecPC3Vec ((void (*)(Vec_80237DAC *, const Vec_80237DAC *))VecCopy__FP3VecPC3Vec)
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *spawn_particle_effect_with_flags(Vec_80237DAC *, s32, s32);
void spawn_rafoie_explosion_bursts(Obj_80237DAC *self);

u16 obj_getField1c(void *);
void construct_area_technique_base(void *, void *, void *, void *, int);
#define construct_area_technique_base ((void (*)(void *, void *, void *, void *, void *))construct_area_technique_base)
void calc_parameters__11TTecRaBartaFv(void *);
extern M2C_UNK __vt__11TTecRaBarta[];
extern u32 TTecRaBarta_class_name;
void *construct_area__11TTecRaBartaFPvPvPvPv(void *self, void *source, void *origin, void *level);
s32 is_split_screen();
void get_bml_model(void *, s32);
#define get_bml_model ((void * (*)(void *, int))get_bml_model)
void attach_particle_model(void *, void *, void *, int, int, f32);
void spawn_particle_effect(void *, s32, void *);
#define spawn_particle_effect ((void * (*)(Vec_80237FB8 *, int))spawn_particle_effect)
u32 find_entity_by_id(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(int);
#define is_valid_and_active__10TObjPlayerFUi ((s32 (*)(TObjPlayer_80237FB8 *))is_valid_and_active__10TObjPlayerFUi)
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
void TTecRaFoie__vt6(TTecRaFoie_80237FB8 *self);
struct Profile_80237A94 { void *entries; u32 count; };
struct Self_80237A94 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1[0x7A - 0x1C];
    s16 band;
    u8 pad2[0xEC - 0x7C];
    void *emitters;
    u8 pad3[0xF4 - 0xF0];
    void **objs;
};

void free__11TOBoss4RockFUi(void *);
#define free__11TOBoss4RockFUi ((M2C_UNK (*)(void *))free__11TOBoss4RockFUi)
M2C_UNK stop_sound_request(void *);
void __dl__7TObjectFPv(void *);
#define __dl__7TObjectFPv ((M2C_UNK (*)(void *))__dl__7TObjectFPv)
void destroy_technique_base__9TTecLukerFPvs(void *, int);
#define destroy_technique_base__9TTecLukerFPvs ((M2C_UNK (*)(void *, int))destroy_technique_base__9TTecLukerFPvs)
extern struct Profile_80237A94 rabarta_band_emitter_table[];
u16 obj_getField1c(void *);
void calc_parameters__11TTecRaBartaFv(void *);
extern M2C_UNK __vt__11TTecRaBarta[];
extern u32 TTecRaBarta_class_name;
void *TTecRaBarta__ct(void *self_, void *source, void *origin, void *pos, void *level);
}

extern "C" {

void TTecRaFoie__vt7(u8 *arg0);
void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecRaBartaFv(void);
s32 play_sound_effect(s32 id, void *pos, s32 a, s32 b);
#define play_sound_effect ((s32 (*)(M2C_UNK, s32, M2C_UNK, M2C_UNK))play_sound_effect)
void *__nw__7TObjectFUl(int);
void update_technique_slot__10TTecRaFoieFi(s32 handle, s32 pitch, s32 c);
#define update_technique_slot__10TTecRaFoieFi ((M2C_UNK (*)(s32, M2C_UNK, M2C_UNK))update_technique_slot__10TTecRaFoieFi)

void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);

void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);

struct Self_80237A94 *__dt__11TTecRaBartaFv(struct Self_80237A94 *self, s16 arg1);

void render__11TTecRaBartaFv(void);

void run_task__11TTecRaBartaFv(u8 *arg0);

struct RecoveredGlobal_80238388_lbl_8044DAF0 {
    M2C_UNK value;
    u8 remaining[0xC];
};
extern "C" {
extern const RafoieBurst_80237DAC lbl_8044DA48[1] = {{494, 0, 1.0f}};
extern const RafoieBurst_80237DAC lbl_8044DA54[2] = {{491, 0, 1.0f}, {494, 0, 1.0f}};
extern const RafoieBurst_80237DAC lbl_8044DA6C[2] = {{393, 0, 1.0f}, {494, 0, 1.0f}};
extern const RafoieBurst_80237DAC lbl_8044DA84[4] = {{396, 0, 1.0f}, {494, 0, 1.0f}, {482, 0x1000, 1.0f}, {486, 0x10, 1.0f}};
extern const RafoieBursts_80237DAC rafoie_burst_table[6] = {
    {(RafoieBurst_80237DAC *)lbl_8044DA48, 1}, {(RafoieBurst_80237DAC *)lbl_8044DA48, 1}, {(RafoieBurst_80237DAC *)lbl_8044DA48, 1},
    {(RafoieBurst_80237DAC *)lbl_8044DA54, 2}, {(RafoieBurst_80237DAC *)lbl_8044DA6C, 2}, {(RafoieBurst_80237DAC *)lbl_8044DA84, 4},
};
const char *TTecRaFoie_class_name = "TTecRaFoie";
extern const RecoveredGlobal_80238388_lbl_8044DAF0 lbl_8044DAF0 = {0};
}

#pragma push
#pragma opt_common_subs off
struct Vec_80237DAC;
typedef s32 M2C_UNK;
#define self ((Self_80237BD8 *)self_)
void *TTecRaBarta__ct(void *self_, void *source, void *origin, void *pos, void *level);
#undef self
#pragma pop

void *construct_area__11TTecRaBartaFPvPvPvPv(void *self, void *source, void *origin, void *level);

void spawn_rafoie_explosion_bursts(Obj_80237DAC *self) {
    Vec_80237DAC higher;
    u32 i;
    VecCopy__FP3VecPC3Vec(&higher, &self->position);
    higher.y = (8.0f) + self->position.y;
    for (i = 0; i < rafoie_burst_table[self->band].count; i++) {
        RafoieBurst_80237DAC *row = &rafoie_burst_table[self->band].entries[i];
        s32 mode = 0;
        void *p;
        if (row->flags & 0x1000) {
            mode = 0x2000;
        }
        if (row->flags & 0x10) {
            p = spawn_particle_effect_with_flags(&self->position, row->entry, mode);
        } else {
            p = spawn_particle_effect_with_flags(&higher, row->entry, mode);
        }
        if (p != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, rafoie_burst_table[self->band].entries[i].scale, rafoie_burst_table[self->band].entries[i].scale);
        }
    }
}

void TTecRaFoie__vt7(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x7A);
    switch (temp_r0) {
    case 0:
        temp_r3 = play_sound_effect(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        play_sound_effect(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = play_sound_effect(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = play_sound_effect(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = play_sound_effect(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}
void TTecRaFoie__vt6(TTecRaFoie_80237FB8 *self) {
    void *emitter;
    TObjPlayer_80237FB8 *target;
    if (self->explicit_position == 1) {
        if (is_split_screen() != 0) {
            spawn_particle_effect(&self->target, 0x39);
        } else {
            emitter = spawn_particle_effect(&self->target, 0x1A);
            if (emitter != NULL) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 9), lbl_805D63B0, 0, 1, (1.0f));
            }
        }
        spawn_particle_effect(&self->target, 0x3A);
        spawn_particle_effect(&self->target, 0x3B);
        return;
    }
    if (self->target_count != 0) {
        target = (TObjPlayer_80237FB8 *) find_entity_by_id(self->first_id);
        if (is_parents_unqueued__9TTecLukerFUi() != 0 && is_valid_and_active__10TObjPlayerFUi(target) != 0) {
            Vec_80237FB8 point = target->pos;
            spawn_particle_effect(&point, 0x39);
            emitter = spawn_particle_effect(&point, 0x1A);
            if (emitter != NULL) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 9), lbl_805D63B0, 0, 1, (1.0f));
            }
        }
    }
}

}

#undef get_bml_model
#undef VecCopy__FP3VecPC3Vec
#undef update_technique_slot__10TTecRaFoieFi
#undef play_sound_effect
#undef construct_area_technique_base
#undef __dl__7TObjectFPv
#undef is_valid_and_active__10TObjPlayerFUi
#undef apply_technique_to_area_targets

#undef destroy_technique_base__9TTecLukerFPvs
#undef spawn_particle_effect
#undef free__11TOBoss4RockFUi
#define spawn_rafoie_explosion_bursts ((s32 (*)(void *))spawn_rafoie_explosion_bursts)

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80238388 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
};

struct RecoveredGlobal_80230D9C_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80230D9C_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80230D9C_arg0
{
  u8 unknown_0[0x78];
  s16 field_78;
  u8 unknown_7A[0xE];
  f32 field_88;
  u8 unknown_8C[0x20];
  s16 field_AC;
};

struct RaFoie_802381F8 {
    u8 pad0[0x22];
    u16 level;
    void *tev;
    u8 m28[0x34 - 0x28];
    f32 sx;
    f32 sy;
    f32 sz;
    u8 pad40[0x48 - 0x40];
    u8 m48[1];
};

#pragma fp_contract on
struct Vec_80239070 { f32 x, y, z; };

struct Eff_80239070 { u8 pad[0xC]; f32 scale; };

struct Holder_80239070 { u8 pad[0xA4]; Eff_80239070 *eff; };

struct VBase_80239070 { char pad[0x18]; };

struct VObj_80239070 : VBase_80239070 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
};

struct Self_80239070 {
    u32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    void *source;
    Vec_80239070 pos;
    u8 pad2c[0x78 - 0x2C];
    s16 level;
    s16 band;
    u8 pad7c[0x90 - 0x7C];
    f32 range;
    u8 pad94[0xB4 - 0x94];
    u16 fb4;
    u8 padb6[0xE8 - 0xB6];
    Holder_80239070 *holder;
    u8 padec[0xF0 - 0xEC];
    Vec_80239070 pts[8];
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 approach_position_if_far(void *, void *, f32);
s32 approach_alpha_clamped(void *, void *, f32);
void update_rafoie_explosion(u8 *arg0);
s32 calc_technique_parameters(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 copy_params__8TTecAntiFPvPv(void *, int);
extern RecoveredGlobal_80230D9C_lbl_804CC510 tech_high_level_linear_power_table;
extern RecoveredGlobal_80230D9C_lbl_804CC55C lbl_804CC55C;
void calc_area_parameters__10TTecRaFoieFPv(u8 *arg0);
void get_bml_model(void *, s32);
void set_cull_none__8TObjFishFv(void);
void set_cull_back__8TObjFishFv(void);
void func_80141618__Fv(void);
void set_depth_buffer_settings_id__FUl(s32);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void set_indirect_tev__6TSceneFii(void *, s32);
void draw_field_1c__6TSceneFPviii(void *, s32, s32, s32);
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(s32, s32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(void *);
void draw_ginja_object(void);
void set_chunk_material_color(void *, s32);
extern u8 *lbl_805D4DF0;
extern s32 lbl_805D5660;
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern s32 some_id_805c6f74;
void render_rafoie_explosion(RaFoie_802381F8 *o);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
void update_technique_slot__10TTecRaFoieFi(s32 handle, s32 pitch, s32 c);
s32 play_sound_effect(s32 id, void *pos, s32 a, s32 b);
void *__nw__7TObjectFUl(int);
void construct_area_technique_base(void *, void *, void *, void *, int);
void calc_damage__11TTecRaZondeFPv(u8 *arg0);
u8 *construct_bolt_effect__9TTecZondeFPvPvPvPviiff(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vector_length(void *);
void normalize_vector(void *);
extern void *__vt__11TTecRaZonde[];
extern u32 TTecRaZonde_class_name;
extern s32 tl_07;
extern const f32 lbl_805DC8F0;
extern const f32 lbl_805DC8F4;
extern const f32 lbl_805DC8F8;
extern const f32 lbl_805DC8FC;
extern const f32 lbl_805DC900;
extern const f32 lbl_805DC904;
void *TTecRaZonde__ct(void *self_, void *source, void *origin, void *level);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80238388_lbl_8044DAF0_size[sizeof(RecoveredGlobal_80238388_lbl_8044DAF0) == 0x10 ? 1 : -1];

typedef struct RecoveredFields_80230D9C_arg0 RecoveredFields_80230D9C_arg0;
typedef struct RecoveredGlobal_80230D9C_lbl_804CC510 RecoveredGlobal_80230D9C_lbl_804CC510;
typedef struct RecoveredGlobal_80230D9C_lbl_804CC55C RecoveredGlobal_80230D9C_lbl_804CC55C;
typedef char RecoveredGlobal_80230D9C_lbl_804CC510_size[((sizeof(RecoveredGlobal_80230D9C_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80230D9C_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80230D9C_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void calc_area_parameters__10TTecRaFoieFPv(u8 *arg0) {
  int new_var;
 new_var = (int) calc_technique_parameters((int) 0x2, (int) ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78, (int) 0xFFFF); do { copy_params__8TTecAntiFPvPv((void *) (arg0 + ((0, 0x88))), new_var); if ((((s16) ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0)) { ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) ((*((s16 *) (((s8 *) (&tech_high_level_linear_power_table.value)) + 0x8))) + ((*((s16 *) (((s8 *) (&tech_high_level_linear_power_table.value)) + 0xa))) * ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78)); return; } } while (0);
  ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 + ((f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_AC * ((RecoveredFields_80230D9C_arg0 *) arg0)->field_78)));
  if (is_technique_ready__8TTecCtrlFv())
  {
    ((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80230D9C_arg0 *) arg0)->field_88 * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x10))));
  }
}

void render_rafoie_explosion(RaFoie_802381F8 *o) {
    f32 x;
    f32 y;
    f32 z;
    s32 id;
    u16 lv;
    if (get_global_state__14TOKeyMachine01Fv() == 0 || get_global_state__14TOKeyMachine01Fv() == 0x12 ||
        get_global_state__14TOKeyMachine01Fv() == 0xF) {
        return;
    }
    begin_effect_render__13TParticleCtrlFv();
    id = some_id_805c6f74;
    lbl_805D5660 = id;
    some_id_805c6f74 = id | 0x200010;
    set_chunk_material_color(o->m48, id);
    if (o->tev != 0) {
        draw_field_1c__6TSceneFPviii(o->tev, 2, 0, 0);
    }
    lv = o->level;
    x = o->sx;
    y = o->sy;
    z = o->sz;
    if (lv >= 0xF && lv < 0x19) {
        x = (1.3f) * x;
        y = (1.3f) * y;
        z = (1.3f) * z;
    } else if (lv >= 0x19 && lv < 0x1E) {
        x = (1.8f) * x;
        y = (1.8f) * y;
        z = (1.8f) * z;
    }
    push_matrix();
    post_translate_matrix(o->m28);
    scale_matrix(0, x, y, z);
    rotate_matrix_y(0, *(s32 *)(lbl_805D4DF0 + 0x194));
    set_global_param__8TObjFishFi(lbl_805D63B0);
    set_cull_back__8TObjFishFv();
    set_depth_buffer_settings_id__FUl(3);
    get_bml_model(lbl_805D63AC, 0xB);
    draw_ginja_object();
    func_80141618__Fv();
    set_cull_none__8TObjFishFv();
    pop_matrix();
    some_id_805c6f74 = lbl_805D5660;
    if (o->tev != 0) {
        set_indirect_tev__6TSceneFii(o->tev, 0);
    }
    end_effect_render__13TParticleCtrlFv();
}

void update_rafoie_explosion(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80238388, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80238388, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80238388, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80238388, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_80238388, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_80238388, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_80238388, sp20) == 0x18) ? 1 : -1];
    Stack_80238388 stack;
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) >= 0x10) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x58) > 0x6E) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    stack.sp8 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8044DAF0.value, s32 *, 0xC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
    stack.sp18 = temp_f1;
    stack.sp1C = temp_f1;
    stack.sp20 = temp_f1;
    if (M2C_FIELD(arg0, f32 *, 0x34) >= (temp_f1 - (1.0f))) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) != 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
        }
        approach_position_if_far((void *) (arg0 + 0x34), (void *) (&stack.sp18), (f32) ((0.05f)));
    } else {
        approach_position_if_far((void *) (arg0 + 0x34), (void *) (&stack.sp18), (f32) ((0.15f)));
    }
    approach_alpha_clamped((void *) (arg0 + 0x48), (void *) (&stack.sp8), (f32) ((0.035f)));
}
#pragma pop

}

extern "C" {

void *__dt__10TTecRaFoieFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

}
struct RecoveredGlobal_802384E0_lbl_804CCB28;
extern "C" {
extern RecoveredGlobal_802384E0_lbl_804CCB28 lbl_804CCB28;

void *__dt__10TTecRaFoieFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)&lbl_804CCB28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

struct Stack_802384E0 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802384E0_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_802384E0_lbl_804CCB28_size[sizeof(RecoveredGlobal_802384E0_lbl_804CCB28) == 0x18 ? 1 : -1];

struct Stack_802385EC {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802385EC_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_802385EC_lbl_804CCB28_size[sizeof(RecoveredGlobal_802385EC_lbl_804CCB28) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80238D10_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80238D10_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80238D10_arg0
{
  u8 unknown_0[0x78];
  s16 field_78;
  u8 unknown_7A[0xE];
  f32 field_88;
  u8 unknown_8C[0x20];
  s16 field_AC;
};

struct RaFoie_80238828 {
    u8 pad0[0x20];
    u8 origin[0xC];
    u8 pad2c[0x68 - 0x2C];
    s32 age;
    u8 pad6c[0x78 - 0x6C];
    s16 level;
    s16 band;
    u8 target[0xC];
};

struct Damage_802386F8 { s32 kind; f32 power; };

struct VBase_802386F8 { char pad[0x18]; };

struct VObj_802386F8 : VBase_802386F8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual s32 m21(s32, Damage_802386F8, s32, s32, s32, void *);
};

struct VBase_18_80238BA4 { char pad[0x18]; };

struct VObj_18_80238BA4 : VBase_18_80238BA4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

typedef struct Point_80238C6C { f32 x, y, z; } Point_80238C6C;

struct Entry_80238C6C { s32 entry; u8 pad[8]; };

struct Profile_80238C6C { struct Entry_80238C6C *entries; u32 count; };

struct Self_80238C6C {
    u8 pad0[0x7A];
    s16 band;
    u8 pad1[0xEC - 0x7C];
    s32 *emitters;
    Point_80238C6C points[8];
};

struct VBase_18_acd6eb { char pad[0x18]; };

struct VObj_18_acd6eb : VBase_18_acd6eb {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(s32);
    virtual void m7();
};

struct Obj_80238AE8 : VObj_18_acd6eb {
    void *source;
};

struct Sub_80238AE8 { u8 pad[0xA4]; u8 *inner; };

struct Elec_80238E14 { s32 type; f32 val; };

struct VBase_18_9c98dd { char pad[0x18]; };

struct VObj_18_9c98dd : VBase_18_9c98dd {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual s32 m21(s32, Elec_80238E14, s32, s32, s32);
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 find_entity_by_id(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(int);
void update_detonation__10TTecRaFoieFPvPv(void *, void *);
void run_task__10TTecRaFoieFv(u8 *arg0);
void update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 play_sound_effect(s32, void *, s32, s32);
void apply_technique_to_area_targets(void *);
extern s32 tl_particle;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);

s32 fn_802A8210(int, int, void *);
extern RecoveredGlobal_802384E0_lbl_804CCB28 lbl_804CCB28;
u8 *create_rafoie_explosion(u8 *arg0, M2C_UNK *arg1, s16 arg2, s16 arg3, s32 arg4, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);

s32 fn_802A8210(int, int, void *);
extern RecoveredGlobal_802384E0_lbl_804CCB28 lbl_804CCB28;
u8 *create_fire_explosion_effect(u8 *arg0, M2C_UNK *arg1, s16 arg2, s32 arg3, f32 farg0);
s32 calc_technique_parameters(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 copy_params__8TTecAntiFPvPv(void *, int);
void calc_damage__11TTecRaZondeFPv(u8 *arg0);
void TTecRaFoie__vt4(u8 *self, u8 *target);
u16 obj_getField1c(void *);
void construct_target_cursor_records__10TObjPlayerFi(void *);
void copy_technique_target_list(void *, void *);
extern M2C_UNK __vt__10TTecRaFoie[];
u8 *construct_targeted__10TTecRaFoieFPvPvPvPvi(u8 *self, void *source, void *origin, void *targets, int level);
s32 create_particle_emitter(void *, int);
s32 alloc_buffer__11TOBoss4RockFPv(int);
extern struct Profile_80238C6C TTecRaZonde__band_profile_table[];
void TTecRaZonde__vt6(struct Self_80238C6C *self);
u16 obj_getField1c(void *);
void construct_target_cursor_records__10TObjPlayerFi(void *);
void fn_80044330(void *);
void construct_area_technique_base(void *, void *, void *, void *, int);
extern M2C_UNK __vt__10TTecRaFoie[];
Obj_80238AE8 *TTecRaFoie__ct(Obj_80238AE8 *arg0, void * _w1, void * _w2, void * _w3, int _w4);
void TTecRaZonde__vt4(u8 *arg0, u8 *arg1);
}

extern "C" {

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1);
void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__10TTecRaFoieFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

u8 *create_rafoie_explosion(u8 *arg0, M2C_UNK *arg1, s16 arg2, s16 arg3, s32 arg4, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802384E0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802384E0, spC) == 0x4) ? 1 : -1];
    Stack_802384E0 stack;
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCB28.value;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    M2C_FIELD(arg0, s16 *, 0x22) = arg3;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (1.2f);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (1.2f);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (1.2f);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) (1.0f);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
    stack.spC += (5.0f);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (&stack.sp8));
    spawn_rafoie_explosion_bursts((void *) (arg0));
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x20)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = fn_802A8210((int) (temp_r3), (int) (0x11), (void *) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (1.9f);
    return arg0;
}

u8 *create_fire_explosion_effect(u8 *arg0, M2C_UNK *arg1, s16 arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802385EC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802385EC, spC) == 0x4) ? 1 : -1];
    Stack_802385EC stack;
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCB28.value;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (1.2f);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (1.2f);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (1.2f);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (1.0f);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) (1.0f);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
    stack.spC += (5.0f);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (&stack.sp8));
    spawn_rafoie_explosion_bursts((void *) (arg0));
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x20)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = fn_802A8210((int) (temp_r3), (int) (0x11), (void *) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (1.9f);
    return arg0;
}

void TTecRaFoie__vt4(u8 *self, u8 *target) {
    Damage_802386F8 d;
    d.kind = 1;
    d.power = *(f32 *)(self + 0x88);
    ((VObj_802386F8 *)target)->m21(*(s32 *)(self + 0x1C), d, *(s32 *)(self + 0xB8), 2, -1, self);
}

void render__10TTecRaFoieFv(void) {  }

void run_task__10TTecRaFoieFv(u8 *arg0) {
    u32 temp_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) == 1) {
        update_detonation__10TTecRaFoieFPvPv((void *) (arg0), (void *) (arg0 + 0x7C));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0xF0)));
    if ((is_parents_unqueued__9TTecLukerFUi() != 0) && (is_valid_and_active__10TObjPlayerFUi((int) (temp_r31)) != 0)) {
        update_detonation__10TTecRaFoieFPvPv((void *) (arg0), (void *) (temp_r31 + 0x2FC));
    }
}

void update_detonation__10TTecRaFoieFPvPv(void *arg0, void *arg1) {
    RaFoie_80238828 *self = (RaFoie_80238828 *)arg0;
    void *p;
    s32 h;

    VecCopy__FP3VecPC3Vec(self->origin, ((void *(*)(void *, void *))VecCopy__FP3VecPC3Vec)(self->target, arg1));
    self->age++;
    if (self->age != 10) {
        return;
    }
    p = __nw__7TObjectFUl(0x64);
    if (p != NULL) {
        create_rafoie_explosion((u8 *)p, (M2C_UNK *)self->target, self->band, 10, tl_particle, (f32)self->level);
    }
    switch (self->band) {
    case 0:
        h = play_sound_effect(0x4002A803, self->target, 0, 0);
        if (h >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, 0x100, 0);
        }
        break;
    case 1:
        play_sound_effect(0x4002A803, self->target, 0, 0);
        break;
    case 2:
    case 3:
        h = play_sound_effect(0x4002A803, self->target, 0, 0);
        if (h >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x180, 0);
        }
        break;
    case 4:
        h = play_sound_effect(0x4002A803, self->target, 0, 0);
        if (h >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x250, 0);
        }
        break;
    case 5:
        h = play_sound_effect(0x4002A803, self->target, 0, 0);
        if (h >= 0) {
            update_technique_slot__10TTecRaFoieFi(h, -0x100, 0);
        }
        break;
    }
    apply_technique_to_area_targets(self);
    queue_destruction__7TObjectFv(self);
}

void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__ct((Obj_80238AE8 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (int)(arg3));
    }
}

void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        construct_targeted__10TTecRaFoieFPvPvPvPvi((u8 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (int)(arg3));
    }
}

extern M2C_UNK __vt__10TTecRaFoie[];

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecRaFoie;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef struct RecoveredFields_80238D10_arg0 RecoveredFields_80238D10_arg0;
typedef struct RecoveredGlobal_80238D10_lbl_804CC510 RecoveredGlobal_80238D10_lbl_804CC510;
typedef struct RecoveredGlobal_80238D10_lbl_804CC55C RecoveredGlobal_80238D10_lbl_804CC55C;
typedef char RecoveredGlobal_80238D10_lbl_804CC510_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80238D10_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

#pragma push
#pragma opt_common_subs off
Obj_80238AE8 *TTecRaFoie__ct(Obj_80238AE8 *arg0, void * _w1, void * _w2, void * _w3, int _w4) {
    Sub_80238AE8 *t;
    construct_area_technique_base((void *)(arg0), (void *)(_w1), (void *)(_w2), (void *)(_w3), (int)(_w4));
    M2C_FIELD(arg0, void **, 0x18) = ((void * *)&__vt__10TTecRaFoie);
    construct_target_cursor_records__10TObjPlayerFi((u8 *)arg0 + 0xEC);
    M2C_FIELD(arg0, u32 *, 0) = (u32)TTecRaFoie_class_name;
    calc_area_parameters__10TTecRaFoieFPv((u8 *)arg0);
    fn_80044330((u8 *)arg0 + 0xEC);
    M2C_FIELD(arg0, s32 *, 0x148) = 1;
    t = M2C_FIELD(arg0, Sub_80238AE8 **, 0xE8);
    if (t != NULL) {
        M2C_FIELD(t->inner, f32 *, 0xC) = M2C_FIELD(arg0, f32 *, 0x90);
    }
    if (arg0->source != NULL) {
        M2C_FIELD(arg0, s16 *, 0xB4) = obj_getField1c(arg0->source);
    }
    arg0->m6(0);
    arg0->m7();
    return arg0;
}
#pragma pop

u8 *construct_targeted__10TTecRaFoieFPvPvPvPvi(u8 *self, void *source, void *origin, void *targets, int level) {
    u8 *proxy;
    construct_area_technique_base(self, source, origin, origin, level);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__10TTecRaFoie;
    construct_target_cursor_records__10TObjPlayerFi(self + 0xEC);
    M2C_FIELD(self, u32 *, 0) = (u32)TTecRaFoie_class_name;
    calc_area_parameters__10TTecRaFoieFPv(self);
    M2C_FIELD(self, s32 *, 0x148) = 0;
    copy_technique_target_list(self + 0xEC, targets);
    if (M2C_FIELD(self, void **, 0x1C) != NULL) {
        M2C_FIELD(self, u16 *, 0xB4) = obj_getField1c(M2C_FIELD(self, void **, 0x1C));
    }
    proxy = M2C_FIELD(self, u8 **, 0xE8);
    if (proxy != NULL) {
        M2C_FIELD(M2C_FIELD(proxy, u8 **, 0xA4), f32 *, 0xC) = M2C_FIELD(self, f32 *, 0x90);
    }
    ((VObj_18_80238BA4 *) self)->m6(0);
    ((VObj_18_80238BA4 *) self)->m7();
    return self;
}

void TTecRaZonde__vt6(struct Self_80238C6C *self);

void calc_damage__11TTecRaZondeFPv(u8 *arg0);
void TTecRaZonde__vt4(u8 *arg0, u8 *arg1);

}

struct Tec_802393D0 { u8 pad[0x20]; f32 pos[3]; u8 pad2c[0xA6 - 0x2C]; s16 band; };

struct RBurst_80238F84 { s32 entry; s32 flags; f32 scale; };

struct RProfile_80238F84 { RBurst_80238F84 *entries; u32 count; };

struct Obj_80238F84 {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0x7A - 0x20];
    s16 band;
    u8 pad7C[0xB4 - 0x7C];
    u16 sourceId;
    u8 padB6[0xE8 - 0xB6];
    void *proxy;
};

extern "C" {
s32 play_sound_effect(s32 id, void *pos, s32 a, s32 b);
void update_technique_slot__10TTecRaFoieFi(s32 handle, s32 pitch, s32 c);
void play_launch_sound__9TTecRestaFPv(Tec_802393D0 *self);
void create_timed_particle_emitter(void *, s32, s32, s32, void *);
void spawn_particle_effect(void *, s32, void *);
void apply_technique_to_area_targets(void *);
void run_task__11TTecRaZondeFv(Obj_80238F84 *self);
}

extern "C" {

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2);
void render__11TTecRaZondeFv(void);
void *__nw__7TObjectFUl(int);
int spawn_support_tec_range_effect(void*);
int init_cast__9TTecRestaFPv(void* p);

void create__11TTecRaZondeFPvPvPv(void *arg0, void *arg1, void *arg2);

}
struct Self_80238EC8 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1[0x7A - 0x1C];
    s16 band;
    u8 pad2[0xEC - 0x7C];
    void **objs;
};
extern "C" {
void free__11TOBoss4RockFUi(void *);
extern void *__vt__11TTecRaZonde[];

Self_80238EC8 *__dt__11TTecRaZondeFv(Self_80238EC8 *self, s16 arg1);

void render__11TTecRaZondeFv(void);

void run_task__11TTecRaZondeFv(Obj_80238F84 *self);

#pragma push
#pragma opt_loop_invariants off
#pragma opt_common_subs off
#define self ((Self_80239070 *)self_)
void *TTecRaZonde__ct(void *self_, void *source, void *origin, void *level);
#undef self
#pragma pop

void play_launch_sound__9TTecRestaFPv(Tec_802393D0 *self);

}

#undef spawn_rafoie_explosion_bursts
