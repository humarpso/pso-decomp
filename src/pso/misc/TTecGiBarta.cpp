#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802308A0_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_802308A0_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_802308A0_arg0
{
  u8 unknown_0[0x70];
  f32 field_70;
  u8 unknown_74[0x50];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  u8 unknown_D0[0x4];
  f32 field_D4;
  u8 unknown_D8[0x18];
  s16 field_F0;
};

struct HitInfo_802309AC { s32 type; f32 power; };

struct VBase_802309AC { char pad[0x18]; };

struct VObj_802309AC : VBase_802309AC {
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
    virtual void m21(void *, HitInfo_802309AC *, void *, s32, s32);
};

struct Obj_802309AC {
    u8 pad0[0x1C];
    void *source;
    u8 pad20[0xCC - 0x20];
    f32 power;
    u8 padD0[0xF8 - 0xD0];
    void *contact;
    u8 padFC[0x134 - 0xFC];
    u16 ids[32];
    s32 cursor;
};

struct TTecGiBartaData_80230B48 { u8 pad[4]; u32 count; };

struct TTecGiBarta_80230B48 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1c[0xC6 - 0x1C];
    s16 band;
    u8 padc8[0x130 - 0xC8];
    void **emitters;
};

struct TTecGiBarta_80230C58 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vtable;
    void *owner;
    u8 pad20[0xC8 - 0x20];
    s16 fc8;
    u8 padca[0x12C - 0xCA];
    f32 f12c;
    u8 pad130[4];
    u16 slots[32];
    s32 f174;
};

struct Vec_802304A0 { f32 x, y, z; };
struct Row_802304A0 { u32 entry; u32 flags; f32 scale; };
struct Band_802304A0 { Row_802304A0 *rows; u32 count; };
struct Angles_802304A0 { s32 a[3]; };
struct Shot_802304A0 {
    u8 pad0[0x20];
    Vec_802304A0 pos;
    u8 pad2C[0x54 - 0x2C];
    s32 f54;
    s32 f58;
    s32 f5C;
    u8 pad60[0xC6 - 0x60];
    s16 band;
    u16 source;
    u8 padCA[0x130 - 0xCA];
    void **emitters;
};

struct Obj_80230CFC {
    u8 pad0[0x134];
    u16 ids[32];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, const void *);
void *get_bml_motion(void *, u32);
void *get_bml_model(void *, u32);
void attach_particle_model(void *, void *, void *, void *, s32, f32);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *create_timed_particle_emitter(void *, s32, s32, s32);
void *spawn_continuous_particle_with_direction(void *, void *, u32);
void *spawn_particle_effect(void *, s32);
void *create_particle_emitter(void *, u32);
void **alloc_buffer__11TOBoss4RockFPv(u32);
void matrix_mult_vec(s32, void *, void *);
void rotate_matrix_y(s32, s32);
void push_matrix_from(void *);
void pop_matrices(s32);
extern Vec_802304A0 lbl_8044D288;
extern u8 lbl_8058D490[];
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern const f32 lbl_805DC800;
extern const f32 lbl_805DC804;
extern const f32 lbl_805DC808;

s32 calc_technique_parameters(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_802308A0_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_802308A0_lbl_804CC55C lbl_804CC55C;
void calc_params__11TTecGiBartaFPv(u8 *arg0);
u16 obj_getField1c(void *);
void TTecGiBarta__vt6(Obj_802309AC *self, VObj_802309AC *target);
M2C_UNK queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void **);
void __dl__7TObjectFPv(void *);
void destroy_technique_effect_resources__10TObjPlayerFPvs(void *, s16);
extern void *__vt__11TTecGiBarta[];
TTecGiBarta_80230B48 *__dt__11TTecGiBartaFv(TTecGiBarta_80230B48 *self, s16 deleting);
u16 obj_getField1c(void *);
void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0);
void create_particles__11TTecGiBartaFv(void *);
void calc_params__11TTecGiBartaFPv(u8 *arg0);
void construct_aimed_technique_projectile();
extern void *__vt__11TTecGiBarta[];
extern s32 lbl_805D37B8;
extern const f32 lbl_805DC80C;
TTecGiBarta_80230C58 *TTecGiBarta__ct(TTecGiBarta_80230C58 *self, void * _w1, void * _w2, void * _w3, void * _w4);
u16 obj_getField1c(void *);
void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0);
void create_particles__11TTecGiBartaFv(void *);
void calc_params__11TTecGiBartaFPv(u8 *arg0);
void construct_facing_technique__10TObjPlayerFPviPvii();
extern void *__vt__11TTecGiBarta[];
extern s32 lbl_805D37B8;
u8 *construct_facing__11TTecGiBartaFPvPvPvPvPv(u8 *arg0, void * _w1, void * _w2, void * _w3, void * _w4);
}

