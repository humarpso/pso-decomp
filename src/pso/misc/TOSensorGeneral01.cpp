#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOSensorGeneral01__vt14(void *arg0);
void TOSensorGeneral01__vt15(void *arg0);
void *__dt__17TOSensorGeneral01Fv(void *arg0, s16 arg1);
void *create__17TOSensorGeneral01FPv(void *arg0);
void free_rocks__17TOSensorGeneral01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOSensorGeneral01__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__8TOSensorFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOSensorGeneral01__vt15(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (M2C_FIELD(arg0, s32 *, 0xE8) + 0x28F);
}

extern M2C_UNK lbl_80442A78;
extern const f32 lbl_805DB9B0;
extern const f32 lbl_805DB9B4;
extern const f32 lbl_805DB9B8;
extern const f32 lbl_805DB9BC;

void TOSensorGeneral01__vt14(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (M2C_FIELD(arg0, s32 *, 0xE8) + 0x28F);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xF0) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0xCCC);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DB9B0);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B4) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 1;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B8) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 2;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9BC) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 3;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
    }
}

extern void *tl_05;

void *create__17TOSensorGeneral01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF4);
    if (o != NULL) {
        o = TOSensorGeneral01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5AA0;
extern s32 *TOSensorGeneral01__data_805D5AA4;

void free_rocks__17TOSensorGeneral01Fv(void) {
    if ((s32 *) TOSensorGeneral01__data_805D5AA4 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOSensorGeneral01__data_805D5AA4);
        if ((s32 *) TOSensorGeneral01__data_805D5AA4 != NULL) {
            free__11TOBoss4RockFUi((void*)TOSensorGeneral01__data_805D5AA4);
            TOSensorGeneral01__data_805D5AA4 = NULL;
        }
    }
    if ((u32) lbl_805D5AA0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5AA0, 1);
        lbl_805D5AA0 = 0U;
    }
}

extern M2C_UNK __vt__17TOSensorGeneral01[];

void *__dt__17TOSensorGeneral01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSensorGeneral01;
        __dt__8TOSensorFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
