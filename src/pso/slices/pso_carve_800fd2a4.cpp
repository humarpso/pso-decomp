#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8001DC24();
s32 __ct__14TFontSmallTaskFv(s32, s32, s32, s32, s32, s32, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 __nw__7TObjectFUl(M2C_UNK);
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
        var_r31 = __ct__14TFontSmallTaskFv(var_r31, arg0, arg1, arg2, arg3, TLobby__sub_8001DC24(), 0xFFFF);
    }
    return var_r31;
}

}
