#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_800FA9A8(void);
M2C_UNK queue_destruction__7TObjectFv(void*);

extern u32 lbl_805D5390;

void TQuestVmDownLoadServer__sub_800FA9A8(void) {
    if ((u32) lbl_805D5390 != 0U) {
        queue_destruction__7TObjectFv((void*)lbl_805D5390);
    }
    lbl_805D5390 = 0U;
}

}
