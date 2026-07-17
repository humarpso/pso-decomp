#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOVS2Wreck04__ct(void *arg0, void *arg1);
void TOVS2Wall01__sub_8017C8EC(void *, void *, int);

extern M2C_UNK __vt__12TOVS2Wreck04[];
extern void *lbl_805D31D4;

void *TOVS2Wreck04__ct(void *arg0, void *arg1) {
    TOVS2Wall01__sub_8017C8EC(arg0, arg1, 3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOVS2Wreck04;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D31D4;
    return arg0;
}

}
