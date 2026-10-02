#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VB_80168488 { char pad[0x18]; };

struct VO_80168488 : VB_80168488 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, void *, s32, s32, s32);
    virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78();
    virtual f32 m79(f32);
};

struct Pair_80168488 { s32 a; f32 b; };

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TOTrapAncient01__sub_80226578(s32, void *, void *, s32, s32);
void fn_80168398(u8 *arg0);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
u32 check_actor_body_contact(void *, void *, f32);
s32 fn_80168244(void *, void *);
M2C_UNK fn_80168280(void *, void *);
void *get_player_by_client_id(s32);
extern const f32 lbl_805DB688;
void fn_80168488(VO_80168488 *arg0);
}

extern "C" {

void fn_80168398(u8 *arg0) {
    s32 state = get_global_state__14TOKeyMachine01Fv();
    s32 id = 0;
    switch (*(s16 *)(arg0 + 0x326)) {
    case 2:
        switch (state) {
        case 0x13:
        case 0x14:
            id = 0x4BC11;
            break;
        case 0x15:
        case 0x16:
            id = 0x4004BC11;
            break;
        default:
            id = 0x43C18;
            break;
        }
        break;
    case 1:
        switch (state) {
        case 0x13:
        case 0x14:
            id = 0x4B212;
            break;
        case 0x15:
        case 0x16:
            id = 0x4004B212;
            break;
        default:
            id = 0x4321A;
            break;
        }
        break;
    }
    if (id != 0) {
        TOTrapAncient01__sub_80226578(id, arg0, arg0 + 0x38, 0, 0);
    }
}
#pragma dont_inline off
#pragma inline_depth(1)
static inline void hit_80168488(VO_80168488 *o, VO_80168488 *a, Pair_80168488 p) { o->m21(a, &p, 0, -1, -1); }
void fn_80168488(VO_80168488 *arg0) {
    s32 var_r30;
    VO_80168488 *temp_r3;
    var_r30 = 0;
    do {
        temp_r3 = (VO_80168488 *)get_player_by_client_id(var_r30);
        if ((temp_r3 != NULL) && (fn_80168244(arg0, temp_r3) == 0)) {
            if ((get_field_3e4__10TObjPlayerFPv(temp_r3) == get_current_floor()) && (check_actor_body_contact(arg0, temp_r3, lbl_805DB688) != 0U)) {
                Pair_80168488 t;
                t.a = 0;
                t.b = arg0->m79(M2C_FIELD(arg0, f32 *, 0x338));
                hit_80168488(temp_r3, arg0, t);
                obj_setFlags30(temp_r3, 0x400);
                fn_80168280(arg0, temp_r3);
            }
        }
        var_r30 += 1;
    } while (var_r30 != 0xC);
}

}
