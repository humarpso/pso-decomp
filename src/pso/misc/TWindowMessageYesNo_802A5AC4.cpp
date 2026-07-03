#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__19TWindowMessageYesNo[];
extern void *lbl_805D3DF8;

void *TWindowMessageYesNo__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowMessageYesNo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DF8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg3;
    M2C_FIELD(arg0, void **, 0x1C) = arg4;
    return arg0;
}

}
