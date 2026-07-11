#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80222D58(void);

s32 create_named_object(s32);
extern M2C_UNK lbl_804CA288[];
extern s32 lbl_805D5544;
extern s32 lbl_805D6238;
extern s32 lbl_805D6258;

void TLobby__sub_80222D58(void) {
    if (((s32) lbl_805D6238 < 0) || ((s32) lbl_805D6238 > 9)) {
        lbl_805D6238 = 0;
    }
    lbl_805D6258 = create_named_object(lbl_804CA288[lbl_805D5544]);
}

}
