#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDolmOlm__sub_80301FBC(void *arg0);
f32 fn_80011014();

void TObjEneDolmOlm__sub_80301FBC(void *arg0) {
    if (fn_80011014() < M2C_FIELD(arg0, f32 *, 0x3CC)) {
        M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
    }
}

}
