#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001A430();
M2C_UNK fn_8029BCB4(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);

void TAdRayGC__vt2(void *arg0) {
    s32 temp_r0;

    if (fn_8001A430() != 1) {
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
        switch (temp_r0) {
        case 0:
            fn_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20), -1, 0);
            break;
        case 1:
            fn_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20), -1, 0);
            fn_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20) - 0xD, -1, 1);
            break;
        case 2:
            fn_8029BCB4(arg0, M2C_FIELD(arg0, s32 *, 0x20) - 0xD, -1, 1);
            break;
        }
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
    }
}

}
