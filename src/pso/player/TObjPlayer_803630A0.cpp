#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_804F27E0__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012106C(void *, int);
void TObjPlayer__sub_8012A884(void *);

extern M2C_UNK lbl_804F27E0[];

void *enter_state_804F27E0__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F27E0;
    TObjPlayer__sub_8012106C(arg0, 3);
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    return arg0;
}

}
