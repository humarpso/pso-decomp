#include "types.h"
extern "C" { void setup_photon_blast_camera(u8 *); }
#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801A7310 {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Ent_801A70C8 { s32 a; f32 b; s32 c; };

struct Ent_801A710C { u32 a; f32 b; s32 c; };

extern "C" {
s32 select_active_controller__11TCameraCtrlFc(int);
s32 set_scripted_camera_pose(int, int, void *);
s32 cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
extern RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628 TCameraCtrl__view_state;
void begin_photon_summon_camera(u8 *arg0, s8 arg1);
extern struct Ent_801A70C8 deferred_photon_blast_hit_queue[32];
extern s32 deferred_photon_blast_hit_count;
void clear_deferred_photon_blast_hits(void);
extern struct Ent_801A710C photon_blast_hit_queue[32];
extern s32 photon_blast_hit_count;
void clear_photon_blast_hits(void);
}

extern "C" {

void queue_deferred_photon_blast_support(void);
void queue_photon_blast_support(void);
void reset_state_block__10TObjPlayerFPv(void* a0);
void queue_deferred_photon_blast_hit(u32 arg0, s32 arg1, s32 arg2);
extern u32 lbl_805D5D20;
void queue_photon_blast_hit(u32 identity, s32 kind, s32 allow_duplicate);
const f32 *get_photon_blast_entry__10TObjPlayerFi(s32);
extern u32 lbl_805D5D18;

    extern const float lbl_805DC0C0;

void clear_deferred_photon_blast_hits(void) {
    s32 i;
    deferred_photon_blast_hit_count = 0;
    for (i = 0; i < 32; i++) {
        deferred_photon_blast_hit_queue[i].a = 0xFFFF;
        deferred_photon_blast_hit_queue[i].b = 0.0f;
        deferred_photon_blast_hit_queue[i].c = -1;
    }
}

void clear_photon_blast_hits(void) {
    s32 i;
    photon_blast_hit_count = 0;
    for (i = 0; i < 32; i++) {
        photon_blast_hit_queue[i].a = 0xFFFF;
        photon_blast_hit_queue[i].b = 0.0f;
        photon_blast_hit_queue[i].c = -1;
    }
}

void queue_deferred_photon_blast_hit(u32 arg0, s32 arg1, s32 arg2) {
    s32 found = 0;
    if (deferred_photon_blast_hit_count < 0x20) {
        const f32 *e = get_photon_blast_entry__10TObjPlayerFi(arg1);
        if (arg2 == 0) {
            s32 i;
            for (i = 0; i < deferred_photon_blast_hit_count; i++) {
                if (arg0 == (u32)deferred_photon_blast_hit_queue[i].a) {
                    found = 1;
                }
            }
        }
        if (found == 0) {
            deferred_photon_blast_hit_queue[deferred_photon_blast_hit_count].c = arg1;
            deferred_photon_blast_hit_queue[deferred_photon_blast_hit_count].b = e[0];
            deferred_photon_blast_hit_queue[deferred_photon_blast_hit_count].a = arg0;
            lbl_805D5D20 = arg0;
            deferred_photon_blast_hit_count++;
        }
    }
}

void queue_photon_blast_hit(u32 identity, s32 kind, s32 allow_duplicate) {
    const f32 *entry;
    s32 duplicate = 0;
    s32 i;
    if (photon_blast_hit_count >= 32) {
        return;
    }
    entry = get_photon_blast_entry__10TObjPlayerFi(kind);
    if (allow_duplicate == 0) {
        for (i = 0; i < photon_blast_hit_count; i++) {
            if (photon_blast_hit_queue[i].a == identity) {
                duplicate = 1;
            }
        }
    }
    if (duplicate == 0) {
        photon_blast_hit_queue[photon_blast_hit_count].c = kind;
        photon_blast_hit_queue[photon_blast_hit_count].b = *entry;
        photon_blast_hit_queue[photon_blast_hit_count].a = identity;
        lbl_805D5D18 = identity;
        photon_blast_hit_count = photon_blast_hit_count + 1;
    }
}

void queue_deferred_photon_blast_support(void) {
    ((M2C_UNK (*)(f32))queue_deferred_photon_blast_hit)(1.0f);
}

void queue_photon_blast_support(void) {
    ((M2C_UNK (*)(f32))queue_photon_blast_hit)(1.0f);
}
typedef char RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_801A7310_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
void begin_photon_summon_camera(u8 *arg0, s8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801A7310, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_801A7310, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_801A7310, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801A7310, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801A7310, sp10) == 0x8) ? 1 : -1];
    Stack_801A7310 stack;
    s32 temp_r3;
    stack.sp9 = arg1;
    stack.sp8 = get_global_state__14TOKeyMachine01Fv() == 0xE;
    stack.spA = 0;
    stack.spC = 0.0f;
    stack.sp10 = 1.0f;
    if ((M2C_FIELD(&TCameraCtrl__view_state.value, s32 *, 8) & 4) || (M2C_FIELD(&TCameraCtrl__view_state.value, s32 *, 8) & 8)) {
        select_active_controller__11TCameraCtrlFc((int) (5));
    }
    cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x4222));
    temp_r3 = (long) (arg0 + 0x38);
    set_scripted_camera_pose((int) (temp_r3), (int) (temp_r3), (void *) (arg0 + 0x5C));
    M2C_FIELD(arg0, s32 *, 0xFC) = 1;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

