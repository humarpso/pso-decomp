#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__11TObjDoaEx01Fv(void *arg0);

M2C_UNK try_open__11TObjDoaEx01FPv();
M2C_UNK TObjDoaEx01__sub_8018DEC8();

void render__11TObjDoaEx01Fv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        TObjDoaEx01__sub_8018DEC8();
        return;
    }
    try_open__11TObjDoaEx01FPv();
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018DE10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void try_open__11TObjDoaEx01FPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoaEx01__sub_8018DD0C(void *, s32);
M2C_UNK free_children__12TObjDoorJungFPvPv(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi();

struct TObjDoaEx01_base { char pad[0x18]; };
struct TObjDoaEx01_VObj : TObjDoaEx01_base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};
extern s32 TObjDoaEx01__data_805D5BB0;
extern u8 *TObjDoaEx01__data_805D5BB4;
extern u8 *TObjDoaEx01__data_805D5BB8;
extern const f32 lbl_805DBDB4;
extern const f32 lbl_805DBDB8;

void try_open__11TObjDoaEx01FPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFish__sub_8001EDC4(TObjDoaEx01__data_805D5BB0, 0);
    if (((TObjDoaEx01_VObj*)arg0)->m8(lbl_805DBDB4, lbl_805DBDB8) != 0) {
        free_children__12TObjDoorJungFPvPv(M2C_FIELD(TObjDoaEx01__data_805D5BB4, s32 *, 4), 1);
        free_children__12TObjDoorJungFPvPv(M2C_FIELD(TObjDoaEx01__data_805D5BB8, s32 *, 4), 1);
        TObjFish__sub_8001EDB0(TObjDoaEx01__data_805D5BB0, 0);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoaEx01__sub_8018DD0C(arg0, temp_r31);
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018DFFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__11TObjDoaEx01[];

void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjDoaEx01;
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
#if PSO_CLASS_PACKAGE == 0x8018E15C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjDoaEx01__create(void *arg0);
void *TObjDoaEx01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjDoaEx01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TObjDoaEx01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018E1A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resource__11TObjDoaEx01Fv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjDoaEx01__data_805D5BB0;

void free_resource__11TObjDoaEx01Fv(void) {
    if ((u32) TObjDoaEx01__data_805D5BB0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjDoaEx01__data_805D5BB0, 1);
        TObjDoaEx01__data_805D5BB0 = 0U;
    }
}

}
#endif
#endif
