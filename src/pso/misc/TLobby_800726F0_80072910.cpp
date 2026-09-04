#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_6x7C_packet__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__sub_80072994(s32);
M2C_UNK read_be16_field2__10TObjPlayerFPv();
M2C_UNK bswap_16__FPUs(s32);

void bswap_6x7C_packet__6TLobbyFi(s32 arg0) {
    read_be16_field2__10TObjPlayerFPv();
    bswap_16__FPUs(arg0 + 4);
    TLobby__sub_80072994(arg0 + 8);
}

}
