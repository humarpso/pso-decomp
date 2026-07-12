#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_fields__10TItemEffPGFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);

extern M2C_UNK lbl_804F0AF8[];

void *init_fields__10TItemEffPGFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0AF8;
    TObjPlayer__sub_8012106C(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1F8) = -30947;
    M2C_FIELD(arg0, u32 *, 0x1FC) = -7281;
    return arg0;
}

}
