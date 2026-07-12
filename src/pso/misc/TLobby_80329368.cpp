#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80329368(void *arg0);
void TLobby__sub_803293A4(void);
void TLobby__sub_802A7B50(void *);
M2C_UNK TObjPlayer__sub_8001BF10(M2C_UNK *);

extern M2C_UNK lbl_804ED7D0[];

void *TLobby__sub_80329368(void *arg0) {
    TLobby__sub_802A7B50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804ED7D0;
    return arg0;
}

extern M2C_UNK lbl_805D6C84;

void TLobby__sub_803293A4(void) {
    TObjPlayer__sub_8001BF10(&lbl_805D6C84);
}

}
