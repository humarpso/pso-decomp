#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_vtable_variant__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804ECEB8[];
extern M2C_UNK fn_8011B598[];

void *init_vtable_variant__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECEB8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = fn_8011B598;
    return arg0;
}

}
