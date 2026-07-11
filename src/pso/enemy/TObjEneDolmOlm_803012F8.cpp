#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDolmOlm__sub_803012F8(void* p);
void TObjEneDolmOlm__sub_80301304(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void TObjEneDolmOlm__sub_803012F8(void* p) { *(s16*)((char*)p + 0xb8) = 1; }

extern const f32 TObjEneDolmOlm__data_805DEF6C;

void TObjEneDolmOlm__sub_80301304(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneDolmOlm__data_805DEF6C);
}

}
