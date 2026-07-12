#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_800FA12C(void);
M2C_UNK TLobby__sub_800FA7E0(void *, M2C_UNK);

extern void *lbl_805D5360;

void TLobby__sub_800FA12C(void) {
    void *temp_r31;

    temp_r31 = M2C_FIELD(lbl_805D5360, void **, 0x38);
    TLobby__sub_800FA7E0(lbl_805D5360, 1);
    lbl_805D5360 = temp_r31;
}

}
