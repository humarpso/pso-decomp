#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TFogCtrl__sub_800FAA14(s32, M2C_UNK);
extern s32 lbl_805D4C00;

void TObjBoss2Tunnel__sub_8003C238(void *arg0) {
    TFogCtrl__sub_800FAA14(M2C_FIELD(arg0, s32 *, 0xB0), 1);
    lbl_805D4C00 |= 4;
}

}
