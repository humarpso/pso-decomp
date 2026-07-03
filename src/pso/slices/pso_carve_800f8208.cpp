#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK lbl_80499970[];
extern void * lbl_805D5330;

void *fn_800F8208(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80499970;
    lbl_805D5330 = arg0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
