#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_35__10TObjPlayerFPv(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A69DC[];
extern M2C_UNK create_shoot_model__10TObjPlayerFiiif[];

void *init_state_35__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A69DC;
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create_shoot_model__10TObjPlayerFiiif;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 3276;
    M2C_FIELD(arg0, u32 *, 0x200) = 0;
    M2C_FIELD(arg0, u32 *, 0x204) = 1;
    return arg0;
}

}
