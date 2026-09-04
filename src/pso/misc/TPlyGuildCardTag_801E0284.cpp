#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1);
void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p);
M2C_UNK __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); }

void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1) {
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

}
