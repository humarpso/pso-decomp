#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__11TBoss6Type2Fv(void* p);
s32 get_phase__11TBoss6Type2FPv(void* p);
int draw__11TBoss6Type2FPv(void*);
int render_body_effects__11TBoss6Type2FPv(void*);

void render__11TBoss6Type2Fv(void* p) { render_body_effects__11TBoss6Type2FPv(p); draw__11TBoss6Type2FPv(p); }
s32 get_phase__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x37c); }

}
#else
#if PSO_CLASS_PACKAGE == 0x802B97E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__11TBoss6Type2FPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void boss6type2_draw_models(void *, void *, void *, void *, void *, void *, void *, void *, f32);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void *);
void TObjPlayer__sub_803D9B78(void);

extern const f32 TBoss6Type2__data_805DE40C;

void draw__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 65535) {
        TObjPlayer__sub_803D9B2C(arg0);
        TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1568));
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
        boss6type2_draw_models((void *)((char *)arg0 + 1396), (void *)((char *)arg0 + 1404), (void *)((char *)arg0 + 1412), M2C_FIELD(arg0, void **, 0x58C), M2C_FIELD(arg0, void **, 0x590), M2C_FIELD(arg0, void **, 0x594), M2C_FIELD(arg0, void **, 0x598), M2C_FIELD(arg0, void **, 0x570), TBoss6Type2__data_805DE40C);
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9858
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_body_effects__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss6PlotFalz__sub_802AC008(f32, f32);
M2C_UNK TBoss6Type2__sub_802B9EE4(void *);
M2C_UNK TBoss6Type2__sub_802B9F0C();
M2C_UNK TBoss6Type2__sub_802BCAB8(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK update_camera_target__14TBoss6PlotFalzFv();

extern const f32 TBoss6Type2__data_805DE40C;
extern const f32 TBoss6Type2__data_805DE410;

void render_body_effects__11TBoss6Type2FPv(u8 *arg0) {
    s32 var_r31;

    TBoss6Type2__sub_802B9F0C();
    toggle_particle_effect__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    var_r31 = 0;
    if ((TBoss6Type2__data_805DE410 == M2C_FIELD(arg0, f32 *, 0x41C)) || (TBoss6Type2__data_805DE40C == M2C_FIELD(arg0, f32 *, 0x41C))) {
        var_r31 = 1;
    }
    if (var_r31 != 0) {
        TBoss6PlotFalz__sub_802AC008((f32) (M2C_FIELD(arg0, f32 *, 0x4FC)), (f32) (M2C_FIELD(arg0, f32 *, 0x500)));
    }
    TBoss6Type2__sub_802BCAB8((void *) (arg0));
    if (var_r31 != 0) {
        update_camera_target__14TBoss6PlotFalzFv();
    }
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
    TBoss6Type2__sub_802B9EE4((void *) (arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9A00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0);
M2C_UNK unpack_path_entry__11TBoss6Type2FPvPv(s32);

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0) {
    unpack_path_entry__11TBoss6Type2FPvPv(arg0 + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9A24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1);
M2C_UNK TBoss6Type2__sub_802B9994(int, int, void *, void *);

void unpack_path_entry__11TBoss6Type2FPvPv(u8 *arg0, s32 *arg1) {
    *arg1 = (s32) (s16) ((s8) M2C_FIELD(arg0, u8 *, 2) << 8);
    TBoss6Type2__sub_802B9994((int) (M2C_FIELD(arg0, u8 *, 0)), (int) (M2C_FIELD(arg0, u8 *, 1)), (void *) ((u8 *) arg1 + 4), (void *) (arg0));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9D28
#include "types.h"

extern "C" {

void init_parts__11TBoss6Type2FPv(void* p);
int TBoss6Type2__sub_802B9BBC(void*, void*);

void init_parts__11TBoss6Type2FPv(void* p) { { int i; for (i = 0; i < 14; i++) { TBoss6Type2__sub_802B9BBC(p, (void*)i); } } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802B9ED4
#include "types.h"

extern "C" {

void set_fields_554__11TBoss6Type2FPv(void* p);

void set_fields_554__11TBoss6Type2FPv(void* p) { *(s32*)((char*)p + 0x554) = 1; *(s32*)((char*)p + 0x558) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA20C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int is_falz_ready__11TBoss6Type2FPv(void* p);
int TBoss6PlotFalz__sub_802AAFCC(void*);

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA31C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TBoss6Type2__sub_802BA180(void);
int TBoss6Type2__sub_802BA220(void* a0 = 0, void* a1 = 0);

void copy_vec2__11TBoss6Type2FPvPv(void* p, void* q);
int is_falz_ready__11TBoss6Type2FPv(void* p);
int TBoss6PlotFalz__sub_802AAFCC(void*);

s32 check_target__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x464) == 0xFFFF) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        TBoss6Type2__sub_802BA180();
    }
    if (TBoss6Type2__sub_802BA220((void*)(arg0), (void*)(M2C_FIELD(arg0, u16 *, 0x464))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
        return 0;
    }
    return 1;
}
int is_falz_ready__11TBoss6Type2FPv(void* p) { return TBoss6PlotFalz__sub_802AAFCC(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA4D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_counters__11TBoss6Type2FPv(void *arg0);
M2C_UNK TBoss6Type2__sub_802BA158(void *);
M2C_UNK TBoss6Type2__sub_802BA180();

void reset_counters__11TBoss6Type2FPv(void *arg0) {
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        TBoss6Type2__sub_802BA180();
    }
    TBoss6Type2__sub_802BA158(arg0);
    M2C_FIELD(arg0, s32 *, 0x560) = 0;
    M2C_FIELD(arg0, s32 *, 0x564) = 0;
    M2C_FIELD(arg0, s32 *, 0x568) = 0;
    M2C_FIELD(arg0, s32 *, 0x56C) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA52C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cache_fish_params__11TBoss6Type2FPv(void *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802BA158();

void cache_fish_params__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_802BA158();
    M2C_FIELD(arg0, s32 *, 0x560) = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x564) = TObjFish__sub_8001EDB0(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
    M2C_FIELD(arg0, s32 *, 0x568) = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x3FC), 0xB);
    M2C_FIELD(arg0, s32 *, 0x56C) = TObjFish__sub_8001EDC4(M2C_FIELD(arg0, s32 *, 0x3FC), 0xA);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA6A0
#include "types.h"

extern "C" {

void update_zako__11TBoss6Type2FPv(void* p);
int TBoss4Zako__sub_803D8910(void*, void*);
int TBoss6Type2__sub_802BAB80(void*);

void update_zako__11TBoss6Type2FPv(void* p) { TBoss4Zako__sub_803D8910((char*)p + 0x38, (char*)p + 0x524); TBoss6Type2__sub_802BAB80(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA7B0
#include "types.h"

extern "C" {

void TBoss6Type2__sub_802BA7B0(void* p);

void TBoss6Type2__sub_802BA7B0(void* p) { *(s32*)((char*)p + 0x520) = -1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA860
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready_to_attack__11TBoss6Type2FPv(void *arg0);
s32 calc_field4f0_delta__11TBoss6Type2FPv(void *);
s32 TBoss6PlotFalz__sub_802AC17C();

s32 is_ready_to_attack__11TBoss6Type2FPv(void *arg0) {
    s32 temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        return 0;
    }
    if (TBoss6PlotFalz__sub_802AC17C() != 0) {
        return 0;
    }
    temp = calc_field4f0_delta__11TBoss6Type2FPv(arg0);
    return M2C_FIELD(arg0, s32 *, 0x4C0) <= temp ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BA8CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0);
s32 calc_field4f0_delta__11TBoss6Type2FPv();
s32 get_phase__14TBoss6PlotFalzFv();

s32 is_phase_complete__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if (calc_field4f0_delta__11TBoss6Type2FPv() >= (s32) M2C_FIELD(arg0, s32 *, 0x4C4)) {
        return 1;
    }
    if ((get_phase__14TBoss6PlotFalzFv() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x420) >= 8)) {
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BAA30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger_screen_pos__11TBoss6Type2FPv(void *arg0);
M2C_UNK set_screen_pos__11TBoss6Type2FPv();

extern f32 lbl_805DE448;

void trigger_screen_pos__11TBoss6Type2FPv(void *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x424) == 0) && (M2C_FIELD(arg0, f32 *, 0x500) < lbl_805DE448)) {
        M2C_FIELD(arg0, s32 *, 0x424) = 1;
        set_screen_pos__11TBoss6Type2FPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BB1B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_range__11TBoss6Type2Fv(void);
M2C_UNK TBoss6Type2__sub_802BB1E0(f32, f32);

extern const f32 TBoss6Type2__data_805DE460;
extern const f32 lbl_805DE47C;

void init_range__11TBoss6Type2Fv(void) {
    TBoss6Type2__sub_802BB1E0(TBoss6Type2__data_805DE460, lbl_805DE47C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BB4DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
int TBoss6Type2__sub_802BB4DC(void* p);
int TBoss6Type2__sub_802B9F3C(void*, int);

int TBoss6Type2__sub_802BB4DC(void* p) { return TBoss6Type2__sub_802B9F3C(p, 0); }
void update_target__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x466));
    if (temp_r3 != 0) {
        TBoss6Type2__sub_802B9F3C(arg0, temp_r3 + 0x38);
        return;
    }
    TBoss6Type2__sub_802B9F3C(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BBDCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_parts_flags__11TBoss6Type2FPv(void *arg0);
M2C_UNK set_owner_flag_bit0__11TBoss6Type2FPv(void *);
M2C_UNK set_child_flags__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_802BBD88();

void update_parts_flags__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_802BBD88();
    if (M2C_FIELD(arg0, s32 *, 0x474) & 1) {
        set_child_flags__11TBoss6Type2FPv(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x474) & 2) {
        set_owner_flag_bit0__11TBoss6Type2FPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BBF10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_position__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805DE4A4;

void advance_position__11TBoss6Type2FPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805DE4A4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BBFA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_segments__11TBoss6Type2FPv(void *arg0);

void update_segments__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x454);
    M2C_FIELD(arg0, s16 *, 0x43E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x43C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x43A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x438) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x436) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x42C);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x436) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x438) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x43A) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x43C) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x43E) = (s16) M2C_FIELD(arg0, s16 *, 0x456);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x436);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x43A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x438);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x43E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x43C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC198
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 choose_turn_motion__11TBoss6Type2FPv(void *arg0);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32, f32);

