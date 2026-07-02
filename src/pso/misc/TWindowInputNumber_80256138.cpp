#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowInputNumber__sub_80256138(void *arg0, f32 farg0);
M2C_UNK TWindowInputNumber__sub_802561E8(void *);
M2C_UNK fn_802448C0();

void TWindowInputNumber__sub_80256138(void *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = farg0;
    fn_802448C0();
    TWindowInputNumber__sub_802561E8(arg0);
}

}
