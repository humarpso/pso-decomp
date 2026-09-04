#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __ct__9TRegisterFv(s32 arg0);
void bswap__9TRegisterFv(s32 arg0);
int fn_801E0018(void* p);
M2C_UNK __ct__8TPlySmthFv(s32);
M2C_UNK bswap_32__FPUl(s32);
M2C_UNK bswap__13packet_headerFv();
int bswap__16TPlyGuildCardTagFv(void*);
M2C_UNK fn_801E0900(s32);

void bswap__9TRegisterFv(s32 arg0) {
    bswap__13packet_headerFv();
    fn_801E0900(arg0 + 4);
    bswap_32__FPUl(arg0 + 0xC);
}

s32 __ct__9TRegisterFv(s32 arg0) {
    __ct__8TPlySmthFv(arg0 + 4);
    return arg0;
}

int fn_801E0018(void* p) { return bswap__16TPlyGuildCardTagFv(p); }

}
