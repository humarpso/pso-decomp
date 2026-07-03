#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__16TObjBagWarnWin4PFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__16TObjBagWarnWin4P[];
extern void *lbl_805D284C;

void *__ct__16TObjBagWarnWin4PFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjBagWarnWin4P;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D284C;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0xA0) = 0;
    return arg0;
}

}
