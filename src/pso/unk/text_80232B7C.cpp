#include "types.h"
#include "pso/unk/TUnk_804CC888.h"
#include "pso/misc/TLobby_80226070.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/vector.h"

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
void mem_free(void *);
void __dl__7TObjectFPv(void *);
extern Ent_80232E0C grants_effect_emitter_table[];
extern u8 __vt__13TUnk_804CC888[];
Obj_80232E0C *__dt__13TUnk_804CC888Fv(Obj_80232E0C *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *self, void *parent);
extern u8 lbl_804CC870[];
extern const f32 lbl_805DC844;
extern const f32 lbl_805DC84C;
extern const f32 lbl_805DC850;
extern const f32 lbl_805DC854;
Obj_80232B7C *construct_grants_flash(Obj_80232B7C *self, s32 id, void *parent, Vec_80232B7C *pos, f32 scale);
s32 get_bml_model(s32, u32);
void attach_particle_model(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
void *spawn_particle_effect(void *pos, s32 id);
void *find_entity_by_id(u16 id);
void *__nw__7TObjectFUl(u32);
u8 *construct_timed_sound_voice(u8 *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5);
extern SGrp_80232C50 technique_effect_entry_table[];
extern void *tl_07;
extern s32 technique_effect_bml;
extern s32 lbl_805D63B0;
void run_task__13TUnk_804CC888Fv(Ctl_80232C50 *arg0);

Obj_80232B7C *construct_grants_flash(Obj_80232B7C *self, s32 id, void *parent, Vec_80232B7C *pos, f32 scale) {
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
        VecCopy((Vec *)&self->pos, (const Vec *)pos);
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

void TUnk_804CC888::run_task() {
    u32 i;
    s32 dir;
    u8 *obj;
    s32 r;
    void *p;
    ((Ctl_80232C50 *)this)->timer++;
    if (((Ctl_80232C50 *)this)->timer % 5 == 0) {
        p = __nw__7TObjectFUl(0x50);
        if (p != 0) {
            construct_grants_flash((Obj_80232B7C *) p, ((Ctl_80232C50 *)this)->id, tl_07, 0, lbl_805DC854);
        }
    }
    if (((Ctl_80232C50 *)this)->timer >= 30) {
        for (i = 0; i < technique_effect_entry_table[((Ctl_80232C50 *)this)->kind].count; i++) {
            obj = (u8 *)find_entity_by_id(((Ctl_80232C50 *)this)->id);
            if (obj != 0) {
                SEnt_80232C50 *e = &technique_effect_entry_table[((Ctl_80232C50 *)this)->kind].ents[i];
                if (e->flags & 0x20) {
                    r = (s32)spawn_particle_effect(obj + 0x38, e->a);
                    if (r != 0) {
                        attach_particle_model((u8 *)r, (s32)(get_bml_model(technique_effect_bml, technique_effect_entry_table[((Ctl_80232C50 *)this)->kind].ents[i].flags >> 16)), (s32)lbl_805D63B0, 0, 1, (f32)lbl_805DC854);
                    }
                } else {
                    spawn_particle_effect(obj + 0x38, e->a);
                }
            }
        }
        switch (((Ctl_80232C50 *)this)->kind) {
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
            construct_timed_sound_voice((u8 *)p, (s32)((Ctl_80232C50 *)this)->f30, (s16)(0xF), 0x4002A60D, (s32)dir, (s32)tl_07);
        }
        queue_destruction__7TObjectFv(((Ctl_80232C50 *)this));
    }
}

Obj_80232E0C *__dt__13TUnk_804CC888Fv(Obj_80232E0C *arg0, s16 arg1) {
    u32 i;
    if (arg0 != NULL) {
        arg0->vt = __vt__13TUnk_804CC888;
        for (i = 0; i < grants_effect_emitter_table[arg0->kind].count; i++) {
            if (arg0->items[i] != NULL) {
                queue_destruction__7TObjectFv(arg0->items[i]);
            }
        }
        stop_sound_request(arg0->f20);
        mem_free(arg0->items);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
