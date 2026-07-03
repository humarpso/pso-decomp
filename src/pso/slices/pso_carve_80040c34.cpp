#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_02;
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80483B88[];
void disallow_rendering__7TObjectFv(void *);

void *fn_80040C34(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_02);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80483B88;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
