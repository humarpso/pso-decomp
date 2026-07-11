#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestVmDownLoadServer__sub_8007EB14(void);

extern s32 TQuestVmDownLoadServer__data_805D5F24;

s32 TQuestVmDownLoadServer__sub_8007EB14(void) {
    return TQuestVmDownLoadServer__data_805D5F24;
}

}
