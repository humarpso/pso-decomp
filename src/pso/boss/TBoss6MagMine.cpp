#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_80368C14 { f32 x, y, z; };

struct Mine_80368C14 { u8 pad[0x38]; Vec_80368C14 pos; };

#include <stddef.h>
struct VBase_18_5673ef { char pad[0x18]; };

struct VObj_18_5673ef : VBase_18_5673ef {
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
    virtual M2C_UNK m21(void *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
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
    virtual M2C_UNK m45();
    virtual M2C_UNK m46(M2C_UNK);
    virtual M2C_UNK m47();
};

struct Stack_80368AB8 {
    s32 sp8;
    f32 spC;
    s32 sp10;
    f32 sp14;
};

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

struct Key_80369228 { s32 a; s16 b; s16 c; s32 d; s32 e; };

extern "C" {
extern const f32 TBoss6MagMine__data_805E0310;
void TBoss6MagMine__sub_80368994(u8 *arg0);
s32 TBoss6MagMine__sub_80368CE4(void *);
extern const f32 lbl_805E0324;
extern const f32 TBoss6MagMine__data_805E0328;
void TBoss6MagMine__vt2(u8 *arg0);
extern const f32 TBoss6MagMine__data_805E0310;
extern const f32 TBoss6MagMine__data_805E0328;
void TBoss6MagMine__vt1(u8 *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
void *get_player_data__10TObjPlayerFi(int);
s32 get_game_mode__6TLobbyFv(void);
void play_sound_effect(int, Vec_80368C14 *, int, int);
s32 is_active__14TBoss6PlotFalzFPv(void *);
f32 vector_length(Vec_80368C14 *);
void subtract_vector(Vec_80368C14 *, void *);
extern const f32 TBoss6MagMine__data_805E0314;
extern const f32 lbl_805E031C;
void TBoss6MagMine__sub_80368C14(Mine_80368C14 *o);
s32 TBoss6PlotFalz__sub_802AB5B4(int, f32);
u32 get_hp__14TBoss6PlotFalzFv();
s32 get_field_0x42c__13TBoss6MagMineFPv(void* p);
int TBoss6PlotFalz__sub_8036964C(void);
extern const f32 lbl_805E0318;
void TBoss6MagMine__sub_80368AB8(u8 *arg0, u8 *arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK add_flags_2e4__10TObjPlayerFPvUi(void *, int);
u8 *dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TLobby__sub_8002AFD4(void *, void *, int);
M2C_UNK reset_photon_effect__12TBoss3VoloptFPv(void *);
u32 create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, u32);
M2C_UNK set_param__12TObjEneLappyFPvi(void *, int);
void bind_enemy_combat_stats(void *, s32, s32, s32);
void initialize__9TObjEnemyFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 get_fish_count__8TObjFishFv();
f32 vector_length(Vec_80368C14 *);
void subtract_vector(Vec_80368C14 *, void *);
M2C_UNK normalize_vector(void *);
extern u8 __vt__13TBoss6MagMine[];
extern M2C_UNK lbl_804F322C[];
extern s32 lbl_805D44B0;
extern const f32 TBoss6MagMine__data_805E0310;
extern const f32 TBoss6MagMine__data_805E0314;
extern const f32 TBoss6MagMine__data_805E0328;
extern const f32 lbl_805E0338;
extern const f32 lbl_805E033C;
s32 TBoss6MagMine__ct(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TBoss6MagMine__sub_8036897C(void *arg0);
int TBoss6MagMine__sub_80369598(void);
void TBoss6MagMine__vt3(s32 arg0);
void TBoss6MagMine__vt4(void* p);
int TBoss6PlotFalz__sub_8036964C(void);
void *__dt__13TBoss6MagMineFPvs(void *arg0, s16 arg1);
void copy_pos__13TBoss6MagMineFi(s32 arg0);
s32 create__13TBoss6MagMineFi(s32 arg0);
s32 get_field_0x42c__13TBoss6MagMineFPv(void* p);
void init__13TBoss6MagMineFPv(void* p);
void update_linked_state__13TBoss6MagMineFPv(void *arg0);
M2C_UNK TBoss6PlotFalz__sub_802ABE3C(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
int post_translate_matrix(void*);
int spawn_particle_effect_with_flags(void*, void*, void*);
s32 TObjControl__ct(s32, s32);
void free_collision_body_parts(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
s32 get_bml_motion(s32, M2C_UNK);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
int rotate_matrix_y(void*, void*);
int push_matrix(void*);
int pop_matrix(void);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK clear_global_state__10TObjPlayerFv();
int queue_destruction__7TObjectFv(void*);
void request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

void TBoss6MagMine__sub_8036897C(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 4) {
        M2C_FIELD(arg0, s32 *, 0x390) = 4;
    }
}

void TBoss6MagMine__sub_80368994(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) TBoss6MagMine__data_805E0310;
}

void copy_pos__13TBoss6MagMineFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
}

extern const f32 TBoss6MagMine__data_805E0314;

void update_linked_state__13TBoss6MagMineFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;

    set_global_flag__10TObjPlayerFv();
    temp_r31 = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r30 = get_bml_model(M2C_FIELD(arg0, s32 *, 0x374), 2);
    temp_r31_2 = get_bml_motion(M2C_FIELD(arg0, s32 *, 0x374), 0);
    set_global_param__8TObjFishFi(temp_r31);
    TBoss6PlotFalz__sub_802AC008(M2C_FIELD(arg0, f32 *, 0x3A8), TBoss6MagMine__data_805E0314);
    draw_model_motion(temp_r30, temp_r31_2, M2C_FIELD(arg0, f32 *, 0x398));
    update_camera_target__14TBoss6PlotFalzFv();
    clear_global_state__10TObjPlayerFv();
}

void init__13TBoss6MagMineFPv(void* p) { push_matrix(p); post_translate_matrix((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x3ac)); update_linked_state__13TBoss6MagMineFPv((void *)(p)); pop_matrix(); }

void TBoss6MagMine__sub_80368AB8(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_80368AB8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80368AB8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80368AB8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80368AB8, sp14) == 0xC) ? 1 : -1];
    Stack_80368AB8 stack;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r31;
    void *boss;
    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3A4) < (s32) M2C_FIELD(arg0, s32 *, 0x3A0)) && (get_hp__14TBoss6PlotFalzFv() != 0U) && ((boss = ((void *(*)(void))TBoss6PlotFalz__sub_8036964C)()) != NULL)) {
        temp_r3 = get_field_0x42c__13TBoss6MagMineFPv((void*)(boss));
        switch (temp_r3) {
        case 2:
        case 3:
            var_r31 = temp_r3;
            break;
        case 4:
            var_r31 = 0x12;
            break;
        }
    }
    switch (var_r31) {
    case 2:
        ((VObj_18_5673ef *)(arg1))->m46(0);
        return;
    case 3:
        ((VObj_18_5673ef *)(arg1))->m47();
        return;
    case 18:
        ((VObj_18_5673ef *)(arg1))->m45();
        return;
    default:
        temp_r3_2 = TBoss6PlotFalz__sub_802AB5B4((int) (M2C_FIELD(arg0, s32 *, 0x39C)), (f32) (lbl_805E0318));
        stack.sp8 = 1;
        stack.sp10 = 1;
        stack.sp14 = (f32) temp_r3_2;
        *(s32 *)&stack.spC = *(s32 *)&stack.sp14;
        ((VObj_18_5673ef *)(arg1))->m21(arg0, &stack.sp8, 0, -1, -1);
        return;
    }
}

