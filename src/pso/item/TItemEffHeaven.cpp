#include "pso/TItemEffHeaven.h"

#include "types.h"
struct Obj_801092A8 {
    u8 pad0[0x18];
    void *vt;
    s16 f_1C;
    u8 pad1E[2];
    s32 f_20;
    s32 f_24;
    s32 f_28;
    s32 arr[3];
    s32 f_38;
    s32 f_3C;
    f32 v[3];
};

struct VBase_8010900C { u8 pad[0x18]; };
struct VObj_8010900C : VBase_8010900C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    virtual void v21(u32, void *, s32, s32, s32);
};

struct Vec_8010900C { f32 x, y, z; };
struct Rec_8010900C { u8 pad[0x1C]; Vec_8010900C pos; u8 pad28[4]; };
struct Src_8010900C { u8 pad[0xA4]; Rec_8010900C *recs; };
struct Parm_8010900C { s32 t; f32 v; };
struct Self_8010900C {
    u8 pad0[0x1C];
    u16 f1C;
    u8 pad1e[2];
    VObj_8010900C *f20;
    s32 f24;
    s32 f28;
    void *arr[3];
    f32 f38;
    u32 f3C;
    Vec_8010900C pos;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
void *spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_pos__11TNowLoadingFPv(void *, void *);
VObj_8010900C *resolve_hittable_target(u16, s16);
void play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805DAB28;
extern const f32 lbl_805DAB2C;
extern const f32 lbl_805DAB30;

void disallow_rendering__7TObjectFv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__14TItemEffHeaven[];
extern s32 TItemEffHeaven__class_name;
extern const f32 lbl_805DAB34;
Obj_801092A8 *TItemEffHeaven__ct(Obj_801092A8 *self, void *parent, s32 a, s16 b, s32 c);
}

extern "C" {
void request_destroy__11TBoss4Type2FUl(void*);
}
extern "C" int destroy__14TItemEffHeavenFPv(void* p) { return queue_destruction__7TObjectFv(p); }

void TItemEffHeaven::run_task() {
    Self_8010900C *self = (Self_8010900C *)this;
    s32 i;
    s32 j;

    if (self->f20 == NULL) {
        self->f20 = resolve_hittable_target(self->f1C, self->f24);
        if (self->f20 != NULL) {
            VecCopy__FP3VecPC3Vec(&self->pos, &((Src_8010900C *)self->f20)->recs[self->f24].pos);
        }
    }
    if (self->f28 == 0) {
        self->arr[0] = spawn_continuous_particle_effect_with_flags(&self->pos, 0x13B, 0x40);
    }
    if (self->f28 == 0xF) {
        play_sound_effect(0x4002A408, &self->pos, 0, 0);
        self->arr[1] = spawn_continuous_particle_effect_with_flags(&self->pos, 0x134, 0x40);
        self->f38 = lbl_805DAB28;
    }
    if (self->f28 >= 0xF && self->f28 < 0x19) {
        self->f38 -= lbl_805DAB2C;
        self->pos.y += self->f38;
    }
    if (self->f28 == 0x19) {
        for (i = 0; i != 2; i++) {
            request_destroy__11TBoss4Type2FUl(self->arr[i]);
            self->arr[i] = 0;
        }
        u32 id = self->f3C;
        if (id != 0) {
            VObj_8010900C *o = self->f20;
            if (o != NULL) {
                Parm_8010900C b;
                b.t = 4;
                b.v = lbl_805DAB30;
                Parm_8010900C a = b;
                o->v21(id, &a, 0, -1, -1);
            }
        }
    }
    if (self->f28 == 0x14) {
        self->arr[2] = spawn_continuous_particle_effect_with_flags(&self->pos, 0x139, 0x40);
    }
    if (self->f28 == 0x28) {
        request_destroy__11TBoss4Type2FUl(self->arr[2]);
        self->arr[2] = 0;
        queue_destruction__7TObjectFv(self);
        return;
    }
    for (j = 0; j != 3; j++) {
        if (self->arr[j] != 0) {
            copy_pos__11TNowLoadingFPv(self->arr[j], &self->pos);
        }
    }
    self->f20 = NULL;
    self->f28++;
}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        request_destroy__11TBoss4Type2FUl(m_arr[i]);
    }
}

#include "types.h"

extern "C" {

int destroy__14TItemEffHeavenFPv(void* p);
int queue_destruction__7TObjectFv(void*);

Obj_801092A8 *TItemEffHeaven__ct(Obj_801092A8 *self, void *parent, s32 a, s16 b, s32 c) {
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = __vt__14TItemEffHeaven;
    *(s32 *)self = TItemEffHeaven__class_name;
    self->f_1C = b;
    self->f_20 = 0;
    self->f_3C = a;
    self->f_24 = c;
    self->v[2] = lbl_805DAB34;
    self->v[1] = lbl_805DAB34;
    self->v[0] = lbl_805DAB34;
    self->f_28 = 0;
    for (i = 0; i < 3; i++) {
        self->arr[i] = 0;
    }
    disallow_rendering__7TObjectFv(self);
    return self;
}

}
