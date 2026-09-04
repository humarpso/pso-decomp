#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TODoorCave02__vt18(void);

void TODoorCave02__vt18(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80161D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorCave02__vt15(u8 *arg0);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
s32 TODragonfly__sub_80158360(void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern u8 *TODoorCave02__data_805D5964;
extern const f32 lbl_805DB4B0;

void TODoorCave02__vt15(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorCave02__data_805D5964, s32 *, 4);
        if (TODragonfly__sub_80158360(arg0, lbl_805DB4B0) != 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)0, (M2C_UNK)8);
            TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorCave02__data_805D5964, s32 *, 0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)NULL, (M2C_UNK)8);
        TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80161F90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__12TODoorCave02Fv(u8 *arg0);
M2C_UNK TODoorCave02__sub_80161EE0(void *, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 fn_801582C4(void *, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(void *, s32, f32);

extern u8 *TODoorCave02__data_805D5964;
extern const f32 lbl_805DB4C4;

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

void render__12TODoorCave02Fv(u8 *arg0) {
    if ((((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (fn_801582C4(arg0, lbl_805DB4C4) != 0)) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            set_global_param__8TObjFishFi(*(s32 *)(TODoorCave02__data_805D5964 + ((M2C_FIELD(arg0, s32 *, 0xD0) * 4) & 4)));
            TODoorCave02__sub_80161EE0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C));
            TODoorCave02__sub_80161EE0(arg0, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30));
        } else {
            set_global_param__8TObjFishFi(M2C_FIELD(TODoorCave02__data_805D5964, s32 *, 4));
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, void **, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8016206C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TODoorCave02FPv(void *arg0);
void *TODoorCave02__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__12TODoorCave02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorCave02__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801620B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_globals__12TODoorCave02Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5960;
extern s32 *TODoorCave02__data_805D5964;

void free_globals__12TODoorCave02Fv(void) {
    if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorCave02__data_805D5964);
        if ((s32 *) TODoorCave02__data_805D5964 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorCave02__data_805D5964);
            TODoorCave02__data_805D5964 = NULL;
        }
    }
    if ((u32) lbl_805D5960 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5960, 1);
        lbl_805D5960 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80162204
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__12TODoorCave02[];

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TODoorCave02;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
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
