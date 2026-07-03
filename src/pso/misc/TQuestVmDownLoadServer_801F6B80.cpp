#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_801F6B80(void);
void TQuestVmDownLoadServer__sub_801F6B98(void);
s32 TQuestVmDownLoadServer__sub_801F6BB0(void);
void TQuestVmDownLoadServer__sub_801F6BCC(void);
M2C_UNK TQuestVmDownLoadServer__ct(void *, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern void *lbl_805D5F24;

void TQuestVmDownLoadServer__sub_801F6B80(void) {
    if ((void *) lbl_805D5F24 != NULL) {
        M2C_FIELD(lbl_805D5F24, s32 *, 0x2A0) = 0;
    }
}

extern void *lbl_805D5F24;

void TQuestVmDownLoadServer__sub_801F6B98(void) {
    if ((void *) lbl_805D5F24 != NULL) {
        M2C_FIELD(lbl_805D5F24, s32 *, 0x2A0) = 0;
    }
}

extern void *lbl_805D5F24;

s32 TQuestVmDownLoadServer__sub_801F6BB0(void) {
    if ((void *) lbl_805D5F24 != NULL) {
        return M2C_FIELD(lbl_805D5F24, s32 *, 0x230);
    }
    return 0;
}

extern u32 lbl_805D5F24;
extern s32 tl_00;

void TQuestVmDownLoadServer__sub_801F6BCC(void) {
    void *temp_r3;

    if ((u32) lbl_805D5F24 == 0U) {
        temp_r3 = __nw__7TObjectFUl(0x2A8);
        if (temp_r3 != 0) {
            TQuestVmDownLoadServer__ct(temp_r3, tl_00);
        }
    }
}

}
