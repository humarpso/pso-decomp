#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneSlimeOne__vt61(void* p);

int TObjEneSlimeOne__sub_800EAE78(void*, void*);

void TObjEneSlimeOne__vt61(void* p) { if (*(int*)((char*)p + 0x384) != 13) { TObjEneSlimeOne__sub_800EAE78(p, (void*)13); } }

}
#else
#if PSO_CLASS_PACKAGE == 0x800E92AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_position__15TObjEneSlimeOneFi(s32 arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);

void copy_position__15TObjEneSlimeOneFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x374, arg0 + 0x38);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E969C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneSlimeOne__sub_800E969C(void *arg0);
void init_split_effect__15TObjEneSlimeOneFPv(u8 *arg0);
void update_tick__15TObjEneSlimeOneFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, s32);
s32 is_timer_active__15TObjEneSlimeOneFPv(void *);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(int, int);
M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, int);

void TObjEneSlimeOne__sub_800E969C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (s32)(5));
    }
}

extern const f32 lbl_805DA67C;

void init_split_effect__15TObjEneSlimeOneFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    TObjEneDellBiter__sub_80087350((void *)((void *) (arg0 + 0x2FC)), (int)((int) (0xCE)));
    TBoss3Volopt__sub_8022675C((int) (0x4003A61A), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneSlimeOne__sub_800EC7F4((int) (M2C_FIELD(arg0, s32 *, 0x388)), (int) (5));
    set_display_mode__15TObjEneSlimeOneFPvi((void *) (arg0), (int) (0));
}

void update_tick__15TObjEneSlimeOneFPv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x394) + 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r3;
    if (!(temp_r3 & 3)) {
        TObjEneDellBiter__sub_80087350((void *)(arg0 + 0x2FC), (int)(0xE0));
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (s32)(7));
            return;
        }
        TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (s32)(6));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E97C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_display_state__15TObjEneSlimeOneFPv(void* a0);
void tick_timer__15TObjEneSlimeOneFPv(void *arg0);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, s32);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

    extern const float lbl_805DA67C;
void reset_display_state__15TObjEneSlimeOneFPv(void* a0) { *(float*)((char*)a0 + 0x3b0) = lbl_805DA67C; *(float*)((char*)a0 + 0x3ac) = lbl_805DA67C; *(float*)((char*)a0 + 0x3a8) = lbl_805DA67C; *(int*)((char*)a0 + 0x394) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)4); set_display_mode__15TObjEneSlimeOneFPvi(a0, (void*)2); }

void tick_timer__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E9ABC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_water_bomb_timer__15TObjEneSlimeOneFPv(u8 *arg0);
void begin_appear__15TObjEneSlimeOneFPv(void* p);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
s32 is_timer_active__15TObjEneSlimeOneFPv(void *);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
M2C_UNK create__21TObjEneSlimeWaterBombFPvPv(void *, void *);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

void update_water_bomb_timer__15TObjEneSlimeOneFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x394) = (s32) (M2C_FIELD(arg0, s32 *, 0x394) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0 > 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xFF);
    } else if (temp_r0 == 0) {
        TBoss3Volopt__sub_8022675C(0x4003A017, arg0 + 0x38, 0, 0);
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xE2);
        create__21TObjEneSlimeWaterBombFPvPv(arg0, arg0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 7);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 5);
    }
}

void begin_appear__15TObjEneSlimeOneFPv(void* p) { *(int*)((char*)p + 0x390) = 90; *(int*)((char*)p + 0x394) = 19; TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)3); set_display_mode__15TObjEneSlimeOneFPvi(p, (void*)2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EA9A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_display__15TObjEneSlimeOneFPv(void* a0);
void update_wait_search__15TObjEneSlimeOneFPv(void *arg0);
void init_state__15TObjEneSlimeOneFPv(void* a0);
int set_random_timer_15__15TObjEneSlimeOneFPv(void*);
int TObjEneSlimeOne__sub_800EAD84(void);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void reset_display__15TObjEneSlimeOneFPv(void* a0) { set_display_mode__15TObjEneSlimeOneFPvi((void*)(a0), (void*)(0)); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) & 0xfffbffff); *(float*)((char*)a0 + 0x398) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; }

extern f32 lbl_805DA6DC;

void update_wait_search__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0;
    if (temp_r0 <= 0) {
        if (TObjPlayer__sub_800115C4(arg0, 0, lbl_805DA6DC) == 0xFFFF) {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3C8) + 1;
            M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0_2;
            if (temp_r0_2 >= 5) {
                M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
                M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x58);
                M2C_FIELD(arg0, s32 *, 0x3C8) = 5;
            }
            set_random_timer_15__15TObjEneSlimeOneFPv((void*)(arg0));
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 1);
    }
}

    extern const float lbl_805DA6B4;
    extern const float lbl_805DA708;
