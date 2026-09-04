#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p);
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
s32 TBoss8Dragon__sub_800B9958(void * a0 = 0, u16 a1 = 0);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s16 a1 = 0);

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3d4) = 0; }
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg1, s16 *, 4));
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800338C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(int, void *);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800B9BEC(void *, void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D8288;
extern const f32 TBoss2DeRolLe__data_805D8294;
extern const f32 TBoss2DeRolLe__data_805D82F0;

void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0) {
    u8 *temp_r31;

    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x38), (void *) (arg0 + 0x518), (f32) (TBoss2DeRolLe__data_805D8280));
    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x4D0), (void *) (arg0 + 0x524), (f32) (TBoss2DeRolLe__data_805D8280));
    temp_r31 = arg0 + 0x530;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x524));
    TBoss4Zako__sub_803D8910((int) (temp_r31), (void *) (arg0 + 0x524));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * TBoss2DeRolLe__data_805D8288);
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D82F0)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D8294)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x53C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x53C) <= 0x10) {
        TOTrapAncient01__sub_80226578((int) (0x4003AD00), (void *) (arg0), (void *) (arg0 + 0x530), (int) (0), (int) (0));
        M2C_FIELD(arg0, s32 *, 0x53C) = (s32) (M2C_FIELD(arg0, s32 *, 0x53C) + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80033A58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(s32, M2C_UNK);

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2) {
    create_particle__17TObjBoss2CeilJunkFv(arg2, 0x121);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800340EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flags_play_sound__13TBoss2DeRolLeFPv(u8 *arg0);
M2C_UNK clear_play_flags__13TBoss2DeRolLeFPv();

M2C_UNK play_sound(M2C_UNK, void *);

void set_flags_play_sound__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x88);
    clear_play_flags__13TBoss2DeRolLeFPv();
    play_sound(0x4003AA06, arg0 + 0x38);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800341A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_check__13TBoss2DeRolLeFPv(void *arg0);
M2C_UNK clear_play_flags__13TBoss2DeRolLeFPv(void *);
M2C_UNK TObjEneDD__vt90();
s32 check_v2_mode__9TObjEneDDFv();

void update_check__13TBoss2DeRolLeFPv(void *arg0) {
    TObjEneDD__vt90();
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 8) || (check_v2_mode__9TObjEneDDFv() != 0)) {
        clear_play_flags__13TBoss2DeRolLeFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800343B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_laser__13TBoss2DeRolLeFPv(void *arg0);
void activate_laser_light__13TBoss2DeRolLeFPv(void *arg0);
M2C_UNK TBoss2LaserLight__sub_80037474(void *);
M2C_UNK TBoss2LaserLight__sub_80037480(void *);

void free_laser__13TBoss2DeRolLeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6B8) != 0U) {
        TBoss2LaserLight__sub_80037474(M2C_FIELD(arg0, void **, 0x6B8));
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFEF);
}

void activate_laser_light__13TBoss2DeRolLeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6B8) != 0U) {
        TBoss2LaserLight__sub_80037480(M2C_FIELD(arg0, void **, 0x6B8));
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x10);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80034660
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_wave_params__13TBoss2DeRolLeFPv(u8 *arg0);
u8 update_state__13TBoss2DeRolLeFPv(u8 *arg0);
void init_move_params__13TBoss2DeRolLeFPv(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 TBoss2DeRolLe__sub_80035FCC(void *);
M2C_UNK set_move_params__13TBoss2DeRolLeFPvffff(void *, f32, f32, f32, f32);
M2C_UNK init_params__13TBoss2DeRolLeFPvfff(void *, f32, f32, f32);

extern const f32 TBoss2DeRolLe__data_805D82D8;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8358;
extern const f32 TBoss2DeRolLe__data_805D83DC;

void init_wave_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x660) = 1;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D83DC - M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x684, TBoss2DeRolLe__data_805D82D8, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D8358 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8330);
}

extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D82B4;
extern const f32 TBoss2DeRolLe__data_805D8328;

u8 update_state__13TBoss2DeRolLeFPv(u8 *arg0) {
    s32 temp_r0;

    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x684);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x65C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8280;
        if (M2C_FIELD(arg0, f32 *, 0x69C) > TBoss2DeRolLe__data_805D82B4) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        }
        break;
    case 1:
        if (TBoss2DeRolLe__sub_80035FCC(arg0 + 0x664) == 3) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 2;
        }
        break;
    }
    if (M2C_FIELD(arg0, f32 *, 0x69C) > TBoss2DeRolLe__data_805D82B4) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8328;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x65C) == 2);
}

extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8300;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8348;
extern const f32 TBoss2DeRolLe__data_805D83AC;
extern const f32 lbl_805D8434;

void init_move_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(-M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    set_move_params__13TBoss2DeRolLeFPvffff(arg0 + 0x684, TBoss2DeRolLe__data_805D8348, get_random_float__8TObjFishFv(lbl_805D8434 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8300, TBoss2DeRolLe__data_805D83AC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800348E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_movement__13TBoss2DeRolLeFPv(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK set_move_params__13TBoss2DeRolLeFPvffff(void *, f32, f32, f32, f32);
M2C_UNK init_params__13TBoss2DeRolLeFPvfff(void *, f32, f32, f32);

extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8300;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8348;
extern const f32 TBoss2DeRolLe__data_805D8358;
extern const f32 TBoss2DeRolLe__data_805D83AC;
extern const f32 TBoss2DeRolLe__data_805D83DC;

void init_movement__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x660) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D83DC - M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    set_move_params__13TBoss2DeRolLeFPvffff(arg0 + 0x684, TBoss2DeRolLe__data_805D8348, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D8358 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8300, TBoss2DeRolLe__data_805D83AC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80034A14
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_head_params__13TBoss2DeRolLeFPv(u8 *arg0);
void update_angle__13TBoss2DeRolLeFPv(void *arg0);
f32 get_random_float__8TObjFishFv(f32);
M2C_UNK init_params__13TBoss2DeRolLeFPvfff(void *, f32, f32, f32);

extern const f32 TBoss2DeRolLe__data_805D82D8;
extern const f32 TBoss2DeRolLe__data_805D82E8;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8330;

void init_head_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(-M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x684, TBoss2DeRolLe__data_805D82D8, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D82E8 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8330);
}

extern f32 TBoss2DeRolLe__data_805D827C;
extern f32 lbl_805D8284;
extern f32 lbl_805D8444;

void update_angle__13TBoss2DeRolLeFPv(void *arg0) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x6A4);
    if (temp_f2 > lbl_805D8284) {
        M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (temp_f2 - lbl_805D8284);
        return;
    }
    if (temp_f2 < lbl_805D8444) {
        M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) (temp_f2 + lbl_805D8284);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) TBoss2DeRolLe__data_805D827C;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80034BE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_move_direction__13TBoss2DeRolLeFPv(void *arg0);

extern const f32 TBoss2DeRolLe__data_805D82B4;
extern const f32 lbl_805D82C0;
extern const f32 TBoss2DeRolLe__data_805D82E4;
extern const f32 TBoss2DeRolLe__data_805D82FC;

void set_move_direction__13TBoss2DeRolLeFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x654) == 0) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805D82C0;
        M2C_FIELD(arg0, s32 *, 0x64) = 0x500;
    } else {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) TBoss2DeRolLe__data_805D82B4;
        M2C_FIELD(arg0, s32 *, 0x64) = -0x500;
    }
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) TBoss2DeRolLe__data_805D82E4;
    M2C_FIELD(arg0, f32 *, 0x6A4) = (f32) TBoss2DeRolLe__data_805D82FC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80034D04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void emit_effect_and_step__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void TBoss2DeRolLe__sub_80034E00(void *, int);
void emit_effect__9TObjEneDDFPvii(void *, void *, void *);

extern M2C_UNK lbl_804356AC[];

void emit_effect_and_step__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    TBoss2DeRolLe__sub_80034E00(arg0, 2);
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_804356AC);
    ((void (*)(void *, void *))TBoss2DeRolLe__sub_80034E00)(arg0, M2C_FIELD(arg0, void **, 0x3C4));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80034F98
#include "types.h"

