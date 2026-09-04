#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_instance__8TObjDoorFv(void);

extern s32 TObjDoor__data_805D5BC8;

void reset_instance__8TObjDoorFv(void) {
    TObjDoor__data_805D5BC8 = 0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018E718
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer__8TObjDoorFPv(void *arg0);
M2C_UNK TObjDoor__sub_8018E5F4();
M2C_UNK TObjDoor__sub_8018E74C();

void update_timer__8TObjDoorFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) < 0x3C) {
        TObjDoor__sub_8018E5F4();
        return;
    }
    TObjDoor__sub_8018E74C();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018E890
#include "types.h"

extern "C" {

void TObjDoor__sub_8018E890(void);

void TObjDoor__sub_8018E890(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018E8BC
#include "types.h"

extern "C" {

void TObjDoor__sub_8018E8BC(void);

void TObjDoor__sub_8018E8BC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018E940
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

void update_anim__8TObjDoorFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);

extern f32 lbl_805DBDD0;
extern f32 lbl_805DBDD4;

void update_anim__8TObjDoorFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) (M2C_FIELD(arg0, s32 *, 0xC8) + 0x300);
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DBDD4 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0xC8)) + lbl_805DBDD0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018F0F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__8TObjDoorFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__8TObjDoor[];

void *__dt__8TObjDoorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjDoor;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018F278
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjDoor__create(void *arg0);
void *TObjDoor__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjDoor__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjDoor__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018F2C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__8TObjDoorFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern s32 TObjDoor__data_805D5BC0;
extern u32 lbl_805D5BC4;

void free_resources__8TObjDoorFv(void) {
    free_if_valid__10TObjPlayerFi(TObjDoor__data_805D5BC0);
    TObjDoor__data_805D5BC0 = 0;
    if ((u32) lbl_805D5BC4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BC4, 1);
        lbl_805D5BC4 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjDoor__sub_801F3754(void);

extern s32 TObjDoor__data_805D5BC8;

void TObjDoor__sub_801F3754(void) {
    TObjDoor__data_805D5BC8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F3760
#include "types.h"

extern "C" {

void TObjDoor__sub_801F3760(void);

    extern int lbl_805D58F8;
void TObjDoor__sub_801F3760(void) { lbl_805D58F8 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801F376C
#include "types.h"

extern "C" {

void set_main_warp_id__8TObjDoorFi(int a0);

    extern int lbl_805D5B60;
void set_main_warp_id__8TObjDoorFi(int a0) { lbl_805D5B60 = a0; }

}
#endif
#endif
