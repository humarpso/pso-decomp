#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TTecRaFoieFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CCB28[];

void *__dt__10TTecRaFoieFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCB28;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80226254
#include "types.h"

extern "C" {

void TTecRaFoie__sub_80226254(void);

void TTecRaFoie__sub_80226254(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80226258
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_technique_slot__10TTecRaFoieFi(s32 arg0);
M2C_UNK TLobby__sub_8023F8F4();

extern s32 lbl_805D62B0;

void update_technique_slot__10TTecRaFoieFi(s32 arg0) {
    if (((s32) lbl_805D62B0 != 0) && (arg0 >= 0) && (arg0 < 0x28)) {
        TLobby__sub_8023F8F4();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80237E90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecRaFoie__vt7(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void TTecRaFoie__vt7(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x7A);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A602, (int) (arg0 + 0x7C), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023875C
#include "types.h"

extern "C" {

void render__10TTecRaFoieFv(void);

void render__10TTecRaFoieFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802389E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecRaFoie__ct(void *, void *, void *, void *, void *);
void *TTecRaFoie__sub_80238BA4(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__sub_80238BA4(o, arg0, arg1, arg2, arg3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80238A90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern M2C_UNK __vt__10TTecRaFoie[];

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecRaFoie;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
