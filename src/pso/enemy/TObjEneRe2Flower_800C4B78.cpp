#include "types.h"
#include "pso/enemy/TUnk_80493450.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjEneRe2Flower_Bomb.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/enemy/TObjEneRe2Flower_EffCurse3.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneBeast.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TNowLoading.h"

typedef struct Vec_800C4A5C {
    f32 x, y, z;
} Vec_800C4A5C;

typedef struct Coll_800C4A5C {
    u8 pad0[0xC];
    f32 radius;
} Coll_800C4A5C;

typedef struct Obj_800C4A5C {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vptr;
    u8 pad1C[0x38 - 0x1C];
    Vec_800C4A5C pos;
    u8 pad44[0xA4 - 0x44];
    Coll_800C4A5C *coll;
    u8 padA8[0xB0 - 0xA8];
    u16 ownerId;
    u8 padB2[0xB4 - 0xB2];
    Vec_800C4A5C start;
    Vec_800C4A5C velA;
    Vec_800C4A5C velB;
    Vec_800C4A5C accel;
    f32 fE4;
    s32 fE8;
    s32 angle;
    f32 fF0;
    s32 fF4;
    s32 fF8;
    s32 fFC;
    s32 f100;
} Obj_800C4A5C;

typedef struct Vec_800C4B78 {
    f32 x, y, z;
} Vec_800C4B78;

typedef struct Ent_800C4B78 {
    u8 pad0[0x38];
    Vec_800C4B78 pos;
} Ent_800C4B78;

typedef struct Obj_800C4B78 {
    u8 pad0[0x1C];
    s32 timer;
    Ent_800C4B78 *target;
    s32 effect;
} Obj_800C4B78;

typedef struct Obj_800C55E0 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Obj_800C55E0;

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
f32 horizontal_distance_squared(void *, void *);
s32 minimap_render_dot(void *, int, int, int);
s32 subtract_vector(void *, void *);
extern const f64 lbl_8043BC88;

