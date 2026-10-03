#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_handgun_weapon(u8 *arg0);
u8 * init_with_update_handler__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_suppressed_gun_weapon(u8 *arg0);
M2C_UNK TItemWeapon__ct(void*,s32,void*);
M2C_UNK set_atp__10TObjPlayerFPvs(void *, int);
void spawn_weapon_impact_effect();
extern M2C_UNK lbl_804A2C90[];
u8 *construct_handgun_weapon(u8 *arg0, M2C_UNK arg1, u8 *arg2);
}

extern "C" {

u8 *create_suppressed_gun_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_with_update_handler__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

u8 *construct_handgun_weapon(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TItemWeapon__ct(arg0,arg1,arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2C90;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = (M2C_UNK*)&spawn_weapon_impact_effect;
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 5U) {
        set_atp__10TObjPlayerFPvs((void *) (arg0), (int) (-1));
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
            var_r0 = (u8 *)(construct_handgun_weapon((u8 *)(temp_r3), (M2C_UNK)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
