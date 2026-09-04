#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TRecvGenerateID__sub_801DFBC4(void* p);
void bswap__15TRecvGenerateIDFv(s32 arg0);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
M2C_UNK bswap__13packet_headerFv();

void bswap__15TRecvGenerateIDFv(s32 arg0) {
    bswap__13packet_headerFv();
    bswap_32__FPUl((void*)(arg0 + 4));
    TRecvGenerateID__sub_801DFBC4((void*)(arg0 + 8));
}

void TRecvGenerateID__sub_801DFBC4(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((void*)((char*)p + 0x4)); }

}
