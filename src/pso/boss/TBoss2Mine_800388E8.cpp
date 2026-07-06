#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Mine__sub_800388E8(u8 *arg0, s32 arg1, f32 farg0);

extern const f32 lbl_805D84D4;

void TBoss2Mine__sub_800388E8(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x3B8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) lbl_805D84D4;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
}

}
