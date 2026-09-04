#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_direction__15TObjEneMe1GiGueFPv(void *arg0);

s32 get_field_0c__10TObjPlayerFPv(s32);
f32 get_pos_x__10TObjPlayerFPv(s32);

void update_direction__15TObjEneMe1GiGueFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x438) = get_pos_x__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
    M2C_FIELD(arg0, s32 *, 0x434) = get_field_0c__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x318));
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80040B3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_if_active__15TObjEneMe1GiGueFPv(void *arg0);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi();

void update_if_active__15TObjEneMe1GiGueFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 1)) {
        set_state__15TObjEneMe1GiGueFPvi();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80040B68
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state__15TObjEneMe1GiGueFPvi(void *arg0, s32 arg1);

void set_state__15TObjEneMe1GiGueFPvi(void *arg0, s32 arg1) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != arg1) {
        M2C_FIELD(arg0, s32 *, 0x380) = (s32) temp_r0;
        M2C_FIELD(arg0, s32 *, 0x374) = arg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8008FC0C
#include "types.h"

extern "C" {

void TObjEneMe1GiGue__sub_8008FC0C(void);

void TObjEneMe1GiGue__sub_8008FC0C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CAA84
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 TObjPlayer__sub_80011824();
M2C_UNK TObjPlayer__sub_8001622C(void *, void *);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);

extern const f32 TObjEneMe1GiGue__data_805DE660;

f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0) {
    f32 var_f31;

    var_f31 = TObjEneMe1GiGue__data_805DE660;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        TObjPlayer__sub_8001622C(arg0, arg0 + 0x2FC);
        set_state__15TObjEneMe1GiGueFPvi(arg0, 0xA);
    } else {
        var_f31 = TObjPlayer__sub_80011824();
    }
    return var_f31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CAB78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 TObjPlayer__sub_80014108();
M2C_UNK TObjPlayer__sub_8001622C(void *, void *);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);

extern const f32 TObjEneMe1GiGue__data_805DE660;

f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0) {
    f32 var_f31;

    var_f31 = TObjEneMe1GiGue__data_805DE660;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        TObjPlayer__sub_8001622C(arg0, arg0 + 0x2FC);
        set_state__15TObjEneMe1GiGueFPvi(arg0, 0xA);
    } else {
        var_f31 = TObjPlayer__sub_80014108();
    }
    return var_f31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CAC80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_barrier_count__15TObjEneMe1GiGueFv(void);
s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1);

    extern int TObjEneMe1GiGue__data_805D6838;
int get_barrier_count__15TObjEneMe1GiGueFv(void) {  return TObjEneMe1GiGue__data_805D6838; }

s32 *csnVectorUnder(s32, s32, M2C_UNK, s32);

s32 check_vector_bit__15TObjEneMe1GiGueFii(s32 arg0, s32 arg1) {
    s32 *temp_r3;

    temp_r3 = csnVectorUnder(arg1, arg0 + 0x120, 5, arg0);
    if (temp_r3 == NULL) {
        return 0;
    }
    return (u32)__cntlzw(*temp_r3 & 4) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CAD50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0);
M2C_UNK TObjEneMe1GiGue__sub_802CACD8(s32);
s32 TObjPlayer__sub_80016FF8();

s32 check_and_trigger__15TObjEneMe1GiGueFi(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjEneMe1GiGue__sub_802CACD8(arg0);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CB274
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK TObjEneMe1GiGue__sub_802CB5A0(void *, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_800D758C(void *);
M2C_UNK TBoss3Volopt__sub_800D8E80(void *, s32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, s32, s32);

}

struct Base410 { char pad[0x14]; };
struct VObj410 : Base410 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual s32 m5(); virtual void m6();
};

extern "C" {

void init__15TObjEneMe1GiGueFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8E80(arg0 + 0x2FC, temp_r4);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3FC);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (((VObj410 *)(arg0 + 0x3FC))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TBoss3Volopt__sub_8022675C((void *)TObjEneMe1GiGue__sub_802CB5A0(arg0, 0x3A345), arg0 + 0x38, 0, 0);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0, temp_r5);
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CB620
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1);
void init_move__15TObjEneMe1GiGueFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);
M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);

