#include "types.h"
#include "pso/unk/TUnk_804A5C18.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_shot_weapon(u8 *arg0);
s32 TItemWeapon__ct(void *, s32, void *);
void spawn_weapon_impact_effect();
void create_gun_shot();
extern u8 lbl_804A5C18[];
extern const f32 lbl_805DAF58;
extern const f32 lbl_805DAF68;
void *construct_shot_weapon(void *arg0, s32 parent, void *arg2);

void *construct_shot_weapon(void *arg0, s32 parent, void *arg2) {
    u8 temp_r0;
    TItemWeapon__ct(arg0, parent, arg2);
    *(void **)((s8 *)arg0 + 0x18) = lbl_804A5C18;
    ((TObjPlayer *)arg0)->set_status_flags(2);
    *(void **)((s8 *)arg0 + 0x1F0) = (void *)create_gun_shot;
    *(void **)((s8 *)arg0 + 0x1EC) = (void *)spawn_weapon_impact_effect;
    *(f32 *)((s8 *)arg0 + 0x1E4) = (f32) lbl_805DAF68;
    ((TUnk_804A5C18 *)arg0)->m_220 = 0x2000;
    *(f32 *)((s8 *)arg0 + 0x224) = (f32) lbl_805DAF58;
    ((TUnk_804A5C18 *)arg0)->m_214 = -1;
    *(s32 *)((s8 *)arg0 + 0x218) = -1;
    ((TUnk_804A5C18 *)arg0)->m_220 = -1;
    temp_r0 = *(u8 *)((s8 *)arg2 + 2);
    switch ((s32) temp_r0) {
    case 5:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 9;
        ((TUnk_804A5C18 *)arg0)->m_1fc = 4;
        *(s32 *)((s8 *)arg0 + 0x200) = 8;
        ((TUnk_804A5C18 *)arg0)->m_204 = 3;
        *(s32 *)((s8 *)arg0 + 0x208) = 7;
        ((TUnk_804A5C18 *)arg0)->m_20c = 1;
        *(s32 *)((s8 *)arg0 + 0x210) = 5;
        break;
    case 6:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 0xA;
        ((TUnk_804A5C18 *)arg0)->m_1fc = 8;
        *(s32 *)((s8 *)arg0 + 0x200) = 4;
        ((TUnk_804A5C18 *)arg0)->m_204 = 7;
        *(s32 *)((s8 *)arg0 + 0x208) = 3;
        ((TUnk_804A5C18 *)arg0)->m_20c = 5;
        *(s32 *)((s8 *)arg0 + 0x210) = 1;
        ((TUnk_804A5C18 *)arg0)->m_21c = 9;
        break;
    case 7:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 0x13;
        ((TUnk_804A5C18 *)arg0)->m_1fc = 0xE;
        *(s32 *)((s8 *)arg0 + 0x200) = 0xA;
        ((TUnk_804A5C18 *)arg0)->m_204 = 6;
        *(s32 *)((s8 *)arg0 + 0x208) = 2;
        ((TUnk_804A5C18 *)arg0)->m_20c = 3;
        *(s32 *)((s8 *)arg0 + 0x210) = 0xB;
        ((TUnk_804A5C18 *)arg0)->m_214 = 7;
        *(s32 *)((s8 *)arg0 + 0x218) = 0xF;
        ((TUnk_804A5C18 *)arg0)->m_21c = 1;
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0x1F8) = 7;
        ((TUnk_804A5C18 *)arg0)->m_1fc = 3;
        *(s32 *)((s8 *)arg0 + 0x200) = 5;
        ((TUnk_804A5C18 *)arg0)->m_204 = 2;
        *(s32 *)((s8 *)arg0 + 0x208) = 6;
        ((TUnk_804A5C18 *)arg0)->m_20c = 1;
        *(s32 *)((s8 *)arg0 + 0x210) = 4;
        break;
    }
    if ((u8) *(u8 *)((s8 *)arg2 + 2) >= 5U) {
        ((TObjPlayer *)arg0)->set_atp(-1);
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