extern "C" {

void create__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecGiBartaFv(void);
void run_task__11TTecGiBartaFv(void *arg0);
void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0);
s32 play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK dispatch_all_technique_contacts(void *);
u32 find_entity_by_id(u16);
void *__nw__7TObjectFUl(int);
M2C_UNK advance_lifetime_or_destroy(void *);
M2C_UNK move_technique_projectile(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = play_sound_effect(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        play_sound_effect(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = play_sound_effect(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = play_sound_effect(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = play_sound_effect(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
}
struct Raw_802304A0 { u8 b[12]; };
extern "C" {
void create_particles__11TTecGiBartaFv(void *arg0) {
    extern Band_802304A0 lbl_8044D24C[];
    Shot_802304A0 *shot = (Shot_802304A0 *)arg0;
    Angles_802304A0 angles;
    Vec_802304A0 pos;
    Vec_802304A0 off;
    Vec_802304A0 p2;
    Vec_802304A0 v;
    u32 i;
    void *emitter;
    u8 *src;
    u32 flags;

    angles.a[0] = shot->f54;
    angles.a[1] = 0;
    angles.a[2] = shot->f5C;
    shot->emitters = alloc_buffer__11TOBoss4RockFPv(lbl_8044D24C[shot->band].count * 4);
    for (i = 0; i < lbl_8044D24C[shot->band].count; i++) {
        *(Raw_802304A0 *)&pos = *(Raw_802304A0 *)&shot->pos;
        if (lbl_8044D24C[shot->band].rows[i].flags & 0x800) {
            pos.y -= lbl_805DC800;
        }
        if (lbl_8044D24C[shot->band].rows[i].flags & 2) {
            emitter = spawn_continuous_particle_with_direction(&pos, &angles, lbl_8044D24C[shot->band].rows[i].entry);
        } else {
            *(Raw_802304A0 *)&off = *(Raw_802304A0 *)&lbl_8044D288;
            push_matrix_from(lbl_8058D490);
            rotate_matrix_y(0, shot->f58);
            matrix_mult_vec(0, &off, &off);
            pop_matrices(1);
            p2.x = shot->pos.x + off.x;
            p2.y = shot->pos.y + off.y;
            p2.z = shot->pos.z + off.z;
            if (lbl_8044D24C[shot->band].rows[i].flags & 0x800) {
                p2.y -= lbl_805DC800;
            }
            emitter = create_particle_emitter(&p2, lbl_8044D24C[shot->band].rows[i].entry);
        }
        if (emitter != NULL) {
            if (lbl_8044D24C[shot->band].rows[i].flags & 0x40) {
                set_position_xy__10TObjPlayerFPvff(emitter, lbl_8044D24C[shot->band].rows[i].scale, lbl_8044D24C[shot->band].rows[i].scale);
            }
            if (lbl_8044D24C[shot->band].rows[i].flags & 0x20) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, (u16)(lbl_8044D24C[shot->band].rows[i].flags >> 16)), lbl_805D63B0, NULL, 0, lbl_805DC804);
            }
        }
        shot->emitters[i] = emitter;
    }
    if (shot->band == 5) {
        VecCopy__FP3VecPC3Vec(&v, &shot->pos);
        v.y -= lbl_805DC808;
        spawn_particle_effect(&v, 0x1E0);
        spawn_particle_effect(&v, 0x1E1);
        src = (u8 *)find_entity_by_id(shot->source);
        if (src != NULL) {
            emitter = spawn_particle_effect(src + 0x38, 0x18B);
            if (emitter != NULL) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 6), lbl_805D63B0, get_bml_motion(lbl_805D63AC, 2), 0, lbl_805DC804);
            }
            emitter = create_timed_particle_emitter(src + 0x38, 0x18B, 5, 1);
            if (emitter != NULL) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 7), lbl_805D63B0, get_bml_motion(lbl_805D63AC, 2), 0, lbl_805DC804);
            }
            emitter = create_timed_particle_emitter(src + 0x38, 0x18B, 10, 1);
            if (emitter != NULL) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 8), lbl_805D63B0, get_bml_motion(lbl_805D63AC, 2), 0, lbl_805DC804);
            }
            emitter = create_timed_particle_emitter(src + 0x38, 0x18F, 20, 1);
            if (emitter != NULL) {
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 5), lbl_805D63B0, NULL, 0, lbl_805DC804);
            }
        }
    }
}
#pragma auto_inline off

