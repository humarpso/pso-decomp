#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__8TItemMagFPv(void *arg0);
M2C_UNK fn_80111758(void *, M2C_UNK);

s32 obj_testFlags30(void *, M2C_UNK);
extern const f32 lbl_805DABA4;
extern const f32 lbl_805DABA8;

void update__8TItemMagFPv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C8);
    if (lbl_805DABA4 < temp_f1) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (temp_f1 - lbl_805DABA8);
    }
    if (obj_testFlags30(arg0, 0x08000000) == 0) {
        fn_80111758(arg0, 1);
        return;
    }
    fn_80111758(arg0, 0);
}

}
