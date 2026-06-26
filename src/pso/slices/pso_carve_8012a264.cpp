#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011E87C(void *, M2C_UNK);
M2C_UNK fn_80120908(void *);

void fn_8012A264(void *arg0) {
    s32 *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30), s32 **, 0x30);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 |= 0x10;
        }
        fn_80120908(arg0);
        fn_8011E87C(arg0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

}
