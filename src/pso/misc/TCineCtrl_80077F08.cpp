#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__9TCineCtrlFi(s32 arg0);

extern void *lbl_805D4E60;
extern const f32 lbl_805D91D0;

void reset__9TCineCtrlFi(s32 arg0) {
    if ((void *) lbl_805D4E60 != NULL) {
        M2C_FIELD(lbl_805D4E60, s32 *, 0x2C) = arg0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x1C) = (f32) lbl_805D91D0;
        M2C_FIELD(lbl_805D4E60, f32 *, 0x20) = (f32) lbl_805D91D0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x26) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x25) = 0;
        M2C_FIELD(lbl_805D4E60, s8 *, 0x24) = 0;
        M2C_FIELD(lbl_805D4E60, s32 *, 0x28) = 1;
    }
}

}
