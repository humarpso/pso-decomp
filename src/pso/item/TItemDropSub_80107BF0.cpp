#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemDropSub__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TItemDropSub[];
extern void *TItemDropSub__class_name;
extern void * TItemDropSub__data_805D5478;

void *TItemDropSub__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TItemDropSub;
    M2C_FIELD(arg0, void **, 0x0) = TItemDropSub__class_name;
    TItemDropSub__data_805D5478 = arg0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 10;
    return arg0;
}

}