extern const f64 TBoss6Type2__data_804713C0;

s32 choose_turn_motion__11TBoss6Type2FPv(void *arg0) {
    f32 temp_f3;
    f64 temp_f0;
    s32 var_r31;
    s32 var_r31_2;
    void *temp_r3;

    var_r31_2 = 0xF;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x466));
    if (M2C_FIELD(arg0, u8 *, 0x478) & 1) {
        var_r31_2 = 0x10;
    }
    if (temp_r3 == NULL) {
        return var_r31_2;
    }
    temp_f3 = M2C_FIELD(temp_r3, f32 *, 0x38);
    temp_f0 = get_ad_end_text_start__10TObjPlayerFv(temp_f3 - M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(temp_r3, f32 *, 0x40) - M2C_FIELD(arg0, f32 *, 0x40), temp_f3);
    var_r31 = 0xF;
    if (TBoss4Type2__sub_80141FA8(M2C_FIELD(arg0, s32 *, 0x60), (s32) (TBoss6Type2__data_804713C0 * temp_f0)) < 0) {
        var_r31 = 0x10;
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC364
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_target_valid__11TBoss6Type2FPv(void *arg0);
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 is_target_valid__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
        return 1;
    }
    if (is_split_screen() != 0) {
        return 0;
    }
    return (lbl_805D53A0 - (s32) M2C_FIELD(arg0, u16 *, 0x55C)) != 0 ? 1 : 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC3DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_switch__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TOSwitchAttack__sub_80087278(void *, M2C_UNK, M2C_UNK);

