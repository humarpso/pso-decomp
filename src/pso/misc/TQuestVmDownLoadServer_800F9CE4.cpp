#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_ready__22TQuestVmDownLoadServerFv(void);
M2C_UNK fn_800F8F58();

extern s32 lbl_805D49B4;
extern s32 lbl_805D5354;
extern s32 TQuestVmDownLoadServer__data_805D5F18;

s32 is_ready__22TQuestVmDownLoadServerFv(void) {
    fn_800F8F58();
    if ((s32) lbl_805D49B4 != 0) {
        return 0;
    }
    if ((s32) TQuestVmDownLoadServer__data_805D5F18 != 0) {
        return 0;
    }
    return lbl_805D5354 ? 1 : 0;
}

}
