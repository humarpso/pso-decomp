#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 fn_801315A0(void *, void *, void *);
extern s32 lbl_805D4DF0;
s32 fn_801908F8(s32 arg0, f32 farg0);
}

extern "C" {

s32 fn_801908F8(s32 arg0, f32 farg0) {
    return fn_801315A0((void *) (lbl_805D4DF0 + 0x178), (void *) (arg0 + 0x38), (void *) (arg0)) < farg0;
}

}
