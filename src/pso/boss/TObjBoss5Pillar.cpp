#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjBoss5PillarFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__15TObjBoss5Pillar[];

void *__dt__15TObjBoss5PillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss5Pillar;
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48)); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8028B08C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_smoke__15TObjBoss5PillarFPvPv(void *arg0, void *arg1);
void *TObjBoss5PillarSmoke__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_smoke__15TObjBoss5PillarFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = TObjBoss5PillarSmoke__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028B400
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__15TObjBoss5PillarFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(int, int, f32);
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 is_any_teammate_in_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjBoss5PillarDemo__sub_8028ADB0(int);
M2C_UNK fn_8028ADDC(int);

extern s32 lbl_805D4DDC;

void render__15TObjBoss5PillarFPv(u8 *arg0) {
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        TObjPlayer__sub_803D9B2C();
        set_global_param__8TObjFishFi((void *) (lbl_805D4DDC));
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x2C));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 3) {
            fn_8028ADDC((int) (M2C_FIELD(arg0, s32 *, 0x48)));
            TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x38)), (int) (M2C_FIELD(arg0, s32 *, 0x40)), (f32) (M2C_FIELD(arg0, f32 *, 0x20)));
            TObjBoss5PillarDemo__sub_8028ADB0((int) (M2C_FIELD(arg0, s32 *, 0x48)));
        }
        TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0x3C)), (int) (M2C_FIELD(arg0, s32 *, 0x44)), (f32) (M2C_FIELD(arg0, f32 *, 0x20)));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8028B6C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjBoss5PillarFPv(void *arg0);
void TObjBoss5Pillar__sub_8028B70C(void);
void TObjBoss5Pillar__sub_8028B710(void);
void *TObjBoss5Pillar__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__15TObjBoss5PillarFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TObjBoss5Pillar__ct(o, tl_02, arg0);
    }
    return o;
}

void TObjBoss5Pillar__sub_8028B70C(void) {  }
void TObjBoss5Pillar__sub_8028B710(void) {  }

}
#endif
#endif
