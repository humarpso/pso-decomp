#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_804A0BC0__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);

extern M2C_UNK lbl_804A0BC0[];

void *enter_state_804A0BC0__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0BC0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    set_effect_state__10TObjPlayerFPvi(arg0, 10);
    return arg0;
}

}
