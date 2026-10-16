#include "types.h"
#include "pso/item/TObjContainerJungEx.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TObjContainerItem.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual s32 m77();
};

struct RecoveredGlobal_8018D314_lbl_804B7168 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018D314___vt__19TObjContainerJungEx {
    s32 value;
    u8 remaining[0x148];
};

struct Vec_8018CFD4 { f32 x, y, z; };

struct Spawn_8018CFD4 {
    u8 pad0[0xC];
    Vec_8018CFD4 pos;
    u8 pad18[0x38 - 0x18];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Obj_8018CFD4 { u8 pad[0x38]; Vec_8018CFD4 pos; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__6TLobbyFPv(void *);
void vfunc_6__19TObjContainerJungExFPsl(u8 *arg0, s16 *arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 init_collision_body_parts(void *, s32, s32);
u8 * init_container_base(void *, s32);
extern RecoveredGlobal_8018D314_lbl_804B7168 container_jung_collision_desc;
extern s32 __vt__19TObjContainerJungEx[];
extern s32 TObjContainerJungEx__name;
u8 *TObjContainerJungEx__ct(u8 *arg0, s32 arg1, s32 _w2);
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 construct_debris__8TObjChipFPvPvPv(void *, void *, void *);
s32 play_container_break_sound(void *);
s32 TObjContainerJungEx__sub_8018D900(s32);
s32 get_model__19TObjContainerJungExFl(s32);
void *__nw__7TObjectFUl(int);
extern Spawn_8018CFD4 container_jung_ex_spawn_params_a;
extern Spawn_8018CFD4 container_jung_ex_spawn_params_b;
extern void *tl_05;
void TObjContainerJungEx__vt77(const Obj_8018CFD4 *self);
}

extern "C" {

void TObjContainerJungEx__vt78(void *arg0);
void TObjContainerJungEx__vt79(u8 *arg0);
void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1);
s32 post_translate_matrix(void *);
s32 scale_matrix(s32, f32, f32, f32);
s32 draw_ginja_object();
s32 TObjContainerJungEx__sub_8018D900(s32);
s32 get_model__19TObjContainerJungExFl(s32);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 submit_cursor_candidate(void *, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 set_global_param__8TObjFishFl();

extern void *tl_05;

void *TObjContainerJungEx::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJungEx__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern const f32 lbl_805DBD9C;

#pragma push
#pragma opt_propagation off
void TObjContainerJungEx__vt77(const Obj_8018CFD4 *self) {
    Spawn_8018CFD4 a = container_jung_ex_spawn_params_a;
    f32 pz;
    f32 py;
    f32 px;
    px = self->pos.x;
    py = self->pos.y;
    pz = self->pos.z;
    a.pos.x = px;
    a.pos.y = py;
    a.pos.z = pz;
    a.f38 = py;
    a.f40 = get_model__19TObjContainerJungExFl(1);
    a.f44 = TObjContainerJungEx__sub_8018D900(0);
    Spawn_8018CFD4 b = container_jung_ex_spawn_params_b;
    f32 qz;
    f32 qy;
    f32 qx;
    qx = self->pos.x;
    qy = self->pos.y;
    qz = self->pos.z;
    b.pos.x = qx;
    b.pos.y = qy;
    b.pos.z = qz;
    b.f38 = qy;
    b.f40 = get_model__19TObjContainerJungExFl(2);
    b.f44 = TObjContainerJungEx__sub_8018D900(0);
    spawn_particle_effect_with_flags((void *)&self->pos, 0x45, 0x40);
    spawn_particle_effect_with_flags((void *)&self->pos, 0x46, 0x40);
    void *o = __nw__7TObjectFUl(0x234);
    if (o != NULL) {
        construct_debris__8TObjChipFPvPvPv(o, tl_05, &a);
    }
    o = __nw__7TObjectFUl(0x234);
    if (o != NULL) {
        construct_debris__8TObjChipFPvPvPv(o, tl_05, &b);
    }
    play_container_break_sound((void *)self);
}
#pragma pop

void TObjContainerJungEx::vfunc_6(s16 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj_18 *)(arg0))->m77();
            ((TObjContainerItem *)arg0)->spawn_item((s32)((void *) (arg0)));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            *(s16 *)((s8 *)arg0 + 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        *(s16 *)((s8 *)arg0 + 0x326) = 1;
    }
}

void TObjContainerJungEx__vt79(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
        TObjContainerJungEx__sub_8018D900(0);
        set_global_param__8TObjFishFl();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        scale_matrix(0, lbl_805DBD9C, lbl_805DBD9C, lbl_805DBD9C);
        get_model__19TObjContainerJungExFl(0);
        draw_ginja_object();
        TParticleCtrl::begin_effect_render();
        get_model__19TObjContainerJungExFl(3);
        draw_ginja_object();
        TParticleCtrl::end_effect_render();
        pop_matrix();
    case 1:
        return;
    }
}

void TObjContainerJungEx__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

extern s32 __vt__19TObjContainerJungEx[];

void *__dt__19TObjContainerJungExFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjContainerJungEx;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        ((TObjPlayer *)arg0)->destroy_container_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018D314_lbl_804B7168_size[sizeof(RecoveredGlobal_8018D314_lbl_804B7168) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018D314___vt__19TObjContainerJungEx_size[sizeof(RecoveredGlobal_8018D314___vt__19TObjContainerJungEx) == 0x14C ? 1 : -1];
u8 *TObjContainerJungEx__ct(u8 *arg0, s32 arg1, s32 _w2) {
    init_container_base(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018D314___vt__19TObjContainerJungEx *)&__vt__19TObjContainerJungEx).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjContainerJungEx__name;
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60000000);
    init_collision_body_parts(arg0, (s32) &container_jung_collision_desc.value, 1);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&container_jung_collision_desc.value) + 4));
    return arg0;
}

}
