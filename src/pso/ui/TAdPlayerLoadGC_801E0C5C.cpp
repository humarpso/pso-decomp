#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlayerLoadGC__sub_801E0C5C(s32 arg0);
M2C_UNK TAdPlayerLoadGC__sub_801E101C(s32);
s32 fn_80384B30(s32, M2C_UNK *, s32 *);

extern s32 TAdPlayerLoadGC__data_805D5E30;
extern s32 TAdPlayerLoadGC__data_805D5E40;

void TAdPlayerLoadGC__sub_801E0C5C(s32 arg0) {
    M2C_UNK spC;
    s32 sp8;
    s32 temp_r3;

    TAdPlayerLoadGC__data_805D5E30 &= ~(0x400 << arg0);
    do {
        temp_r3 = fn_80384B30(arg0, &spC, &sp8);
    } while (temp_r3 == -1);
    if (sp8 == 0x2000) {
        if ((temp_r3 == -3) || (temp_r3 == -2)) {
            TAdPlayerLoadGC__data_805D5E40 = -0x7D;
            return;
        }
        TAdPlayerLoadGC__sub_801E101C(arg0);
    }
}

}
