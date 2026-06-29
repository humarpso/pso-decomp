#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803094E8(void *a, s32 b);

void TShopEquipmentListWindow__sub_8021B9E4(void *arg0, void *arg1) {
    void *v = M2C_FIELD(arg0, void **, 0x3C);
    if (v != 0) {
        s32 n = M2C_FIELD(arg1, s32 *, 0x10);
        if (n > 0) {
            fn_803094E8(v, n);
        }
    }
}

}
