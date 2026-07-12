#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TProtocol__sub_801DFD98(void* p);
s32 TProtocol__sub_801DFDCC(s32 arg0);
M2C_UNK __ct__16TPlyGuildCardTagFv(s32);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void TProtocol__sub_801DFD98(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

s32 TProtocol__sub_801DFDCC(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}

}
