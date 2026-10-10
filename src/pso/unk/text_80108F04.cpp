#include "types.h"

struct Ent_80108F04 { u8 pad0[0x1C]; u8 sub[0x10]; };

struct Src_80108F04 { u8 pad0[0xA4]; Ent_80108F04 *ents; };

struct Arg_80108F04 { Src_80108F04 *src; s32 idx; };

struct Flame_80108F04 {
    s32 name;
    u8 pad4[0x18 - 0x4];
    void *vt;
    void *x1c;
    s16 x20;
    s32 idx;
};

extern "C" {
void *__nw__7TObjectFUl(u32 size);
void spawn_item_timer__13TItemAttackerFiii(void *obj, void *cb, s32 frames);
int destroy__14TItemEffHeavenFPv(void *p);
extern void *tl_05;
void spawn_flame_effect(void *self, void *target);
s16 obj_getField1c(void *);
void disallow_rendering__7TObjectFv(void *);
void *create_particle_emitter(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern void *__vt__13TItemEffFlame[];
extern s32 TItemEffFlame__class_name;
void *TItemEffFlame__ct(void *arg0, void *parent, void *target);
}

extern "C" {

#define self ((Flame_80108F04 *)arg0)
#define arg2 ((Arg_80108F04 *)target)
void *TItemEffFlame__ct(void *arg0, void *parent, void *target) {
    __ct__7TObjectFP7TObject(arg0, parent);
    self->vt = __vt__13TItemEffFlame;
    self->name = TItemEffFlame__class_name;
    self->x20 = obj_getField1c(arg2->src);
    self->idx = arg2->idx;
    {
        Src_80108F04 *src = arg2->src;
        self->x1c = ((void *(*)(void *, s32, void *))create_particle_emitter)(src->ents[self->idx].sub, 0x1BB, src);
    }
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}
#undef self
#undef arg2

void spawn_flame_effect(void *self, void *target) {
    void *p;
    if (target != NULL) {
        p = __nw__7TObjectFUl(0x28);
        if (p != NULL) {
            p = TItemEffFlame__ct((void *)(p), (void *)(tl_05), (void *)(target));
        }
        spawn_item_timer__13TItemAttackerFiii(p, (void *)destroy__14TItemEffHeavenFPv, 0x1E);
    }
}

}
