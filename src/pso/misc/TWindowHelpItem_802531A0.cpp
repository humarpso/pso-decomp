#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80253268 {
    s32 sp8;
    s16 spC;
    u8 pad[0x18 - 6];
};

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
typedef struct MagData_80253564 { u8 b[16]; } MagData_80253564;

typedef struct Callback_80253564 { u8 bytes[0xc]; } Callback_80253564;

extern "C" {
M2C_UNK clear_fields__20TWindowSubStatusDispFPv(void *);
s32 TWindowHelpItem__sub_801B3038(int, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void TWindowHelpItem__sub_80253268(u8 *arg0);
void initialize_mag_data__9TItemDataFPv(MagData_80253564 *);
void TItemData__sub_8010D614(void *, MagData_80253564 *);
s32 TItemMag__sub_801143E8(MagData_80253564 *, int);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void TWindowHelpItem__sub_80243630(void *, int, u16);
void TWindowSubStatusDisp__sub_80257D44(void *, const void *, s16);
extern u8 lbl_804CF4E4[];
extern Callback_80253564 lbl_804CF880;
void TWindowHelpItem__vt11(u8 *window);
}

extern "C" {

void TWindowHelpItem__sub_802531A0(void);
void update_displayed_item__15TWindowHelpItemFi(s32 arg0);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowHelpItem__sub_802531A4(s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_80253154();

void TWindowHelpItem__sub_802531A0(void) {  }

void update_displayed_item__15TWindowHelpItemFi(s32 arg0) {
    TWindowSubStatusDisp__sub_80253154();
    TWindowHelpItem__sub_802531A4(arg0, TLobby__sub_8001DC24());
}
void TWindowHelpItem__sub_80253268(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80253268, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80253268, spC) == 0x4) ? 1 : -1];
    Stack_80253268 stack;
    s32 temp_r3;
    u8 *temp_r31;
    u8 *temp_r31_2;
    clear_fields__20TWindowSubStatusDispFPv((void *) (&stack.sp8));
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, s16 *, 0x20)));
    if (temp_r3 != 0) {
        temp_r31 = (u8 *)(temp_r3 + 0x85C);
        if (temp_r31 != NULL) {
            temp_r31_2 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5));
            if (!(M2C_FIELD(temp_r31, s32 *, 0x34) & 0x10) && (TWindowHelpItem__sub_801B3038((int) (temp_r3), (void *) (&stack.sp8)) != 0)) {
                M2C_FIELD(temp_r31_2, s32 *, 0x20) = (s32) stack.spC;
            }
        }
    }
}
void TWindowHelpItem__vt11(u8 *window) {
    MagData_80253564 mag;
    s32 slot;
    s32 blast;
    initialize_mag_data__9TItemDataFPv(&mag);
    TWindowSubStatusDisp__sub_80257D44(window + 0x24, lbl_804CF4E4, M2C_FIELD(window, s16 *, 0x20));
    *(Callback_80253564 *) (window + 0xB0) = lbl_804CF880;
    TItemData__sub_8010D614(M2C_FIELD(window, void **, 0x68), &mag);
    for (slot = 0; slot < 3; slot++) {
        blast = TItemMag__sub_801143E8(&mag, slot);
        if (blast != -1) {
            TWindowHelpItem__sub_80243630(((void *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(window), (M2C_UNK)(slot + 1))), 5, (u16) blast);
        } else {
            TWindowHelpItem__sub_80243630(((void *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(window), (M2C_UNK)(slot + 1))), 0, 0);
        }
    }
}

}
