#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E2048(M2C_UNK, M2C_UNK *);
s32 fn_801FDBC4();
extern M2C_UNK lbl_804C8914[];
extern u32 lbl_805D5F70;
extern s32 lbl_805D5F78;

s32 load_pso_system(void) {
    s32 var_r31;
    s32 var_r3;

    var_r31 = 0xFFFF0000;
    if (((u32) lbl_805D5F70 != 0U) && (TAdPlayerLoadGC__sub_80076BBC() == 0)) {
        var_r31 = TAdPlayerLoadGC__sub_801E1B50(1);
        if (var_r31 == 0) {
            var_r31 = TAdPlayerLoadGC__sub_801E2048(1, lbl_804C8914);
            if (var_r31 == 0) {
                var_r3 = fn_801FDBC4();
                if (var_r3 == 0) {
                    lbl_805D5F78 = 0x16;
                }
                return var_r3;
            }
        }
    }
    var_r3 = var_r31;
    return var_r3;
}

}
