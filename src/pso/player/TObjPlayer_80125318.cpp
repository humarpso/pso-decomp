#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80125318(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
void TObjPlayer__sub_801210B0(void *, int, int, int);
void TObjPlayer__sub_80121CB0(void *, int);

extern M2C_UNK lbl_804A2358[];

void *TObjPlayer__sub_80125318(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2358;
    TObjPlayer__sub_801210B0(arg0, 2, 6, 5);
    TObjPlayer__sub_8012106C(arg0, 35);
    TObjPlayer__sub_80121CB0(arg0, 13);
    return arg0;
}

}
