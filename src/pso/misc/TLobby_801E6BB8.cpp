#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TLobby__sub_801E6BB8(void);
u8 TLobby__sub_801E6BD0(void);

extern u8 *TLobby__data_805D5ED0;

u8 TLobby__sub_801E6BB8(void) {
    return (u8) ((s8) *TLobby__data_805D5ED0 == 0);
}

extern u8 *TLobby__data_805D5ED0;

u8 TLobby__sub_801E6BD0(void) {
    u8 *temp_r3;

    temp_r3 = TLobby__data_805D5ED0;
    TLobby__data_805D5ED0 = temp_r3 + 1;
    return *temp_r3;
}

}
