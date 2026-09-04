#ifndef PSO_CLASS_PACKAGE
#include "pso/TSetManager.h"

void TSetManager::run_task() {}

TSetManager::~TSetManager() {}
#else
#if PSO_CLASS_PACKAGE == 0x8020D7D4
#include "types.h"

extern "C" {

void TSetManager__sub_8020D7D4(void);

void TSetManager__sub_8020D7D4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8020D918
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__11TSetManagerFv(void);
void* TSetManager__ct(void*, s32);
void* __nw__7TObjectFUl(u32);

extern s32 tl_02;

void create__11TSetManagerFv(void) {
    void* obj = __nw__7TObjectFUl(0x20);
    if (obj != 0) {
        TSetManager__ct(obj, tl_02);
    }
}

}
#endif
#endif
