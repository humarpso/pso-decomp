#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__18TAdLoadQuestCellGC[];
extern void *lbl_805D42F8;

void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdLoadQuestCellGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D42F8;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = -1;
    return arg0;
}

}
