#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *__nw__7TObjectFUl(int);
void set_scale_f__15TWindowSubEquipFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
s32 TWindowSubAreaMap__ct(int, void *, int);
s32 TWindowSubComCard__ct(int, void *, int);
s32 TWindowSubEquip__sub_80275CB0(int, void *, int);
s32 TWindowSubEquip__ct(int, void *, int);
s32 TWindowSubGameEnd__ct(int, void *, int);
s32 TWindowSubItem__ct(int, void *, int);
s32 TWindowSubLog__ct(int, void *, int);
s32 TWindowSubMag__ct(int, void *, int);
s32 TWindowSubQuestBoard__sub_8027CE74(int, void *, int);
s32 TWindowSubQuestBoard__ct(int, void *, int);
s32 TWindowSubShortCut__ct(int, void *, int);
s32 TWindowSubShortMail__ct(int, void *, int);
s32 fn_8027FCE4(int, void *, int);
s32 TWindowSubSymbolChat__ct(int, void *, int);
s32 TWindowSubTechnique__ct(int, void *, int);
s32 TWindowSubTrade__ct(int, void *, int);
s32 TWindowSubTradeMain__ct(int, void *, int);
s32 TWindowSubTradeMessage__ct(int, void *, int);
s32 TWindowSubInformationBoard__ct(int, void *, int);
void TWindowSubEquip__sub_8026417C(u8 *arg0, u32 arg1);
}

