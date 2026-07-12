#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8026A328(void);
M2C_UNK heap_free__5THeapFPv(s32, u32);

extern s32 lbl_805D6460;
extern u32 lbl_805D6464;

void TLobby__sub_8026A328(void) {
    if ((u32) lbl_805D6464 != 0U) {
        heap_free__5THeapFPv(lbl_805D6460, lbl_805D6464);
        lbl_805D6464 = 0U;
    }
}

}
