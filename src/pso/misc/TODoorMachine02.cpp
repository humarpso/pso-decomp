#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TODoorMachine02__vt18(void);

void TODoorMachine02__vt18(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x801632B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorMachine02__vt15(u8 *arg0);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DB510;

void TODoorMachine02__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (TODragonfly__sub_80158360(lbl_805DB510) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x4004BC01, arg0 + 0x38, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80163560
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TODoorMachine02FPv(void *arg0);
void *TODoorMachine02__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TODoorMachine02FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorMachine02__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801635AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__15TODoorMachine02Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5978;
extern s32 *lbl_805D597C;

void free_statics__15TODoorMachine02Fv(void) {
    if ((s32 *) lbl_805D597C != NULL) {
        free_if_valid__10TObjPlayerFi(*lbl_805D597C);
        if ((s32 *) lbl_805D597C != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D597C);
            lbl_805D597C = NULL;
        }
    }
    if ((u32) lbl_805D5978 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5978, 1);
        lbl_805D5978 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801636F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__15TODoorMachine02Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__15TODoorMachine02[];

void *__dt__15TODoorMachine02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorMachine02;
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
