#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLazerFenceSw__sub_80193C5C(void);
M2C_UNK TLobby__sub_8001FE7C(void *, s32);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *lbl_805D5C30;
extern s32 TLazerFenceSw__data_805D5C34;

void TLazerFenceSw__sub_80193C5C(void) {
    if (lbl_805D5C30 != 0) {
        TLobby__sub_8001FE7C(lbl_805D5C30, 1);
        lbl_805D5C30 = 0;
    }
    free_if_valid__10TObjPlayerFi(TLazerFenceSw__data_805D5C34);
    TLazerFenceSw__data_805D5C34 = 0;
}

}
