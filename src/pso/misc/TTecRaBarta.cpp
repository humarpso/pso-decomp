#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TTecRaBarta__ct(void *, void *, void *, void *, void *);
void *TTecRaBarta__sub_80237CCC(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__11TTecRaBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__11TTecRaBartaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x13C);
    if (o != NULL) {
        TTecRaBarta__sub_80237CCC(o, arg0, arg1, arg2);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80237690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecRaBarta__vt7(void *arg0);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TTecRaBarta__vt7(void *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x7A);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        return;
    case 2:
    case 3:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0xEC) = TBoss3Volopt__sub_8022675C(0x4002A706, M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC, 0, 0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80237B48
#include "types.h"

extern "C" {

void render__11TTecRaBartaFv(void);

void render__11TTecRaBartaFv(void) {  }

}
#endif
#endif
