#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_field10_reciprocal__10TObjPlayerFPvi(void *arg0, s32 arg1);

extern const f64 lbl_8043A468;
extern const f32 lbl_805D995C;

void set_field10_reciprocal__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (lbl_805D995C / (f32) arg1);
}

}
