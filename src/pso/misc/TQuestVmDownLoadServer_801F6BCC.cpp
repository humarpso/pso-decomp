#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__22TQuestVmDownLoadServerFv(void);
M2C_UNK TQuestVmDownLoadServer__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern u32 TQuestVmDownLoadServer__data_805D5F24;
extern s32 tl_00;

void create__22TQuestVmDownLoadServerFv(void) {
    void *temp_r3;

    if ((u32) TQuestVmDownLoadServer__data_805D5F24 == 0U) {
        temp_r3 = __nw__7TObjectFUl(0x2A8);
        if (temp_r3 != 0) {
            TQuestVmDownLoadServer__ct(temp_r3, tl_00);
        }
    }
}

}
