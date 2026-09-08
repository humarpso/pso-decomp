#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

struct RecoveredGlobal_8009E1D4_lbl_8043A32C {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
void setup__9TObjEneDDFPvii(void *, int, int);
extern RecoveredGlobal_8009E1D4_lbl_8043A32C lbl_8043A32C;
void fn_8009E1D4(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8009E1D4_lbl_8043A32C_size[sizeof(RecoveredGlobal_8009E1D4_lbl_8043A32C) == 0x14 ? 1 : -1];
void fn_8009E1D4(u8 *arg0, s32 arg1) {
    struct CopyStack_8009E1D4 { u8 bytes[0x14]; };
    CopyStack_8009E1D4 copy_storage_8009E1D4;
    u8 *temp_r6;
    temp_r6 = (u8 *)((void *)((u8 *)(&lbl_8043A32C.value) + -4));
    *(M2CCopy_14 *)(copy_storage_8009E1D4.bytes) = *(const M2CCopy_14 *)((s32) temp_r6 + 4);
    (*(f32 *)(copy_storage_8009E1D4.bytes + 0x4)) = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x468), f32 *, 4);
    setup__9TObjEneDDFPvii(arg0, arg1, (s32) (copy_storage_8009E1D4.bytes));
}

}
