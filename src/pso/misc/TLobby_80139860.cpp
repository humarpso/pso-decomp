#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80139860(void);
void TWindow__close(void*);

extern u32 TLobby__data_805D55D8;

void TLobby__sub_80139860(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((void*)TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0U;
    }
}

}
