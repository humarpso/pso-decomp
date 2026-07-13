#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(int);
M2C_UNK TWindowSubStatusDisp__sub_803DEEAC();
M2C_UNK TWindowSubComCard__sub_803DEECC(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(int, int);
extern s32 TEndingPic__data_805D6EE0;
extern const f32 lbl_805DFEF0;

void TEndingPic__sub_80352D10(u8 *arg0) {
    TWindowSubStatusDisp__sub_803DEE6C((int) (1));
    switch ((s32) TEndingPic__data_805D6EE0) {
    case 1:
    case 3:
        break;
    case 2:
        TWindowSubStatusDisp__sub_803DF160((int) ((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 2), (int) (-1));
        TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0xAC), (f32) (lbl_805DFEF0));
        break;
    case 4:
    case 5:
        TWindowSubStatusDisp__sub_803DF160((int) ((M2C_FIELD(arg0, s32 *, 0x28) * 2) + 3), (int) (-1));
        TWindowSubComCard__sub_803DEECC((void *) (arg0 + 0xCC), (f32) (lbl_805DFEF0));
        break;
    default:
        break;
    }
    TWindowSubStatusDisp__sub_803DEEAC();
}

}
