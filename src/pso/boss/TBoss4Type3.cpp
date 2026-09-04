#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt37(void *arg0);
void TBoss4Type3__vt38(void *arg0);

s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK TBoss4Type3__sub_800599F4(void *, M2C_UNK, M2C_UNK);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void TBoss4Type3__vt38(void *arg0) {
    if (TBoss4Type3__sub_8005254C(M2C_FIELD(arg0, u16 *, 0x3B8)) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFFU;
        TBoss4Type3__sub_800599F4(arg0, 0, 2);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, u16 *, 0x3BA) = (u16) M2C_FIELD(arg0, u16 *, 0x3B8);
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFFU;
        TBoss3Volopt__sub_8022675C(0x4003C12C, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void TBoss4Type3__vt37(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x4003C12B, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800505A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_yutai__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2);
void *__ct__11TObjDFYutaiFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_yutai__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__11TObjDFYutaiFv(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80050600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_attack_trigger__11TBoss4Type3FPv(void *arg0);

extern s32 lbl_805D5550;
extern f32 lbl_805D8A44;

void check_attack_trigger__11TBoss4Type3FPv(void *arg0) {
    if (((s32) lbl_805D5550 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x338) >= 0x78) && (M2C_FIELD(arg0, f32 *, 0x37C) > (lbl_805D8A44 * M2C_FIELD(arg0, f32 *, 0x378)))) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80050D1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_horming__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjDFHorming__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_horming__11TBoss4Type3FPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x380);
    if (o != NULL) {
        o = TObjDFHorming__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80052508
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 compute_wave_offset__11TBoss4Type3Ff(f32 farg0);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D8AE0;
extern const f32 lbl_805D8AE4;
extern const f32 lbl_805D8AF0;

f32 compute_wave_offset__11TBoss4Type3Ff(f32 farg0) {
    return lbl_805D8AE4 * (lbl_805D8AE0 - TBoss8Dragon__sub_803D64DC((s32) (lbl_805D8AF0 * farg0)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80058428
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt41(void *arg0);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);
M2C_UNK TBoss4Type3__sub_80059F64(void *, M2C_UNK);
f32 calc_boss4_scale__10TObjPlayerFi(void *);

extern const f32 lbl_805D8C3C;

void TBoss4Type3__vt41(void *arg0) {
    s32 temp_r0;

    u16 v = M2C_FIELD(arg0, u16 *, 0x3BA);
    if ((v != 0xFFFF) && (TBoss4Type3__sub_8005254C(v) == 0)) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFF;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFF;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3BC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3BC);
        if ((temp_r0 >= 5) || ((temp_r0 >= 2) && (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D8C3C))) {
            TBoss4Type3__sub_80059F64(arg0, 9);
            return;
        }
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800584D0
#include "types.h"

extern "C" {

void TBoss4Type3__vt40(void* p);

void TBoss4Type3__vt40(void* p) { *(s32*)((char*)p + 0x52c) = 0; *(s32*)((char*)p + 0x398) = 147; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800589B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt34(void *arg0);
void TBoss4Type3__vt35(void* p);

int TBoss4Type3__sub_80059F64(void*, void*);

void TBoss4Type3__vt35(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)12); } }

M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void TBoss4Type3__vt34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    TBoss3Volopt__sub_8022675C(0x4003B238, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x62;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80058B48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt31(void *arg0);
void TBoss4Type3__vt32(void* p);

int TBoss4Type3__sub_80059F64(void*, void*);

void TBoss4Type3__vt32(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_80059F64(p, (void*)10); } }

void TBoss4Type3__vt31(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x93;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80058DAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt28(void *arg0);

void TBoss4Type3__vt28(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xC4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80058EF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt25(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);

void TBoss4Type3__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x10;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    TBoss3Volopt__sub_8022675C(0x4003B032, arg0 + 0x38, 0, 1);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x3BA) == (u16)-1) {
        TBoss3Volopt__sub_8022675C(0x4003C62D, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x52C) = 0;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005908C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt22(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void TBoss4Type3__vt22(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A4) = (s32) M2C_FIELD(arg0, s32 *, 0x3A0);
    M2C_FIELD(arg0, s32 *, 0x3A0) = 0x11;
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) M2C_FIELD(arg0, s32 *, 0x3A8);
    TBoss3Volopt__sub_8022675C(0x4003B031, arg0 + 0x38, 0, 1);
    M2C_FIELD(arg0, s32 *, 0x52C) = 1;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80059378
#include "types.h"

extern "C" {

void TBoss4Type3__vt5(void);

void TBoss4Type3__vt5(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005937C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt4(void *arg0);

extern f32 lbl_805D8C60;

void TBoss4Type3__vt4(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) lbl_805D8C60;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80059410
#include "types.h"

extern "C" {

int TBoss4Type3__sub_800599F4(void*, void*, void*);
void TBoss4Type3__vt1(void* p);
void TBoss4Type3__vt0(void* p);

void TBoss4Type3__vt1(void* p) { if (*(int*)((char*)p + 0x398) == 0) { TBoss4Type3__sub_800599F4(p, (void*)0, (void*)2); } }
void TBoss4Type3__vt0(void* p) { *(s32*)((char*)p + 0x398) = 147; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005951C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target_effect_timer__11TBoss4Type3FPv(void *arg0);
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);
s32 is_split_screen();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4D80;
extern u8 lbl_805D4D84;
extern s32 lbl_805D53A0;

void update_target_effect_timer__11TBoss4Type3FPv(void *arg0) {
    s32 temp_r30;
    s32 var_r30;

    var_r30 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0x10) {
        var_r30 = 0;
    }
    if (is_split_screen() != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x3BA) == 0xFFFF) {
            var_r30 = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, u16 *, 0x3BA) != (s32) lbl_805D53A0) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    }
    if ((s8) lbl_805D4D84 == 0) {
        lbl_805D4D80 = 8;
        lbl_805D4D84 = 1;
    }
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x3D8) % 39;
    if (temp_r30 == 0) {
        spawn_effect__11TBoss4Type3Fsss(0x60, 0xF, (s16) M2C_FIELD(arg0, u16 *, 0x3BA));
    }
    if (temp_r30 == (s32) lbl_805D4D80) {
        TBoss3Volopt__sub_8022675C(0x4003C133, 0, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80059A90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_grid_index__11TBoss4Type3FPv(void *arg0);

void calc_grid_index__11TBoss4Type3FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3AC) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
    M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (((u32) -(M2C_FIELD(arg0, s32 *, 0x60) + 0x800) >> 0xCU) & 0xF);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80059B44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_random_scaled__11TBoss4Type3Fv(void);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D8C80;

s32 get_random_scaled__11TBoss4Type3Fv(void) {
    return (s32) (lbl_805D8C80 * calc_boss4_scale__10TObjPlayerFi());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80059E58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0);
M2C_UNK TBoss4Type3__sub_80059F04(s32, M2C_UNK, s32, s32);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D8C8C;

void spawn_random_effect__11TBoss4Type3Fi(s32 arg0) {
    s32 temp_r5;

    temp_r5 = (s32) (lbl_805D8C8C * calc_boss4_scale__10TObjPlayerFi());
    TBoss4Type3__sub_80059F04(arg0, 0xF, temp_r5, temp_r5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005A4E0
#include "types.h"

extern "C" {

void copy_pair__11TBoss4Type3FPvPv(void* p, void* q);

void copy_pair__11TBoss4Type3FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005A7AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__11TBoss4Type3FPv(void *arg0);
void TBoss4Type3__sub_8005A438(void *);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_80051E9C(int, f32);
void toggle_particle_effect__10TObjPlayerFv(void *);
void end_effect_render__13TParticleCtrlFv(void);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);

void draw__11TBoss4Type3FPv(void *arg0) {
    toggle_particle_effect__10TObjPlayerFv(arg0);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TBoss4Type3__sub_8005A438(arg0);
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1152));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjPlayer__sub_80051E9C(M2C_FIELD(arg0, u16 *, 0x3BA), M2C_FIELD(arg0, f32 *, 0x3C8));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005A828
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_afterimage__11TBoss4Type3FPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805D8C68;

void advance_afterimage__11TBoss4Type3FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8C68);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005A86C
#include "types.h"

extern "C" {

int TBoss4Type3__sub_8005A86C(void* p);
int draw__11TBoss4Type3FPv(void*);

int TBoss4Type3__sub_8005A86C(void* p) { return draw__11TBoss4Type3FPv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005AD04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_effect__11TBoss4Type3FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, void *);

extern const f32 TBoss4Type3__data_805D8C34;

void init_effect__11TBoss4Type3FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type3__data_805D8C34;
    TBoss3Volopt__sub_8022675C(0x4003B734, arg0 + 0x38, 0, 1, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8005B1AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__11TBoss4Type3Fi(s32 arg0);
s32 TBoss4Type3__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__11TBoss4Type3Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x530);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss4Type3__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D7A20
#include "types.h"

extern "C" {

void reset_timer__11TBoss4Type3FPv(void* p);

void reset_timer__11TBoss4Type3FPv(void* p) { *(s32*)((char*)p + 0x1c) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800D9A68
#include "types.h"

extern "C" {

s32 *__dt__11TBoss4Type3FPvs(s32 *arg0, s16 arg1);
int free__11TOBoss4RockFUi(s32);
int __dl__FPv(s32 *);

s32 *__dt__11TBoss4Type3FPvs(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(*arg0);
        *arg0 = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
