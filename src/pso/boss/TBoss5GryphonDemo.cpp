#include "pso/TBoss5GryphonDemo.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TBoss5GryphonColli_C.h"

#include "types.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct E_80066304 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_80066304 { u8 pad[0xa4]; E_80066304 *entries; s32 count; };

struct E_8006633C { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_8006633C { u8 pad[0xa4]; E_8006633C *entries; s32 count; };

struct O_80066304;
struct Seg_800663DC {
    f32 f0;
    f32 f4;
    f32 f8;
    f32 fc;
    u8 pad10[8];
    s32 f18;
    u8 pad1c[0x10];
};

struct Obj_800663DC {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s16 f1c;
    u8 pad1e[0xA4 - 0x1E];
    Seg_800663DC *segs;
    s32 count;
    u8 posbuf[0xC];
};

struct Obj_800665FC { s32 f0; u8 pad4[0x14]; void *f18; f32 f1c; f32 f20; s32 f24; };

struct Cam_800665FC { s8 f8; s8 f9; s16 fa; f32 fc; f32 f10; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 set_camera_capture_overlay_alpha(int);
s32 restore_player_cameras();
u8 *get_scripted_camera_playback();
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void fn_8002B630(void *, void *);
u8 *mem_alloc(s32);
void register_entity_by_id(void *);
int refresh_collision_body_centers__13TUnk_804AF8A0Fv(void*);
extern s32 gryphon_demo_collision_body_desc[];
extern s32 lbl_804886AC[];
extern s32 lbl_805D2808;
extern const f32 lbl_805D8ED0;
extern const f32 lbl_805D8EDC;
Obj_800663DC *TBoss5GryphonDemo__sub_800663DC(Obj_800663DC *arg0, s32 arg1, s32 arg2, void *arg3, f32 len);
s32 TBoss8Dragon__sub_8005D700(void);
void activate_camera_mode(int);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__17TBoss5GryphonDemo[];
extern s32 lbl_805D2810;
extern const f32 lbl_805D8EE0;
Obj_800665FC *__ct__17TBoss5GryphonDemoFv(Obj_800665FC *self, void *parent, s32 arg2, f32 farg0);
}

extern "C" {

void TBoss5GryphonDemo__sub_8006626C(void* p);
int matrix_mult_vec(void*, void*, void*);
int post_translate_matrix(void*);
s32 free_collision_body_parts(void *);
int refresh_collision_body_centers__13TUnk_804AF8A0Fv(void*);
int set_matrix_identity(void*);
int rotate_matrix_y(void*, s32);
int push_matrix(void*);
int pop_matrix(void);
s32 __dl__7TObjectFPv(void *);

void TBoss5GryphonColli_C::render() {  }
void TBoss5GryphonDemo__sub_8006626C(void* p) { ((TBoss5GryphonColli_C *)p)->clear_entry_flags(); }
void TBoss5GryphonDemo::draw_model(void* a1, s32 a2) { push_matrix(this); set_matrix_identity((void*)0); post_translate_matrix(a1); rotate_matrix_y((void*)0, a2); matrix_mult_vec((void*)0, (char*)this + 0xac, (char*)this + 0x38); pop_matrix(); *(s32*)((char*)this + 0x60) = a2; refresh_collision_body_centers__13TUnk_804AF8A0Fv(this); set_all_entry_flags(); }

void TBoss5GryphonColli_C::clear_entry_flags() {
    O_80066304 *self = (O_80066304 *)this;
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags &= ~1;
    }
}

extern s32 lbl_804886AC[];

void TBoss5GryphonDemo::set_all_entry_flags() {
    O_8006633C *self = (O_8006633C *)this;
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags |= 1;
    }
}

void *TBoss5GryphonColli_C::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804886AC;
        unregister_object_by_id();
        free_collision_body_parts(this);
        destroy_particle_controller(0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

Obj_800663DC *TBoss5GryphonDemo__sub_800663DC(Obj_800663DC *arg0, s32 arg1, s32 arg2, void *arg3, f32 len) {
    f32 zero;
    f32 step;
    f32 z;
    Seg_800663DC *s;
    s32 i;
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    arg0->vt = lbl_804886AC;
    arg0->f0 = lbl_805D2808;
    arg0->f1c = TLobby::alloc_actor_ids(0);
    VecCopy__FP3VecPC3Vec(arg0->posbuf, arg3);
    arg0->count = arg2;
    arg0->segs = (Seg_800663DC *)mem_alloc(arg0->count * 0x2C);
    step = lbl_805D8EDC * len;
    s = arg0->segs;
    zero = lbl_805D8ED0;
    i = 0;
    z = len * (f32)(arg0->count - 1);
    for (; i < arg0->count; i++) {
        fn_8002B630(s, gryphon_demo_collision_body_desc);
        s->f0 = zero;
        s->f4 = zero;
        s->f8 = z;
        z -= step;
        s->fc = len;
        s->f18 = 0x10003;
        s++;
    }
    refresh_collision_body_centers__13TUnk_804AF8A0Fv(arg0);
    register_entity_by_id(arg0);
    ((TBoss5GryphonColli_C *)arg0)->clear_entry_flags();
    return arg0;
}

void TBoss5GryphonDemo::render() {  }

void TBoss5GryphonDemo::run_task() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    temp_r31 = get_scripted_camera_playback();
    set_camera_capture_overlay_alpha((int) (0x8F));
    if ((*(u16 *)((s8 *)temp_r31 + 2) & 1) || ((s32) **(s32 **)((s8 *)arg0 + 0x24) == 0)) {
        restore_player_cameras();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
TBoss5GryphonDemo::~TBoss5GryphonDemo() {}
Obj_800665FC *__ct__17TBoss5GryphonDemoFv(Obj_800665FC *self, void *parent, s32 arg2, f32 farg0) {
    Cam_800665FC c;
    __ct__7TObjectFP7TObject(self, parent);
    self->f18 = __vt__17TBoss5GryphonDemo;
    self->f0 = lbl_805D2810;
    self->f1c = farg0;
    self->f20 = lbl_805D8EE0;
    self->f24 = arg2;
    switch (TBoss8Dragon__sub_8005D700()) {
    case 0:
        c.f8 = 1;
        c.f9 = 0;
        c.fa = 0;
        c.fc = self->f20;
        c.f10 = self->f1c;
        activate_camera_mode(5);
        ((TCameraCtrl *)(&c))->cache_target_and_forward(0x238E);
        break;
    }
    return self;
}

}
