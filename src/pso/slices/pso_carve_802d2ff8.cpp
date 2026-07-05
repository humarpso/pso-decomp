#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80246CB8();
M2C_UNK fn_8024AAA0(s32, M2C_UNK);
M2C_UNK fn_80339910(u32, s32);
extern s32 lbl_805D53A0;
extern u16 lbl_805D6888;
extern s8 lbl_805D688A;
extern s8 lbl_805D688B;
extern s32 lbl_805D688C;
extern s32 lbl_805D6890;
extern u32 lbl_805D689C;

void TLobby__sub_802D2FF8(s32 arg0) {
    if (fn_80246CB8() == 0) {
        lbl_805D688B = 0;
        lbl_805D688A = 4;
        lbl_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        fn_8024AAA0(lbl_805D53A0, 0x1E);
        u32 temp_r3 = lbl_805D689C;
        if (temp_r3 != 0U) {
            fn_80339910(temp_r3, arg0);
        }
    }
}

}
