#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__15TObjEnemyCustom[];

void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEnemyCustom;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800C6CF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_player_preserving_field__15TObjEnemyCustomFPv(void *arg0);
M2C_UNK call_vt78__10TObjPlayerFPv();

void call_player_preserving_field__15TObjEnemyCustomFPv(void *arg0) {
    s16 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s16 *, 0x326);
    call_vt78__10TObjPlayerFPv();
    M2C_FIELD(arg0, s16 *, 0x326) = temp_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C76F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__15TObjEnemyCustomFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);

extern s32 some_id_805c6f74;
extern const f32 lbl_805DA084;
extern const f32 lbl_805DA088;

struct Base_800c76f4 { char pad[0x18]; };
struct VObj_800c76f4 : Base_800c76f4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void draw__15TObjEnemyCustomFPv(u8 *arg0) {
    if (((VObj_800c76f4 *)arg0)->m8(lbl_805DA084, lbl_805DA088) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        some_id_805c6f74 &= 0xFFFFFBFF;
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
            some_id_805c6f74 |= 0x400;
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C78D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_knockback_state__15TObjEnemyCustomFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32, f32);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

extern const f32 lbl_805DA070;
extern volatile f32 lbl_805DA07C;

void update_knockback_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80017E6C(arg0);
        {
            f32 t = M2C_FIELD(arg0, volatile f32 *, 0x308);
            f32 k = lbl_805DA07C;
            M2C_FIELD(arg0, f32 *, 0x308) = t * k;
            M2C_FIELD(arg0, f32 *, 0x310) *= k;
            TObjPlayer__sub_80011734(arg0, 0, lbl_805DA070, k);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x374) = 1;
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C7A04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ObjPad18_800c7ae4 { u8 pad[0x18]; };
struct Obj2A8_800c7ae4 : ObjPad18_800c7ae4 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual s32 v18(void *a, f32 f);
    virtual void v19();
    virtual s32 v20(void *a, f32 f);
    virtual void v21();
    virtual void v22();
    virtual s32 v23(void *a, f32 f);
};

extern "C" {

void update_state_machine__15TObjEnemyCustomFPv(void *arg0);
void TObjEnemyCustom__sub_800C7AE0(void);
void update__15TObjEnemyCustomFPv(void *arg0);
int update_gigue__15TObjEnemyCustomFPv(void* p);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80018660(void *, s32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DA070;

void update_state_machine__15TObjEnemyCustomFPv(void *arg0) {
    s16 temp_r4;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9FFFFF);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805DA070);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
        if (temp_r4 < 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x374) = 1;
        break;
    }
}

void TObjEnemyCustom__sub_800C7AE0(void) {  }

extern const f32 lbl_805DA068;
extern const f32 lbl_805DA074;
extern const f32 lbl_805DA090;

void update__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;
    Obj2A8_800c7ae4 *temp_r3;
    Obj2A8_800c7ae4 *temp_r3_2;
    Obj2A8_800c7ae4 *temp_r3_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x200000);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TObjPlayer__sub_80018660(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x350), s32 *, 8));
        TBoss1Dragon__sub_80143504(arg0);
        if (objInBand__FP7GameObjf(arg0, lbl_805DA068) != 0) {
            temp_r3 = M2C_FIELD(arg0, Obj2A8_800c7ae4 **, 0x2A8);
            if (temp_r3->v18(arg0, lbl_805DA074) != 0) {
                temp_r3_2 = M2C_FIELD(arg0, Obj2A8_800c7ae4 **, 0x2A8);
                temp_r3_2->v20(arg0, lbl_805DA074);
                temp_r3_3 = M2C_FIELD(arg0, Obj2A8_800c7ae4 **, 0x2A8);
                temp_r3_3->v23(arg0, lbl_805DA090);
            }
        }
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 4U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x374) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        break;
    }
}

int update_gigue__15TObjEnemyCustomFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C7D18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int update_if_active__15TObjEnemyCustomFPv(void* p);
void update_state__15TObjEnemyCustomFPv(void *arg0);
int TObjEnemyCustom__sub_800C7DD0(void* p);
void TObjEnemyCustom__sub_800C7DF4(void);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);

int update_if_active__15TObjEnemyCustomFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 1); }

extern f32 lbl_805DA070;

void update_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805DA070);
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        break;
    }
}

int TObjEnemyCustom__sub_800C7DD0(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }
void TObjEnemyCustom__sub_800C7DF4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C7E64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_state_transition__15TObjEnemyCustomFPv(u8 *arg0);
M2C_UNK TObjEnemyCustom__sub_800C7DF8(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK TObjVoloptCage__sub_800C76F0(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void handle_state_transition__15TObjEnemyCustomFPv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TObjVoloptCage__sub_800C76F0(arg0);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjEnemyCustom__sub_800C7DF8(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    TObjEnemyCustom__sub_800C7DF8(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) == -1) {
        M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        TObjEnemyCustom__sub_800C7DF8(arg0);
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    update_prev_position__10TObjPlayerFPv(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C7FEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_camera_if_active__15TObjEnemyCustomFv(void);
M2C_UNK TCameraCtrl__sub_80069DA8();

extern s32 lbl_805D5198;

void update_camera_if_active__15TObjEnemyCustomFv(void) {
    if ((s32) lbl_805D5198 != 0) {
        TCameraCtrl__sub_80069DA8();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C8018
#include "types.h"

extern "C" {

void init_globals__15TObjEnemyCustomFv(void);

    extern float lbl_805D519C;
    extern float lbl_805D51A0;
    extern int lbl_805D51A4;
    extern int lbl_805D51A8;
    extern float lbl_805D51AC;
    extern const float lbl_805DA098;
    extern const float lbl_805DA09C;
    extern const float lbl_805DA0A0;
void init_globals__15TObjEnemyCustomFv(void) { lbl_805D519C = lbl_805DA09C; lbl_805D51A4 = 0; lbl_805D51A8 = 0; lbl_805D51A0 = lbl_805DA098; lbl_805D51AC = lbl_805DA0A0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800C8040
#include "types.h"

extern "C" {

void reset_instance__15TObjEnemyCustomFv(void);
int init_globals__15TObjEnemyCustomFv(void);

    extern int lbl_805D5198;
void reset_instance__15TObjEnemyCustomFv(void) { lbl_805D5198 = 0; init_globals__15TObjEnemyCustomFv(); }

}
#endif
#endif
