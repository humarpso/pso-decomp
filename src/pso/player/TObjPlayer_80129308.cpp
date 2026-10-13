#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80129308(void *arg0);
void construct_srank_weapon(void *);

extern M2C_UNK lbl_804A4138[];

void *TObjPlayer__sub_80129308(void *arg0) {
    construct_srank_weapon(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4138;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    return arg0;
}

}
