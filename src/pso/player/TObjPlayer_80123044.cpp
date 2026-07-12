#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_from_owner__10TObjPlayerFPv(void *arg0);
void *init_bringer_effect__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_801004DC(s32, s16, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_80120D50(void *);

void update_from_owner__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        TObjPlayer__sub_801004DC(M2C_FIELD(temp_r3, s32 *, 0x2C), M2C_FIELD(arg0, s16 *, 0x1F8), 0, 1);
    }
}

extern M2C_UNK lbl_804A1668[];
extern M2C_UNK create__15TItemEffBringerFUiiif[];

void *init_bringer_effect__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1668;
    M2C_FIELD(arg0, u16 *, 0x1F8) = 2;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create__15TItemEffBringerFUiiif;
    return arg0;
}

}