void init_state__15TObjEneSlimeOneFPv(void* a0) { TObjEneSlimeOne__sub_800EAD84(); *(float*)((char*)a0 + 0x3a4) = lbl_805DA708; *(float*)((char*)a0 + 0x3b0) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3ac) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a8) = lbl_805DA6B4; *(float*)((char*)a0 + 0x3a0) = lbl_805DA6B4; *(int*)((char*)a0 + 0x3c8) = 0; TObjEneSlimeOne__sub_800EC7F4((void*)(*(int*)((char*)a0 + 0x388)), (void*)7); set_display_mode__15TObjEneSlimeOneFPvi((void*)(a0), (void*)((void*)0)); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x40000); set_random_timer_15__15TObjEneSlimeOneFPv((void*)(a0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EAB04
#include "types.h"

extern "C" {

int set_random_timer_15__15TObjEneSlimeOneFPv(void* p);
int set_random_timer__15TObjEneSlimeOneFPvii(void*, int, int);

int set_random_timer_15__15TObjEneSlimeOneFPv(void* p) { return set_random_timer__15TObjEneSlimeOneFPvii(p, 15, 15); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EAE0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2);
f32 calc_boss4_scale__10TObjPlayerFi();

extern M2C_UNK lbl_8043D288;

void set_random_timer__15TObjEneSlimeOneFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (arg1 + (s32) ((f32) arg2 * calc_boss4_scale__10TObjPlayerFi()));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EB120
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dt__15TObjEneSlimeOneFis(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__15TObjEneSlimeOne[];

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneSlimeOne;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0;
        if (M2C_FIELD(arg0, void **, 0x3E8) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3E8)); M2C_FIELD(arg0, M2C_UNK *, 0x3E8) = 0; }
        __dt__15TObjEneSlimeOneFis(M2C_FIELD(arg0, void **, 0x388), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EB56C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2);
s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1);
s32 TObjControl__ct(s32, s32);
s32 TObjEneSlimeOne__ct(s32, s32, s32, s32, s32);
s32 TObjEneSlimeOne__sub_800EB4A0(s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlimeOne__ct(var_r31, var_r4, arg0, arg1, arg2);
    }
    return var_r31;
}

extern s32 tl_04;

s32 create__15TObjEneSlimeOneFii(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3F8);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TObjEneSlimeOne__sub_800EB4A0(var_r31, var_r4, arg0, arg1);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EC394
#include "types.h"

extern "C" {

s32 get_attack_target__15TObjEneSlimeOneFPv(void* p);

s32 get_attack_target__15TObjEneSlimeOneFPv(void* p) { return *(s32*)((char*)p + 0x3f4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EC3C8
#include "types.h"

extern "C" {

int get_instance__15TObjEneSlimeOneFv(void);

    extern int lbl_805D52B0;
int get_instance__15TObjEneSlimeOneFv(void) {  return lbl_805D52B0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EC41C
#include "types.h"

extern "C" {

int is_timer_active__15TObjEneSlimeOneFPv(void* p);
void TObjEneSlimeOne__sub_800EC470(void* p);
int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p);
int TObjPlayer__sub_801D2EA8(void*);

int is_timer_active__15TObjEneSlimeOneFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EC470
#include "types.h"

extern "C" {

int is_timer_active__15TObjEneSlimeOneFPv(void* p);
void TObjEneSlimeOne__sub_800EC470(void* p);
int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p);
int TObjPlayer__sub_801D2EA8(void*);

void TObjEneSlimeOne__sub_800EC470(void* p) { *(s32*)((char*)p + 0x3f0) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EC47C
#include "types.h"

extern "C" {

int is_timer_active__15TObjEneSlimeOneFPv(void* p);
void TObjEneSlimeOne__sub_800EC470(void* p);
int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p);
int TObjPlayer__sub_801D2EA8(void*);

int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p) { return TObjPlayer__sub_801D2EA8((char*)p + 0x7cc); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800EC78C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0);

extern f32 lbl_805D52B8;
extern u8 lbl_805D52BC;
extern f32 lbl_805DA760;

s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 7) {
        return 0;
    }
    if ((s8) lbl_805D52BC == 0) {
        f32 tmp = M2C_FIELD(arg0, f32 *, 0x2C);
        lbl_805D52BC = 1;
        lbl_805D52B8 = tmp - lbl_805DA760;
    }
    if (M2C_FIELD(arg0, f32 *, 0x30) == lbl_805D52B8) {
        return 1;
    }
    return 0;
}

}
#endif
#endif