s32 apply_actor_gravity(void *, int, f32);
s32 obj_testFlags30(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA03C;
s32 obj_testFlags30(void *, int);
void TObjPlayer__sub_800C4E08(u8 *arg0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
void __dl__7TObjectFPv(void *);
extern s32 lbl_80493450[];
extern s32 lbl_80493450[];
extern const f32 lbl_805DA034;
s32 obj_clearFlags30(void * a0, s32 a1);
extern const f32 lbl_805DA048;
s32 obj_clearFlags30(void * a0, s32 a1);
extern void *player_render_texture_buffer;
void TLobby__sub_803DA16C(void *);
void mem_free(void *);
void TObjPlayer__sub_800C4D44(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
s32 is_alive__9TObjEneDDFv(s32);
s32 subtract_vector(void *, void *);
extern u8 *camera_ctrl_instance;
void run_task__26TObjEneRe2Flower_EffCurse3Fv(Obj_800C4B78 *o);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
extern const f32 lbl_805DA03C;
s32 apply_actor_gravity(void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_clearFlags30(void * a0, s32 a1);
void TObjPlayer__sub_800C4E08(u8 *arg0);
f32 horizontal_distance_squared(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA034;
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 obj_setFlags30(void *, s32);
f32 horizontal_distance_squared(void *, void *);
extern const f32 lbl_805DA030;
s32 apply_actor_gravity(void *, int, f32);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA034;
extern const f32 lbl_805DA048;
s32 obj_clearFlags30(void * a0, s32 a1);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
s32 obj_testFlags30(void *, int);
s32 obj_clearFlags30(void * a0, s32 a1);
s32 apply_actor_gravity(void *, int, f32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback();
s32 minimap_render_dot(void *, int, int, int);
s32 subtract_vector(void *, void *);
extern const f64 lbl_8043BC88;
extern const f32 lbl_805DA030;
extern const f32 lbl_805DA034;
}

extern "C" {

void *dt_with_child_destroy__26TObjEneRe2Flower_EffCurse3Fs(void *arg0, s16 arg1);
s32 spawn_continuous_particle_effect_with_flags(s32, s32, s32);
s32 __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 is_alive__9TObjEneDDFv(s32);
int queue_destruction__7TObjectFv(void*);

}
extern "C" {
void render__7TObjectFv();
void render_shadows__7TObjectFv();
void *dt_with_child_destroy__26TObjEneRe2Flower_EffCurse3Fs(void *arg0, s16 arg1);
void run_task__26TObjEneRe2Flower_EffCurse3Fv(struct Obj_800C4B78 *o);
extern const char lbl_8043BC48[0x1C] = "TObjEneRe2Flower_EffCurse3";
s32 lbl_805D2A58 = (s32)lbl_8043BC48;
void *TObjEneRe2Flower_EffCurse3__vtable[6] = {
    (void *)0x0, (void *)0x0, (void *)&dt_with_child_destroy__26TObjEneRe2Flower_EffCurse3Fs, (void *)&run_task__26TObjEneRe2Flower_EffCurse3Fv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
}
#define TObjEneRe2Flower_EffCurse3__vtable ((s32 *)TObjEneRe2Flower_EffCurse3__vtable)
extern "C" {

#pragma push
#pragma fp_contract on
void TObjEneRe2Flower_EffCurse3::run_task() {
    Obj_800C4B78 *o = (Obj_800C4B78 *)this;
    Vec_800C4B78 a;
    Vec_800C4B78 b;
    o->timer++;
    if (o->timer > 20) {
        queue_destruction__7TObjectFv((void*)(o));
        return;
    }
    if (is_alive__9TObjEneDDFv((s32)o->target) != 0) {
        VecCopy__FP3VecPC3Vec(&a, &o->target->pos);
        a.y += (14.0f);
        VecCopy__FP3VecPC3Vec(&b, camera_ctrl_instance + 0x178);
        subtract_vector(&b, &a);
        ((TObjBoss2Tunnel *)(&b))->update_scale();
        a.x = (2e+01f) * b.x + a.x;
        a.y = (2e+01f) * b.y + a.y;
        a.z = (2e+01f) * b.z + a.z;
        ((TNowLoading *)(o->effect))->copy_pos(&a);
    }
}
#pragma pop

void *TObjEneRe2Flower_EffCurse3::dt_with_child_destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = TObjEneRe2Flower_EffCurse3__vtable;
        if (*(void **)((s8 *)this + 0x24) != NULL) { queue_destruction__7TObjectFv((void*)(*(void **)((s8 *)this + 0x24))); *(s32 *)((s8 *)this + 0x24) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

void *TObjEneRe2Flower_EffCurse3::init_target_ref(s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)this + 0x18) = TObjEneRe2Flower_EffCurse3__vtable;
    *(s32 *)((s8 *)this + 0) = (s32) lbl_805D2A58;
    *(s32 *)((s8 *)this + 0x1C) = 0;
    (*(s32 *)((u8 *)this + 0x20)) = arg2;
    if (is_alive__9TObjEneDDFv((*(s32 *)((u8 *)this + 0x20))) != 0) {
        *(s32 *)((s8 *)this + 0x24) = spawn_continuous_particle_effect_with_flags((*(s32 *)((u8 *)this + 0x20)) + 0x38, 0xDE, 0x40);
    }
    return this;
}

struct Node_800C4D88 { void *p; s32 v; };
struct A_800C4D88 { u8 x[0x24]; };
struct B_800C4D88 { u8 x[0xC]; };
A_800C4D88 lbl_80500C00;
B_800C4D88 lbl_80500C24;
__declspec(section ".data") Node_800C4D88 lbl_80500C30;
#define lbl_80500C30 ((u8 *)&lbl_80500C30)

void TObjPlayer__sub_800C4D44(void) {
    void *p = lbl_80500C30;
    if (p != 0) {
        TLobby__sub_803DA16C(p);
    }
    if (player_render_texture_buffer != 0) {
        mem_free(player_render_texture_buffer);
        player_render_texture_buffer = 0;
    }
}

void *mem_alloc(s32);
void pso_load_texture__6TLobbyFv(void *, void *);
void set_texture_name(void *, void *, s32, s32);
void TObjPlayer::create_render_texture() {
    ((TObjPlayer *)(&lbl_80500C00))->set_render_rect((s32)(player_render_texture_buffer = mem_alloc(0x800)), (s32)0x902, (s32)0x20, (s32)0x20);
    set_texture_name(&lbl_80500C24, &lbl_80500C00, 0x18696, 0x40800000);
    ((Node_800C4D88 *)lbl_80500C30)->p = &lbl_80500C24;
    ((Node_800C4D88 *)lbl_80500C30)->v = 1;
    pso_load_texture__6TLobbyFv(lbl_80500C30, &lbl_80500C24);
}
}
