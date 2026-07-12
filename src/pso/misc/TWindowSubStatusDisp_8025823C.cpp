#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_8025823C(void *arg0, s32 arg1);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_805DCF00;

void TWindowSubStatusDisp__sub_8025823C(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(&lbl_805DCF00);
    TWindowSubStatusDisp__sub_80228F5C(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
}

}
