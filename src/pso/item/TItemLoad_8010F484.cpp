#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__9TItemLoadFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TItemLoad__sub_80110788(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_8049F3F4[];

void *init__9TItemLoadFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F3F4;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, void **, 0x28) = arg4;
    TItemLoad__sub_80110788((void *)((char *)arg0 + 44));
    M2C_FIELD(arg0, u32 *, 0x20) = 1;
    return arg0;
}

}
