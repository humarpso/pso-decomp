#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803D7CA4(void *);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
extern M2C_UNK (*lbl_805D7810)(void *);

void fn_801E3D34(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    do {
        fn_803D9B2C();
        fn_803D7CA4(var_r31);
        if (((M2C_UNK (*)(void *)) lbl_805D7810) != NULL) {
            lbl_805D7810(var_r31);
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            fn_801E3D34(M2C_FIELD(var_r31, void **, 0x2C));
        }
        fn_803D9B78();
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

}
