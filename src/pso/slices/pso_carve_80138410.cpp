#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_80137CC8();
M2C_UNK TLobby__sub_801397E8();
extern s32 lbl_805D5594;
extern s32 lbl_805D55B4;
extern s32 lbl_805D55C0;

void TLobby__sub_80138410(void) {
    TLobby__sub_801397E8();
    TLobby__sub_80137CC8();
    lbl_805D55B4 = 0;
    lbl_805D5594 = 0xC;
    lbl_805D55C0 = 1;
}

}
