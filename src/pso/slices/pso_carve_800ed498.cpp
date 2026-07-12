#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjEneRe4Sorcerer__sub_800ED384();
void TObjEneRe4Sorcerer__sub_800ED408(void* p);
void TObjEneRe4Sorcerer__sub_800ED418(void* p);
void TObjEneRe4Sorcerer__sub_800ED47C(void* p);
void* TObjEneRe4Sorcerer__sub_800ED488(void* p);
s32 TObjEneRe4Sorcerer__sub_800ED490(void* p);

int TObjEneRe4Sorcerer__sub_800ED498(void) { return 0; }

}
