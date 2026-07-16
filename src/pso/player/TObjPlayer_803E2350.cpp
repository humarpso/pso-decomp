#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_803E2350(void);
void TObjPlayer__sub_803E23C8(void);
M2C_UNK GXClearVtxDesc();
M2C_UNK TObjPlayer__sub_803892B4(int, int);
M2C_UNK TObjPlayer__sub_803897D8(int, int, int, int, int);
M2C_UNK TObjPlayer__sub_803E2468(int);
M2C_UNK TObjPlayer__sub_803E2528();
M2C_UNK TObjPlayer__sub_803E256C(int);
M2C_UNK TObjPlayer__sub_803E2640();
M2C_UNK TObjPlayer__sub_803E2664();

void TObjPlayer__sub_803E2350(void) {
    GXClearVtxDesc();
    TObjPlayer__sub_803892B4((int) (9), (int) (1));
    TObjPlayer__sub_803892B4((int) (0xB), (int) (1));
    TObjPlayer__sub_803897D8((int) (4), (int) (9), (int) (1), (int) (4), (int) (0));
    TObjPlayer__sub_803897D8((int) (4), (int) (0xB), (int) (1), (int) (5), (int) (0));
    TObjPlayer__sub_803E2468((int) (1));
    TObjPlayer__sub_803E2528();
    TObjPlayer__sub_803E2640();
}

void TObjPlayer__sub_803E23C8(void) {
    GXClearVtxDesc();
    TObjPlayer__sub_803892B4((int) (9), (int) (1));
    TObjPlayer__sub_803892B4((int) (0xB), (int) (1));
    TObjPlayer__sub_803892B4((int) (0xD), (int) (1));
    TObjPlayer__sub_803897D8((int) (4), (int) (9), (int) (1), (int) (4), (int) (0));
    TObjPlayer__sub_803897D8((int) (4), (int) (0xB), (int) (1), (int) (5), (int) (0));
    TObjPlayer__sub_803897D8((int) (4), (int) (0xD), (int) (1), (int) (4), (int) (0));
    TObjPlayer__sub_803E2468((int) (1));
    TObjPlayer__sub_803E256C((int) (1));
    TObjPlayer__sub_803E2664();
}

}
