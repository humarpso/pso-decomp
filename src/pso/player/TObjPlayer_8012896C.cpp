#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012896C(void *arg0);
void TObjPlayer__sub_8012106C(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804A3F20[];
extern M2C_UNK fn_80109440[];

void *TObjPlayer__sub_8012896C(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3F20;
    TObjPlayer__sub_8012106C(arg0, 515);
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109440;
    return arg0;
}

}
