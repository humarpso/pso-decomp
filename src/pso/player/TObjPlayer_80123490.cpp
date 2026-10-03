#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *set_vtable__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);

extern M2C_UNK lbl_804A1950[];

void *set_vtable__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1950;
    return arg0;
}

}
