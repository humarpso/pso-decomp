#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void bswap__13TPlyStartGameFPv(void* p);
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap__13TPlyStartGameFPv(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

}
#else
#if PSO_CLASS_PACKAGE == 0x801E0614
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *__ct__13TPlyStartGameFRC13TPlyStartGame(u8 *arg0, u8 *arg1);
M2C_UNK fn_801DF61C(void *, void *);
M2C_UNK fn_801E051C(void *, void *);

u8 *__ct__13TPlyStartGameFRC13TPlyStartGame(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    fn_801E051C(arg0 + 4, arg1 + 4);
    fn_801E051C(arg0 + 0x24, arg1 + 0x24);
    fn_801E051C(arg0 + 0x44, arg1 + 0x44);
    fn_801E051C(arg0 + 0x64, arg1 + 0x64);
    fn_801DF61C(arg0 + 0x84, arg1 + 0x84);
    M2C_FIELD(arg0, u8 *, 0xE8) = (u8) M2C_FIELD(arg1, u8 *, 0xE8);
    M2C_FIELD(arg0, u8 *, 0xE9) = (u8) M2C_FIELD(arg1, u8 *, 0xE9);
    M2C_FIELD(arg0, u8 *, 0xEA) = (u8) M2C_FIELD(arg1, u8 *, 0xEA);
    M2C_FIELD(arg0, u8 *, 0xEB) = (u8) M2C_FIELD(arg1, u8 *, 0xEB);
    return arg0;
}

}
#endif
#endif
