#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_help_entries__24TWindowSubSymbolChatHelpFPvPv(void *arg0, void *arg1);
void handle_toggle_input__24TWindowSubSymbolChatHelpFPv(void *arg0);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindowSubSymbolChatHelp__sub_8028429C(void *, void *);
M2C_UNK TWindowSubSymbolChatHelp__sub_802844C8(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubSymbolChatHelp__sub_802845EC(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK begin_render__20TWindowSubStatusDispFv();
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DEEAC();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, M2C_UNK);

extern s32 lbl_805D63F0;

void draw_help_entries__24TWindowSubSymbolChatHelpFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        TWindowSubStatusDisp__sub_803DEE6C(1);
        set_global_param__8TObjFishFi(lbl_805D63F0);
        TWindowSubStatusDisp__sub_803DF160(2, -1);
        TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 0, -1);
        TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 1, -1);
        if (M2C_FIELD(arg0, u8 *, 0x60) & 1) {
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 2, -1);
        } else {
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 2, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 2) {
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 3, -1);
        } else {
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 3, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 4, -1);
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 5, -1);
        } else {
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 4, 0xFF808080);
            TWindowSubSymbolChatHelp__sub_802845EC(arg0, arg1, 5, 0xFF808080);
        }
        TWindowSubSymbolChatHelp__sub_8028429C(arg0, arg1);
        TWindowSubStatusDisp__sub_803DEEAC();
        TWindowSubStatusDisp__sub_803DEE6C(1);
        begin_render__20TWindowSubStatusDispFv();
        TWindowSubStatusDisp__sub_803DF160(1, -1);
        TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 0, -1);
        TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 1, -1);
        if (M2C_FIELD(arg0, u8 *, 0x60) & 1) {
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 2, -1);
        } else {
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 2, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 2) {
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 3, -1);
        } else {
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 3, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 4, -1);
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 5, -1);
        } else {
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 4, 0xFF808080);
            TWindowSubSymbolChatHelp__sub_802844C8(arg0, arg1, 5, 0xFF808080);
        }
        TWindowSubStatusDisp__sub_803DEEAC();
    }
}

extern s8 lbl_8050E208[];

void handle_toggle_input__24TWindowSubSymbolChatHelpFPv(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    void *temp_r31;

    if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 0x10000) != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 **, 0x6C);
            if ((s32) *temp_r3 != 0) {
                *temp_r3 = 0;
            } else {
                *temp_r3 = 1;
            }
        }
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 0x20000) != 0) {
            temp_r3_2 = M2C_FIELD(arg0, s32 **, 0x70);
            if ((s32) *temp_r3_2 != 0) {
                *temp_r3_2 = 0;
                return;
            }
            *temp_r3_2 = 1;
        }
    }
}

}
