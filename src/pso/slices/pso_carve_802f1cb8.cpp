#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B360(M2C_UNK *);
extern M2C_UNK main_task[];
extern f32 lbl_805DECA4;
extern f32 lbl_805DECA8;

s32 fn_802F1CB8(void *arg0) {
    f32 temp_f1;

    if (TCameraCtrl__sub_8006B360(main_task) & 0x20) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        if ((temp_f1 < lbl_805DECA4) && (lbl_805DECA8 < temp_f1)) {
            return 0;
        }
    }
    return 1;
}

}
