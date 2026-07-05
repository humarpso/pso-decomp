#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK fn_80070C50();
M2C_UNK fn_801036CC();
M2C_UNK fn_801F57B4(s32);
M2C_UNK TQuestThread__sub_801F5DD0(u32);
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK fn_802089B0();
M2C_UNK fn_8020A744();
M2C_UNK fn_8020DBCC();
M2C_UNK TSwitch__sub_8022945C();
M2C_UNK fn_80291FC0();
extern u32 lbl_805D5EE8;
extern s32 tl_00;

void fn_801EA8E8(void) {
    fn_801036CC();
    if ((u32) lbl_805D5EE8 != 0U) {
        TQuestThread__sub_801F5DD0(lbl_805D5EE8);
    }
    fn_801F57B4(tl_00);
    fn_8020A744();
    fn_8020DBCC();
    fn_802089B0();
    TSwitch__sub_8022945C();
    TRaderMapCore__sub_801F9540();
    if (is_split_screen() == 1) {
        fn_80291FC0();
        return;
    }
    fn_80070C50();
}

}