typedef struct Vec_801A73B0 { f32 x, y, z; } Vec_801A73B0;

struct PbCamera_801A73B0 {
    u8 pad0[0x104];
    Vec_801A73B0 target;
    Vec_801A73B0 position;
    Vec_801A73B0 destination_target;
    Vec_801A73B0 destination_position;
};

struct PbCameraParams_801A73B0 {
    u8 pad0[0x14];
    s32 projection;
    s32 pad18;
    Vec_801A73B0 position;
    Vec_801A73B0 target;
    u8 pad34[0x50 - 0x34];
};

typedef struct Vec_801A7578 { f32 x, y, z; } Vec_801A7578;

struct Node_801A7578 {
    u8 pad0[4];
    Vec_801A7578 pos;
    s32 id;
    u8 pad1[0x20 - 0x14];
};

struct Reg_801A7578 {
    struct Node_801A7578 *list;
    s32 count;
};

typedef struct Vec_801A7428 { f32 x, y, z; } Vec_801A7428;

struct Rec_801A7428 { s32 a, b, c; Vec_801A7428 v; s32 d; };

struct Entry_801A7428 { u8 bytes[0x1C]; };

struct Group_801A7428 {
    u8 pad0[8];
    Entry_801A7428 *entries;
    s32 count;
};

struct Obj_801A7428 {
    u8 pad0[0x38];
    Vec_801A7428 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
};

extern "C" {
void copy_effect_params(u8 *arg0, u8 *arg1);
void VecCopy__FP3VecPC3Vec(Vec_801A73B0 *, const Vec_801A73B0 *);
void set_active_camera_pose_from_params(struct PbCameraParams_801A73B0 *);
void approach_vector_fixed_distance(Vec_801A73B0 *, Vec_801A73B0 *, Vec_801A73B0 *, f32);
void update_photon_blast_camera_pose(struct PbCamera_801A73B0 *self);
void get_camera_ctrl__9TObjEneDDFPv(Vec_801A7578 *, Vec_801A7578 *);
extern Vec_801A7578 lbl_80446A44;
extern struct Reg_801A7578 photon_blast_joint_origins[];
extern s32 photon_blast_joint_index;
void publish_photon_blast_joint_origins(void);
void create_timed_particle_emitter(Vec_801A7428 *, s32, s32, s32);
Obj_801A7428 *find_entity_by_id(u16);
void copy_effect_params(u8 *arg0, u8 *arg1);
void matrix_mult_vec(s32, Vec_801A7428 *, Vec_801A7428 *);
void rotate_matrix_y(s32, s32);
void push_matrix_from(void *);
void pop_matrices(s32);
extern Group_801A7428 photon_blast_attachment_table[];
extern u8 identity_matrix[];
void spawn_photon_blast_opening_effects(s32 arg0, s32 arg1);
}

