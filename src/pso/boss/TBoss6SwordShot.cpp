#include "pso/TBoss6SwordShot.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80356C80 {
    s32 sp8;
    s32 spC;
};

struct RecoveredGlobal_80356B18___vt__15TBoss6SwordWave { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80356B18___vt__15TBoss6SwordWave_size[sizeof(RecoveredGlobal_80356B18___vt__15TBoss6SwordWave) == 0x18 ? 1 : -1];

struct W_80356D10 { s32 w[1]; };

struct Vec_803564F4 { f32 x, y, z; };

struct Wave_803564F4 { u8 pad0[0x1C]; s32 owner; Vec_803564F4 pos; u8 x2C[4]; u8 x30[0x24]; f32 radius; };

typedef s32 M2C_UNK;
struct Vec_803567D0 { f32 x, y, z; };

struct Pair_8035663C { s32 a; f32 b; };

struct Vec_8035663C { f32 x, y, z; };

struct VBase_8035663C { char pad[0x18]; };

struct VObj_8035663C : VBase_8035663C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(s32, Pair_8035663C, int, int, int);
};

extern "C" {
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TBoss6SwordWave__sub_80356C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
void TBoss6SwordWave__sub_80356DDC(s32 arg0, u8 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 *dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 __ct__7TObjectFP7TObject(void *, void *);
void TBoss6SwordWave__sub_80356D64(void *, void *, void *);
void fn_80356E30(void *);
extern RecoveredGlobal_80356B18___vt__15TBoss6SwordWave __vt__15TBoss6SwordWave;
extern s32 lbl_805D43A8;
extern const f32 lbl_805DFFE8;
extern const f32 lbl_805DFFF0;
u8 *__ct__15TBoss6SwordWaveFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
extern const f32 lbl_805E0010;
extern const f32 lbl_805E0014;
void run_task__15TBoss6SwordWaveFv(u8 *arg0);
void TBoss6SwordWave__sub_80356CDC(s32 arg0, u8 v, void *a, void *b);
void TBoss6SwordWave__sub_80356CDC(s32 arg0, u8 v, void *a, void *b);
void TBoss6SwordWave__sub_80356D10(W_80356D10 *arg0, u8 arg1);
void *spawn_particle_effect_with_flags(void *, int, int);
void spawn_particle_effect(void *, int);
s32 get_rotation_timer__11TBoss6Type2FPv(int);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 xyz_distance(void *, void *);
extern u8 lbl_80479388[];
extern const f32 lbl_805DFFF0;
extern const f32 lbl_805DFFF8;
extern const f32 lbl_805DFFFC;
extern const f32 lbl_805E0000;
extern const f32 lbl_805E0004;
extern const f32 lbl_805E0008;
s32 TBoss6SwordWave__sub_803564F4(void *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_point__10TBoss6RockFiPvPv(s32, void *, void *);
M2C_UNK TBoss6Rock__sub_80353E5C(s32);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
void TBoss6SwordWave__sub_80356D10(W_80356D10 *arg0, u8 arg1);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const f64 lbl_804793B0;
extern const f32 lbl_805DFFE8;
extern const f32 lbl_805E0004;
extern s32 lbl_805E000C;
M2C_UNK TBoss6SwordWave__sub_803567D0(void *a);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
VObj_8035663C *get_player_data__10TObjPlayerFi(s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_game_mode__6TLobbyFv();
s32 is_active__14TBoss6PlotFalzFPv();
s32 TBoss6PlotFalz__sub_802AB5B4(s32, f32);
s32 get_rotation_timer__11TBoss6Type2FPv(int);
u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1);
u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 lbl_804793B0;
extern const f32 lbl_805DFFE8;
extern const f32 lbl_805DFFEC;
M2C_UNK TBoss6SwordWave__sub_8035663C(void *a);
}
struct Pair_803561C4 { s32 a; f32 b; };
struct VBase_18_ec708a { char pad[0x18]; };
struct VObj_18_ec708a : VBase_18_ec708a {
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
    virtual M2C_UNK m21(s32, struct Pair_803561C4, int, int, int);
};

extern "C" {

extern const f32 lbl_805DFFE8;
extern const f32 lbl_805DFFEC;

struct Vec_803561C4 { f32 x, y, z; };
union Val_803561C4 { f32 f; s32 i; };
struct Prm_803561C4 { s32 a; Val_803561C4 b; s32 c; Val_803561C4 d; };

void fn_803561C4(u8 *arg0) {
    Vec_803561C4 v;
    s32 n;
    s32 i;
    u8 *pl;

    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (((s32 (*)(void *))is_active__14TBoss6PlotFalzFPv)(pl) != 0) {
            VecCopy__FP3VecPC3Vec(&v, pl + 0x38);
            TBoss6Type1__sub_803D9370(&v, arg0 + 0x20);
            v.y = lbl_805DFFE8;
            if (!(TBoss6Kakusan__sub_803D8BD8(&v) > M2C_FIELD(arg0, f32 *, 0x2C))) {
                s32 r = TBoss6PlotFalz__sub_802AB5B4(M2C_FIELD(arg0, s32 *, 0x34), lbl_805DFFEC);
                Pair_803561C4 pr;
                pr.a = 0;
                pr.b = (f32)r;
                ((VObj_18_ec708a *)pl)->m21(M2C_FIELD(arg0, s32 *, 0x1C), pr, 0, -1, -1);
            }
        }
    }
}

}

#include "pso/TBoss6SwordShot.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFPv();
}

