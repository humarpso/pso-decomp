#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ent_80232E0C { u32 a; u32 count; };

struct Obj_80232E0C {
    u8 pad0[0x18];
    void *vt;
    void **items;
    s32 f20;
    s32 kind;
};

struct Vec_80232B7C { f32 x, y, z; };

struct Obj_80232B7C {
    u8 pad0[0x18];
    void *vt;
    u16 id;
    Vec_80232B7C pos;
    Vec_80232B7C scale;
    f32 f38;
    f32 f3c;
    f32 f40;
    f32 f44;
    s32 f48;
    f32 f4c;
};

typedef s32 M2C_UNK;
struct Obj_80232B7C;
struct SEnt_80232C50 { s32 a; u32 flags; s32 c; };

struct SGrp_80232C50 { SEnt_80232C50 *ents; u32 count; };

struct Ctl_80232C50 {
    u8 pad0[0x24];
    s32 kind;
    u8 pad28[4];
    s16 timer;
    u16 id;
    u8 f30[4];
};

extern "C" {
void __dt__7TObjectFv(void *, s32);
void queue_destruction__7TObjectFv(void *);
void free__11TOBoss4RockFUi(void *);
void stop_sound_request(s32);
void __dl__7TObjectFPv(void *);
extern Ent_80232E0C lbl_8044D53C[];
extern u8 lbl_804CC888[];
Obj_80232E0C *fn_80232E0C(Obj_80232E0C *arg0, s16 arg1);
void VecCopy__FP3VecPC3Vec(Vec_80232B7C *, Vec_80232B7C *);
void __ct__7TObjectFP7TObject(void *self, void *parent);
extern u8 lbl_804CC870[];
extern const f32 lbl_805DC844;
extern const f32 lbl_805DC84C;
extern const f32 lbl_805DC850;
extern const f32 lbl_805DC854;
Obj_80232B7C *fn_80232B7C(Obj_80232B7C *self, s32 id, void *parent, Vec_80232B7C *pos, f32 scale);
void queue_destruction__7TObjectFv(void *);
s32 get_bml_model(s32, u32);
M2C_UNK attach_particle_model(s32, s32, s32, int, int, f32);
s32 spawn_particle_effect(void *, s32);
u8 *find_entity_by_id(u16);
void *__nw__7TObjectFUl(u32);
Obj_80232B7C *fn_80232B7C(Obj_80232B7C *self, s32 id, void *parent, Vec_80232B7C *pos, f32 scale);
M2C_UNK construct_timed_sound_voice(void *, void *, int, int, int, void *);
extern SGrp_80232C50 lbl_8044D56C[];
extern void *tl_07;
extern s32 lbl_805D63AC;
extern s32 lbl_805D63B0;
extern const f32 lbl_805DC854;
void grants_presentation_update(Ctl_80232C50 *arg0);
}

extern "C" {

Obj_80232B7C *fn_80232B7C(Obj_80232B7C *self, s32 id, void *parent, Vec_80232B7C *pos, f32 scale) {
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = lbl_804CC870;
    self->id = id;
    self->pos.x = lbl_805DC844;
    self->pos.y = lbl_805DC844;
    self->pos.z = lbl_805DC844;
    self->scale.x = lbl_805DC84C;
    self->scale.y = lbl_805DC84C;
    self->scale.z = lbl_805DC84C;
    self->f4c = lbl_805DC84C;
    if ((u16)id == 0xffff && pos != 0) {
        VecCopy__FP3VecPC3Vec(&self->pos, pos);
        self->scale.x = scale;
        self->scale.y = scale;
        self->scale.z = scale;
        self->f4c = lbl_805DC850;
    }
    self->f38 = lbl_805DC854;
    self->f3c = lbl_805DC854;
    self->f40 = lbl_805DC854;
    self->f44 = lbl_805DC854;
    self->f48 = 0;
    return self;
}

void grants_presentation_update(Ctl_80232C50 *arg0) {
    u32 i;
    s32 dir;
    u8 *obj;
    s32 r;
    void *p;
    arg0->timer++;
    if (arg0->timer % 5 == 0) {
        p = __nw__7TObjectFUl(0x50);
        if (p != 0) {
            fn_80232B7C((Obj_80232B7C *) p, arg0->id, tl_07, 0, lbl_805DC854);
        }
    }
    if (arg0->timer >= 30) {
        for (i = 0; i < lbl_8044D56C[arg0->kind].count; i++) {
            obj = find_entity_by_id(arg0->id);
            if (obj != 0) {
                SEnt_80232C50 *e = &lbl_8044D56C[arg0->kind].ents[i];
                if (e->flags & 0x20) {
                    r = spawn_particle_effect(obj + 0x38, e->a);
                    if (r != 0) {
                        attach_particle_model(r, get_bml_model(lbl_805D63AC, lbl_8044D56C[arg0->kind].ents[i].flags >> 16), lbl_805D63B0, 0, 1, lbl_805DC854);
                    }
                } else {
                    spawn_particle_effect(obj + 0x38, e->a);
                }
            }
        }
        switch (arg0->kind) {
        case 0:
        case 1:
            dir = 0x100;
            break;
        case 2:
        case 3:
            dir = 0;
            break;
        case 4:
        case 5:
            dir = -0x100;
            break;
        }
        p = __nw__7TObjectFUl(0x28);
        if (p != 0) {
            construct_timed_sound_voice(p, arg0->f30, 0xF, 0x4002A60D, dir, tl_07);
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

Obj_80232E0C *fn_80232E0C(Obj_80232E0C *arg0, s16 arg1) {
    u32 i;
    if (arg0 != NULL) {
        arg0->vt = lbl_804CC888;
        for (i = 0; i < lbl_8044D53C[arg0->kind].count; i++) {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
            }
        }
        stop_sound_request(arg0->f20);
        free__11TOBoss4RockFUi(arg0->items);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
