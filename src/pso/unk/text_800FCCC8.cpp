#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_view_scale__11TCameraCtrlFv(void);
extern const f64 lbl_8043DAE0;
extern const f32 lbl_805DAA00;
extern const f32 lbl_805DAA04;
f32 TFontSmallTask__sub_800FCCFC(void);
}

extern "C" {

void TBoss3Volopt__sub_800FD344(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
s32 create_font_small_task(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4, s32 arg5, s32 arg6);
s32 create_font_small_task_default_color(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4, s32 arg5);
void fn_800FCCC8(s32 arg0, s32 arg1);
s32 fn_800FCCF4(void* p);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 __ct__14TFontSmallTaskFv(s32, s32, s32, s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void fn_800FCCC8(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0xD, 0xFFFF1FFF);
}
s32 fn_800FCCF4(void* p) { return *(s32*)((char*)p + 0x874); }

extern M2C_UNK lbl_805DAA34;

f32 TFontSmallTask__sub_800FCCFC(void) {
    f32 temp_f1;
    temp_f1 = get_view_scale__11TCameraCtrlFv();
    if (temp_f1 >= lbl_8043DAE0) {
        return lbl_805DAA00;
    }
    return lbl_805DAA04 / temp_f1;
}

s32 create_font_small_task(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4, s32 arg5, s32 arg6) {
    s32 var_r31;

    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(arg4);
    if (arg5 >= 0) {
        TWindowSubStatusDisp__sub_80229080(&lbl_805DAA34);
    }
    TWindowSubStatusDisp__sub_80228F5C(arg5);
    var_r31 = __nw__7TObjectFUl(0x58);
    if (var_r31 != 0) {
        var_r31 = __ct__14TFontSmallTaskFv((s32)(var_r31), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3), (s32)(TLobby__sub_8001DC24()), (s32)(arg6));
    }
    return var_r31;
}

extern M2C_UNK lbl_805DAA34;

s32 create_font_small_task_default_color(s32 arg0, s32 arg1, s32 arg2, s32 arg3, M2C_UNK *arg4, s32 arg5) {
    s32 var_r31;

    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(arg4);
    if (arg5 >= 0) {
        TWindowSubStatusDisp__sub_80229080(&lbl_805DAA34);
    }
    TWindowSubStatusDisp__sub_80228F5C(arg5);
    var_r31 = __nw__7TObjectFUl(0x58);
    if (var_r31 != 0) {
        var_r31 = __ct__14TFontSmallTaskFv((s32)(var_r31), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3), (s32)(TLobby__sub_8001DC24()), (s32)(0xFFFF));
    }
    return var_r31;
}

void TBoss3Volopt__sub_800FD344(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    create_font_small_task((s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(0), (M2C_UNK *)(arg3), (s32)(arg4), (s32)(0xFFFF));
}

}
