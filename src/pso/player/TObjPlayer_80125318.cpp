#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_and_configure__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_weapon_trail_joints(void *, int, int, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A2358[];

void *init_and_configure__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2358;
    set_weapon_trail_joints(arg0, 2, 6, 5);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    set_effect_state__10TObjPlayerFPvi(arg0, 13);
    return arg0;
}

}
