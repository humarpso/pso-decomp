#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8012A884(void *);
extern M2C_UNK lbl_804A4238[];
void fn_8012106C(void *, int);

void *fn_80129540(void *arg0) {
    fn_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4238;
    fn_8012106C(arg0, 2);
    return arg0;
}

}
