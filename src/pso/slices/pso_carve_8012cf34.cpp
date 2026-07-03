#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804A5740[];
void fn_8012106C(void *, int);

void *fn_8012CF34(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5740;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 10922;
    fn_8012106C(arg0, 1536);
    return arg0;
}

}
