#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneSlimeOne__sub_800EAE0C(void *arg0, s32 arg1, s32 arg2);
f32 fn_80011014();

extern M2C_UNK lbl_8043D288;

void TObjEneSlimeOne__sub_800EAE0C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x390) = (s32) (arg1 + (s32) ((f32) arg2 * fn_80011014()));
}

}
