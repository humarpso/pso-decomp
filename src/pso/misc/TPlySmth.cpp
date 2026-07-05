#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* TPlySmth__sub_801E0948(void* p);
void __ct__8TPlySmthFv(void*);
int __ct__16TPlyGuildCardTagFv(void*);
int fn_80077AA4(void*);

void* TPlySmth__sub_801E0948(void* p) { __ct__16TPlyGuildCardTagFv((char*)p + 0x4); __ct__8TPlySmthFv((char*)p + 0xc); fn_80077AA4((char*)p + 0xec); return p; }

void __ct__8TPlySmthFv(void*) {

}

}
