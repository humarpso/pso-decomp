#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjPlayer__sub_801284F0(void* p);
void *TObjPlayer__sub_80128538(void *arg0);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void construct_srank_weapon(void *);

void TObjPlayer__sub_801284F0(void* p) { draw_weapon_at_joint(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); }

extern M2C_UNK lbl_804A3C20[];

void *TObjPlayer__sub_80128538(void *arg0) {
    construct_srank_weapon(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A3C20;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