void apply_hit_shake__15TObjEneMe1GiGueFPvUi(void *arg0, u32 arg1) {
    if ((arg1 == TPlayerBattleCtrl4P__sub_801BA74C(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F4) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

void init_move__15TObjEneMe1GiGueFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
    update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xE);
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
    TObjPlayer__sub_80154E3C(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CC350
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__15TObjEneMe1GiGueFPv(void *arg0);
M2C_UNK TBoss3VoloptMonitor__sub_8004292C();
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC4(void *, void *);
M2C_UNK TObjPlayer__sub_80017BA8(void *, s32, f32, f32, f32);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

extern const f32 TObjEneMe1GiGue__data_805DE660;
extern const f32 TObjEneMe1GiGue__data_805DE694;

void action__15TObjEneMe1GiGueFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        TBoss3VoloptMonitor__sub_8004292C();
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        TObjEneMe1GiGueBarrier__sub_80325CC4(arg0, arg0);
        M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        M2C_FIELD(arg0, s32 *, 0x384) = 0x2D;
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        return;
    case 2:
        TObjPlayer__sub_80017BA8(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8), M2C_FIELD(arg0, f32 *, 0x3E4), TObjEneMe1GiGue__data_805DE694, TObjEneMe1GiGue__data_805DE694);
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneMe1GiGue__data_805DE660);
        update_collisions__10TObjPlayerFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
    case -1:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CD054
#include "types.h"

extern "C" {

void TObjEneMe1GiGue__sub_802CD054(void);

void TObjEneMe1GiGue__sub_802CD054(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CD390
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0);
s32 TNpcPlayer__sub_800D87EC(int);
M2C_UNK TObjEneMe1GiGue__sub_802CAF24(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CB6D4(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CD054(void *);
M2C_UNK TObjEneMe1GiGue__sub_802CD2EC(void *);
M2C_UNK TObjPlayer__sub_800C6A18(void *);
M2C_UNK TObjPlayer__sub_800D7BB0(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
f32 fn_8013157C(void *, void *);
M2C_UNK minimap_render_dot(void *, int, int, int);

extern const f32 TObjEneMe1GiGue__data_805DE6A4;
extern const f32 TObjEneMe1GiGue__data_805DE6A8;
extern const f32 lbl_805DE6B8;
extern const f32 lbl_805DE6BC;

void update_movement__15TObjEneMe1GiGueFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjEneMe1GiGue__sub_802CAF24((void *) (arg0));
        TObjEneMe1GiGue__sub_802CD054((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2A8) = TNpcPlayer__sub_800D87EC((int) (M2C_FIELD(arg0, u16 *, 0x338)));
    TObjPlayer__sub_800C6A18((void *) (arg0));
    TObjEneMe1GiGue__sub_802CB6D4((void *) (arg0));
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjEneMe1GiGue__sub_802CD2EC((void *) (arg0));
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjEneMe1GiGue__sub_802CD2EC((void *) (arg0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        TObjEneMe1GiGue__sub_802CD2EC((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (TObjEneMe1GiGue__data_805DE6A4 + M2C_FIELD(arg0, f32 *, 0x3EC)));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805DE6B8 + M2C_FIELD(arg0, f32 *, 0x3EC));
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
        minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3F4);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = (s32) (temp_r3 - 1);
    }
    temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
    M2C_FIELD(temp_r3_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_2, s32 *, 0x18) & 0xFFFFFFF9);
    if (M2C_FIELD(arg0, f32 *, 0x3EC) > TObjEneMe1GiGue__data_805DE6A8) {
        temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 4);
    } else {
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 2);
    }
    TObjPlayer__sub_800D7BB0((void *) (arg0 + 0x418));
    if (fn_8013157C((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) > lbl_805DE6BC) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CD558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802CD5C0 { char pad[0xC]; };
struct VObj_802CD5C0 : Base_802CD5C0 {
    virtual void m0(int);
};

extern "C" {

void * create__15TObjEneMe1GiGueFPv(void *arg0);
void delete_barrier__15TObjEneMe1GiGueFv(void);
void *TObjControl__ct(void *, void *);
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC0();
void *TObjEneMe1GiGue__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TLobby__sub_8001FE7C(M2C_UNK, M2C_UNK);
M2C_UNK TObjEneMe1GiGue__sub_802CE4E8();

extern void *tl_04;

void * create__15TObjEneMe1GiGueFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x458);
    if (o2 != NULL) {
        o2 = TObjEneMe1GiGue__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneMe1GiGue__data_805D6838;
extern void *TObjEneMe1GiGue__data_805D683C;

void delete_barrier__15TObjEneMe1GiGueFv(void) {
    TObjEneMe1GiGueBarrier__sub_80325CC0();
    TObjEneMe1GiGue__sub_802CE4E8();
    if (TObjEneMe1GiGue__data_805D683C != NULL) {
        if (TObjEneMe1GiGue__data_805D683C != NULL) {
            ((VObj_802CD5C0*)TObjEneMe1GiGue__data_805D683C)->m0(1);
        }
        TObjEneMe1GiGue__data_805D683C = NULL;
    }
    if (TObjEneMe1GiGue__data_805D6838 != 0U) {
        TLobby__sub_8001FE7C(TObjEneMe1GiGue__data_805D6838, 1);
        TObjEneMe1GiGue__data_805D6838 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CD780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK lbl_804E135C[];

void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E135C;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x418, -1);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3FC, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CDAB4
#include "types.h"

extern "C" {

void TObjEneMe1GiGue__sub_802CDAB4(void);
void TObjEneMe1GiGue__sub_802CDAB8(void);
void TObjEneMe1GiGue__sub_802CDABC(void);
void TObjEneMe1GiGue__sub_802CDAC0(void);

void TObjEneMe1GiGue__sub_802CDAB4(void) {  }
void TObjEneMe1GiGue__sub_802CDAB8(void) {  }
void TObjEneMe1GiGue__sub_802CDABC(void) {  }
void TObjEneMe1GiGue__sub_802CDAC0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CDAE8
#include "types.h"

extern "C" {

void TObjEneMe1GiGue__sub_802CDAE8(void);

void TObjEneMe1GiGue__sub_802CDAE8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CE4E8
#include "types.h"

extern "C" {

void TObjEneMe1GiGue__sub_802CE4E8(void);

void TObjEneMe1GiGue__sub_802CE4E8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802CE4EC
#include "types.h"

extern "C" {

void TObjEneMe1GiGue__sub_802CE4EC(void);
int get_barrier_count__15TObjEneMe1GiGueFv(void);

    extern int lbl_805D6858;
void TObjEneMe1GiGue__sub_802CE4EC(void) { lbl_805D6858 = get_barrier_count__15TObjEneMe1GiGueFv(); }

}
#endif
#endif
