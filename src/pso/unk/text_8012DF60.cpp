#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_shot_weapon(u8 *arg0);
M2C_UNK TItemWeapon__ct(void *, s32, void *);
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK set_atp__10TObjPlayerFPvs(void *, M2C_UNK);
void spawn_weapon_impact_effect();
void create_gun_shot();
extern u8 lbl_804A5C18[];
extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF68;
void *construct_shot_weapon(void *arg0, s32 parent, void *arg2);
}

extern "C" {

void *construct_shot_weapon(void *arg0, s32 parent, void *arg2) {
    u8 temp_r0;
    TItemWeapon__ct(arg0, parent, arg2);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804A5C18;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, void **, 0x1F0) = (void *)create_gun_shot;
    M2C_FIELD(arg0, void **, 0x1EC) = (void *)spawn_weapon_impact_effect;
    M2C_FIELD(arg0, f32 *, 0x1E4) = (f32) lbl_805DAF68;
    M2C_FIELD(arg0, s32 *, 0x220) = 0x2000;
    M2C_FIELD(arg0, f32 *, 0x224) = (f32) lbl_805DAF58;
    M2C_FIELD(arg0, s32 *, 0x214) = -1;
    M2C_FIELD(arg0, s32 *, 0x218) = -1;
    M2C_FIELD(arg0, s32 *, 0x220) = -1;
    temp_r0 = M2C_FIELD(arg2, u8 *, 2);
    switch ((s32) temp_r0) {
    case 5:
        M2C_FIELD(arg0, s32 *, 0x1F8) = 9;
        M2C_FIELD(arg0, s32 *, 0x1FC) = 4;
        M2C_FIELD(arg0, s32 *, 0x200) = 8;
        M2C_FIELD(arg0, s32 *, 0x204) = 3;
        M2C_FIELD(arg0, s32 *, 0x208) = 7;
        M2C_FIELD(arg0, s32 *, 0x20C) = 1;
        M2C_FIELD(arg0, s32 *, 0x210) = 5;
        break;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x1F8) = 0xA;
        M2C_FIELD(arg0, s32 *, 0x1FC) = 8;
        M2C_FIELD(arg0, s32 *, 0x200) = 4;
        M2C_FIELD(arg0, s32 *, 0x204) = 7;
        M2C_FIELD(arg0, s32 *, 0x208) = 3;
        M2C_FIELD(arg0, s32 *, 0x20C) = 5;
        M2C_FIELD(arg0, s32 *, 0x210) = 1;
        M2C_FIELD(arg0, s32 *, 0x21C) = 9;
        break;
    case 7:
        M2C_FIELD(arg0, s32 *, 0x1F8) = 0x13;
        M2C_FIELD(arg0, s32 *, 0x1FC) = 0xE;
        M2C_FIELD(arg0, s32 *, 0x200) = 0xA;
        M2C_FIELD(arg0, s32 *, 0x204) = 6;
        M2C_FIELD(arg0, s32 *, 0x208) = 2;
        M2C_FIELD(arg0, s32 *, 0x20C) = 3;
        M2C_FIELD(arg0, s32 *, 0x210) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x214) = 7;
        M2C_FIELD(arg0, s32 *, 0x218) = 0xF;
        M2C_FIELD(arg0, s32 *, 0x21C) = 1;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x1F8) = 7;
        M2C_FIELD(arg0, s32 *, 0x1FC) = 3;
        M2C_FIELD(arg0, s32 *, 0x200) = 5;
        M2C_FIELD(arg0, s32 *, 0x204) = 2;
        M2C_FIELD(arg0, s32 *, 0x208) = 6;
        M2C_FIELD(arg0, s32 *, 0x20C) = 1;
        M2C_FIELD(arg0, s32 *, 0x210) = 4;
        break;
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

u8 *create_shot_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x22C));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_shot_weapon((void *)(temp_r3), (s32)(tl_05), (void *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