void update_attack_switch__11TBoss6Type2FPv(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x518) % 24) == 0) {
        TOSwitchAttack__sub_80087278(arg0 + 0x38, 0x224, 0x2040);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC420
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0);
s32 is_target_valid__11TBoss6Type2FPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void play_phase_sound__11TBoss6Type2FPv(u8 *arg0) {
    M2C_UNK var_r3;
    s32 temp_r0;

    if (is_target_valid__11TBoss6Type2FPv() == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x42C);
        switch (temp_r0) {
        case 1:
            var_r3 = 0x6852C;
            break;
        case 2:
            var_r3 = 0x6852D;
            break;
        case 3:
            var_r3 = 0x6852E;
            break;
        case 4:
            var_r3 = 0x6852F;
            break;
        case 5:
        default:
            var_r3 = 0x6852B;
            break;
        }
        TBoss3Volopt__sub_8022675C(var_r3, arg0 + 0x38, 0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC528
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_countdown__11TBoss6Type2FPv(void *arg0);
s32 is_active__14TBoss6PlotFalzFPv();
M2C_UNK update_attack_switch__11TBoss6Type2FPv(void *);
M2C_UNK play_phase_sound__11TBoss6Type2FPv(void *);
s32 is_active__11TBoss6Type2FPv();
M2C_UNK TBoss6Type2__sub_802BC65C(void *);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);

void update_countdown__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    void *temp_r31;

    if (is_active__11TBoss6Type2FPv() != 0) {
        update_attack_switch__11TBoss6Type2FPv(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x518);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x51C) = 0;
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x518) < -0x12C) {
            M2C_FIELD(arg0, s32 *, 0x518) = -0x12C;
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x518) == -0x12C)) {
            temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x55C));
            if ((is_active__14TBoss6PlotFalzFPv() != 0) && ((s16) M2C_FIELD(temp_r31, s16 *, 0x326) == 1)) {
                TBoss6Type2__sub_802BC65C(arg0);
            }
        }
    } else {
        if (temp_r0 == 0) {
            play_phase_sound__11TBoss6Type2FPv(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x518) = (s32) (M2C_FIELD(arg0, s32 *, 0x518) - 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC5F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_active__11TBoss6Type2FPv(void *arg0);

u8 is_active__11TBoss6Type2FPv(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((((s32) M2C_FIELD(arg0, s32 *, 0x51C) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x518) >= 0)) || ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 1)) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC6A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1);

void add_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    if (temp_r0 < 9) {
        if (temp_r0 == 5) {
            goto block_4;
        }
        goto block_5;
    } else if (temp_r0 < 0xC) {
block_4:
        var_r4 *= 2;
    }
block_5:
    M2C_FIELD(arg0, s32 *, 0x4F4) = (s32) (M2C_FIELD(arg0, s32 *, 0x4F4) + var_r4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BC704
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_screen_pos__11TBoss6Type2FPv(void *arg0);

extern M2C_UNK TBoss6Type2__data_804DF9D4[];
extern f32 lbl_805DE4B4;

void set_screen_pos__11TBoss6Type2FPv(void *arg0) {
    f32 var_f0;
    f32 var_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E0);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4E4);
    } else {
        var_f1 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4D8);
        var_f0 = lbl_805DE4B4 * M2C_FIELD(arg0, f32 *, 0x4DC);
    }
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0x2C) = var_f1;
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0x3C) = var_f1;
    M2C_FIELD(TBoss6Type2__data_804DF9D4, f32 *, 0xEC) = var_f0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BCF98
#include "types.h"

extern "C" {

void copy_transform__11TBoss6Type2FPvPv(void* p, void* q);

void copy_transform__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD2A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_damage__11TBoss6Type2FPvi(void);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void TBoss6Type2__sub_802BD340(void);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);

void copy_pos_620__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x620, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD314
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_damage__11TBoss6Type2FPvi(void);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void TBoss6Type2__sub_802BD340(void);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);

void copy_pos_59c__11TBoss6Type2Fii(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x59C, arg0);
}
void TBoss6Type2__sub_802BD340(void) {  }
void apply_damage__11TBoss6Type2FPvi(void *arg0, s32 arg1) {
    if ((arg1 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0)) {
        add_damage__11TBoss6Type2FPvi();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD3C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_damage__11TBoss6Type2FPvi(void);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void TBoss6Type2__sub_802BD340(void);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);

s32 get_rotation_timer__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x418); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD4E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0);
M2C_UNK TBoss6Type2__sub_802B9B20(void *);
M2C_UNK TBoss6Type2__sub_802BA078(void *);
f32 TObjPlayer__sub_80014108(void *, u32, f32);
u8 *TObjPlayer__sub_80015DC4(u32, s32);

extern const f32 TBoss6Type2__data_805DE410;

f32 TBoss6Type2__vt20(void *arg0, u32 arg1, f32 farg0) {
    s32 var_r31;
    s32 var_r30;
    s32 var_r29;
    u8 temp_r0;

    var_r31 = 1;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) && (arg1 != 0U)) {
        var_r30 = 0;
        var_r29 = 0;
        do {
            temp_r0 = *TObjPlayer__sub_80015DC4(arg1, var_r29);
            switch ((s32) temp_r0) {
            case 1:
                var_r30 |= 1;
                break;
            case 2:
                var_r30 |= 2;
                break;
            case 3:
                var_r30 |= 4;
                break;
            case 4:
                var_r30 |= 8;
                break;
            }
            var_r29 += 1;
        } while (var_r29 < 3);
        if (!(M2C_FIELD(arg0, s32 *, 0x2E4) & var_r30)) {
            var_r31 = 0;
        }
    }
    if (var_r31 != 0) {
        return TObjPlayer__sub_80014108(arg0, arg1, farg0);
    }
    TBoss6Type2__sub_802BA078(arg0);
    TBoss6Type2__sub_802B9B20(arg0);
    return TBoss6Type2__data_805DE410;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD5E8
#include "types.h"

