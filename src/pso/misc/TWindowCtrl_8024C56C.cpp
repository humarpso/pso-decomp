#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__11TWindowCtrlFv(void);
M2C_UNK TWindowMainMenu__sub_8024E3D0();
M2C_UNK TLobby__sub_8026ACDC();

extern s32 TWindowCtrl__data_805D63F8;

void close__11TWindowCtrlFv(void) {
    TWindowMainMenu__sub_8024E3D0();
    TLobby__sub_8026ACDC();
    TWindowCtrl__data_805D63F8 = 0;
}

}
