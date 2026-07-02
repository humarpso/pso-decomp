#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdDialingGC__sub_80328904(void *arg0);
M2C_UNK TAdDialingGC__sub_80328848(M2C_UNK);
M2C_UNK TAdDialingGC__sub_80328A4C();

void TAdDialingGC__sub_80328904(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x9C);
    switch (temp_r0) {
    case 11:
        TAdDialingGC__sub_80328848(0x11);
        return;
    case 12:
        TAdDialingGC__sub_80328848(0x12);
        return;
    case 13:
        TAdDialingGC__sub_80328848(0x13);
        return;
    case 14:
        TAdDialingGC__sub_80328A4C();
        return;
    case 15:
        TAdDialingGC__sub_80328848(0x16);
        return;
    default:
        TAdDialingGC__sub_80328848(0x10);
        return;
    }
}

}
