#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80132ED0(void);
void *TAdSinglePlyChrSelectGC__sub_8001ED80();
s8 fn_80132EC8();

extern s32 lbl_805D5544;

void TLobby__sub_80132ED0(void) {
    void *temp_r3;

    temp_r3 = TAdSinglePlyChrSelectGC__sub_8001ED80();
    if (temp_r3 == NULL) {
        lbl_805D5544 = (s32) fn_80132EC8();
        return;
    }
    if ((s8) M2C_FIELD(temp_r3, u8 *, 7) >= 5) {
        M2C_FIELD(temp_r3, u8 *, 7) = 1U;
    }
    lbl_805D5544 = (s32) (s8) M2C_FIELD(temp_r3, u8 *, 7);
}

}