extern "C" {

void run_task__15TBoss6SwordShotFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        fn_803561C4((u8 *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 7) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
TBoss6SwordShot::~TBoss6SwordShot() {}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Shot_80356374 {
    s32 f0;
    u8 pad4[0x14];
    void *vt18;
    s32 owner;
    struct { f32 x, y, z; } pos;
    f32 speed;
    s32 f30;
    s32 life;
};

extern "C" {
u8 *fn_8035648C(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
f32 *dispatch_shared_handler_a__6TLobbyFPv(s32);
void set_position_xy__10TObjPlayerFPvff(void *, f32, f32);
extern M2C_UNK __vt__15TBoss6SwordShot[];
extern s32 lbl_805D43AC;
extern const f32 lbl_805DFFE8;
extern const f32 lbl_805DFFF0;
extern const f32 lbl_805DFFF4;
u8 *TBoss6SwordShot__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#define self ((Shot_80356374 *)arg0)
u8 *TBoss6SwordShot__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    f32 scale;
    f32 v;
    void *p;
    __ct__7TObjectFP7TObject(arg0, (void *)arg1);
    self->vt18 = __vt__15TBoss6SwordShot;
    self->f0 = lbl_805D43AC;
    self->owner = arg1;
    VecCopy__FP3VecPC3Vec(&self->pos, (void *)arg2);
    self->speed = farg0;
    self->f30 = 0;
    v = *dispatch_shared_handler_a__6TLobbyFPv(0x2B);
    self->life = (s32)v;
    if (lbl_805DFFE8 == v) {
        self->life = 0x14;
    }
    if (arg3 != 0) {
        scale = lbl_805DFFF0;
        if (self->speed > lbl_805DFFF4) {
            scale = self->speed / lbl_805DFFF4;
        }
        if ((p = spawn_particle_effect_with_flags(&self->pos, 0x212, 0x40)) != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, scale, lbl_805DFFF0);
        }
        if ((p = spawn_particle_effect_with_flags(&self->pos, 0x213, 0x40)) != NULL) {
            set_position_xy__10TObjPlayerFPvff(p, scale, lbl_805DFFF0);
        }
    }
    return (u8 *)arg0;
}
#undef self
#pragma pop

#pragma push
#pragma fp_contract on
u8 *fn_8035648C(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x38));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TBoss6SwordShot__ct((void *)(temp_r3), (s32)(arg0), (s32)(arg1), (s32)(arg2), farg0));
    }
    return var_r0;
}
#pragma pop

}

#include "pso/TBoss6SwordWave.h"

