#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DB250;
s32 TObjFogCollisionSwitch__sub_80153A0C(u8 *arg0);
}

extern "C" {

void TObjFogCollisionPoison__vt11(void *arg0);
void *__dt__22TObjFogCollisionPoisonFv(void *arg0, s16 arg1);
void *create__22TObjFogCollisionPoisonFPv(void *arg0);
void *TObjFogCollisionPoison__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__22TObjFogCollisionSwitchFv(void *, int);
void *__nw__7TObjectFUl(int);
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);

extern const f64 lbl_80440088;
extern s32 lbl_805D5550;
extern const f32 lbl_805DB250;
extern const f32 lbl_805DB254;
extern const f32 lbl_805DB258;
extern const f32 lbl_805DB25C;

void TObjFogCollisionPoison__vt11(void *arg0) {
    f32 var_f2;

    M2C_FIELD(arg0, s32 *, 0x98) = (s32) get_random_float__21TObjEneMe3ShinowaRealFv(M2C_FIELD(arg0, f32 *, 0x6C));
    switch ((s32) lbl_805D5550) {
    default:
    case 0:
        var_f2 = lbl_805DB250;
        break;
    case 1:
        var_f2 = lbl_805DB254;
        break;
    case 2:
        var_f2 = lbl_805DB258;
        break;
    case 3:
        var_f2 = lbl_805DB25C;
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x98) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x98) * var_f2);
}

extern M2C_UNK __vt__22TObjFogCollisionPoison[];

void *__dt__22TObjFogCollisionPoisonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjFogCollisionPoison;
        __dt__22TObjFogCollisionSwitchFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

void *create__22TObjFogCollisionPoisonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjFogCollisionPoison__ct(o, tl_05, arg0);
    }
    return o;
}
s32 TObjFogCollisionSwitch__sub_80153A0C(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x70) >= lbl_805DB250;
}

}
