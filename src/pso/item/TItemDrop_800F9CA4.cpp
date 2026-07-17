#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__9TItemDropFPv(void *arg0);
void __ct__7TObjectFP7TObject(void *, s32);

extern M2C_UNK lbl_8049C658[];

void *construct__9TItemDropFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049C658;
    return arg0;
}

}
