#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 TItemData__sub_8010C52C(s32);
s32 TItemData__sub_8010C738(s32);
s32 TItemData__sub_8010CC68(s32);
s32 TItemData__sub_8010CEF4(s32);
u32 TItemData__sub_8010D028(s32, M2C_UNK, s32);
s32 TItemData__sub_8010DF68(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, s32, s32 *);
u8 TItemData__sub_8010EB10(s32);
s32 TItemData__sub_8010EC88(s32);

void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;

    if (TItemData__sub_8010C52C(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        return;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 2));
    if (temp_r3 != 0) {
        temp_r29 = TWindowHelpItem__sub_80104FCC(temp_r3, arg1, &sp8);
        temp_r30 = TItemData__sub_8010EC88(arg1);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x33) {
            if ((temp_r30 == 0) && (TItemData__sub_8010DF68(arg1) != 0)) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x19U;
            } else if (sp8 & 1) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x13U;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        if (temp_r30 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r29 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            if (TItemData__sub_8010CC68(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFFFE3C28;
                return;
            }
            if (TItemData__sub_8010C738(arg1) == 2) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x800);
                return;
            }
            if (TItemData__sub_8010EB10(arg1) >= 9U) {
                M2C_FIELD(arg0, s32 *, 0x30) = -0x1600;
                return;
            }
            if (TItemData__sub_8010CEF4(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF61E853;
                return;
            }
            if (TItemData__sub_8010D028(arg1, 0x10000, temp_r3) != 0U) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = -1;
            return;
        }
        if (sp8 & 1) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
    }
}

}
