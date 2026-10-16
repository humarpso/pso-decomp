#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_handgun_weapon(u8 *arg0);
u8 * init_with_update_handler__13TUnk_804A2D88Fv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_suppressed_gun_weapon(u8 *arg0);
s32 TItemWeapon__ct(void*,s32,void*);
void spawn_weapon_impact_effect();
extern s32 lbl_804A2C90[];
u8 *construct_handgun_weapon(u8 *arg0, s32 arg1, u8 *arg2);
}

extern "C" {

u8 *create_suppressed_gun_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_with_update_handler__13TUnk_804A2D88Fv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

u8 *construct_handgun_weapon(u8 *arg0, s32 arg1, u8 *arg2) {
    TItemWeapon__ct(arg0,arg1,arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2C90;
    *(s32 **)((s8 *)arg0 + 0x1EC) = (s32*)&spawn_weapon_impact_effect;
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 5U) {
        ((TObjPlayer *)arg0)->set_atp((int) (-1));
    }
    return arg0;
}

u8 *create_handgun_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_handgun_weapon((u8 *)(temp_r3), (s32)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
