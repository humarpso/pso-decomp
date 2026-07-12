#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_800726F0(void *arg0);
void TObjPlayer__sub_8001960C(void *);
void bswap_32__FPUl(void *);

void TLobby__sub_800726F0(void *arg0) {
    TObjPlayer__sub_8001960C(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

}
