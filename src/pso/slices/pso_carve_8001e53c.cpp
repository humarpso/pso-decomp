#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void bswap_16__FPUs(void *);
void bswap_32__FPUl(void *);

void bswap__12player_statsFv(void *arg0) {
    bswap_16__FPUs(arg0);
    bswap_16__FPUs((void *)((char *)arg0 + 2));
    bswap_16__FPUs((void *)((char *)arg0 + 4));
    bswap_16__FPUs((void *)((char *)arg0 + 6));
    bswap_16__FPUs((void *)((char *)arg0 + 8));
    bswap_16__FPUs((void *)((char *)arg0 + 10));
    bswap_16__FPUs((void *)((char *)arg0 + 12));
    bswap_16__FPUs((void *)((char *)arg0 + 14));
    bswap_32__FPUl((void *)((char *)arg0 + 16));
    bswap_32__FPUl((void *)((char *)arg0 + 20));
    bswap_32__FPUl((void *)((char *)arg0 + 24));
    bswap_32__FPUl((void *)((char *)arg0 + 28));
    bswap_32__FPUl((void *)((char *)arg0 + 32));
}

}
