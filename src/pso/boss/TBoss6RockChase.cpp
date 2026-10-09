#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8036D6D4 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8036D4E0_lbl_8047ACE8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase {
    M2C_UNK value;
    u8 remaining[0x34];
};

typedef s32 M2C_UNK;
struct Vec_8036D1B4 { f32 x, y, z; };

struct Hit_8036D1B4 {
    s32 a;
    s32 b;
    s32 c;
    f32 d;
};

struct Pair_8036D1B4 { s32 id; f32 v; };

struct PBase_8036D1B4 { char pad[0x18]; };

struct Player_8036D1B4 : PBase_8036D1B4 {
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
    virtual void m21(s32, Hit_8036D1B4 *, s32, s32, s32);
    u8 pad1C[0x38 - 0x1C];
    Vec_8036D1B4 pos;
};

struct Ent_8036D1B4 { s32 id; f32 range; };

struct Chase_8036D1B4 {
    u8 pad0[0x38];
    Vec_8036D1B4 pos;
    u8 pad44[0xAC - 0x44];
    s32 xAC;
    s32 xB0;
};

struct Param_8036D1B4 { u8 pad[0xC]; f32 v; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(int);
s32 rand();
extern const f32 lbl_805E03D0;
extern const f32 lbl_805E03D8;
extern const f32 lbl_805E03E4;
s32 spawn__15TBoss6RockChaseFii(s32 arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_bml_model(int, int);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
s32 TBoss6Rock__sub_80353A04();
s32 TBoss6Rock__sub_80353A0C();
s32 rand();
__declspec(section ".rodata") char lbl_8047ACD8[] = "TBoss6RockChase";
__declspec(section ".rodata") RecoveredGlobal_8036D4E0_lbl_8047ACE8 lbl_8047ACE8 = {
    4, { 0x41, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00 }
};
extern M2C_UNK __vt__15TBoss6RockChase[];
extern s32 lbl_805D44F0;
extern const f32 TBoss6RockChase__data_805E03B8;
extern const f32 lbl_805E03CC;
extern const f32 lbl_805E03D0;
extern const f32 lbl_805E03D4;
extern const f32 lbl_805E03D8;
extern const f32 lbl_805E03DC;
extern const f32 lbl_805E03E0;
u8 *TBoss6RockChase__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv(void);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf(void *, int, int, f32);
M2C_UNK spawn_crush_rocks__10TBoss6RockFPvi(void *, int);
extern const f32 TBoss6RockChase__data_805E03B8;
extern const f32 lbl_805E03C0;
extern const f32 lbl_805E03C4;
extern const f32 lbl_805E03C8;
void run_task__15TBoss6RockChaseFv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
Player_8036D1B4 *get_player_data__10TObjPlayerFi(s32);
Param_8036D1B4 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_active__14TBoss6PlotFalzFPv(void *);
s32 rand_vary_count__14TBoss6PlotFalzFif(s32, f32);
f32 vector_length(void *);
int subtract_vector(void *, void *);
extern RecoveredGlobal_8036D4E0_lbl_8047ACE8 lbl_8047ACE8;
extern const f32 TBoss6RockChase__data_805E03B8;
extern const f32 lbl_805E03BC;
M2C_UNK damage_players_in_range__15TBoss6RockChaseFPv(void *arg0);
}

extern "C" {

void *__dt__15TBoss6RockChaseFv(void *arg0, s16 arg1);
void render__15TBoss6RockChaseFv(void* p);
int post_translate_matrix(void*);
int rotate_matrix_z(void*, void*);
int draw_ginja_object(void*);
int rotate_matrix_x(void*, void*);
int rotate_matrix_y(void*, void*);
int push_matrix(void*);
int pop_matrix(void);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int set_global_param__8TObjFishFi(void*);

#pragma push
#pragma opt_propagation off
M2C_UNK damage_players_in_range__15TBoss6RockChaseFPv(void *arg0) {
    Chase_8036D1B4 *self = (Chase_8036D1B4 *)arg0;
    Vec_8036D1B4 d;
    s32 n;
    s32 dmg;
    s32 i;
    Player_8036D1B4 *pl;
    f32 range;
    n = get_game_mode__6TLobbyFv();
    {
        Ent_8036D1B4 *tbl = (Ent_8036D1B4 *)&lbl_8047ACE8;
        range = tbl[self->xB0].range;
    }
    dmg = dispatch_shared_handler_a__6TLobbyFPv(0x2C)->v;
    if (dmg < 1) {
        dmg = 20;
    }
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv(pl) != 0) {
            VecCopy__FP3VecPC3Vec(&d, &pl->pos);
            subtract_vector(&d, &self->pos);
            d.y = TBoss6RockChase__data_805E03B8;
            if (!(vector_length(&d) > range)) {
                Hit_8036D1B4 h;
                h.d = (f32)rand_vary_count__14TBoss6PlotFalzFif(dmg, lbl_805E03BC);
                s32 z = 0;
                h.a = z;
                h.c = z;
                h.b = *(s32 *)&h.d;
                pl->m21(self->xAC, &h, 0, -1, -1);
            }
        }
    }
}
#pragma pop

