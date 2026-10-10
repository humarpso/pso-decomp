#include "pso/TBoss5GryphonDemo.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_80066304 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_80066304 { u8 pad[0xa4]; E_80066304 *entries; s32 count; };

struct E_8006633C { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct O_8006633C { u8 pad[0xa4]; E_8006633C *entries; s32 count; };

typedef s32 M2C_UNK;
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
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_active_player__10TObjPlayerFi(int);
M2C_UNK restore_player_cameras();
u8 *get_scripted_camera_playback();
void run_task__17TBoss5GryphonDemoFv(u8 *arg0);
void clear_entry_flags__17TBoss5GryphonDemoFPv(O_80066304 *self);
void set_all_entry_flags__17TBoss5GryphonDemoFPv(O_8006633C *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void fn_8002B630(void *, void *);
void clear_entry_flags__17TBoss5GryphonDemoFPv(O_80066304 *self);
u8 *alloc_buffer__11TOBoss4RockFPv(s32);
void register_entity_by_id(void *);
int refresh_collision_body_centers(void*);
void construct_collider_proxy__10TObjPlayerFPv(void *);
s16 alloc_actor_ids__6TLobbyFi(s32);
extern M2C_UNK lbl_80488668[];
extern M2C_UNK lbl_804886AC[];
extern s32 lbl_805D2808;
extern const f32 lbl_805D8ED0;
extern const f32 lbl_805D8EDC;
Obj_800663DC *TBoss5GryphonDemo__sub_800663DC(Obj_800663DC *arg0, M2C_UNK arg1, s32 arg2, void *arg3, f32 len);
s32 TBoss8Dragon__sub_8005D700(void);
void activate_camera_mode(int);
void cache_target_and_forward__11TCameraCtrlFii(void *, int);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 __vt__17TBoss5GryphonDemo[];
extern s32 lbl_805D2810;
extern const f32 lbl_805D8EE0;
Obj_800665FC *__ct__17TBoss5GryphonDemoFv(Obj_800665FC *self, void *parent, s32 arg2, f32 farg0);
}

extern "C" {

void TBoss5GryphonDemo__sub_80066268(void);
void TBoss5GryphonDemo__sub_8006626C(void* p);
void *destroy__17TBoss5GryphonDemoFPvs(void *arg0, s16 arg1);
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2);
void render__17TBoss5GryphonDemoFv(void);
int matrix_mult_vec(void*, void*, void*);
int post_translate_matrix(void*);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
int refresh_collision_body_centers(void*);
int set_matrix_identity(void*);
int rotate_matrix_y(void*, void*);
int push_matrix(void*);
int pop_matrix(void);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

void TBoss5GryphonDemo__sub_80066268(void) {  }
void TBoss5GryphonDemo__sub_8006626C(void* p) { clear_entry_flags__17TBoss5GryphonDemoFPv((O_80066304 *)((void*)(p))); }
void draw_model__17TBoss5GryphonDemoFPvPvPv(void* p, void* a1, void* a2) { push_matrix(p); set_matrix_identity((void*)0); post_translate_matrix(a1); rotate_matrix_y((void*)0, a2); matrix_mult_vec((void*)0, (char*)p + 0xac, (char*)p + 0x38); pop_matrix(); *(void**)((char*)p + 0x60) = a2; refresh_collision_body_centers(p); set_all_entry_flags__17TBoss5GryphonDemoFPv((O_8006633C *)((void*)(p))); }

void clear_entry_flags__17TBoss5GryphonDemoFPv(O_80066304 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags &= ~1;
    }
}

extern M2C_UNK lbl_804886AC[];

void set_all_entry_flags__17TBoss5GryphonDemoFPv(O_8006633C *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        self->entries[i].flags |= 1;
    }
}

void *destroy__17TBoss5GryphonDemoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804886AC;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_800663DC *TBoss5GryphonDemo__sub_800663DC(Obj_800663DC *arg0, M2C_UNK arg1, s32 arg2, void *arg3, f32 len) {
    f32 zero;
    f32 step;
    f32 z;
    Seg_800663DC *s;
    s32 i;
    construct_collider_proxy__10TObjPlayerFPv(arg0);
    arg0->vt = lbl_804886AC;
    arg0->f0 = lbl_805D2808;
    arg0->f1c = alloc_actor_ids__6TLobbyFi(0);
    VecCopy__FP3VecPC3Vec(arg0->posbuf, arg3);
    arg0->count = arg2;
    arg0->segs = (Seg_800663DC *)alloc_buffer__11TOBoss4RockFPv(arg0->count * 0x2C);
    step = lbl_805D8EDC * len;
    s = arg0->segs;
    zero = lbl_805D8ED0;
    i = 0;
    z = len * (f32)(arg0->count - 1);
    for (; i < arg0->count; i++) {
        fn_8002B630(s, lbl_80488668);
        s->f0 = zero;
        s->f4 = zero;
        s->f8 = z;
        z -= step;
        s->fc = len;
        s->f18 = 0x10003;
        s++;
    }
    refresh_collision_body_centers(arg0);
    register_entity_by_id(arg0);
    clear_entry_flags__17TBoss5GryphonDemoFPv((O_80066304 *)arg0);
    return arg0;
}

void render__17TBoss5GryphonDemoFv(void) {  }

void run_task__17TBoss5GryphonDemoFv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = get_scripted_camera_playback();
    set_active_player__10TObjPlayerFi((int) (0x8F));
    if ((M2C_FIELD(temp_r31, u16 *, 2) & 1) || ((s32) *M2C_FIELD(arg0, s32 **, 0x24) == 0)) {
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
        cache_target_and_forward__11TCameraCtrlFii(&c, 0x238E);
        break;
    }
    return self;
}

}