extern "C" {

void update_photon_blast_camera_pose(struct PbCamera_801A73B0 *self) {
    struct PbCameraParams_801A73B0 parameters;
    approach_vector_fixed_distance(&self->position, &self->destination_position, &self->position, 0.48f);
    approach_vector_fixed_distance(&self->target, &self->destination_target, &self->target, 0.55f);
    VecCopy__FP3VecPC3Vec(&parameters.position, &self->position);
    VecCopy__FP3VecPC3Vec(&parameters.target, &self->target);
    parameters.projection = 0x4222;
    set_active_camera_pose_from_params(&parameters);
}

void spawn_photon_blast_opening_effects(s32 arg0, s32 arg1) {
    Rec_801A7428 rec;
    Vec_801A7428 pos;
    Obj_801A7428 *obj;
    Group_801A7428 *g;
    Entry_801A7428 *entries;
    s32 count;
    s32 i;
    obj = find_entity_by_id(arg1);
    if (obj == NULL) {
        return;
    }
    g = &photon_blast_attachment_table[arg0];
    count = g->count;
    if (count <= 0) {
        return;
    }
    entries = g->entries;
    for (i = 0; i < count; i++) {
        copy_effect_params((u8 *)&rec, entries[i].bytes);
        push_matrix_from(identity_matrix);
        rotate_matrix_y(0, obj->f60);
        matrix_mult_vec(0, &rec.v, &pos);
        pop_matrices(1);
        pos.x += obj->pos.x;
        pos.y += 30.0f + obj->pos.y;
        pos.z += obj->pos.z;
        create_timed_particle_emitter(&pos, rec.a, rec.b, rec.c);
    }
}

void copy_effect_params(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
}
void publish_photon_blast_joint_origins(void) {
    s32 i;
    for (i = 0; i < photon_blast_joint_origins->count; i++) {
        struct Node_801A7578 *node = &photon_blast_joint_origins->list[i];
        if (photon_blast_joint_index == node->id) {
            Vec_801A7578 origin = lbl_80446A44;
            get_camera_ctrl__9TObjEneDDFPv(&origin, &node->pos);
        }
    }
    photon_blast_joint_index += 1;
}

}

#pragma pop

#pragma push

#include "types.h"

struct PhotonAttachment_801A7638;
struct PhotonDrawOwner_801A7638 {
    u8 unknown00[0x100];
    s32 binding_count;
    u8 unknown104[0x44];
    PhotonAttachment_801A7638 *bindings;
};

struct PhotonDrawContext_801A7638 { PhotonAttachment_801A7638 *bindings; s32 binding_count; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Vec_801A7680 { f32 x, y, z; } Vec_801A7680;

struct Eff_801A7680 {
    void *obj;
    Vec_801A7680 pos;
    s32 flag;
    u8 pad[0x20 - 0x14];
};

struct Self_801A7680 {
    u8 pad0[0x38];
    Vec_801A7680 pos;
    u8 pad1[0x100 - 0x44];
    u32 count;
    u8 pad2[0x148 - 0x104];
    struct Eff_801A7680 *effects;
};

extern "C" {
extern s32 photon_blast_joint_index;

void publish_photon_blast_joint_origins();
int set_global_state__16TObjEneRe7BeruraFi(void*);
void set_photon_blast_joint_callback__10TObjPlayerFPv(PhotonDrawOwner_801A7638 *self);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void update_photon_blast_attachments(struct Self_801A7680 *self);
}

extern "C" {

void apply_all_default__8TFogCtrlFv(void);
int clear_render_context__10TObjPlayerFv(void);
void free_photon__10TObjPlayerFPv(void* p);
int update_all_default__8TFogCtrlFv(void);
int apply_all__8TFogCtrlFii(void*, void*);
int free__11TOBoss4RockFUi(void*);
int set_global_state__16TObjEneRe7BeruraFi(void*);
int update_all__8TFogCtrlFi(void*);

int clear_render_context__10TObjPlayerFv(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

void set_photon_blast_joint_callback__10TObjPlayerFPv(PhotonDrawOwner_801A7638 *self) {
    photon_blast_joint_index=0;
    photon_blast_joint_origins[0].list=(Node_801A7578 *)self->bindings;
    photon_blast_joint_origins[0].count=self->binding_count;
    set_global_state__16TObjEneRe7BeruraFi((void*)publish_photon_blast_joint_origins);
}

void update_photon_blast_attachments(struct Self_801A7680 *self) {
    u32 i;
    struct Eff_801A7680 *e;
    for (i = 0; i < self->count; i++) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(self->effects[i].obj) == 0) {
            self->effects[i].obj = NULL;
        }
        e = &self->effects[i];
        if (e->obj != NULL) {
            if (e->flag >= 0) {
                copy_pos__11TNowLoadingFPvPv(e->obj, &e->pos);
            } else {
                copy_pos__11TNowLoadingFPvPv(e->obj, &self->pos);
            }
        }
    }
}

void free_photon__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x148); if (m) free__11TOBoss4RockFUi(m); }

