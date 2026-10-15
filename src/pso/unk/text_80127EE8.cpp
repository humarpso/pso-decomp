#include "types.h"

struct RecoveredGlobal_80127F40_lbl_804A0588 {
    s32 value;
    u8 remaining[0x1C];
};

extern "C" {
s32 update_trail_slot__11TItemWeaponFPvi(void *, int);
s32 draw_weapon_at_joint(void *, int);
void update_dual_weapon_trails__10TObjPlayerFPv(u8 *arg0);
u8 * init_vtable_804A3738__10TObjPlayerFPv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *yamigarasu_create(u8 *arg0);
u8 * TItemTimerEvent__ct(void *, s16, s32);
extern RecoveredGlobal_80127F40_lbl_804A0588 lbl_804A0588;
u8 *confusion_curse_timer_ct(u8 *arg0, s16 arg1, s32 arg2, f32 farg0);
}

extern "C" {

u8 *yamigarasu_create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_804A3738__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

typedef char RecoveredGlobal_80127F40_lbl_804A0588_size[sizeof(RecoveredGlobal_80127F40_lbl_804A0588) == 0x20 ? 1 : -1];
u8 *confusion_curse_timer_ct(u8 *arg0, s16 arg1, s32 arg2, f32 farg0) {
    TItemTimerEvent__ct(arg0, arg1, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804A0588.value;
    *(f32 *)((s8 *)arg0 + 0x2C) = farg0;
    return arg0;
}

void update_dual_weapon_trails__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;
    draw_weapon_at_joint((void *) (arg0), (int) (0x31));
    update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (0));
    update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (1));
    temp_r31 = *(s32 *)((s8 *)arg0 + 0xF4);
    *(s32 *)((s8 *)arg0 + 0xF4) = (s32) *(s32 *)((s8 *)arg0 + 0x188);
    draw_weapon_at_joint((void *) (arg0), (int) (0x24));
    *(s32 *)((s8 *)arg0 + 0xF4) = temp_r31;
    update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (2));
    update_trail_slot__11TItemWeaponFPvi((void *) (arg0), (int) (3));
}

}