void TBoss6MagMine__sub_80368C14(Mine_80368C14 *o) {
    s32 n = get_game_mode__6TLobbyFv();
    s32 i;
    for (i = 0; i < n; i++) {
        u8 *pl = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv(pl) != 0 && is_locally_controlled__10TObjPlayerFPv(pl) != 0) {
            Vec_80368C14 v = o->pos;
            subtract_vector(&v, pl + 0x38);
            v.y = TBoss6MagMine__data_805E0314;
            if (!(vector_length(&v) > lbl_805E031C)) {
                TBoss6MagMine__sub_80368AB8((u8 *)(o), (u8 *)(pl));
            }
        }
    }
    play_sound_effect(0x4003BA1E, &o->pos, 0, 0);
}

void TBoss6MagMine__vt4(void* p) { spawn_particle_effect_with_flags((void*)((char*)p + 0x38), (void*)((void*)252), (void*)((void*)64)); queue_destruction__7TObjectFv((void*)(p)); }

extern f32 lbl_805E0320;

void TBoss6MagMine__vt3(s32 arg0) {
    TBoss6MagMine__sub_80368C14((Mine_80368C14 *)(arg0));
    spawn_particle_effect_with_flags((void*)(arg0 + 0x38), (void*)(0xFB), (void*)(0x40));
    spawn_particle_effect_with_flags((void*)(arg0 + 0x38), (void*)(0xFC), (void*)(0x40));
    TBoss6PlotFalz__sub_802ABE3C(arg0 + 0x38, 0xC0, 0xF, lbl_805E0320);
    queue_destruction__7TObjectFv((void*)(arg0));
}

