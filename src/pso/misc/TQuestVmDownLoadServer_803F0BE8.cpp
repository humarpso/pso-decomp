#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0);

extern u32 lbl_805D7924;
extern s32 lbl_805D7928;

void TQuestVmDownLoadServer__sub_803F0BE8(u8 *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 4) == (u32) lbl_805D7924) {
        lbl_805D7928 = 0;
    }
}

}
