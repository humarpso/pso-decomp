#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void read_be16_field2__10TObjPlayerFPv(void *);
void bswap_16__FPUs(void *);
void bswap_32__FPUl(void *);

void bswap_6xB2_play_sound(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((void *)((char *)arg0 + 6));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
}

}