extern M2C_UNK lbl_804F322C[];

#pragma push
#pragma opt_common_subs off
void TBoss6MagMine__vt2(u8 *arg0) {
    f32 temp_f1;
    if (TBoss6MagMine__sub_80368CE4((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x394) = 0x96;
    }
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) (M2C_FIELD(arg0, f32 *, 0x398) + lbl_805E0324);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x398);
    if (temp_f1 >= TBoss6MagMine__data_805E0328) {
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) (temp_f1 - TBoss6MagMine__data_805E0328);
    }
    M2C_FIELD(arg0, s32 *, 0x394) = (s32) (M2C_FIELD(arg0, s32 *, 0x394) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x394) >= 0x96) {
        M2C_FIELD(arg0, s32 *, 0x390) = 3;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TBoss6MagMine__vt1(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x384);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x38C);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + TBoss6MagMine__data_805E0310);
    if (M2C_FIELD(arg0, f32 *, 0x3C) >= TBoss6MagMine__data_805E0328) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss6MagMine__data_805E0328;
        M2C_FIELD(arg0, s32 *, 0x394) = 0;
        M2C_FIELD(arg0, s32 *, 0x390) = 2;
    }
}
#pragma pop

void *__dt__13TBoss6MagMineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F322C;
        if (M2C_FIELD(arg0, void **, 0x3B0) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3B0)); M2C_FIELD(arg0, M2C_UNK *, 0x3B0) = 0; }
        free_collision_body_parts(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 tl_04;

#pragma push
#pragma opt_common_subs off
#define self ((u8 *)arg0)
s32 TBoss6MagMine__ct(s32 arg0, s32 arg1, s32 arg2) {
    Key_80369228 key;
    u8 *d;
    ((void (*)(void *, s32))initialize__9TObjEnemyFPv)(self, arg1);
    M2C_FIELD(self, M2C_UNK **, 0x18) = lbl_804F322C;
    M2C_FIELD(self, s32 *, 0) = lbl_805D44B0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg2 + 0x40);
    VecCopy__FP3VecPC3Vec(arg0 + 0x384, arg2 + 0x4C);
    add_flags_2e4__10TObjPlayerFPvUi(self, 8);
    ((VObj_18_aa4667 *)(self))->m79(arg2);
    if (TLobby__sub_8002AFD4(self, &key, 1) != 0) {
        key.a = 0;
        key.c = 0;
        TLobby__sub_8002AFD4(self, &key, 0);
    }
    M2C_FIELD(self, s32 *, 0x374) = get_fish_count__8TObjFishFv();
    M2C_FIELD(self, s32 *, 0x24) = 0;
    M2C_FIELD(self, s32 *, 0x34) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x50, VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    init_collision_body_parts(self, __vt__13TBoss6MagMine, 1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(self, f32 *, 0x308) = M2C_FIELD(self, f32 *, 0x30C) = M2C_FIELD(self, f32 *, 0x310) = TBoss6MagMine__data_805E0314;
    M2C_FIELD(self, s32 *, 0x2A8) = 0;
    bind_enemy_combat_stats(self, register_boss__6TLobbyFPv(0x2D), dispatch_shared_handler_b__6TLobbyFPv(0x2D), register_object__6TLobbyFPv(0x2D));
    M2C_FIELD(self, s16 *, 0x33E) = M2C_FIELD(self, s16 *, 0x32C);
    reset_photon_effect__12TBoss3VoloptFPv(self);
    set_param__12TObjEneLappyFPvi(self, 0);
    d = dispatch_shared_handler_a__6TLobbyFPv(0x2D);
    M2C_FIELD(self, s32 *, 0x39C) = (s32) M2C_FIELD(d, f32 *, 4);
    if ((f32) M2C_FIELD(self, s32 *, 0x39C) <= TBoss6MagMine__data_805E0314) {
        M2C_FIELD(self, s32 *, 0x39C) = 0x14;
    }
    M2C_FIELD(self, s32 *, 0x3A0) = (s32) M2C_FIELD(d, f32 *, 8);
    if ((f32) M2C_FIELD(self, s32 *, 0x3A0) < TBoss6MagMine__data_805E0314 || M2C_FIELD(self, s32 *, 0x3A0) > 0x64) {
        M2C_FIELD(self, s32 *, 0x3A0) = 0;
    }
    M2C_FIELD(self, s32 *, 0x3A4) = (u16) (M2C_FIELD(self, u16 *, 0x1C) + (s32) (TBoss6MagMine__data_805E0328 * (M2C_FIELD(self, f32 *, 0x38) + M2C_FIELD(self, f32 *, 0x40)))) % 100;
    M2C_FIELD(self, f32 *, 0x3A8) = TBoss6MagMine__data_805E0314;
    M2C_FIELD(self, f32 *, 0x398) = TBoss6MagMine__data_805E0310;
    M2C_FIELD(self, s32 *, 0x394) = 0;
    M2C_FIELD(self, s32 *, 0x390) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x378, arg0 + 0x384);
    subtract_vector((Vec_80368C14 *) (self + 0x378), self + 0x38);
    M2C_FIELD(self, f32 *, 0x37C) = TBoss6MagMine__data_805E0314;
    if (vector_length((Vec_80368C14 *) (self + 0x378)) <= lbl_805E0338) {
        M2C_FIELD(self, f32 *, 0x378) = TBoss6MagMine__data_805E0310;
    }
    normalize_vector(self + 0x378);
    M2C_FIELD(self, f32 *, 0x378) *= lbl_805E033C;
    M2C_FIELD(self, f32 *, 0x380) *= lbl_805E033C;
    M2C_FIELD(self, u32 *, 0x3B0) = create_particle_emitter(self + 0x38, 0x146);
    if (M2C_FIELD(self, u32 *, 0x3B0) != 0U) {
        set_flags__11TBoss4Type2FPvUi(M2C_FIELD(self, void **, 0x3B0), 0x40);
    }
    return arg0;
}
#undef self
#pragma pop

s32 create__13TBoss6MagMineFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3B4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6MagMine__ct((s32)(var_r31), (s32)(var_r4), (s32)(arg0));
    }
    return var_r31;
}

int TBoss6MagMine__sub_80369598(void) { return 0; }

s32 get_field_0x42c__13TBoss6MagMineFPv(void* p) { return *(s32*)((char*)p + 0x42c); }

    extern int TBoss6PlotFalz__data_805D66F4;
int TBoss6PlotFalz__sub_8036964C(void) {  return TBoss6PlotFalz__data_805D66F4; }

}
