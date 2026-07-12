#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__13TObjResultWinFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void TQuestVmDownLoadServer__sub_80074114(void *);
void fn_80074664(void *, void *);

extern M2C_UNK __vt__13TObjResultWin[];
extern void *lbl_805D2878;

void *__ct__13TObjResultWinFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjResultWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2878;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    fn_80074664((void *)((char *)arg0 + 296), arg2);
    M2C_FIELD(arg0, u32 *, 0x24) = 60;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    TQuestVmDownLoadServer__sub_80074114(arg0);
    return arg0;
}

}
