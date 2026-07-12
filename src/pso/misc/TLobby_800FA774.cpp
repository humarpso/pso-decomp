#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800FA774(void);
M2C_UNK TLobby__sub_8001F88C();
s32 TQuestVmDownLoadServer__sub_8007EBFC(M2C_UNK);
s32 __ct__5THeapFUli(M2C_UNK, M2C_UNK, M2C_UNK);
s32 __nw__5THeapFUl(M2C_UNK);

extern s32 lbl_805D5360;
extern s32 lbl_805D5364;
extern s32 lbl_805D5368;
extern s32 lbl_805D536C;
extern s32 lbl_805D5370;
extern s32 lbl_805D5374;
extern s32 lbl_805D5378;
extern s32 lbl_805D537C;

void TLobby__sub_800FA774(void) {
    s32 var_r0;

    TLobby__sub_8001F88C();
    lbl_805D5370 = TQuestVmDownLoadServer__sub_8007EBFC(0x800);
    lbl_805D5364 = 0;
    lbl_805D5360 = 0;
    lbl_805D5374 = 0;
    lbl_805D536C = 0;
    lbl_805D5368 = 0;
    lbl_805D5378 = 0;
    var_r0 = __nw__5THeapFUl(0x14);
    if (var_r0 != 0) {
        var_r0 = __ct__5THeapFUli(var_r0, 0x4000, 0x20);
    }
    lbl_805D537C = var_r0;
}

}