extern "C" {

void TBoss6Type2__vt61(void* p);
int TBoss6Type2__sub_802BD014(void*, void*);

void TBoss6Type2__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 35) { TBoss6Type2__sub_802BD014(p, (void*)35); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD6D0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK update_segments__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_802BC62C(void *);
u32 get_table_entry__11TBoss6Type2Fi(s32);
M2C_UNK set_target_nodes__11TBoss6Type2FPvPvPv(void *, u32, s32);

void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 0x2E4);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, u32 *, 0x2E4) = get_table_entry__11TBoss6Type2Fi(arg1);
    M2C_FIELD(arg0, s32 *, 0x42C) = arg2;
    update_segments__11TBoss6Type2FPv(arg0);
    if ((temp_r31 != (u32) M2C_FIELD(arg0, u32 *, 0x2E4)) || (temp_r30 != (s32) M2C_FIELD(arg0, s32 *, 0x42C))) {
        TBoss6Type2__sub_802BC62C(arg0);
    }
    if (M2C_FIELD(arg0, void **, 0x410) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x410), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
    if (M2C_FIELD(arg0, void **, 0x414) != 0) {
        set_target_nodes__11TBoss6Type2FPvPvPv(M2C_FIELD(arg0, void **, 0x414), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BD8B0
#include "types.h"

extern "C" {

int get_table_entry__11TBoss6Type2Fi(int a0);

    extern int lbl_804710BC[];
int get_table_entry__11TBoss6Type2Fi(int a0) {  return lbl_804710BC[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BDB7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_target__11TBoss6Type2FPv(void *arg0);
s32 is_active__14TBoss6PlotFalzFPv();
u16 TBoss6Type2__sub_802BB694(void *);
M2C_UNK TBoss6Type2__sub_802BD938(void *, M2C_UNK *);
M2C_UNK TBoss6Type2__sub_802BDD6C(void *, s32, M2C_UNK *);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 get_phase__14TBoss6PlotFalzFv();

void update_attack_target__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    u16 temp_r31;
    u16 temp_r3;
    u16 var_r30;

    var_r3 = 0x21;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_r3 = 0x1F;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    var_r31 = var_r3;
    switch (temp_r0) {
    case 0x1D:
        return;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        temp_r31 = M2C_FIELD(arg0, u16 *, 0x466);
        temp_r3 = TBoss6Type2__sub_802BB694(arg0);
        var_r30 = temp_r3;
        if ((u16) temp_r3 == 0xFFFF) {
            TPlayerBattleCtrl4P__sub_801BA74C(temp_r31);
            if (is_active__14TBoss6PlotFalzFPv() != 0) {
                var_r30 = temp_r31;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x466) = var_r30;
        if ((get_phase__14TBoss6PlotFalzFv() == 0) && (M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        }
        var_r31 = M2C_FIELD(arg0, s32 *, 0x374) - 1;
        break;
    }
    TBoss6Type2__sub_802BD938(arg0, &sp8);
    TBoss6Type2__sub_802BDD6C(arg0, var_r31, &sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BDD1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_state__11TBoss6Type2FPv(void *arg0);
M2C_UNK TBoss6Type2__sub_802BD938(void *, M2C_UNK *);
M2C_UNK TBoss6Type2__sub_802BDD6C(void *, M2C_UNK, M2C_UNK *);

void update_action_state__11TBoss6Type2FPv(void *arg0) {
    M2C_UNK sp8;
    M2C_UNK var_r4;

    TBoss6Type2__sub_802BD938(arg0, &sp8);
    var_r4 = 4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x46C) == 0) {
        var_r4 = 5;
    }
    TBoss6Type2__sub_802BDD6C(arg0, var_r4, &sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BDE54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1);
M2C_UNK set_target_state__11TBoss6Type2FPvii(void *, s32, s32);
M2C_UNK set_action_field_0x408__11TBoss6Type2FPvs(s32, u16);

void parse_action_packet__11TBoss6Type2FPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0x478) = (u8) M2C_FIELD(arg1, u8 *, 8);
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (s8) M2C_FIELD(arg1, u8 *, 9);
    set_target_state__11TBoss6Type2FPvii(arg0, M2C_FIELD(arg1, s8 *, 0xA), M2C_FIELD(arg1, s8 *, 0xB));
    M2C_FIELD(arg0, u16 *, 0x464) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xC);
    M2C_FIELD(arg0, u16 *, 0x466) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xD);
    M2C_FIELD(arg0, u16 *, 0x468) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xE);
    M2C_FIELD(arg0, u16 *, 0x46A) = (u16) (s8) M2C_FIELD(arg1, u8 *, 0xF);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x464) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x466) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x468) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x468) = 0xFFFFU;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x46A) >= 4U) {
        M2C_FIELD(arg0, u16 *, 0x46A) = 0xFFFFU;
    }
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x410), M2C_FIELD(arg0, u16 *, 0x468));
    set_action_field_0x408__11TBoss6Type2FPvs(M2C_FIELD(arg0, s32 *, 0x414), M2C_FIELD(arg0, u16 *, 0x46A));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BE504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__11TBoss6Type2Fi(s32 arg0);
s32 TBoss6Type2__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create__11TBoss6Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x7B4);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Type2__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BE56C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_phase__11TBoss6Type2FPv();
u16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BC23C();
s32 update_attack_target__11TBoss6Type2FPv(void* a0 = 0);
s32 TBoss6Type2__sub_802BDDF8(void * a0 = 0, s32 a1 = 0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);

void TBoss6Type2__vt42(void) {  }
void TBoss6Type2__vt43(void) {  }
void TBoss6Type2__vt44(void) {  }
void TBoss6Type2__vt45(void) {  }
void TBoss6Type2__vt46(void) {  }
void TBoss6Type2__vt47(void) {  }
void TBoss6Type2__vt48(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BE588
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_phase__11TBoss6Type2FPv();
u16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BC23C();
s32 update_attack_target__11TBoss6Type2FPv(void* a0 = 0);
s32 TBoss6Type2__sub_802BDDF8(void * a0 = 0, s32 a1 = 0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);

void select_action__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0x800) {
        TBoss6Type2__sub_802BDDF8(arg0, 0x23);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
        TBoss6Type2__sub_802BDDF8(arg0, 0x1B);
        return;
    }
    TBoss6Type2__sub_802BDDF8(arg0, 0);
}
void update_zako_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BE754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_phase__11TBoss6Type2FPv();
u16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_phase_complete__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BC23C();
s32 update_attack_target__11TBoss6Type2FPv(void* a0 = 0);
s32 TBoss6Type2__sub_802BDDF8(void * a0 = 0, s32 a1 = 0);
void TBoss6Type2__vt42(void);
void TBoss6Type2__vt43(void);
void TBoss6Type2__vt44(void);
void TBoss6Type2__vt45(void);
void TBoss6Type2__vt46(void);
void TBoss6Type2__vt47(void);
void TBoss6Type2__vt48(void);

