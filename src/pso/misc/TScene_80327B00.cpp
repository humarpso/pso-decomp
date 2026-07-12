#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TScene__sub_80327B00(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TScene__sub_80327B40(void *, s16, s16);

void TScene__sub_80327B00(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + arg1);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + arg2);
    TScene__sub_80327B40(arg0, M2C_FIELD(arg0, s16 *, 0x10), M2C_FIELD(arg0, s16 *, 0x12));
}

}
