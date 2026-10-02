#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void update_claw_weapon_trails(void* p);
void *set_vtable_mode1__10TObjPlayerFPv(void *arg0);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void update_claw_weapon_trails(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); }

extern M2C_UNK lbl_804A1C38[];

void *set_vtable_mode1__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1C38;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}

}