int update_all_default__8TFogCtrlFv(void) { return update_all__8TFogCtrlFi((void*)(0)); }
void apply_all_default__8TFogCtrlFv(void) { apply_all__8TFogCtrlFii((void*)63, (void*)0); }

}

#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_ready__6TSceneFv();
extern s32 TSceneSora__sky_active_flag;
extern u32 TSceneSora__instance;
void update__10TSceneSoraFv(s32 _w0);
M2C_UNK reset_counter__6TSceneFv();
extern s32 TSceneSora__sky_active_flag;
extern u32 TSceneSora__instance;
void reset_state__10TSceneSoraFv(s32 _w0);
u16 TCameraCtrl__sub_8006A5DC();
void *get_scripted_camera_playback();

M2C_UNK queue_destruction__7TObjectFv(void *);
void update_state__10TSceneSoraFPv(void *arg0);
}

extern "C" {

void enter_scene__10TSceneSoraFi(s32 arg0);
void update_if_active__10TSceneSoraFPv(void *arg0);

M2C_UNK TObjPlayer__sub_800D8A60();
M2C_UNK TObjPlayer__sub_800D8A6C();
M2C_UNK allow_rendering__7TObjectFv(void *);

M2C_UNK disallow_rendering__7TObjectFv(void *);
void update__11TCameraCtrlFv();

extern void *tl_05;

void update_if_active__10TSceneSoraFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x154) & 1)) {
        update__11TCameraCtrlFv();
        update__10TSceneSoraFv((s32)(arg0));
        ((M2C_UNK (*)(void *))update_all_default__8TFogCtrlFv)(arg0);
        TObjPlayer__sub_800D8A6C();
    }
    if (tl_05 != 0) {
        allow_rendering__7TObjectFv(tl_05);
    }
}

extern void *tl_05;

void enter_scene__10TSceneSoraFi(s32 arg0) {
    ((M2C_UNK (*)(void))setup_photon_blast_camera)();
    reset_state__10TSceneSoraFv((s32)(arg0));
    ((M2C_UNK (*)(s32))apply_all_default__8TFogCtrlFv)(arg0);
    TObjPlayer__sub_800D8A60();
    if (tl_05 != NULL) {
        disallow_rendering__7TObjectFv(tl_05);
    }
}
void update__10TSceneSoraFv(s32 _w0) {
    set_ready__6TSceneFv();
    if ((u32) TSceneSora__instance != 0U) {
        TSceneSora__sky_active_flag = 1;
    }
}
void reset_state__10TSceneSoraFv(s32 _w0) {
    reset_counter__6TSceneFv();
    if ((u32) TSceneSora__instance != 0U) {
        TSceneSora__sky_active_flag = 0;
    }
}
void update_state__10TSceneSoraFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xFC);
    switch (temp_r0) {
    case 0:
        ((M2C_UNK (*)(f32))update_photon_blast_camera_pose)(1.0f);
        return;
    case 1:
        if ((M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) || (TCameraCtrl__sub_8006A5DC() != 5)) {
            queue_destruction__7TObjectFv(arg0);
        }
        return;
    }
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy_photon_motion_object(void *arg0, s16 arg1);
void *photon_base_ct(void *arg0);
void update__11TCameraCtrlFv(void);
int release_photon_blast_camera__11TCameraCtrlFv(void);
int restore_player_cameras(void);
void TObjMotion__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

