#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemLockCountCtrl.h"

extern "C" void free__11TOBoss4RockFUi(void*);

TItemLockCountCtrl::~TItemLockCountCtrl() {
    free__11TOBoss4RockFUi(this->m_20);
}
#else
#if PSO_CLASS_PACKAGE == 0x8011099C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemLockCountCtrl__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK __ct__7TObjectFP7TObject();

M2C_UNK memset(s32, M2C_UNK, s32);
extern M2C_UNK __vt__18TItemLockCountCtrl[];
extern s32 lbl_805D2BF8;

void *TItemLockCountCtrl__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;

    __ct__7TObjectFP7TObject();
    temp_r31 = arg2 * 4;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TItemLockCountCtrl;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2BF8;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = alloc_buffer__11TOBoss4RockFPv(temp_r31);
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg4;
    memset(M2C_FIELD(arg0, s32 *, 0x20), 0, temp_r31);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80119238
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemLockCountCtrl__sub_80119238(int arg0);
void TItemLockCountCtrl__sub_8011926C(int arg0);
void TItemLockCountCtrl__sub_801192A0(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5874(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK obj_clearFlags30(u32, M2C_UNK);

void TItemLockCountCtrl__sub_80119238(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        obj_clearFlags30(temp, 0x40);
    }
}

void TItemLockCountCtrl__sub_8011926C(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 0x20);
    }
}

void TItemLockCountCtrl__sub_801192A0(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 0x10);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011933C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemLockCountCtrl__sub_8011933C(int arg0);
void TItemLockCountCtrl__sub_80119370(int arg0);
M2C_UNK TObjEneMe3Stelth__sub_800F5874(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TItemLockCountCtrl__sub_8011933C(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 2);
    }
}

void TItemLockCountCtrl__sub_80119370(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        TObjEneMe3Stelth__sub_800F5874(temp, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801193A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK obj_setFlags30(u32, M2C_UNK);

void set_battle_ctrl_flag30__18TItemLockCountCtrlFi(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        obj_setFlags30(temp, 0x40);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011E184
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_instance__18TItemLockCountCtrlFv(void);
void *TItemLockCountCtrl__ct(void *, int, int, void *, void *);
void *__nw__7TObjectFUl(int);

extern unsigned char notify_if_active__15TItemTimerEventFi[];
extern unsigned char check_battle_ctrl__15TItemTimerEventFi[];
extern void *lbl_805D5508;

void create_instance__18TItemLockCountCtrlFv(void) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TItemLockCountCtrl__ct(o, 0, 12, notify_if_active__15TItemTimerEventFi, check_battle_ctrl__15TItemTimerEventFi);
    }
    lbl_805D5508 = o;
}

}
#endif
#endif
