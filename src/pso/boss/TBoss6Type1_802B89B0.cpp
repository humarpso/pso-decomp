#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__vt60(u8 *arg0);
M2C_UNK fn_8022675C(int, void *, int, int, void *);

extern const f32 lbl_805DE2E4;

void TBoss6Type1__vt60(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, f32 *, 0x4D4) = (f32) lbl_805DE2E4;
    fn_8022675C(0x39E01, arg0 + 0x584, 0, 1, arg0);
}

}