extern "C" {

s32 VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss2DeRolLe__sub_80034FD8(void);

void backup_pos__13TBoss2DeRolLeFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss2DeRolLe__sub_80034FD8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80035084
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8003508C {
    char pad[0x18];
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
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85(s16, int);
};

extern "C" {

void TBoss2DeRolLe__sub_80035084(void);
void TBoss2DeRolLe__sub_80035088(void);
void TBoss2DeRolLe__sub_8003508C(void *arg0);
M2C_UNK TBoss2DeRolLe__sub_80034034(void *);
s32 is_ready__13TBoss2DeRolLeFPv();

void TBoss2DeRolLe__sub_80035084(void) {  }
void TBoss2DeRolLe__sub_80035088(void) {  }

void TBoss2DeRolLe__sub_8003508C(void *arg0) {
    struct VBase_8003508C *o = (struct VBase_8003508C *)arg0;
    if (is_ready__13TBoss2DeRolLeFPv() != 0) {
        TBoss2DeRolLe__sub_80034034(arg0);
        return;
    }
    o->m85(M2C_FIELD(arg0, s16 *, 0x326), 9);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80035C8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_parts__13TBoss2DeRolLeFv(void);
void *create__13TBoss2DeRolLeFPv(void *arg0);
void *TBoss2DeRolLe__ct(void *, void *, void *);
M2C_UNK TBoss2Mine__sub_80038D84();
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK clear_target_ref__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_8002EB88();
M2C_UNK TBoss2Fin__sub_800367C0();
M2C_UNK TBoss2Tentacle__sub_8003A0A8();

extern u32 lbl_805D4BA4;

void reset_parts__13TBoss2DeRolLeFv(void) {
    clear_target_ref__10TObjPlayerFv();
    TObjPlayer__sub_8002EB88();
    TBoss2Fin__sub_800367C0();
    TBoss2Mine__sub_80038D84();
    TBoss2Tentacle__sub_8003A0A8();
    if ((u32) lbl_805D4BA4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4BA4, 1);
        lbl_805D4BA4 = 0U;
    }
}

extern void *tl_04;

void *create__13TBoss2DeRolLeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x75C);
    if (o != NULL) {
        o = TBoss2DeRolLe__ct(o, tl_04, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036160
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_move_params__13TBoss2DeRolLeFPvffff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void init_params__13TBoss2DeRolLeFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK TBoss2DeRolLe__sub_800360A8();

extern const f32 TBoss2DeRolLe__data_805D827C;

void set_move_params__13TBoss2DeRolLeFPvffff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg3;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    TBoss2DeRolLe__sub_800360A8();
}

extern const f32 TBoss2DeRolLe__data_805D827C;

void init_params__13TBoss2DeRolLeFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = farg2;
    M2C_FIELD(arg0, f32 *, 8) = farg2;
    M2C_FIELD(arg0, f32 *, 0xC) = farg0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TBoss2DeRolLe__data_805D827C;
    M2C_FIELD(arg0, f32 *, 0x14) = farg1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) TBoss2DeRolLe__data_805D827C;
    TBoss2DeRolLe__sub_800360A8();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036280
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_instance__13TBoss2DeRolLeFv(void);

extern s32 TBoss2DeRolLe__data_805D4BC4;

s32 get_instance__13TBoss2DeRolLeFv(void) {
    return TBoss2DeRolLe__data_805D4BC4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80036288
#include "types.h"

extern "C" {

void TBoss2DeRolLe__sub_80036288(void);
void TBoss2DeRolLe__sub_8003628C(void);
void TBoss2DeRolLe__sub_80036290(void);
void TBoss2DeRolLe__sub_80036294(void);
void TBoss2DeRolLe__sub_80036298(void);
void TBoss2DeRolLe__sub_8003629C(void);
void TBoss2DeRolLe__sub_800362A0(void);
void swap_endian__13TBoss2DeRolLeFPv(void* p);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p);
void send_6x13__13TBoss2DeRolLeFPv(void* p);
void TBoss2DeRolLe__sub_80036358(void* p);
void update_and_send__13TBoss2DeRolLeFPv(void* p);
void TBoss2DeRolLe__sub_800363A0(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TBoss2DeRolLe__sub_80036288(void) {  }
void TBoss2DeRolLe__sub_8003628C(void) {  }
void TBoss2DeRolLe__sub_80036290(void) {  }
void TBoss2DeRolLe__sub_80036294(void) {  }
void TBoss2DeRolLe__sub_80036298(void) {  }
void TBoss2DeRolLe__sub_8003629C(void) {  }
void TBoss2DeRolLe__sub_800362A0(void) {  }
void swap_endian__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void swap_6x13_fields__13TBoss2DeRolLeFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_6x13__13TBoss2DeRolLeFPv(void* p) { swap_6x13_fields__13TBoss2DeRolLeFPv(p); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_80036358(void* p) { *(u8*)((char*)p + 0x0) = 19; *(u8*)((char*)p + 0x1) = 2; }
void update_and_send__13TBoss2DeRolLeFPv(void* p) { swap_endian__13TBoss2DeRolLeFPv(p); TLobby__send_and_handle_60(p); }
void TBoss2DeRolLe__sub_800363A0(void* p) { *(u8*)((char*)p + 0x0) = 20; *(u8*)((char*)p + 0x1) = 3; }

}
#endif
#endif