extern "C" {

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
void render__15TBoss6SwordWaveFv(void);

#pragma push
#pragma fp_contract on
s32 TBoss6SwordWave__sub_803564F4(void *arg0) {
    Wave_803564F4 *o = (Wave_803564F4 *)arg0;
    f32 d;
    f32 f;
    s32 step;
    s32 ang;
    d = lbl_805DFFF8 * o->radius;
    if (d <= lbl_805E0004) {
        f = lbl_805DFFF0;
    } else {
        f = lbl_805E0000 / d;
    }
    step = (s32)(lbl_805DFFFC * f);
    for (ang = 0; ang < 0x10000; ang += step) {
        s32 seg = ((s32 (*)(void *, s32))TBoss6SwordWave__sub_80356D08)(o->x30, ang);
        if (((s32 (*)(void *, s32))TBoss6SwordWave__sub_80356C80)(o->x30, seg) != 0) {
            Vec_803564F4 v = o->pos;
            v.x += o->radius * TBoss8Dragon__sub_803D64C0(ang);
            v.z += o->radius * TBoss8Dragon__sub_803D64DC(ang);
            if (!(xyz_distance(&v, lbl_80479388) > lbl_805E0008)) {
                spawn_particle_effect_with_flags(&v, 0x212, 0x40);
                if (get_rotation_timer__11TBoss6Type2FPv(o->owner) == 0) {
                    spawn_particle_effect(&v, 0x213);
                } else {
                    spawn_particle_effect_with_flags(&v, 0x229, 0x2000);
                }
            }
        }
    }
}
#pragma pop

struct W_80356D10;

M2C_UNK TBoss6SwordWave__sub_8035663C(void *a) {
    s32 n;
    s32 i;
    VObj_8035663C *pl;
    u8 *arg0 = (u8 *)a;
    u8 t;
    s32 v;
    f32 d;
    Vec_8035663C dir;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (is_active__14TBoss6PlotFalzFPv() != 0) {
            VecCopy__FP3VecPC3Vec(&dir, (u8 *)pl + 0x38);
            TBoss6Type1__sub_803D9370(&dir, arg0 + 0x20);
            dir.y = lbl_805DFFE8;
            d = TBoss6Kakusan__sub_803D8BD8(&dir);
            if (d < M2C_FIELD(arg0, f32 *, 0x50) || d > M2C_FIELD(arg0, f32 *, 0x54)) {
                continue;
            }
            t = ((u8 (*)(void *, s32))TBoss6SwordWave__sub_80356D08)(arg0 + 0x30,
                        (s32)(lbl_804793B0 * get_ad_end_text_start__10TObjPlayerFv(dir.x, dir.z)));
            if (((s32 (*)(void *, u8))TBoss6SwordWave__sub_80356C80)(arg0 + 0x30, t) == 0) {
                continue;
            }
            v = M2C_FIELD(arg0, s32 *, 0x5C);
            if (get_rotation_timer__11TBoss6Type2FPv(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
                v = (s32)((f32)v * M2C_FIELD(arg0, f32 *, 0x60));
            }
            Pair_8035663C pr;
            s32 r = TBoss6PlotFalz__sub_802AB5B4(v, lbl_805DFFEC);
            pr.a = 0;
            pr.b = (f32)r;
            pl->m21(M2C_FIELD(arg0, s32 *, 0x1C), pr, 0, -1, -1);
        }
    }
}

M2C_UNK TBoss6SwordWave__sub_803567D0(void *a) {
    Vec_803567D0 pt;
    Vec_803567D0 d;
    Vec_803567D0 va;
    Vec_803567D0 vb;
    Vec_803567D0 n;
    f32 scale;
    u8 *arg0 = (u8 *)a;
    s32 i;
    u8 t;
    s32 a1;
    s32 a2;
    s32 lo;
    s32 hi;
    f32 dist;
    for (i = 0; i < 32; i++) {
        if (get_point__10TBoss6RockFiPvPv(i, &pt, &scale) == 0) {
            continue;
        }
        VecCopy__FP3VecPC3Vec(&d, &pt);
        TBoss6Type1__sub_803D9370(&d, arg0 + 0x20);
        d.y = lbl_805DFFE8;
        dist = TBoss6Kakusan__sub_803D8BD8(&d);
        if (dist < M2C_FIELD(arg0, f32 *, 0x50) || dist > M2C_FIELD(arg0, f32 *, 0x54)) {
            continue;
        }
        t = ((u8 (*)(void *, s32))TBoss6SwordWave__sub_80356D08)(arg0 + 0x30,
                (s32)(lbl_804793B0 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z)));
        if (((s32 (*)(void *, u8))TBoss6SwordWave__sub_80356C80)(arg0 + 0x30, t) == 0) {
            continue;
        }
        ((void (*)(void *, u8))TBoss6SwordWave__sub_80356D10)(arg0 + 0x30, t);
        TBoss6Rock__sub_80353E5C(i);
        if (dist <= lbl_805E0004) {
            continue;
        }
        n.x = -d.z;
        n.y = lbl_805DFFE8;
        n.z = d.x;
        TNpcPlayer__sub_803D97B4(&n);
        n.x *= scale;
        n.z *= scale;
        VecCopy__FP3VecPC3Vec(&va, &pt);
        TBoss4Zako__sub_803D8910(&va, &n);
        VecCopy__FP3VecPC3Vec(&vb, &pt);
        TBoss6Type1__sub_803D9370(&vb, &n);
        a1 = (s32)(lbl_804793B0 * get_ad_end_text_start__10TObjPlayerFv(va.x - M2C_FIELD(arg0, f32 *, 0x20), va.z - M2C_FIELD(arg0, f32 *, 0x28)));
        a2 = (s32)(lbl_804793B0 * get_ad_end_text_start__10TObjPlayerFv(vb.x - M2C_FIELD(arg0, f32 *, 0x20), vb.z - M2C_FIELD(arg0, f32 *, 0x28)));
        lo = ((s32 (*)(void *, s32))TBoss6SwordWave__sub_80356D08)(arg0 + 0x30, a1);
        hi = ((s32 (*)(void *, s32))TBoss6SwordWave__sub_80356D08)(arg0 + 0x30, a2);
        if (hi < lo) {
            hi += lbl_805E000C;
        }
        for (; lo <= hi; lo++) {
            ((void (*)(void *, s32))TBoss6SwordWave__sub_80356D10)(arg0 + 0x30, lo);
        }
    }
}

