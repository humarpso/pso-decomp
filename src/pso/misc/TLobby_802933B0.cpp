#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802933B0(void);
M2C_UNK TLobby__sub_802932EC();
M2C_UNK TLobby__sub_80074034(s32);
M2C_UNK fn_80074A5C(s32);
M2C_UNK fn_80074DBC(s32);

extern M2C_UNK lbl_804DB1F0[];
extern s32 tl_07;

void TLobby__sub_802933B0(void) {
    TLobby__sub_802932EC();
    fn_80074DBC(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x30) == 0) {
        fn_80074A5C(tl_07);
    }
}

}
