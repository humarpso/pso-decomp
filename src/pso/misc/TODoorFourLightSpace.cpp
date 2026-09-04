#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorFourLightSpace__vt17(void *arg0);
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1);
void fn_802898E8(void);
void fn_802898EC(void);

s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

void fn_802898E8(void) {  }
void fn_802898EC(void) {  }
s32 TODoorFourLightSpace__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}
void TODoorFourLightSpace__vt4(void *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A288C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TODoorFourLightSpace__create(void *arg0);
void *TODoorFourLightSpace__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TODoorFourLightSpace__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TODoorFourLightSpace__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80289D38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__20TODoorFourLightSpaceFv(u8 *arg0);
M2C_UNK TODoorFourLightSpace__sub_80289B4C(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 fn_801582C4(void *, f32);
M2C_UNK get_instance__12TBoss8DragonFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern const f32 lbl_805DD8F0;

struct Base { char pad[0x18]; };
struct VObj : Base {
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

void render__20TODoorFourLightSpaceFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) && (fn_801582C4(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            TObjPlayer__sub_803D9B78();
            return;
        case 2:
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
            TObjPlayer__sub_803D9B78();
            return;
        case 0:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                TODoorFourLightSpace__sub_80289B4C(arg0);
                return;
            }
            TObjPlayer__sub_803D9B2C();
            get_instance__12TBoss8DragonFv();
            set_global_param__8TObjFishFi();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD4));
            TObjPlayer__sub_803D9B78();
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80289E78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_ancient_door_base__15TODoorAncient01FPvs(void *, int);

extern M2C_UNK __vt__20TODoorFourLightSpace[];

void *__dt__20TODoorFourLightSpaceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TODoorFourLightSpace;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
