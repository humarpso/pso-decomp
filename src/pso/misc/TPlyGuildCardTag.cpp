#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __ct__16TPlyGuildCardTagFUsUl(void *arg0, s16 arg1, s32 arg2);

void __ct__16TPlyGuildCardTagFUsUl(void *arg0, s16 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s16 *, 2) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80077BBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __ct__16TPlyGuildCardTagFv(void);

void __ct__16TPlyGuildCardTagFv(void) {

}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B434
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1);

void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007B7EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap__16TPlyGuildCardTagFv(s32 arg0);
M2C_UNK bswap_16__FPUs(s32);
M2C_UNK bswap_32__FPUl(s32);

void bswap__16TPlyGuildCardTagFv(s32 arg0) {
    bswap_32__FPUl(arg0 + 4);
    bswap_16__FPUs(arg0 + 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013ABCC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *copy_full__16TPlyGuildCardTagFPvPv(void *arg0, void *arg1);
void copy__16TPlyGuildCardTagFPvPv(void *);

void *copy_full__16TPlyGuildCardTagFPvPv(void *arg0, void *arg1) {
    copy__16TPlyGuildCardTagFPvPv(arg0);
    ((void (*)(void *, void *))copy__16TPlyGuildCardTagFPvPv)((void *)((char *)arg0 + 36), (void *)((char *)arg1 + 36));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013AC0C
#include "types.h"

extern "C" {

void* copy__16TPlyGuildCardTagFPvPv(void* p, void* a1);
int TPlyGuildCardTag__sub_8013ACA4(void*, void*);

void* copy__16TPlyGuildCardTagFPvPv(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x4, (char*)a1 + 0x4); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x8, (char*)a1 + 0x8); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0xc, (char*)a1 + 0xc); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x10, (char*)a1 + 0x10); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x14, (char*)a1 + 0x14); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x18, (char*)a1 + 0x18); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x1c, (char*)a1 + 0x1c); TPlyGuildCardTag__sub_8013ACA4((char*)p + 0x20, (char*)a1 + 0x20); return p; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013ACA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlyGuildCardTag__sub_8013ACA4(void *arg0, void *arg1);

void TPlyGuildCardTag__sub_8013ACA4(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8013ACC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1);

void __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E0284
#include "types.h"

extern "C" {

void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p);
int bswap_32__FPUl(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_lobby_entry__16TPlyGuildCardTagFPv(void* p) { bswap__16TPlyGuildCardTagFv(p); bswap_32__FPUl((char*)p + 0x8); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E0314
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1);
M2C_UNK __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();

void *TPlyGuildCardTag__sub_801E0314(void *arg0, void *arg1) {
    __ct__16TPlyGuildCardTagFRC16TPlyGuildCardTag();
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801E09C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 __eq__16TPlyGuildCardTagFR16TPlyGuildCardTag(void *arg0, void *arg1);

u8 __eq__16TPlyGuildCardTagFR16TPlyGuildCardTag(void *arg0, void *arg1) {
    int var_r6;

    var_r6 = 0;
    if (((u8) M2C_FIELD(arg0, u8 *, 1) == (u8) M2C_FIELD(arg1, u8 *, 1)) && ((u16) M2C_FIELD(arg0, u16 *, 2) == (u16) M2C_FIELD(arg1, u16 *, 2)) && ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) M2C_FIELD(arg1, u32 *, 4))) {
        var_r6 = 1;
    }
    return (u8)var_r6;
}

}
#endif
#endif
