#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_fields_0_4__6TLobbyFPv(void *arg0);
void init_pkt_cmd_7C__6TLobbyFPv(u8 *arg0);
void bswap_32__FPUl(void *);

void init_pkt_cmd_7C__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 0x7C;
    M2C_FIELD(arg0, s8 *, 1) = 0x42;
}

void bswap_fields_0_4__6TLobbyFPv(void *arg0) {
    bswap_32__FPUl(arg0);
    bswap_32__FPUl((void *)((char *)arg0 + 4));
}

}