typedef struct RecoveredFields_802308A0_arg0 RecoveredFields_802308A0_arg0;
typedef struct RecoveredGlobal_802308A0_lbl_804CC510 RecoveredGlobal_802308A0_lbl_804CC510;
typedef struct RecoveredGlobal_802308A0_lbl_804CC55C RecoveredGlobal_802308A0_lbl_804CC55C;
typedef char RecoveredGlobal_802308A0_lbl_804CC510_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_802308A0_lbl_804CC55C_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void calc_params__11TTecGiBartaFPv(u8 *arg0) {
  s32 new_var;
  new_var = calc_technique_parameters((int) 4, (int) ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_802308A0_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x10))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x12))) * ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4));
  }
  else
  {
    ((RecoveredFields_802308A0_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_802308A0_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_802308A0_arg0 *) arg0)->field_F0 * ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4)));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      ((RecoveredFields_802308A0_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_802308A0_arg0 *) arg0)->field_CC * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x20))));
    }
  }
  ((RecoveredFields_802308A0_arg0 *) arg0)->field_70 = (f32) ((RecoveredFields_802308A0_arg0 *) arg0)->field_D4;
}

void TTecGiBarta__vt6(Obj_802309AC *self, VObj_802309AC *target) {
    s32 found = 0;
    s32 i;
    for (i = 0; i < 32; i++) {
        if (self->ids[i] == obj_getField1c(target)) {
            found = 1;
        }
    }
    if (found == 0) {
        self->ids[self->cursor] = obj_getField1c(target);
        self->cursor += 1;
        if (self->cursor >= 32) {
            self->cursor = 31;
        }
        HitInfo_802309AC tmp;
        tmp.type = 2;
        tmp.power = self->power;
        HitInfo_802309AC info = tmp;
        target->m21(self->source, &info, self->contact, 4, -1);
    }
}

void create__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecGiBarta__ct((TTecGiBarta_80230C58 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void create_ex__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        construct_facing__11TTecGiBartaFPvPvPvPvPv((u8 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

TTecGiBarta_80230B48 *__dt__11TTecGiBartaFv(TTecGiBarta_80230B48 *self, s16 deleting) {
    extern TTecGiBartaData_80230B48 lbl_8044D24C[];
    if (self) {
        self->vtable = __vt__11TTecGiBarta;
        for (u32 i = 0; i < lbl_8044D24C[self->band].count; ++i) {
            if (self->emitters[i]) {
                queue_destruction__7TObjectFv(self->emitters[i]);
            }
        }
        free__11TOBoss4RockFUi(self->emitters);
        destroy_technique_effect_resources__10TObjPlayerFPvs(self, 0);
        if (deleting > 0) __dl__7TObjectFPv(self);
    }
    return self;
}

void run_task__11TTecGiBartaFv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xC8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    move_technique_projectile(arg0);
    advance_lifetime_or_destroy(arg0);
    dispatch_all_technique_contacts(arg0);
}

TTecGiBarta_80230C58 *TTecGiBarta__ct(TTecGiBarta_80230C58 *self, void * _w1, void * _w2, void * _w3, void * _w4) {
    s32 i;
    construct_aimed_technique_projectile();
    self->vtable = __vt__11TTecGiBarta;
    self->f0 = lbl_805D37B8;
    calc_params__11TTecGiBartaFPv((u8 *)self);
    self->f12c = lbl_805DC80C;
    for (i = 0; i < 32; i++) {
        self->slots[i] = 0xFFFF;
    }
    self->f174 = 0;
    if (self->owner) {
        self->fc8 = ((s16)obj_getField1c(self->owner));
    }
    create_particles__11TTecGiBartaFv(self);
    update_technique_by_phase__11TTecGiBartaFPv((u8 *)self);
    return self;
}

u8 *construct_facing__11TTecGiBartaFPvPvPvPvPv(u8 *arg0, void * _w1, void * _w2, void * _w3, void * _w4) {
    s32 i;
    construct_facing_technique__10TObjPlayerFPviPvii();
    M2C_FIELD(arg0, void **, 0x18) = __vt__11TTecGiBarta;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D37B8;
    calc_params__11TTecGiBartaFPv(arg0);
    for (i = 0; i < 0x20; i++) {
        ((Obj_80230CFC *)arg0)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(arg0, s32 *, 0x174) = 0;
    if (M2C_FIELD(arg0, void **, 0x1C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xC8) = obj_getField1c(M2C_FIELD(arg0, void **, 0x1C));
    }
    create_particles__11TTecGiBartaFv(arg0);
    update_technique_by_phase__11TTecGiBartaFPv(arg0);
    return arg0;
}

void render__11TTecGiBartaFv(void) {  }

}
