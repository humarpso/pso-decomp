#include "pso/TItemEffHeaven.h"
#include "pso/item/TItemEffHeaven.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/unk/text_80087278.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TNowLoading.h"

#include "types.h"
#include "pso/TParticleCtrl.h"
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

#pragma readonly_strings on
const char *TItemEffHeaven__class_name = "TItemEffHeaven";

extern "C" {
int queue_destruction__7TObjectFv(void*);
void *resolve_hittable_target(u16 actorId, s16 collider);
void play_sound_effect(s32, void *, s32, s32);
}

int destroy__14TItemEffHeavenFPv(void* p) { return queue_destruction__7TObjectFv(p); }

void TItemEffHeaven::run_task() {
    Self_8010900C *self = (Self_8010900C *)this;
    s32 i;
    s32 j;

    if (this->m_20 == NULL) {
        this->m_20 = (VObj_8010900C *)resolve_hittable_target(self->f1C, self->f24);
        if (this->m_20 != NULL) {
            VecCopy((Vec *)&self->pos, (const Vec *)(&((Src_8010900C *)this->m_20)->recs[self->f24].pos));
        }
    }
    if (this->m_28 == 0) {
        self->arr[0] = spawn_continuous_particle_effect_with_flags(&self->pos, 0x13B, 0x40);
    }
    if (this->m_28 == 0xF) {
        play_sound_effect(0x4002A408, &self->pos, 0, 0);
        self->arr[1] = spawn_continuous_particle_effect_with_flags(&self->pos, 0x134, 0x40);
        self->f38 = 200.0f;
    }
    if (this->m_28 >= 0xF && this->m_28 < 0x19) {
        self->f38 -= 20.0f;
        self->pos.y += self->f38;
    }
    if (this->m_28 == 0x19) {
        for (i = 0; i != 2; i++) {
            TParticleCtrl::release(self->arr[i]);
            self->arr[i] = 0;
        }
        u32 id = self->f3C;
        if (id != 0) {
            VObj_8010900C *o = *(VObj_8010900C * *)&this->m_20;
            if (o != NULL) {
                Parm_8010900C b;
                b.t = 4;
                b.v = 2000.0f;
                Parm_8010900C a = b;
                o->v21(id, &a, 0, -1, -1);
            }
        }
    }
    if (this->m_28 == 0x14) {
        self->arr[2] = spawn_continuous_particle_effect_with_flags(&self->pos, 0x139, 0x40);
    }
    if (this->m_28 == 0x28) {
        TParticleCtrl::release(self->arr[2]);
        self->arr[2] = 0;
        queue_destruction__7TObjectFv(self);
        return;
    }
    for (j = 0; j != 3; j++) {
        if (self->arr[j] != 0) {
            ((TParticleCtrl *)self->arr[j])->set_position(&self->pos);
        }
    }
    this->m_20 = NULL;
    this->m_28++;
}

TItemEffHeaven::~TItemEffHeaven() {
    for (int i = 0; i != 3; i++) {
        TParticleCtrl::release(m_arr[i]);
    }
}

TItemEffHeaven::TItemEffHeaven(TObject *parent, s32 a, s16 b, s32 c) : TObject(parent) {
    s32 i;
    m_name = TItemEffHeaven__class_name;
    ((Obj_801092A8 *)this)->f_1C = b;
    ((Obj_801092A8 *)this)->f_20 = 0;
    ((Obj_801092A8 *)this)->f_3C = a;
    ((Obj_801092A8 *)this)->f_24 = c;
    ((Obj_801092A8 *)this)->v[2] = 0.0f;
    ((Obj_801092A8 *)this)->v[1] = 0.0f;
    ((Obj_801092A8 *)this)->v[0] = 0.0f;
    ((Obj_801092A8 *)this)->f_28 = 0;
    for (i = 0; i < 3; i++) {
        ((Obj_801092A8 *)this)->arr[i] = 0;
    }
    disallow_rendering__7TObjectFv(this);
}