void render__15TBoss6SwordWaveFv(void) {  }

#pragma push
#pragma opt_common_subs off
void run_task__15TBoss6SwordWaveFv(u8 *arg0) {
    f32 temp_f1;
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        TBoss6SwordWave__sub_803567D0((void *)((void *) (arg0)));
        TBoss6SwordWave__sub_8035663C((void *)((void *) (arg0)));
        if (M2C_FIELD(arg0, f32 *, 0x58) < lbl_805E0010) {
            TBoss6SwordWave__sub_803564F4((void *)((void *) (arg0)));
        }
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) (M2C_FIELD(arg0, f32 *, 0x58) + lbl_805E0010);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x58);
        if (temp_f1 > lbl_805E0014) {
            M2C_FIELD(arg0, f32 *, 0x58) = (f32) (temp_f1 - lbl_805E0014);
        }
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x54);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg0, f32 *, 0x54) + lbl_805E0010);
        if (M2C_FIELD(arg0, f32 *, 0x54) > M2C_FIELD(arg0, f32 *, 0x2C)) {
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    }
}
#pragma pop

TBoss6SwordWave::~TBoss6SwordWave() {}
u8 *__ct__15TBoss6SwordWaveFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__15TBoss6SwordWave.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D43A8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x20), (void *) (arg2));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DFFE8;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    TBoss6SwordWave__sub_80356D64((void *) (arg0 + 0x30), (void *) (arg3), (void *) (arg4));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805DFFE8;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805DFFE8;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DFFE8;
    temp_f2 = *dispatch_shared_handler_a__6TLobbyFPv(0x2C);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) temp_f2;
    if (lbl_805DFFE8 == temp_f2) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x14;
    }
    temp_f1 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x2F), f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x60) = temp_f1;
    if (lbl_805DFFE8 == temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DFFF0;
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
u8 *TBoss6SwordWave__sub_80356C10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x64));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__15TBoss6SwordWaveFv((u8 *)(temp_r3), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3), farg0));
    }
    return var_r0;
}
#pragma pop

u8 TBoss6SwordWave__sub_80356C80(s32 arg0, u8 arg1) {
    typedef char sp8_offset[(offsetof(Stack_80356C80, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80356C80, spC) == 0x4) ? 1 : -1];
    Stack_80356C80 stack;
    TBoss6SwordWave__sub_80356CDC((s32)(arg0), arg1, (void *)(&stack.spC), (void *)(&stack.sp8));
    return (u8) (((1 << stack.sp8) & M2C_FIELD(arg0, M2C_UNK *, (stack.spC * 4))) != 0);
}

void TBoss6SwordWave__sub_80356CDC(s32 arg0, u8 v, void *a, void *b) {
    s32 x = v;
    *(s32 *)a = x / 32;
    *(s32 *)b = x % 32;
}

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2) {
    return (u8) (arg2 >> 8U);
}

void TBoss6SwordWave__sub_80356D10(W_80356D10 *arg0, u8 arg1) {
    s32 idx;
    s32 bit;
    TBoss6SwordWave__sub_80356CDC((s32)arg0, arg1, &idx, &bit);
    arg0->w[idx] &= ~(1 << bit);
}

void TBoss6SwordWave__sub_80356D64(void *arg0, void *arg1, void *arg2) {
    s32 a = ((s32 (*)(void *, void *))TBoss6SwordWave__sub_80356D08)(arg0, arg1);
    s32 b = ((s32 (*)(void *, void *))TBoss6SwordWave__sub_80356D08)(arg0, arg2);
    if (a > b) {
        b += 0x100;
    }
    fn_80356E30(arg0);
    while (a <= b) {
        ((void (*)(void *, s32))TBoss6SwordWave__sub_80356DDC)(arg0, a);
        a++;
    }
}

void TBoss6SwordWave__sub_80356DDC(s32 arg0, u8 arg1) {
  s32 spC;
  s32 sp8;
  s32 temp_r5;
  s8 *new_var;
  TBoss6SwordWave__sub_80356CDC((s32)(arg0), arg1, (void *)(&spC), (void *)(&sp8));
  temp_r5 = spC * 4;
  new_var = ((s8 *) arg0) + temp_r5;
  *((M2C_UNK *) (((s8 *) arg0) + temp_r5)) = (*((M2C_UNK *) new_var)) | (1 << sp8);
}

}
