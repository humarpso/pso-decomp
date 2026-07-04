#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK lbl_804E4BF0[];
extern void *lbl_805D6978;
void TBoss4DarkFalz__sub_8004B4F0(void *, void *);

void *fn_802F3BC8(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E4BF0;
    if (lbl_805D6978 == NULL) {
        lbl_805D6978 = arg0;
    }
    TBoss4DarkFalz__sub_8004B4F0((void *)((char *)arg0 + 28), arg2);
    return arg0;
}

}
