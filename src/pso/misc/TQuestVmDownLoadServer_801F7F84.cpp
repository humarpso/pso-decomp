#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_801F7F84(void *arg0);
M2C_UNK TQuestVmDownLoadServer__sub_801F6DC4(void *);
M2C_UNK TWindowSubComCard__sub_80244A14(u32);
M2C_UNK TAdMcSelectGC__sub_80329DA4();

void TQuestVmDownLoadServer__sub_801F7F84(void *arg0) {
    u32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x2A0) = 2;
    temp_r3 = (u32) M2C_FIELD(arg0, u32 *, 0x290);
    if (temp_r3 != 0U) {
        TWindowSubComCard__sub_80244A14(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x290) = 0U;
    }
    TQuestVmDownLoadServer__sub_801F6DC4(arg0);
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
        TAdMcSelectGC__sub_80329DA4();
    }
}

}
