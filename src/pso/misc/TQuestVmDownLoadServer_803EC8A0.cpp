#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_803EC8A0(u16 arg0, s32 arg1);

s32 TQuestVmDownLoadServer__sub_803EC8A0(u16 arg0, s32 arg1) {
    if ((arg1 != 0) && (arg0 == 0x213C)) {
        return 1;
    }
    if ((s32) (arg0 & 0xFF00) == 0x2500) {
        return 1;
    }
    return 0;
}

}
