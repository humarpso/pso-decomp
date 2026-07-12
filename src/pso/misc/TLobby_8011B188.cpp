#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_header__6TLobbyFPv(void *arg0);
void TLobby__sub_8010311C(void *);

void *init_header__6TLobbyFPv(void *arg0) {
    TLobby__sub_8010311C((void *)((char *)arg0 + 4));
    M2C_FIELD(arg0, u8 *, 0x0) = 95;
    M2C_FIELD(arg0, u8 *, 0x1) = 10;
    return arg0;
}

}
