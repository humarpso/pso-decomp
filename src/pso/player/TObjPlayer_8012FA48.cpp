#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012FA48(void *arg0);
void TObjPlayer__sub_8001BED8(void *, int);
void TObjPlayer__sub_8004433C(void *);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
void TObjPlayer__sub_80121CB0(void *, int);

extern M2C_UNK lbl_804A65E0[];

void *TObjPlayer__sub_8012FA48(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A65E0;
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 516));
    TObjPlayer__sub_8001BED8((void *)((char *)arg0 + 376), 32);
    TObjPlayer__sub_8012106C(arg0, 34);
    TObjPlayer__sub_80121CB0(arg0, 5);
    return arg0;
}

}
