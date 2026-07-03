#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804ED1A0[];
void fn_801210B0(void *, int, int, int);
void fn_8012106C(void *, int);

void *fn_80326C48(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED1A0;
    fn_801210B0(arg0, 2, 6, 5);
    fn_8012106C(arg0, 1);
    return arg0;
}

}
