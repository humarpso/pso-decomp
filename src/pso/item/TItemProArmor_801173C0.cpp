#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1);
void *construct__13TItemProArmorFPv(void *arg0);
void create__13TItemProArmorFiUi(s32 arg0, u32 arg1);
void create_armor__13TItemProArmorFPv(void* a0);
void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1);
void tick_lifetime__13TItemProArmorFPv(void *arg0);
void TItemObject__ct(void *);
M2C_UNK TItemProArmor__sub_8011751C(void *, s32, u32);
M2C_UNK TItemTimerEvent__sub_8011E068(u16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __dl__7TObjectFPv(void *);
void __dt__11TItemObjectFv(void *, int);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_8049FE00[];

void *construct__13TItemProArmorFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FE00;
    return arg0;
}

void tick_lifetime__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x1E);
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r3 - 1);
}

extern M2C_UNK lbl_8049FEB8[];

void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FEB8;
        TItemTimerEvent__sub_8011E068(M2C_FIELD(arg0, u16 *, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void create__13TItemProArmorFiUi(s32 arg0, u32 arg1) {
    void *temp_r3;
    if ((arg0 != 0) && (arg1 != 0U)) {
        temp_r3 = __nw__7TObjectFUl(0x20);
        if (temp_r3 != NULL) {
            TItemProArmor__sub_8011751C(temp_r3, arg0, arg1);
        }
    }
}

    extern int tl_05;
void create_armor__13TItemProArmorFPv(void* a0) { create__13TItemProArmorFiUi((s32)((s32)((void*)(tl_05))), (u32)((u32)((void*)(*(int*)((char*)a0 + 0xf0))))); }

extern M2C_UNK lbl_8049FED0[];

void *TItemProArmor__sub_801175F8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FED0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
