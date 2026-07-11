#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe7Berura__sub_80094EEC(s32 arg0);
M2C_UNK TObjEneRe7Berura__sub_80094F40(void *, s32);
M2C_UNK fn_803DA798(s32, void *);

extern M2C_UNK lbl_805007DC[];
extern void *lbl_805D4F64;

void TObjEneRe7Berura__sub_80094EEC(s32 arg0) {
    s32 *temp_r3;

    fn_803DA798(M2C_FIELD(M2C_FIELD(lbl_805D4F64, void **, 0x42C), s32 *, 0xC), lbl_805D4F64);
    temp_r3 = (s32 *)((s8 *)lbl_805007DC + (arg0 * 0x64));
    TObjEneRe7Berura__sub_80094F40((s32 *)((s8 *)temp_r3 + 0x20), *temp_r3);
}

}
