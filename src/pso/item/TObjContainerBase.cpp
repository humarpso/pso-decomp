#include "types.h"
#include "pso/item/TObjContainerBase.h"
#include "pso/item/TObjContainerNoItem.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); };

struct RecoveredGlobal_80188DC0_lbl_804B63BC {
    s32 value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_80188DC0___vt__17TObjContainerBase {
    s32 value;
    u8 remaining[0x148];
};

struct Base18 { char pad[0x18]; };

struct RecoveredGlobal_801897A4_lbl_804B63BC {
    s32 value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_801897A4___vt__18TObjContainerEnemy {
    s32 value;
    u8 remaining[0x148];
};

struct Box_80189A50 {
    u8 pad00[0x34];
    s32 model;
    u8 pos[0x28];
    s32 rot;
    u8 pad64[0x326 - 0x64];
    s16 state;
};

struct Spawn_8018990C {
    u8 pad0[0xC];
    u8 pos[0xC];
    u8 pad18[0x38 - 0x18];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Obj_8018990C { u8 pad[0x38]; f32 x, y, z; u8 pad44[0x326 - 0x44]; s16 f326; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__13TUnk_804AF8A0Fv(void *);
void vfunc_6__19TObjContainerNoItemFPsl(u8 *arg0, s16 *arg1, s32 arg2);
s32 send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
extern const f32 lbl_805DBCF4;
f32 vfunc_22__19TObjContainerNoItemFPvf(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_container_base(void *, s32);
extern RecoveredGlobal_80188DC0_lbl_804B63BC forest_box_collision_body_parts;
extern s32 __vt__17TObjContainerBase[];
extern s32 lbl_805D32E8;
u8 *TObjContainerBase__ct(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_container_param(int);
extern s32 lbl_805D5B7C;
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 construct_debris__8TObjChipFPvPvPv(void *, void *, void *);
s32 play_container_break_sound(void *);
s32 get_container_param(int);
void *__nw__7TObjectFUl(int);
extern Spawn_8018990C *const lbl_805D5B80;
extern Spawn_8018990C *const lbl_805D5B84;
extern void *tl_05;
void vfunc_79__19TObjContainerNoItemFv(Obj_8018990C *self);
s32 draw_ginja_box_tree(s32);
s32 scale_matrix(s32, f32, f32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
extern u32 lbl_805D5B78;
extern s32 lbl_805D5B7C;
extern const f32 lbl_805DBCFC;
void vfunc_81__19TObjContainerNoItemFv(u8 *arg0);
}

extern "C" {

void vfunc_80__17TObjContainerBaseFv(void *arg0);
void *__dt__17TObjContainerBaseFv(void *arg0, s16 arg1);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);

void TObjContainerBase::vfunc_80() {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)this + 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) *(s32 *)((s8 *)this + 0x364) != 0) {
            submit_cursor_candidate(this, -1);
        }
    case 1:
        return;
    }
}

extern s32 __vt__17TObjContainerBase[];

void *__dt__17TObjContainerBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjContainerBase;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        ((TObjPlayer *)arg0)->destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80188DC0_lbl_804B63BC_size[sizeof(RecoveredGlobal_80188DC0_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_80188DC0___vt__17TObjContainerBase_size[sizeof(RecoveredGlobal_80188DC0___vt__17TObjContainerBase) == 0x14C ? 1 : -1];
u8 *TObjContainerBase__ct(u8 *arg0, s32 arg1) {
    init_container_base(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80188DC0___vt__17TObjContainerBase *)&__vt__17TObjContainerBase).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D32E8;
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &forest_box_collision_body_parts.value, 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&forest_box_collision_body_parts.value) + 4));
    return arg0;
}

void TObjContainerNoItem::vfunc_6(s16 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj18*)arg0)->m77();
            ((TObjPlayer *)arg0)->clear_player_status_flag((int) (0), (int) (1));
            set_flag8__13TUnk_804AF8A0Fv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            *(s16 *)((s8 *)arg0 + 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        ((TObjPlayer *)arg0)->clear_player_status_flag((int) (0), (int) (1));
        set_flag8__13TUnk_804AF8A0Fv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        *(s16 *)((s8 *)arg0 + 0x326) = 1;
    }
}

typedef char RecoveredGlobal_801897A4_lbl_804B63BC_size[sizeof(RecoveredGlobal_801897A4_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_801897A4___vt__18TObjContainerEnemy_size[sizeof(RecoveredGlobal_801897A4___vt__18TObjContainerEnemy) == 0x14C ? 1 : -1];
void TObjContainerNoItem::vfunc_79() {
    Obj_8018990C *self = (Obj_8018990C *)this;
    void *o;
    if (self->f326 != 1) {
        Spawn_8018990C a = *lbl_805D5B80;
        Spawn_8018990C b = *lbl_805D5B84;
        VecCopy__FP3VecPC3Vec(a.pos, &self->x);
        a.f38 = self->y;
        a.f40 = get_container_param(2);
        a.f44 = lbl_805D5B7C;
        VecCopy__FP3VecPC3Vec(b.pos, &self->x);
        b.f38 = self->y;
        b.f40 = get_container_param(0);
        b.f44 = lbl_805D5B7C;
        spawn_particle_effect_with_flags(&self->x, 0x45, 0x40);
        spawn_particle_effect_with_flags(&self->x, 0x46, 0x40);
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &b);
        }
        play_container_break_sound(self);
    }
}

f32 TObjContainerNoItem::vfunc_22(void *, f32) {
    u8 *arg0 = (u8 *)this;
    s16 sp8;
    if (((u16) *(u16 *)((s8 *)arg0 + 0x1C) >= 0x1000U) && ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) && (access_object_saved_state((void *) (arg0), (void *) (&sp8), (int) (1)) != 0)) {
        sp8 = 1;
        access_object_saved_state((void *) (arg0), (void *) (&sp8), (int) (0));
        send_object_state_update((void *) (arg0), (void *) (&sp8));
    }
    return lbl_805DBCF4;
}
void TObjContainerNoItem::vfunc_81() {
    u8 *arg0 = (u8 *)this;
    if (lbl_805D5B78 != 0U) {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 1:
            break;
        case 0:
        TObjFish::set_global_param(lbl_805D5B7C);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        scale_matrix(0, lbl_805DBCFC, lbl_805DBCFC, lbl_805DBCFC);
        draw_ginja_box_tree(*(s32 *)((s8 *)arg0 + 0x34));
        pop_matrix();
            break;
        }
    }
}

}
