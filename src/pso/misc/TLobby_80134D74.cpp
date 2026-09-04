#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void disconnect_protocol__6TLobbyFv(void);
M2C_UNK TProtocol__sub_801DCAD4(void *);

extern void *TLobby__data_805D5580;

void disconnect_protocol__6TLobbyFv(void) {
    void *temp_r3;
    temp_r3 = TLobby__data_805D5580;
    if (temp_r3 != NULL) {
        TProtocol__sub_801DCAD4(temp_r3);
    }
}

}
