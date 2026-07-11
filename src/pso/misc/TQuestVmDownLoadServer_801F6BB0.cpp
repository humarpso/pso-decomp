#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field230__22TQuestVmDownLoadServerFv(void);

extern void *TQuestVmDownLoadServer__data_805D5F24;

s32 get_field230__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__data_805D5F24 != NULL) {
        return M2C_FIELD(TQuestVmDownLoadServer__data_805D5F24, s32 *, 0x230);
    }
    return 0;
}

}
