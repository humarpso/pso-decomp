#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801A497C(void);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_801A46D8();
M2C_UNK TLobby__sub_801A4820();

void TLobby__sub_801A497C(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A46D8();
        return;
    }
    TLobby__sub_801A4820();
}

}
