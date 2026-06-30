#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void **lbl_805D5190;
extern s32 lbl_805D5194;

void fn_800C7544(void *arg0) {
    void **temp_r3;
    void *var_r31;

    var_r31 = arg0;
    do {
        if (!(M2C_FIELD(var_r31, s32 *, 0) & 8) && ((u32) M2C_FIELD(var_r31, u32 *, 4) != 0U)) {
            temp_r3 = lbl_805D5190;
            lbl_805D5190 = temp_r3 + 1;
            *temp_r3 = var_r31;
            lbl_805D5194 += 1;
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            fn_800C7544(M2C_FIELD(var_r31, void **, 0x2C));
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

}
