#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2);

void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) <= arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80152F50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_poison_damage__22TObjFogCollisionPoisonFPv(void *arg0);
u16 get_action_flags__10TNpcPlayerFPv(void* p);
s32 TObjFogCollisionPoison__sub_8015346C(s32, u16);
s32 TObjFogCollisionPoison__sub_801534E8(s32, u16);
s32 TObjFogCollisionPoison__sub_80153520(s32);
s32 TObjFogCollisionPoison__sub_801535D0(s32);
s32 check_collision__16TObjFogCollisionFPvUs(s32, u16);
s32 check_switch__22TObjFogCollisionPoisonFPv(s32);

void update_poison_damage__22TObjFogCollisionPoisonFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x10);
    if (check_switch__22TObjFogCollisionPoisonFPv(temp_r31) != 0) {
        if (check_collision__16TObjFogCollisionFPvUs(temp_r31, M2C_FIELD(arg0, u16 *, 0x28)) != 0) {
            TObjFogCollisionPoison__sub_801534E8(temp_r31, M2C_FIELD(arg0, u16 *, 0x28));
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x20) >= (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
                TObjFogCollisionPoison__sub_8015346C(temp_r31, M2C_FIELD(arg0, u16 *, 0x28));
                M2C_FIELD(arg0, s32 *, 0x20) = 0;
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x1E;
            }
            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x96;
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r0 == 1) {
            TObjFogCollisionPoison__sub_801535D0(temp_r31);
            return;
        }
        if (temp_r0 > 0x3C) {
            TObjFogCollisionPoison__sub_80153520(temp_r31);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015302C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804AF7B0[];

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AF7B0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153340
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__22TObjFogCollisionPoisonFv(void);
M2C_UNK TObjFogCollisionPoison__sub_801532C8(void *, s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_split_screen();

extern s32 tl_05;
extern s32 lbl_805D53A0;

void create__22TObjFogCollisionPoisonFv(void) {
    s32 var_r31;
    void *obj;

    if (is_split_screen() == 0) {
        obj = __nw__7TObjectFUl(0x30);
        if (obj != NULL) {
            TObjFogCollisionPoison__sub_801532C8(obj, tl_05, lbl_805D53A0);
        }
    } else {
        var_r31 = 0;
        do {
            obj = __nw__7TObjectFUl(0x30);
            if (obj != NULL) {
                TObjFogCollisionPoison__sub_801532C8(obj, tl_05, var_r31);
            }
            var_r31 += 1;
        } while (var_r31 != 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801533BC
#include "types.h"

extern "C" {

void TObjFogCollisionPoison__sub_801533BC(void);

void TObjFogCollisionPoison__sub_801533BC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153420
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
s32 TObjFogCollisionSwitch__sub_80153A0C();

u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFogCollisionSwitch__sub_80153A0C();
    return (u8) (temp_r31 == TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0x8C)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801536B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFogCollisionPoison__vt11(void *arg0);
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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjFogCollisionPoisonFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__22TObjFogCollisionSwitchFv(void *, int);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80153888
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__22TObjFogCollisionPoisonFPv(void *arg0);
void *TObjFogCollisionPoison__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__22TObjFogCollisionPoisonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x9C);
    if (o != NULL) {
        o = TObjFogCollisionPoison__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
