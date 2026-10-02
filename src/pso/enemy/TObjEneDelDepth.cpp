#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m77();
    virtual void m78();
    virtual M2C_UNK m79(s32);
};

struct Ene_803154A8;
typedef void (Ene_803154A8::*Fn_803154A8)(void);
struct Ent_803154A8 { Fn_803154A8 f; u8 rest[12]; };
struct Ene_803154A8 {
    u8 pad[0x374];
    s32 idx;
};

struct RecoveredGlobal_80315A40___vt__15TObjEneDelDepth {
    M2C_UNK value;
    u8 remaining[0x14C];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_803155D4 { f32 x; f32 y; f32 z; };

struct Dep_803155D4 {
    u8 pad0[0x38];
    Vec_803155D4 pos;
    u8 pad1[0x60 - 0x44];
    s32 f60;
    u8 pad2[0x37C - 0x64];
    s32 f37C;
    u8 pad3[0x398 - 0x380];
    f32 f398;
    f32 f39C;
    u8 f3A0[0x3E0 - 0x3A0];
    s32 flags;
};

struct VBase_18_b31a3c { char pad[0x18]; };

struct VObj_18_b31a3c : VBase_18_b31a3c {
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
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual M2C_UNK m80();
};

typedef s32 M2C_UNK;
struct Vec_8031551C { f32 x; f32 y; f32 z; };

struct Dep_8031551C {
    u8 pad0[0x38];
    Vec_8031551C pos;
    u8 pad1[0x60 - 0x44];
    s32 f60;
    u8 pad2[0x37C - 0x64];
    s32 f37C;
    u8 pad3[0x398 - 0x380];
    f32 f398;
    f32 f39C;
    u8 f3A0[0x3E0 - 0x3A0];
    s32 flags;
    u8 f3E4[4];
};

extern "C" {
s32 add_flags_2e4__10TObjPlayerFPvUi(void *, int);
s32 initialize__9TObjEnemyFPv(void *);
s32 project_actor_to_ground(void *, void *, int);
void TObjEneDelDepth__sub_803154A8(Ene_803154A8 *o, s32 i);
extern Ent_803154A8 lbl_804E836C[];
extern M2C_UNK __vt__15TObjEneDelDepth[];
extern s32 lbl_805D4118;
u8 *TObjEneDelDepth__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 TObjEneDelDepth__data_805DF258;
extern const f32 lbl_805DF2DC;
void TObjEneDelDepth__sub_80315888(u8 *arg0);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, void *, int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void TObjEneDelDepth__sub_80315518(void);
M2C_UNK reset_globals__15TObjEneDelDepthFv();
M2C_UNK TObjEneDelDepth__sub_80315D34();
M2C_UNK TObjEneDelDepth__sub_803162A8(s32);
M2C_UNK set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern Vec_803155D4 lbl_80475DA4[];
extern const f32 TObjEneDelDepth__data_805DF258;
extern const f32 TObjEneDelDepth__data_805DF260;
extern const f32 lbl_805DF294;
extern const f32 lbl_805DF2D8;
void render__15TObjEneDelDepthFv(Dep_803155D4 *o);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TObjFish__sub_8001EDB0(u8 *, int);
s32 get_bml_model(int, int);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK set_field_dc__10TObjPlayerFPvi(void *, int);
M2C_UNK set_field_d8__10TObjPlayerFPvi(void *, void *);
M2C_UNK reset_photon_effect__12TBoss3VoloptFPv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK TObjPlayer__sub_800F7478(void *, int, int, int);
M2C_UNK set_animation__10TObjPlayerFPvs(void *, int);
s32 init_collision_body_parts(void *, void *, int);
u8 *get_data__15TObjEneDelDepthFv();
s32 fn_80316680(s32, void *);
extern M2C_UNK lbl_804E8168[];
extern M2C_UNK lbl_804E8194[];
extern u8 *TObjEneDelDepth__data_805D6AC4;
extern const f32 TObjEneDelDepth__data_805DF258;
void TObjEneDelDepth__sub_803158B0(u8 *arg0);
s32 get_mode__11TCameraCtrlFPv(void *);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK restore_render_scissor(int);
M2C_UNK TObjEneDelDepth__sub_803162A8(s32);
M2C_UNK set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern u8 main_task[];
s32 TObjEneDelDepth__sub_8031551C(void *arg0);
}

extern "C" {

void TObjEneDelDepth__sub_80315518(void);
void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1);
void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi();
M2C_UNK conditional_delete__15TObjEneDelDepthFis(s32, M2C_UNK);

extern M2C_UNK lbl_80475DD8;

void set_depth_offset__15TObjEneDelDepthFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (arg1 + (s32) ((f32) arg2 * calc_boss4_scale__10TObjPlayerFi()));
}

void TObjEneDelDepth__sub_803154A8(Ene_803154A8 *o, s32 i) {
    Fn_803154A8 fn;
    o->idx = i;
    fn = lbl_804E836C[o->idx].f;
    if (fn) {
    }
    (o->*fn)();
}

void TObjEneDelDepth__sub_80315518(void) {  }