extern "C" {

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void set_scale_f__15TWindowSubEquipFPv(void *);
void destroy_submenu__15TWindowMainMenuFPv(void *);
void *TAdChrSelSlotGC__sub_802C7250(void *, void *, void *);

void create_char_select_slot__17TWindowMainMenu1PFPv(void *arg0) {
    void *o;
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    set_scale_f__15TWindowSubEquipFPv(arg0);
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = TAdChrSelSlotGC__sub_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
}
void TWindowSubEquip__sub_8026417C(u8 *arg0, u32 arg1) {
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_11;
    s32 temp_r3_12;
    s32 temp_r3_13;
    s32 temp_r3_14;
    s32 temp_r3_15;
    s32 temp_r3_16;
    s32 temp_r3_17;
    s32 temp_r3_18;
    s32 temp_r3_19;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r3_5;
    s32 temp_r3_6;
    s32 temp_r3_7;
    s32 temp_r3_8;
    s32 temp_r3_9;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_15;
    s32 var_r0_16;
    s32 var_r0_17;
    s32 var_r0_18;
    s32 var_r0_19;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) | 4);
    destroy_submenu__15TWindowMainMenuFPv((void *) (arg0));
    set_scale_f__15TWindowSubEquipFPv((void *) (arg0));
    switch (arg1) {
    case 25:
        temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = fn_8027FCE4((int) (temp_r3), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
        return;
    case 0:
    case 1:
        temp_r3_2 = ((s32)__nw__7TObjectFUl((int) (0x38)));
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0) {
            var_r0_2 = TWindowSubEquip__sub_80275CB0((int) (temp_r3_2), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_2;
        return;
    case 9:
    case 10:
        temp_r3_3 = ((s32)__nw__7TObjectFUl((int) (0x3C)));
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0) {
            var_r0_3 = TWindowSubEquip__ct((int) (temp_r3_3), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_3;
        return;
    case 11:
        temp_r3_4 = ((s32)__nw__7TObjectFUl((int) (0x44)));
        var_r0_4 = temp_r3_4;
        if (var_r0_4 != 0) {
            var_r0_4 = TWindowSubItem__ct((int) (temp_r3_4), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_4;
        return;
    case 23:
    case 24:
        temp_r3_5 = ((s32)__nw__7TObjectFUl((int) (0x50)));
        var_r0_5 = temp_r3_5;
        if (var_r0_5 != 0) {
            var_r0_5 = TWindowSubMag__ct((int) (temp_r3_5), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_5;
        return;
    case 26:
    case 27:
    case 28:
        temp_r3_6 = ((s32)__nw__7TObjectFUl((int) (0x38)));
        var_r0_6 = temp_r3_6;
        if (var_r0_6 != 0) {
            var_r0_6 = TWindowSubTrade__ct((int) (temp_r3_6), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_6;
        return;
    case 29:
        temp_r3_7 = ((s32)__nw__7TObjectFUl((int) (0xA8)));
        var_r0_7 = temp_r3_7;
        if (var_r0_7 != 0) {
            var_r0_7 = TWindowSubTradeMain__ct((int) (temp_r3_7), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_7;
        return;
    case 30:
        temp_r3_8 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0_8 = temp_r3_8;
        if (var_r0_8 != 0) {
            var_r0_8 = TWindowSubTradeMessage__ct((int) (temp_r3_8), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_8;
        return;
    case 12:
    case 13:
        temp_r3_9 = ((s32)__nw__7TObjectFUl((int) (0x28)));
        var_r0_9 = temp_r3_9;
        if (var_r0_9 != 0) {
            var_r0_9 = TWindowSubAreaMap__ct((int) (temp_r3_9), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_9;
        return;
    case 15:
    case 16:
        temp_r3_10 = ((s32)__nw__7TObjectFUl((int) (0x30)));
        var_r0_10 = temp_r3_10;
        if (var_r0_10 != 0) {
            var_r0_10 = TWindowSubQuestBoard__ct((int) (temp_r3_10), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_10;
        return;
    case 3:
    case 4:
        temp_r3_11 = ((s32)__nw__7TObjectFUl((int) (0x40)));
        var_r0_11 = temp_r3_11;
        if (var_r0_11 != 0) {
            var_r0_11 = TWindowSubTechnique__ct((int) (temp_r3_11), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_11;
        return;
    case 18:
        temp_r3_12 = ((s32)__nw__7TObjectFUl((int) (0x60)));
        var_r0_12 = temp_r3_12;
        if (var_r0_12 != 0) {
            var_r0_12 = TWindowSubSymbolChat__ct((int) (temp_r3_12), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_12;
        return;
    case 14:
        temp_r3_13 = ((s32)__nw__7TObjectFUl((int) (0x88)));
        var_r0_13 = temp_r3_13;
        if (var_r0_13 != 0) {
            var_r0_13 = TWindowSubComCard__ct((int) (temp_r3_13), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_13;
        return;
    case 21:
        temp_r3_14 = ((s32)__nw__7TObjectFUl((int) (0x80)));
        var_r0_14 = temp_r3_14;
        if (var_r0_14 != 0) {
            var_r0_14 = TWindowSubLog__ct((int) (temp_r3_14), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_14;
        return;
    case 6:
        temp_r3_15 = ((s32)__nw__7TObjectFUl((int) (0x30)));
        var_r0_15 = temp_r3_15;
        if (var_r0_15 != 0) {
            var_r0_15 = TWindowSubQuestBoard__sub_8027CE74((int) (temp_r3_15), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_15;
        return;
    case 19:
    case 20:
        temp_r3_16 = ((s32)__nw__7TObjectFUl((int) (0x60)));
        var_r0_16 = temp_r3_16;
        if (var_r0_16 != 0) {
            var_r0_16 = TWindowSubShortMail__ct((int) (temp_r3_16), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_16;
        return;
    case 22:
        temp_r3_17 = ((s32)__nw__7TObjectFUl((int) (0x914)));
        var_r0_17 = temp_r3_17;
        if (var_r0_17 != 0) {
            var_r0_17 = TWindowSubInformationBoard__ct((int) (temp_r3_17), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_17;
        return;
    case 17:
        temp_r3_18 = ((s32)__nw__7TObjectFUl((int) (0x94)));
        var_r0_18 = temp_r3_18;
        if (var_r0_18 != 0) {
            var_r0_18 = TWindowSubShortCut__ct((int) (temp_r3_18), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_18;
        return;
    case 7:
    case 8:
        temp_r3_19 = ((s32)__nw__7TObjectFUl((int) (0x2C)));
        var_r0_19 = temp_r3_19;
        if (var_r0_19 != 0) {
            var_r0_19 = TWindowSubGameEnd__ct((int) (temp_r3_19), (void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x54)));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_19;
    default:
        return;
    }
}

}
