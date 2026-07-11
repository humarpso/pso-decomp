#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__6TLobbyFv(void);
s32 fn_80246CB8();
M2C_UNK fn_802B1A70(s32);
M2C_UNK fn_80330A40(s32);
M2C_UNK fn_803398CC(s32);

extern u16 lbl_805D6888;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern const u32 TLobby__data_805D6894;
extern const u32 TLobby__data_805D6898;
extern const u32 TLobby__data_805D689C;

void reset__6TLobbyFv(void) {
    if (fn_80246CB8() == 0) {
        TLobby__data_805D688A = 4;
        TLobby__data_805D688B = 0;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        if ((u32) TLobby__data_805D689C != 0U) {
            fn_803398CC(TLobby__data_805D689C);
        }
        if ((u32) TLobby__data_805D6898 != 0U) {
            fn_80330A40(TLobby__data_805D6898);
        }
        if ((u32) TLobby__data_805D6894 != 0U) {
            fn_802B1A70(TLobby__data_805D6894);
        }
    }
}

}