void tick_timer_0x460__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}
void select_next_state__11TBoss6Type2FPv(void *arg0) {
    u16 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (get_phase__11TBoss6Type2FPv() == 0xD) {
            if (is_phase_complete__11TBoss6Type2FPv(arg0) != 0) {
                TBoss6Type2__sub_802BDDF8((void *)(arg0), 0x1A);
                return;
            }
            if (M2C_FIELD(arg0, u16 *, 0x55C) == 0xFFFF) {
                temp_r3 = is_falz_ready__11TBoss6Type2FPv(arg0);
                if (temp_r3 != 0xFFFF) {
                    M2C_FIELD(arg0, u16 *, 0x464) = temp_r3;
                    TBoss6Type2__sub_802BDDF8((void *)(arg0), 0x19);
                    return;
                }
            }
            goto block_7;
        }
block_7:
        if (TBoss6Type2__sub_802BA9E4(arg0) != 0) {
            TBoss6Type2__sub_802BDDF8((void *)(arg0), 0xD);
            return;
        }
        if (TBoss6Type2__sub_802BA944(arg0) != 0) {
            TBoss6Type2__sub_802BDDF8((void *)(arg0), 0xE);
            return;
        }
        update_attack_target__11TBoss6Type2FPv((void*)(arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BE864
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_speed_from_ratio__11TBoss6Type2FPv(void *arg0);

extern s32 lbl_805D6790;
extern u8 lbl_805D6794;
extern f32 lbl_805DE408;
extern f32 lbl_805DE4DC;

void init_speed_from_ratio__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6794 == 0) {
        lbl_805D6794 = 1;
        lbl_805D6790 = (s32) (lbl_805DE4DC / lbl_805DE408);
    }
    temp_r0 = lbl_805D6790;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BEAC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BD014(void *, int);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 check_target__11TBoss6Type2FPv(void *);
s32 is_target_valid__11TBoss6Type2FPv(void *);

void update_attack_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    u32 temp_r3;

    TOTrapAncient01__sub_80226578((int) (0x4006A30B), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        if (check_target__11TBoss6Type2FPv((void *) (arg0)) != 0) {
            if (is_target_valid__11TBoss6Type2FPv((void *) (arg0)) == 0) {
                TBoss3Volopt__sub_8022675C((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
            }
            temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, u16 *, 0x55C)));
            if (temp_r3 != 0U) {
                TObjEneDellBiter__sub_80087350((void *) (temp_r3 + 0x38), (int) (0x36));
            }
        }
        TBoss6Type2__sub_802BD014((void *) (arg0), (int) (0x1B));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF034
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_state_0x460_eq4__11TBoss6Type2FPv(void* p);
void init_timer__11TBoss6Type2FPv(void *arg0);
void update_attack_sequence__11TBoss6Type2FPv(u8 *arg0);
void update_state_34__11TBoss6Type2FPv(void* p);
void init_attack_timers__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802B9BBC(void *, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802B9C00(void *, M2C_UNK);
M2C_UNK TBoss6Type2__sub_802BAD04(void *);
int TBoss6Type2__sub_802BAFEC(void*, void*);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
M2C_UNK TBoss6Type2__sub_802BB7C0(void *);
M2C_UNK reset_attack_counter__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_802BD014(void *, M2C_UNK);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

void check_state_0x460_eq4__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 4) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

extern s32 lbl_805D6760;
extern u8 lbl_805D6764;
extern f32 lbl_805DE3FC;
extern f32 lbl_805DE4DC;

void init_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6764 == 0) {
        lbl_805D6764 = 1;
        lbl_805D6760 = (s32) (lbl_805DE4DC / lbl_805DE3FC);
    }
    temp_r0 = lbl_805D6760;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
}

void update_attack_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x3C)) {
        TBoss3Volopt__sub_8022675C((int)(0x69C0F), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 0x78)) {
        TBoss6Type2__sub_802BAD04(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460);
    switch (temp_r0) {
    case 0xA0:
        TBoss6Type2__sub_802B9C00(arg0, 8);
        TBoss6Type2__sub_802B9C00(arg0, 9);
        TBoss6Type2__sub_802B9C00(arg0, 0xA);
        break;
    case 0x50:
        TBoss6Type2__sub_802B9BBC(arg0, 8);
        TBoss6Type2__sub_802B9BBC(arg0, 9);
        TBoss6Type2__sub_802B9BBC(arg0, 0xA);
        break;
    case 0x82:
        TBoss6Type2__sub_802B9C00(arg0, 0xB);
        TBoss6Type2__sub_802B9C00(arg0, 0xC);
        break;
    case 0x49:
        TBoss6Type2__sub_802B9BBC(arg0, 0xB);
        TBoss6Type2__sub_802B9BBC(arg0, 0xC);
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0x36) {
        set_shake_preset__11TCameraCtrlFi(1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0_2;
    if (temp_r0_2 < 0) {
        reset_attack_counter__11TBoss6Type2FPv(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x418) != 0) {
            TBoss6Type2__sub_802BD014(arg0, 0x1B);
            return;
        }
        TBoss6Type2__sub_802BD014(arg0, 0);
    }
}

void update_state_34__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 34) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

