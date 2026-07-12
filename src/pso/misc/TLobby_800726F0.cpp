#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0);
void read_be16_field2__10TObjPlayerFPv(void *);
void bswap_32__FPUl(void *);

void bswap_challenge_dead_flag__6TLobbyFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

}
