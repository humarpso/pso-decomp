#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802260F0(void);
M2C_UNK TLobby__sub_80226098();
M2C_UNK TLobby__sub_802260C4();
s32 TLobby__sub_80226328(void);

extern s32 lbl_805D627C;
extern s32 lbl_805D6290;
extern s32 lbl_805D62A4;

void TLobby__sub_802260F0(void) {
    lbl_805D627C = -0x50;
    lbl_805D62A4 = -0x5A;
    if (TLobby__sub_80226328() == 1) {
        lbl_805D627C -= 0x32;
    }
    lbl_805D6290 = -0xA;
    TLobby__sub_802260C4();
    TLobby__sub_80226098();
}

}
