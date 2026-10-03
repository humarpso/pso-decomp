#include "types.h"
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
M2C_UNK apply_technique_to_area_targets(void *, int);
void run_task__11TTecRaBartaFv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(Vec_80237DAC *, const Vec_80237DAC *);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
void *spawn_particle_effect_with_flags(Vec_80237DAC *, s32, s32);
extern RafoieBursts_80237DAC lbl_8044DAB4[];
extern const f32 lbl_805DC8C8;
void spawn_rafoie_explosion_bursts(Obj_80237DAC *self);
u16 obj_getField1c(void *);
void construct_area_technique_base(void *, void *, void *, void *, void *);
void TTecRaBarta__sub_802377FC(void *);
extern M2C_UNK __vt__11TTecRaBarta[];
extern u32 lbl_805D37F8;
void *TTecRaBarta__sub_80237CCC(void *self, void *source, void *origin, void *level);
s32 is_split_screen();
void *get_bml_model(void *, int);
void attach_particle_model(void *, void *, void *, int, int, f32);
void *spawn_particle_effect(Vec_80237FB8 *, int);
u32 find_entity_by_id(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(TObjPlayer_80237FB8 *);
extern void *lbl_805D63AC;
extern void *lbl_805D63B0;
extern const f32 TTecRaFoie__data_805DC8CC;
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

M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK TLobby__sub_80226294(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_technique_base__9TTecLukerFPvs(void *, int);
extern struct Profile_80237A94 lbl_8044D9F8[];
void VecCopy__FP3VecPC3Vec(Vec_80237DAC *, const Vec_80237DAC *);
u16 obj_getField1c(void *);
void construct_area_technique_base(void *, void *, void *, void *, void *);
void TTecRaBarta__sub_802377FC(void *);
extern M2C_UNK __vt__11TTecRaBarta[];
extern u32 lbl_805D37F8;
void *TTecRaBarta__ct(void *self_, void *source, void *origin, void *pos, void *level);
}

extern "C" {

void TTecRaFoie__vt7(u8 *arg0);
void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecRaBartaFv(void);
s32 play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__sub_80237CCC((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2));
    }
}

struct Self_80237A94 *__dt__11TTecRaBartaFv(struct Self_80237A94 *self, s16 arg1) {
    u32 i;
    void *obj;

    if (self != NULL) {
        self->vtable = __vt__11TTecRaBarta;
        for (i = 0; i < lbl_8044D9F8[self->band].count; i++) {
            obj = self->objs[i];
            if (obj != NULL) {
                queue_destruction__7TObjectFv(obj);
            }
        }
        TLobby__sub_80226294(self->emitters);
        free__11TOBoss4RockFUi(self->objs);
        destroy_technique_base__9TTecLukerFPvs((void *) (self), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (self));
        }
    }
    return self;
}

void render__11TTecRaBartaFv(void) {  }

void run_task__11TTecRaBartaFv(u8 *arg0) {
    s32 temp_r4;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r4 + 1);
    apply_technique_to_area_targets((void *) (arg0), (int) (temp_r4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) > (s16) M2C_FIELD(arg0, s16 *, 0xA8)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

#pragma push
#pragma opt_common_subs off
struct Vec_80237DAC;
typedef s32 M2C_UNK;
#define self ((Self_80237BD8 *)self_)
void *TTecRaBarta__ct(void *self_, void *source, void *origin, void *pos, void *level) {
    s32 i;
    typedef Vec_80237DAC *(*VecCopyFn_80237BD8)(void *, void *);
    construct_area_technique_base(self_, source, origin, pos, level);
    self->vt = __vt__11TTecRaBarta;
    self->f0 = lbl_805D37F8;
    TTecRaBarta__sub_802377FC(self);
    self->ff0 = 1;
    ((VecCopyFn_80237BD8)VecCopy__FP3VecPC3Vec)(self->pos, ((VecCopyFn_80237BD8)VecCopy__FP3VecPC3Vec)(self->src_pos, pos));
    if (self->holder != 0) {
        self->holder->eff->scale = self->range;
    }
    for (i = 0; i < 32; i++) {
        self->ids[i] = 0xFFFF;
    }
    self->f138 = 0;
    ((VObj_18_80237BD8 *)self)->m6((s32)self->pos);
    ((VObj_18_80237BD8 *)self)->m7();
    if (self->source != 0) {
        self->fb4 = obj_getField1c(self->source);
    }
    return self_;
}
#undef self
#pragma pop

void *TTecRaBarta__sub_80237CCC(void *self, void *source, void *origin, void *level) {
    s32 i;
    construct_area_technique_base(self, source, origin, origin, level);
    M2C_FIELD(self, M2C_UNK **, 0x18) = __vt__11TTecRaBarta;
    M2C_FIELD(self, u32 *, 0) = lbl_805D37F8;
    M2C_FIELD(self, s32 *, 0xF0) = 0;
    TTecRaBarta__sub_802377FC(self);
    if (M2C_FIELD(self, u8 **, 0xE8) != NULL) {
        M2C_FIELD(M2C_FIELD(M2C_FIELD(self, u8 **, 0xE8), u8 **, 0xA4), f32 *, 0xC) = M2C_FIELD(self, f32 *, 0x90);
    }
    for (i = 0; i < 32; i++) {
        ((Ids_80237CCC *) self)->ids[i] = 0xFFFF;
    }
    M2C_FIELD(self, s32 *, 0x138) = 0;
    ((VObj_18_80237CCC *) self)->m6(0);
    ((VObj_18_80237CCC *) self)->m7();
    if (M2C_FIELD(self, void **, 0x1C) != NULL) {
        M2C_FIELD(self, u16 *, 0xB4) = obj_getField1c(M2C_FIELD(self, void **, 0x1C));
    }
    return self;
}

void spawn_rafoie_explosion_bursts(Obj_80237DAC *self) {
    Vec_80237DAC higher;
    u32 i;
    VecCopy__FP3VecPC3Vec(&higher, &self->position);
    higher.y = lbl_805DC8C8 + self->position.y;
    for (i = 0; i < lbl_8044DAB4[self->band].count; i++) {
        RafoieBurst_80237DAC *row = &lbl_8044DAB4[self->band].entries[i];
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
            set_position_xy__10TObjPlayerFPvff(p, lbl_8044DAB4[self->band].entries[i].scale, lbl_8044DAB4[self->band].entries[i].scale);
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
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 9), lbl_805D63B0, 0, 1, TTecRaFoie__data_805DC8CC);
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
                attach_particle_model(emitter, get_bml_model(lbl_805D63AC, 9), lbl_805D63B0, 0, 1, TTecRaFoie__data_805DC8CC);
            }
        }
    }
}

}
