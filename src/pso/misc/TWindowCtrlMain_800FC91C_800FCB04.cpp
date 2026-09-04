#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TFontSmallHelp__sub_800FCC20(void *arg0, s16 arg1);
void *create__15TFontSmallLobbyFPv(void *arg0);
void update_help_text__14TFontSmallHelpFPv(void *arg0);
M2C_UNK TFontSmallHelp__sub_800FC424(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u32 TWindowSubStatusDisp__sub_800FC968(s32);
void __dl__7TObjectFPv(void *);
void __dt__14TFontSmallHelpFv(void *, int);
void *__nw__7TObjectFUl(int);
void *fn_800FCC78(void *, void *);
s32 fn_800FCCF4(s32);
s32 get_card_status_bits__20TWindowShortListCtrlFv(s32);
s32 get_status_index_or_default__20TWindowSubStatusDispFPv(void *, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK run_task__14TFontSmallHelpFv(void *);
M2C_UNK set_help_text__14TFontSmallHelpFPvUi(void *, u32);

void *create__15TFontSmallLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = fn_800FCC78(o, arg0);
    }
    return o;
}

extern s8 lbl_80509D5C[];

void update_help_text__14TFontSmallHelpFPv(void *arg0) {
    s32 temp_r3_2;
    s32 temp_r4;
    u32 temp_r3_3;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x5C));
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3_2 = get_card_status_bits__20TWindowShortListCtrlFv(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) != temp_r3_2) {
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r3_2;
        temp_r3_3 = TWindowSubStatusDisp__sub_800FC968(M2C_FIELD(arg0, s32 *, 0x5C));
        set_help_text__14TFontSmallHelpFPvUi(arg0, temp_r3_3);
        if (temp_r3_3 != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 3) {
                temp_r4 = M2C_FIELD(arg0, s32 *, 0x5C);
                TFontSmallHelp__sub_800FC424(arg0, get_status_index_or_default__20TWindowSubStatusDispFPv(lbl_80509D5C + (temp_r4 * 0x11C) + 4, temp_r4));
            } else {
                TFontSmallHelp__sub_800FC424(arg0, fn_800FCCF4(temp_r3));
            }
        }
    }
    run_task__14TFontSmallHelpFv(arg0);
}

extern M2C_UNK lbl_8049CA54[];

void *TFontSmallHelp__sub_800FCC20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049CA54;
        __dt__14TFontSmallHelpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
