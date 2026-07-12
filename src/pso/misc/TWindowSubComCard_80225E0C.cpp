#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubComCard__sub_80225E0C(s32 arg0);
M2C_UNK TQuestVmDownLoadServer__sub_8039DABC(void *, void *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80225E80(void *, void *);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
M2C_UNK strncpy(void *, s32, M2C_UNK);

void TWindowSubComCard__sub_80225E0C(s32 arg0) {
    char sp1C[0x11];
    char sp8[0x11];

    memset(sp1C, 0, 0x11);
    memset(sp8, 0, 0x11);
    strncpy(sp1C, arg0, 0x10);
    TWindowSubComCard__sub_80225E80(sp1C, sp8);
    TQuestVmDownLoadServer__sub_8039DABC(sp1C, sp8, 0x10);
}

}