void update__11TCameraCtrlFv(void) { restore_player_cameras(); release_photon_blast_camera__11TCameraCtrlFv(); }

extern M2C_UNK lbl_804C3248[];

struct Vec_801A7B14
{
  f32 x;
  f32 y;
  f32 z;
};

M2C_UNK activate_camera_mode(int);
u8 *get_player_by_client_id(s32);

extern Vec_801A7B14 lbl_80446A08;
extern Vec_801A7B14 lbl_80446A14;
extern Vec_801A7B14 lbl_80446A20;
extern Vec_801A7B14 lbl_80446A2C;
extern u8 identity_matrix[];
extern s32 local_client_id;
void setup_photon_blast_camera(u8 *arg0)
{
  Vec_801A7B14 a = lbl_80446A08;
  Vec_801A7B14 b = lbl_80446A14;
  Vec_801A7B14 c = lbl_80446A20;
  Vec_801A7B14 d = lbl_80446A2C;
  u8 *p;
  if ((*((s32 *) (arg0 + 0x138))) == 0)
  {
    b.x = -8.75f;
    b.y = 43.92f;
    b.x = 28.79f;
    d.x = 0.0f;
    d.y = 39.0f;
    d.x = 0.0f;
  }
  p = get_player_by_client_id(local_client_id);
  if (p != 0)
  {
    push_matrix_from(identity_matrix);
    rotate_matrix_y(0, *((s32 *) (p + 0x60)));
    ((void (*)(s32, void *, void *))matrix_mult_vec)(0, &a, &a);
    ((void (*)(s32, void *, void *))matrix_mult_vec)(0, &b, &b);
    ((void (*)(s32, void *, void *))matrix_mult_vec)(0, &c, &c);
    ((void (*)(s32, void *, void *))matrix_mult_vec)(0, &d, &d);
    pop_matrices(1);
    a.x += *((f32 *) (p + 0x38));
    a.y += *((f32 *) (p + 0x3C));
    a.z += *((f32 *) (p + 0x40));
    b.x += *((f32 *) (p + 0x38));
    b.y += *((f32 *) (p + 0x3C));
    b.z += *((f32 *) (p + 0x40));
    c.x += *((f32 *) (p + 0x38));
    c.y += *((f32 *) (p + 0x3C));
    c.z += *((f32 *) (p + 0x40));
    d.x += *((f32 *) (p - -0x38));
    d.y += *((f32 *) (p + 0x3C));
    d.z += *((f32 *) (p + 0x40));
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x110, &a);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x128, &b);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x104, &c);
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(arg0 + 0x11C, &d);
    activate_camera_mode(9);
  }
}

void *destroy_photon_motion_object(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3248;
        M2C_FIELD(arg0, M2C_UNK *, 0x148) = 0;
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_06;
extern M2C_UNK lbl_804C3248[];

void *photon_base_ct(void *arg0) {
    TObjMotion__ct(arg0, tl_06);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3248;
    M2C_FIELD(arg0, u32 *, 0x134) = 0;
    M2C_FIELD(arg0, u32 *, 0x100) = 0;
    M2C_FIELD(arg0, u32 *, 0x138) = 0;
    M2C_FIELD(arg0, f32 *, 0x150) = 1.0f;
    M2C_FIELD(arg0, u32 *, 0x154) = 0;
    M2C_FIELD(arg0, f32 *, 0x13C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x140) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x144) = 0.0f;
    M2C_FIELD(arg0, u32 *, 0x148) = 0;
    M2C_FIELD(arg0, u16 *, 0x14C) = 0;
    M2C_FIELD(arg0, u32 *, 0xFC) = 0;
    M2C_FIELD(arg0, f32 *, 0x104) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x108) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x10C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x110) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x114) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x118) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x11C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x120) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x124) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x128) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x12C) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x130) = 1.0f;
    return arg0;
}

}

#pragma pop
