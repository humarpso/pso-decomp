#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void copy__11TBreakUpMdlFPvPv(void* p, void* q);

void copy__11TBreakUpMdlFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80096A6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TBreakUpMdlFv(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__11TBreakUpMdl[];

void *__dt__11TBreakUpMdlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBreakUpMdl;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80096E5C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt_deleting__11TBreakUpMdlFPvs(void *arg0, s16 arg1);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK TBreakUpMdl__data_8048FA00[];

void *__dt_deleting__11TBreakUpMdlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = TBreakUpMdl__data_8048FA00;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