void render__15TBoss6RockChaseFv(void* p) { push_matrix(p); post_translate_matrix((char*)p + 0x38); rotate_matrix_y((void*)0, *(void**)((char*)p + 0x60)); rotate_matrix_x((void*)0, *(void**)((char*)p + 0x5c)); rotate_matrix_z((void*)0, *(void**)((char*)p + 0x64)); set_global_param__8TObjFishFi(*(void**)((char*)p + 0xc4)); draw_ginja_object(*(void**)((char*)p + 0xc0)); pop_matrix(); }

extern M2C_UNK __vt__15TBoss6RockChase[];

#pragma push
#pragma opt_common_subs off
void run_task__15TBoss6RockChaseFv(u8 *arg0) {
    s32 temp_r3;
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB4);
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (temp_r3 - 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + M2C_FIELD(arg0, s32 *, 0xBC));
        M2C_FIELD(arg0, f32 *, 0xB8) = (f32) (M2C_FIELD(arg0, f32 *, 0xB8) + lbl_805E03C0);
        if (M2C_FIELD(arg0, f32 *, 0xB8) < lbl_805E03C4) {
            M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805E03C4;
        }
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0xB8));
        if (M2C_FIELD(arg0, f32 *, 0x3C) <= TBoss6RockChase__data_805E03B8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss6RockChase__data_805E03B8;
            M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TBoss6RockChase__data_805E03B8;
            damage_players_in_range__15TBoss6RockChaseFPv((void *)((void *) (arg0)));
            play_sound_effect((int) (0x4006B51E), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            spawn_particle_effect((void *) (arg0 + 0x38), (int) (0x220));
            spawn_particle_effect((void *) (arg0 + 0x38), (int) (0x222));
            apply_radial_effect_to_players__14TBoss6PlotFalzFPvssf((void *) (arg0 + 0x38), (int) (0xC0), (int) (0xF), (f32) (lbl_805E03C8));
            spawn_crush_rocks__10TBoss6RockFPvi((void *) (arg0 + 0x38), (int) (M2C_FIELD(arg0, s32 *, 0xB0)));
            play_sound_effect((int) (0x4006AB1F), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            queue_destruction__7TObjectFv(arg0);
        }
    }
}
#pragma pop

void *__dt__15TBoss6RockChaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6RockChase;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8036D4E0_lbl_8047ACE8_size[sizeof(RecoveredGlobal_8036D4E0_lbl_8047ACE8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase_size[sizeof(RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase) == 0x38 ? 1 : -1];
u8 *TBoss6RockChase__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8036D4E0___vt__15TBoss6RockChase *)&__vt__15TBoss6RockChase).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D44F0;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s32 *, 0xB0) = arg3;
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (lbl_805E03CC * (lbl_805E03D0 * (f32) rand()));
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (lbl_805E03D4 * ((lbl_805E03D0 * (f32) rand()) - lbl_805E03D8));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (lbl_805E03DC * (lbl_805E03D0 * (f32) rand()));
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (lbl_805E03D4 * ((lbl_805E03D0 * (f32) rand()) - lbl_805E03D8));
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (lbl_805E03E0 * ((lbl_805E03D0 * (f32) rand()) - lbl_805E03D8));
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TBoss6RockChase__data_805E03B8;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0xC0) = get_bml_model((int) (TBoss6Rock__sub_80353A0C()), (int) (M2C_FIELD(&lbl_8047ACE8.value, M2C_UNK *, (arg3 * 8))));
    M2C_FIELD(arg0, s32 *, 0xC4) = TBoss6Rock__sub_80353A04();
    return arg0;
}
#pragma pop

s32 spawn__15TBoss6RockChaseFii(s32 arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8036D6D4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8036D6D4, spC) == 0x4) ? 1 : -1];
    Stack_8036D6D4 stack;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r31;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg1));
    var_r31 = 0;
    stack.spC = lbl_805E03E4;
    if ((lbl_805E03D0 * (f32) rand()) < lbl_805E03D8) {
        var_r31 = 1;
    }
    temp_r3 = __nw__7TObjectFUl((int) (0xC8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = ((s32)TBoss6RockChase__ct((u8 *)((int) (temp_r3)), (s32)((void *) (arg0)), (s32)((void *) (&stack.sp8)), (s32)((int) (var_r31))));
    }
    return var_r0;
}

__declspec(section ".sdata2") extern const f32 TBoss6RockChase__data_805E03B8 = 0.0f;
__declspec(section ".sdata2") extern const f32 lbl_805E03BC = 0.10000000149011612f;
__declspec(section ".sdata2") extern const f32 lbl_805E03C0 = -0.9375f;
__declspec(section ".sdata2") extern const f32 lbl_805E03C4 = -11.25f;
__declspec(section ".sdata2") extern const f32 lbl_805E03C8 = 100.0f;
__declspec(section ".sdata2") extern const f32 lbl_805E03CC = 15.0f;
__declspec(section ".sdata2") extern const f32 lbl_805E03D0 = 3.0517578125e-05f;
__declspec(section ".sdata2") extern const f32 lbl_805E03D4 = 2048.0f;
__declspec(section ".sdata2") extern const f32 lbl_805E03D8 = 0.5f;
__declspec(section ".sdata2") extern const f32 lbl_805E03DC = 65535.0f;
__declspec(section ".sdata2") extern const f32 lbl_805E03E0 = 8192.0f;
__declspec(section ".sdata2") extern const f32 lbl_805E03E4 = 450.0f;

}