void init_attack_timers__11TBoss6Type2FPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x45C) = 0xB4;
    M2C_FIELD(arg0, s32 *, 0x460) = 0xB4;
    TBoss3Volopt__sub_8022675C((int)(0x4006970E), (void *)(arg0 + 0x38), (int)(0), (int)(1));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        TBoss6Type2__sub_802BB7C0(arg0);
        return;
    }
    TBoss6Type2__sub_802BB768(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF3F4
#include "types.h"

extern "C" {

void TBoss6Type2__sub_802BF3F4(void* p);
int TBoss6Type2__sub_802BAFEC(void*, void*);

void TBoss6Type2__sub_802BF3F4(void* p) { if (*(int*)((char*)p + 0x460) == 45) { TBoss6Type2__sub_802BAFEC(p, (void*)0); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF4B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BAA74();
u16 TBoss6Type2__sub_802BB694();
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void TBoss6Type2__sub_802BF904(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
s32 update_action_state__11TBoss6Type2FPv(void *);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
s32 update_zako__11TBoss6Type2FPv(void *);

#include "types.h"
extern "C" {

void update_timer__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == (s32) (M2C_FIELD(arg0, s32 *, 0x45C) - 7)) {
        TBoss3Volopt__sub_8022675C((int) (0x4006A604), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014((void *) (arg0), (int) (0x22));
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF528
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
u16 TBoss6Type2__sub_802BB694();
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802BF904(void* p);

void update_when_timer_zero__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 0) { TBoss6Type2__sub_802BDDF8(p, *(void**)((char*)p + 0x47c)); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_death_sequence__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802B9BBC(int, int);
s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BAA74();
u16 TBoss6Type2__sub_802BB694();
s32 TBoss6Type2__sub_802BB7C0(void *);
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void TBoss6Type2__sub_802BF904(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
s32 update_action_state__11TBoss6Type2FPv(void *);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
s32 update_zako__11TBoss6Type2FPv(void *);

#include "types.h"
extern "C" {

void start_death_sequence__11TBoss6Type2FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r31;
    u8 *var_r3;

    var_r3 = arg0;
    temp_r31 = var_r3;
    temp_r0 = M2C_FIELD(var_r3, s32 *, 0x4C8);
    M2C_FIELD(var_r3, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(var_r3, s32 *, 0x460) = temp_r0;
    temp_r0_2 = M2C_FIELD(var_r3, s32 *, 0x47C);
    switch (temp_r0_2) {
    case 15:
        var_r3 = (unsigned char *) ((void *)0x68522);
        break;
    case 16:
        var_r3 = (unsigned char *) ((void *)0x68521);
        break;
    case 17:
        var_r3 = (unsigned char *) ((void *)0x68523);
        break;
    }
    TBoss3Volopt__sub_8022675C((int) (var_r3), (void *) (temp_r31 + 0x38), (int) (0), (int) (1));
    TBoss6Type2__sub_802B9BBC((int) (temp_r31), (int) (0xD));
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF5F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
u16 TBoss6Type2__sub_802BB694();
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802BF904(void* p);

void update_zako_spawn_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF730
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
u16 TBoss6Type2__sub_802BB694();
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802BF904(void* p);

void update_zako_phase__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    update_zako__11TBoss6Type2FPv(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0xC);
    }
}
void init_attack_params__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x45C) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x460) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x504) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x46C) = 1;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        break;
    }
    TBoss6Type2__sub_802BB7C0(arg0);
    switch ((s32) M2C_FIELD(arg0, s32 *, 0x374)) {
    case 5:
        TBoss6Type2__sub_802B9C00(arg0, 0xD);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BF8D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 TBoss6Type2__sub_802BB7C0(void *);
u16 TBoss6Type2__sub_802BB694();
s32 update_action_state__11TBoss6Type2FPv(void *);
s32 update_zako__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
int TBoss6Type2__sub_802BDC5C(void*);
int TBoss6Type2__sub_802BDDF8(void*, void*);
void update_when_timer_zero__11TBoss6Type2FPv(void* p);
void check_state_0x460_eq0__11TBoss6Type2FPv(void* p);
void TBoss6Type2__sub_802BF904(void* p);

void check_state_0x460_eq0__11TBoss6Type2FPv(void* p) { if (*(int*)((char*)p + 0x460) == 0) { TBoss6Type2__sub_802BDC5C(p); } }
void TBoss6Type2__sub_802BF904(void* p) { *(s32*)((char*)p + 0x45c) = 45; *(s32*)((char*)p + 0x460) = 45; }
void tick_action_timer__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}
void pick_next_zako__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        M2C_FIELD(arg0, u16 *, 0x466) = TBoss6Type2__sub_802BB694();
        if (M2C_FIELD(arg0, u16 *, 0x466) == 0xFFFF) {
            update_action_state__11TBoss6Type2FPv(arg0);
            return;
        }
        TBoss6Type2__sub_802BDDF8((void*)(arg0), (void*)(3));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BFA1C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BFA1C(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 get_phase__11TBoss6Type2FPv(void *);
s16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
void TBoss6Type2__sub_802BFBE4(void* p);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);

#include "types.h"
extern "C" {

void TBoss6Type2__sub_802BFA1C(u8 *arg0) {
    s32 temp_r0;

    TOTrapAncient01__sub_80226578((int) (0x4006A612), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (1));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss3Volopt__sub_8022675C((int) (0x40069E13), (void *) (arg0 + 0x38), (int) (0), (int) (1));
        TBoss6Type2__sub_802BD014((void *) (arg0), (int) (2));
    }
}

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BFA94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BB768();
s32 get_phase__11TBoss6Type2FPv(void *);
s16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
void TBoss6Type2__sub_802BFBE4(void* p);

void reset_state_timers__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4EC);
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    TBoss6Type2__sub_802BB768();
}
void tick_timer_460__11TBoss6Type2FPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        TBoss6Type2__sub_802BD014(arg0, 0x22);
    }
}
void select_attack_state__11TBoss6Type2FPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        if (TBoss6Type2__sub_802BA9E4() != 0) {
            TBoss6Type2__sub_802BDDF8(arg0, 0xD);
            return;
        }
        if ((get_phase__11TBoss6Type2FPv(arg0) == 0xD) && (is_ready_to_attack__11TBoss6Type2FPv(arg0) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x464) = is_falz_ready__11TBoss6Type2FPv(arg0);
            TBoss6Type2__sub_802BDDF8(arg0, 0x18);
            return;
        }
        if (TBoss6Type2__sub_802BA944(arg0) != 0) {
            TBoss6Type2__sub_802BDDF8(arg0, 0xE);
            return;
        }
        if (get_phase__11TBoss6Type2FPv(arg0) == 0xD) {
            M2C_FIELD(arg0, s32 *, 0x428) = TBoss6Type2__sub_802BD7EC(arg0);
            M2C_FIELD(arg0, s32 *, 0x430) = TBoss6Type2__sub_802BD76C(arg0);
            TBoss6Type2__sub_802BDDF8(arg0, 1);
            return;
        }
        TBoss6Type2__sub_802BDDF8(arg0, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802BFBE4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BFBE4(void* p);
s32 get_phase__11TBoss6Type2FPv(void *);
s16 is_falz_ready__11TBoss6Type2FPv(void *);
s32 TBoss6Type2__sub_802BA944(void *);
s32 TBoss6Type2__sub_802BA9E4();
s32 TBoss6Type2__sub_802BB768();
s32 TBoss6Type2__sub_802BD014(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_802BD76C(void *);
s32 TBoss6Type2__sub_802BD7EC(void *);
s32 TBoss6Type2__sub_802BDDF8(void *, s32);
s32 is_ready_to_attack__11TBoss6Type2FPv(void *);

void TBoss6Type2__sub_802BFBE4(void* p) { *(s32*)((char*)p + 0x45c) = 90; *(s32*)((char*)p + 0x460) = 90; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032E708
#include "types.h"

extern "C" {

int update_segment_angles__11TBoss6Type2FPv(void*);
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2);
void TBoss6Type2__sub_8032E708(void* p, s32 v);
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v);
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; update_segment_angles__11TBoss6Type2FPv(p); }
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032E9CC
#include "types.h"

extern "C" {

void update_all_parts__11TBoss6Type2FPv(void* p);
int TBoss6Type2__sub_8032E770(void*, void*);

void update_all_parts__11TBoss6Type2FPv(void* p) { { int i; for (i = 0; i < 4; i++) { TBoss6Type2__sub_8032E770(p, (void*)i); } } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032EEA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3);
f32 TBoss8Dragon__sub_803D64C0(void *);
f32 TBoss8Dragon__sub_803D64DC(void *);
f32 get_random_float__8TObjFishFv(f32);

extern const f32 lbl_805DF7F4;

void compute_random_dir_vec__11TBoss6Type2FiPvii(s32 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    f32 temp_f31;
    f32 temp_f30;

    temp_f31 = -TBoss8Dragon__sub_803D64C0((void *) (arg3));
    temp_f30 = lbl_805DF7F4 - get_random_float__8TObjFishFv((f32) (temp_f31));
    M2C_FIELD(arg1, f32 *, 0) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64C0((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = temp_f31;
    M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f30 * TBoss8Dragon__sub_803D64DC((void *) (arg2)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032F1B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0);
s32 get_rotation_timer__11TBoss6Type2FPv(u32);
s32 TLobby__sub_800C6C10();
s32 TBoss6Type2__sub_8032F034(void *);
s32 TBoss6Type2__sub_8032F174();
M2C_UNK TBoss6Type2__sub_8032F418(void *);

extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF81C;
extern const f32 lbl_805DF820;
extern const f32 lbl_805DF824;

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0) {
    if ((TBoss6Type2__sub_8032F174() == 0) || (TBoss6Type2__sub_8032F034(arg0) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF81C);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) < lbl_805DF7FC) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
        }
    } else if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3B8)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3BC) + lbl_805DF820);
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7F4;
        }
        if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3BC)) {
            if (TLobby__sub_800C6C10() != 0) {
                u32 tmp378 = (u32) M2C_FIELD(arg0, u32 *, 0x378);
                if (tmp378 != 0U) {
                    if (get_rotation_timer__11TBoss6Type2FPv(tmp378) == 0) {
                        TBoss6Type2__sub_8032F418(arg0);
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF824);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7F4;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032F2F0
#include "types.h"

extern "C" {

void TBoss6Type2__sub_8032F2F0(void* p, void* q);

void TBoss6Type2__sub_8032F2F0(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032F5C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_8032F5C4(void *arg0);
M2C_UNK sync_hp__11TBoss6Type2FPv(s32);

void TBoss6Type2__sub_8032F5C4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4 & ~0xA00);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s32 *, 0x38C);
    sync_hp__11TBoss6Type2FPv((s32) arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032FBF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_segment_angles__11TBoss6Type2FPv(void *arg0);

void update_segment_angles__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x3B4);
    M2C_FIELD(arg0, s16 *, 0x39E) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39C) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x39A) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x398) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x396) = temp_r0;
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390);
    switch (temp_r0_2) {
    case 1:
        M2C_FIELD(arg0, s16 *, 0x396) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x398) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x39A) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0x39C) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    case 5:
        M2C_FIELD(arg0, s16 *, 0x39E) = (s16) M2C_FIELD(arg0, s16 *, 0x3B6);
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(arg0, s16 *, 0x396);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(arg0, s16 *, 0x39A);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(arg0, s16 *, 0x398);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(arg0, s16 *, 0x39E);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(arg0, s16 *, 0x39C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032FDEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0);
M2C_UNK apply_damage__11TBoss6Type2FPvi(s32, s32);
M2C_UNK sync_hp__11TBoss6Type2FPv();

