#include "pso/TBoss6DPB.h"

#include "types.h"

struct V_8035D8B0 { s32 a; f32 b; s32 c; };

struct W_8035D8B0 { u8 pad0[0x20]; V_8035D8B0 v; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035DB70___vt__9TBoss6DPB { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8035DB70___vt__9TBoss6DPB_size[sizeof(RecoveredGlobal_8035DB70___vt__9TBoss6DPB) == 0x18 ? 1 : -1];

struct Msg_8035DD18 { s32 type; s32 value; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct PBase_8035D924 { u8 pad[0x18]; };

struct Pl_8035D924 : PBase_8035D924 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(s32, void *, int, int, int);
};

struct Vec_8035D924 { f32 x, y, z; };

struct F_8035D924 { f32 v; };

struct Dmg_8035D924 { s32 a; s32 b; s32 c; f32 d; };

struct Shower_8035D924 {
    u8 pad0[0x1C];
    s32 owner;
    Vec_8035D924 pos;
    f32 radius;
    u8 pad30[4];
    s32 power;
    f32 scale;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
int query_teammate_state__9TObjEneDDFPv(void *);
s32 spawn_particle_effect_with_flags(void *, int, int);
void create_TDPBShower(int, void *);
extern s32 tl_02;
void fn_8035D8B0(W_8035D8B0 *arg0);
extern const f32 lbl_805E01C8;
void run_task__9TBoss6DPBFv(u8 *arg0);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *create_dpb__11TBoss6Type2Fiif(s32 arg0, s32 arg1, f32 farg0);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt22(s32 arg0);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt20(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 play_sound_effect(s32, u32, int, s32);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8035DB70___vt__9TBoss6DPB __vt__9TBoss6DPB;
extern s32 lbl_805D4450;
extern const f32 lbl_805E01CC;
extern const f32 lbl_805E01D4;
u8 *__ct__9TBoss6DPBFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
f32 receive_direct_attack__10TObjPlayerFv(void *, s32, Msg_8035DD18, void *, s32, s32);
s32 try_apply_damage__19TObjEneEpsilonGuardFPvUii(void *, void *, int);
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
f32 TObjEneEpsilonGuard__vt21(s32 arg0, s32 arg1, Msg_8035DD18 *msg, void *arg3, s32 arg4, s32 arg5);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
Pl_8035D924 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv(void);
s32 is_active__14TBoss6PlotFalzFPv(void *);
s32 rand_vary_count__14TBoss6PlotFalzFif(s32, f32);
s32 get_rotation_timer__11TBoss6Type2FPv(s32);
void create_TDPBShower(int, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
extern s32 tl_02;
extern const f32 lbl_805E01CC;
extern const f32 lbl_805E01D0;
void apply_shower_damage_to_players(Shower_8035D924 *arg0);
}

extern "C" {

void render__9TBoss6DPBFv(void);

void fn_8035D8B0(W_8035D8B0 *arg0) {
    V_8035D8B0 v = arg0->v;
    v.b = lbl_805E01C8;
    spawn_particle_effect_with_flags(&v, 0x21C, 0x40);
    spawn_particle_effect_with_flags(&v, 0x21D, 0x40);
    create_TDPBShower(tl_02, &arg0->v);
}

#pragma push
#pragma opt_common_subs off
void apply_shower_damage_to_players(Shower_8035D924 *arg0) {
    Vec_8035D924 v;
    Dmg_8035D924 dmg;
    s32 n;
    s32 i;
    Pl_8035D924 *pl;
    s32 power;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv(pl) != 0) {
            VecCopy__FP3VecPC3Vec(&v, (u8 *)pl + 0x38);
            subtract_vector(&v, &arg0->pos);
            v.y = lbl_805E01CC;
            if (!(vector_length(&v) > arg0->radius)) {
                power = arg0->power;
                if (get_rotation_timer__11TBoss6Type2FPv(arg0->owner) != 0) {
                    power = (f32)power * arg0->scale;
                }
                s32 r = rand_vary_count__14TBoss6PlotFalzFif(power, lbl_805E01D0);
                dmg.a = 0;
                dmg.c = 0;
                dmg.d = r;
                dmg.b = *(s32 *)&dmg.d;
                pl->v21(arg0->owner, &dmg, 0, -1, -1);
                create_TDPBShower(tl_02, (u8 *)pl + 0x38);
            }
        }
    }
}
#pragma pop

void render__9TBoss6DPBFv(void) {  }
void run_task__9TBoss6DPBFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        if ((f32) M2C_FIELD(arg0, s32 *, 0x30) > lbl_805E01C8) {
            apply_shower_damage_to_players((Shower_8035D924 *)(arg0));
            play_sound_effect(0x40069411, (u32) (arg0 + 0x20), 0, 0);
            fn_8035D8B0((W_8035D8B0 *)arg0);
            queue_destruction__7TObjectFv(arg0);
        }
    }
}
}

TBoss6DPB::~TBoss6DPB() {}

extern "C" {

u8 *__ct__9TBoss6DPBFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__9TBoss6DPB.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4450;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805E01CC;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    temp_f2 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2C), f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) temp_f2;
    if (lbl_805E01CC == temp_f2) {
        M2C_FIELD(arg0, s32 *, 0x34) = 0x14;
    }
    temp_f1 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x38) = temp_f1;
    if (lbl_805E01CC == temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805E01D4;
    }
    play_sound_effect((s32)((int) (0x40069410)), (u32)((void *) (arg0 + 0x20)), (int)((int) (0)), (s32)((int) (0)));
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return arg0;
}

#pragma push
#pragma fp_contract on
u8 *create_dpb__11TBoss6Type2Fiif(s32 arg0, s32 arg1, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x3C));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__9TBoss6DPBFv((u8 *)(temp_r3), (s32)(arg0), (s32)(arg1), farg0));
    }
    return var_r0;
}
#pragma pop

f32 TObjEneEpsilonGuard__vt22(s32 arg0) {
    try_apply_damage__19TObjEneEpsilonGuardFPvUii((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
    return TObjEneEpsilonGuard__data_805E01D8;
}
f32 TObjEneEpsilonGuard__vt20(s32 arg0) {
    try_apply_damage__19TObjEneEpsilonGuardFPvUii((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
    return TObjEneEpsilonGuard__data_805E01D8;
}
f32 TObjEneEpsilonGuard__vt21(s32 arg0, s32 arg1, Msg_8035DD18 *msg, void *arg3, s32 arg4, s32 arg5) {
    if (msg->type == 0x14) {
        return receive_direct_attack__10TObjPlayerFv((void *)arg0, arg1, *msg, arg3, arg4, arg5);
    }
    try_apply_damage__19TObjEneEpsilonGuardFPvUii((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
    return TObjEneEpsilonGuard__data_805E01D8;
}

}
