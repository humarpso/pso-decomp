#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__sub_80255B20(u8 *arg0);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(int, int);

void TWindowHelpItem__sub_80255B20(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r3_2;

    temp_r3 = TWindowSubComCard__sub_80244C0C((void *) (arg0), (void *) (arg0 + 0xA8));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2)) {
        TWindowSubStatusDisp__sub_8026C800((int) (M2C_FIELD(arg0, s32 *, 0x64)), (int) (temp_r3));
    }
}

}
