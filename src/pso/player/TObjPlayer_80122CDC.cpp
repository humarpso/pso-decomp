#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_cane__10TObjPlayerFi(s32 arg0);
void *set_vtable_804A1478__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_attack_stage__11TItemWeaponFPv(s32);
void TItemWeapon__ct(void *);

extern s32 tl_05;

void spawn_cane__10TObjPlayerFi(s32 arg0) {
    if ((get_slot_count__14TItemProShieldFPv() < 4U) && (get_attack_stage__11TItemWeaponFPv(arg0) == 0)) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern M2C_UNK lbl_804A1478[];

void *set_vtable_804A1478__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1478;
    return arg0;
}

}
