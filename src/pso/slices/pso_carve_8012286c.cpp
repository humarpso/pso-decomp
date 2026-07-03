#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804A1098[];
void fn_8012106C(void *, int);
void fn_80121CB0(void *, int);

void *fn_8012286C(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1098;
    fn_8012106C(arg0, 34);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    fn_80121CB0(arg0, 10);
    return arg0;
}

}
