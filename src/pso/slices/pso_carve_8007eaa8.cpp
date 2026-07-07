#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8001960C(void *);
void bswap_16__FPUs(void *);
void bswap_32__FPUl(void *);

void fn_8007EAA8(void *arg0) {
    fn_8001960C(arg0);
    bswap_16__FPUs((void *)((char *)arg0 + 6));
    bswap_32__FPUl((void *)((char *)arg0 + 8));
}

}
