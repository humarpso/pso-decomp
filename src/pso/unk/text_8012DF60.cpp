#include "types.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_shot_weapon(u8 *arg0);
s32 TItemWeapon__ct(void *, s32, void *);
s32 set_status_flags__10TObjPlayerFPvUi(void *, s32);
s32 set_atp__10TObjPlayerFs(void *, s32);
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
    *(void **)((s8 *)arg0 + 0x18) = lbl_804A5C18;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    *(void **)((s8 *)arg0 + 0x1F0) = (void *)create_gun_shot;
    *(void **)((s8 *)arg0 + 0x1EC) = (void *)spawn_weapon_impact_effect;
    *(f32 *)((s8 *)arg0 + 0x1E4) = (f32) lbl_805DAF68;
    *(s32 *)((s8 *)arg0 + 0x220) = 0x2000;
    *(f32 *)((s8 *)arg0 + 0x224) = (f32) lbl_805DAF58;
    *(s32 *)((s8 *)arg0 + 0x214) = -1;
    *(s32 *)((s8 *)arg0 + 0x218) = -1;
    *(s32 *)((s8 *)arg0 + 0x220) = -1;
    temp_r0 = *(u8 *)((s8 *)arg2 + 2);
    switch ((s32) temp_r0) {
    case 5:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 9;
        *(s32 *)((s8 *)arg0 + 0x1FC) = 4;
        *(s32 *)((s8 *)arg0 + 0x200) = 8;
        *(s32 *)((s8 *)arg0 + 0x204) = 3;
        *(s32 *)((s8 *)arg0 + 0x208) = 7;
        *(s32 *)((s8 *)arg0 + 0x20C) = 1;
        *(s32 *)((s8 *)arg0 + 0x210) = 5;
        break;
    case 6:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 0xA;
        *(s32 *)((s8 *)arg0 + 0x1FC) = 8;
        *(s32 *)((s8 *)arg0 + 0x200) = 4;
        *(s32 *)((s8 *)arg0 + 0x204) = 7;
        *(s32 *)((s8 *)arg0 + 0x208) = 3;
        *(s32 *)((s8 *)arg0 + 0x20C) = 5;
        *(s32 *)((s8 *)arg0 + 0x210) = 1;
        *(s32 *)((s8 *)arg0 + 0x21C) = 9;
        break;
    case 7:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 0x13;
        *(s32 *)((s8 *)arg0 + 0x1FC) = 0xE;
        *(s32 *)((s8 *)arg0 + 0x200) = 0xA;
        *(s32 *)((s8 *)arg0 + 0x204) = 6;
        *(s32 *)((s8 *)arg0 + 0x208) = 2;
        *(s32 *)((s8 *)arg0 + 0x20C) = 3;
        *(s32 *)((s8 *)arg0 + 0x210) = 0xB;
        *(s32 *)((s8 *)arg0 + 0x214) = 7;
        *(s32 *)((s8 *)arg0 + 0x218) = 0xF;
        *(s32 *)((s8 *)arg0 + 0x21C) = 1;
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 7;
        *(s32 *)((s8 *)arg0 + 0x1FC) = 3;
        *(s32 *)((s8 *)arg0 + 0x200) = 5;
        *(s32 *)((s8 *)arg0 + 0x204) = 2;
        *(s32 *)((s8 *)arg0 + 0x208) = 6;
        *(s32 *)((s8 *)arg0 + 0x20C) = 1;
        *(s32 *)((s8 *)arg0 + 0x210) = 4;
        break;
    }
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 5U) {
        set_atp__10TObjPlayerFs(arg0, -1);
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
