#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TODoorAncient06FPv(void *arg0);
void *TODoorAncient06__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__15TODoorAncient06FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODoorAncient06__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015F220
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorAncient06__vt15(u8 *arg0);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
s32 TODragonfly__sub_80158360(void *, f32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern u8 *TODoorAncient06__data_805D592C;
extern const f32 lbl_805DB440;

void TODoorAncient06__vt15(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorAncient06__data_805D592C, s32 *, 4);
        if (TODragonfly__sub_80158360(arg0, lbl_805DB440) != 1) {
            M2C_FIELD(arg0, s32 *, 0xAC) = 3;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)0, (M2C_UNK)8);
            TBoss3Volopt__sub_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TODoorAncient06__data_805D592C, s32 *, 0);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, (M2C_UNK)NULL, (M2C_UNK)8);
        TBoss3Volopt__sub_8022675C(0x4004B708, arg0 + 0x38, 0, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015F3B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__15TODoorAncient06Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *lbl_805D5928;
extern void *TODoorAncient06__data_805D592C;
extern void *lbl_805D5930;

void destroy__15TODoorAncient06Fv(void) {
    if (lbl_805D5930 != NULL) {
        free__11TOBoss4RockFUi(lbl_805D5930);
        lbl_805D5930 = NULL;
    }
    if (TODoorAncient06__data_805D592C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient06__data_805D592C, s32 *, 4));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient06__data_805D592C, s32 *, 0));
        if (TODoorAncient06__data_805D592C != NULL) {
            free__11TOBoss4RockFUi(TODoorAncient06__data_805D592C);
            TODoorAncient06__data_805D592C = NULL;
        }
    }
    if (lbl_805D5928 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5928, 1);
        lbl_805D5928 = NULL;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015F558
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__15TODoorAncient06Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__15TODoorAncient06[];

void *__dt__15TODoorAncient06Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorAncient06;
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