extern M2C_UNK __vt__15TObjEneDelDepth[];

s32 TObjEneDelDepth__sub_8031551C(void *arg0) {
    Dep_8031551C *o = (Dep_8031551C *)arg0;
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960(o->f3E4) != 0) {
            TObjPlayer__sub_803D9B2C();
            Vec_8031551C v = o->pos;
            v.y += o->f39C;
            TOHangerMachine01__sub_803D9C00(&v);
            rotate_matrix_y(0, o->f60);
            set_monitor_position_vec3__10TObjPlayerFPvPv(0, o->f3A0);
            TObjEneDelDepth__sub_803162A8(o->f37C);
            pop_matrix();
            restore_render_scissor(1);
        }
        return 1;
    }
    return 0;
}

void render__15TObjEneDelDepthFv(Dep_803155D4 *o) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((void (*)(void *))TObjEneDelDepth__sub_80315518)(o);
        return;
    }
    if (o->f398 <= TObjEneDelDepth__data_805DF258) {
        return;
    }
    if (((VObj_18_26a62c *)o)->m8(lbl_805DF294, lbl_805DF2D8) == 0) {
        return;
    }
    if (TObjEneDelDepth__sub_8031551C((void *)(o)) != 0) {
        return;
    }
    if (o->f398 < TObjEneDelDepth__data_805DF260) {
        TObjEneDelDepth__sub_80315D34();
    }
    toggle_particle_effect__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    Vec_803155D4 v = o->pos;
    v.y += o->f39C;
    TOHangerMachine01__sub_803D9C00(&v);
    rotate_matrix_y(0, o->f60);
    set_monitor_position_vec3__10TObjPlayerFPvPv(0, o->f3A0);
    TObjEneDelDepth__sub_803162A8(o->f37C);
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    if (o->f398 < TObjEneDelDepth__data_805DF260) {
        reset_globals__15TObjEneDelDepthFv();
    }
    if (!(o->flags & 0x4000)) {
        Vec_803155D4 s = lbl_80475DA4[0];
        render_with_position_override__10TObjPlayerFPvPvi(o, &s, 0);
    }
}

void *__dt__15TObjEneDelDepthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneDelDepth;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x380) = 0;
        conditional_delete__15TObjEneDelDepthFis(M2C_FIELD(arg0, s32 *, 0x37C), 1);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80315A40___vt__15TObjEneDelDepth_size[sizeof(RecoveredGlobal_80315A40___vt__15TObjEneDelDepth) == 0x150 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void TObjEneDelDepth__sub_80315888(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x390) = (f32) (lbl_805DF2DC + M2C_FIELD(arg0, f32 *, 0x354));
    if (M2C_FIELD(arg0, f32 *, 0x390) < TObjEneDelDepth__data_805DF258) {
        M2C_FIELD(arg0, f32 *, 0x390) = (f32) TObjEneDelDepth__data_805DF258;
    }
}
#pragma pop

void TObjEneDelDepth__sub_803158B0(u8 *arg0) {
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r0;
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(TObjEneDelDepth__data_805D6AC4 = get_data__15TObjEneDelDepthFv(), 0);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model((int) (TObjEneDelDepth__data_805D6AC4), (int) (0));
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x50, VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    M2C_FIELD(arg0, s32 *, 0x380) = init_collision_body_parts((void *) (arg0), (void *) (lbl_804E8168), (int) (1));
    set_field_d8__10TObjPlayerFPvi((void *) (arg0), (void *) (lbl_804E8194));
    set_field_dc__10TObjPlayerFPvi((void *) (arg0), (int) (M2C_FIELD(TObjEneDelDepth__data_805D6AC4, s32 *, 0x430)));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (0));
    set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjEneDelDepth__data_805DF258;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjEneDelDepth__data_805DF258;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjEneDelDepth__data_805DF258;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    TObjPlayer__sub_800F7478((void *) (arg0), register_boss__6TLobbyFPv(0x30), dispatch_shared_handler_b__6TLobbyFPv(0x30), register_object__6TLobbyFPv(0x30));
    M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x350) = 0;
    set_param__12TObjEneLappyFPvi((void *) (arg0), (int) (0x47));
    var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x2C));
    if (var_r0 != 0) {
        var_r0 = fn_80316680(var_r0, arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x37C) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0xFFFF;
    M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x3E4, arg0 + 0x38);
    ((VObj_18_b31a3c *)(arg0))->m80();
}

u8 *TObjEneDelDepth__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    initialize__9TObjEnemyFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80315A40___vt__15TObjEneDelDepth *)&__vt__15TObjEneDelDepth).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4118;
    add_flags_2e4__10TObjPlayerFPvUi((void *) (arg0), (int) (8));
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    TObjEneDelDepth__sub_80315888((u8 *)((void *) (arg0)));
    TObjEneDelDepth__sub_803158B0((u8 *)((void *) (arg0)));
    project_actor_to_ground((void *) (arg0), (void *) (arg0 + 0x38), (int) (0));
    TObjEneDelDepth__sub_803154A8((Ene_803154A8 *) (arg0), 0);
    return arg0;
}

}
