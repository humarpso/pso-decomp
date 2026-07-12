#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_fields_4_8_12__6TLobbyFPv(void *arg0);
void bswap_32__FPUl(void *);

void bswap_fields_4_8_12__6TLobbyFPv(void *arg0) {
    bswap_32__FPUl((void *)((char *)arg0 + 4));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
    bswap_32__FPUl((void *)((char *)arg0 + 12));
}

}