void sync_hp_apply_damage__11TBoss6Type2FPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x32C);
    if (temp_r4 != temp_r0) {
        if (temp_r4 < temp_r0) {
            sync_hp__11TBoss6Type2FPv();
            return;
        }
        apply_damage__11TBoss6Type2FPvi(M2C_FIELD(arg0, s32 *, 0x378), temp_r4 - temp_r0);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8032FE44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_hp__11TBoss6Type2FPv(void *arg0);

void sync_hp__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x404) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8033013C
#include "types.h"

extern "C" {

void copy_state__11TBoss6Type2FPvPv(void* p, void* q);

void copy_state__11TBoss6Type2FPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803309D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_mag__11TBoss6Type2Fi(s32 arg0);
s32 TBoss6Mag__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_04;

s32 create_mag__11TBoss6Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x45C);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Mag__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336F00
#include "types.h"

extern "C" {

void TBoss6Type2__sub_80336F00(void* p);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
int TBoss6Type2__sub_8032E770(void*, void*);

void TBoss6Type2__sub_80336F00(void* p) { *(int*)((char*)p + 0x3cc) = 0; TBoss3Volopt__sub_8022675C((void*)438292, (char*)p + 0x38, (void*)0, (void*)0); TBoss6Type2__sub_8032E770(p, (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80336FB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_8032E770(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_8032EAE4(void *);
s32 TBoss6Type2__sub_8032EBB4(void *);
s32 TBoss6Type2__sub_8032ECE0(void *);
s32 TBoss6Type2__sub_8032F5FC(void *);
s32 TBoss6Type2__sub_8032F690();
s32 TBoss6Type2__sub_803301B8(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_8032F824();
s32 TBoss6Type2__sub_8032FB84();
int TBoss6Type2__sub_8032E7B4(void*, void*);
void TBoss6Type2__sub_80336FB8(void* p);
void TBoss6Type2__sub_80337108(void);
void TBoss6Type2__sub_80337160(void);
void TBoss6Type2__sub_803371B4(void* p);

void TBoss6Type2__sub_80336FB8(void* p) { *(int*)((char*)p + 0x3cc) = 0; TBoss6Type2__sub_8032E7B4(p, (void*)0); }
void tick_attack_timer__11TBoss6Type2FPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) < 0) {
        TBoss6Type2__sub_8032E770(arg0, 3);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) != 0) {
            TBoss6Type2__sub_803301B8(arg0, 1);
            return;
        }
        TBoss6Type2__sub_803301B8(arg0, 2);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803370A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_8032E770(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_8032EAE4(void *);
s32 TBoss6Type2__sub_8032EBB4(void *);
s32 TBoss6Type2__sub_8032ECE0(void *);
s32 TBoss6Type2__sub_8032F5FC(void *);
s32 TBoss6Type2__sub_8032F690();
s32 TBoss6Type2__sub_803301B8(void * a0 = 0, s32 a1 = 0);
s32 TBoss6Type2__sub_8032F824();
s32 TBoss6Type2__sub_8032FB84();
int TBoss6Type2__sub_8032E7B4(void*, void*);
void TBoss6Type2__sub_80336FB8(void* p);
void TBoss6Type2__sub_80337108(void);
void TBoss6Type2__sub_80337160(void);
void TBoss6Type2__sub_803371B4(void* p);

void update_effect_subsystems__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_8032F690();
    TBoss6Type2__sub_8032F5FC(arg0);
    TBoss6Type2__sub_8032ECE0(arg0);
    TBoss6Type2__sub_8032EBB4(arg0);
    TBoss6Type2__sub_8032EAE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) != 0) {
        TBoss6Type2__sub_803301B8(arg0, 1);
    }
}
void TBoss6Type2__sub_80337108(void) {  }
void update_attack_state__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_8032F824();
    TBoss6Type2__sub_8032ECE0(arg0);
    TBoss6Type2__sub_8032EAE4(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40C) == 0) {
        TBoss6Type2__sub_803301B8(arg0, 2);
    }
}
void TBoss6Type2__sub_80337160(void) {  }
void advance_phase_counter__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_8032FB84();
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) >= 4) {
        TBoss6Type2__sub_803301B8(arg0, 1);
    }
}
void TBoss6Type2__sub_803371B4(void* p) { *(s32*)((char*)p + 0x3cc) = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80356E50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_80356E50(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TBoss6Type2__sub_80356F28(M2C_UNK, s32, s32, s32, s32);

void TBoss6Type2__sub_80356E50(s32 arg0, s32 arg1, s32 arg2) {
    TBoss6Type2__sub_80356F28(0, arg0, arg1, arg2, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803570C8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_803570C8(s8 *arg0);

void TBoss6Type2__sub_803570C8(s8 *arg0) {
    s32 var_ctr;

    for (var_ctr = 0x40; var_ctr != 0; var_ctr -= 1) {
        *arg0 = -1;
        arg0 += 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036A98C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TBoss6EffFlowSoul__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_flow_soul__11TBoss6Type2FPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TBoss6EffFlowSoul__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036DC80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_pending_effect__11TBoss6Type2FPv(u8 *arg0);
M2C_UNK copy_vec2__11TBoss6Type2FPvPv(void *, void *);
s32 is_state_1f__14TBoss6PlotFalzFUi(void *);
u16 obj_getField1c();

extern s8 lbl_804F36F8[];

void apply_pending_effect__11TBoss6Type2FPv(u8 *arg0) {
    u16 temp_r3;
    u8 *temp_r31;

    temp_r3 = obj_getField1c();
    if (temp_r3 < 4U) {
        temp_r31 = (unsigned char *) (lbl_804F36F8 + (temp_r3 * 0x2C));
        if ((s32) M2C_FIELD(temp_r31, s32 *, 0) != 0) {
            M2C_FIELD(temp_r31, s32 *, 0) = 0;
            if (is_state_1f__14TBoss6PlotFalzFUi((void *) (arg0)) != 0) {
                copy_vec2__11TBoss6Type2FPvPv((void *) (arg0 + 0xCF4), (void *) (temp_r31 + 4));
                copy_vec2__11TBoss6Type2FPvPv((void *) (arg0 + 0xA1C), (void *) (temp_r31 + 0xC));
                copy_vec2__11TBoss6Type2FPvPv((void *) (arg0 + 0xB88), (void *) (temp_r31 + 0x14));
                M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r31, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 0x8B0) = (s32) M2C_FIELD(temp_r31, s32 *, 0x20);
                M2C_FIELD(arg0, s32 *, 0x8AC) = (s32) M2C_FIELD(temp_r31, s32 *, 0x24);
                M2C_FIELD(arg0, s32 *, 0x8B4) = (s32) M2C_FIELD(temp_r31, s32 *, 0x28);
            }
        }
    }
}

}
#endif
#endif
