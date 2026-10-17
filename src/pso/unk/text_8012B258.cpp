#ifndef PSO_ITEMS_TITEMWEAPONPARTISAN_H
#define PSO_ITEMS_TITEMWEAPONPARTISAN_H
#include "pso/items/TItemWeapon.h"
#include "pso/item/TUnk_804A4D70.h"
struct TItemWeaponPartisan : TItemWeapon {
    virtual ~TItemWeaponPartisan();
    virtual void emit_marker_effects();
    s32 rotation;
    WeaponVector scale;
    WeaponVector first_translation;
    WeaponVector second_translation;
};
typedef char PartisanRotationOffset[(offsetof(TItemWeaponPartisan,rotation)==0x1F8)?1:-1];
typedef char PartisanScaleOffset[(offsetof(TItemWeaponPartisan,scale)==0x1FC)?1:-1];
typedef char PartisanFirstTranslationOffset[(offsetof(TItemWeaponPartisan,first_translation)==0x208)?1:-1];
typedef char PartisanSecondTranslationOffset[(offsetof(TItemWeaponPartisan,second_translation)==0x214)?1:-1];
typedef char PartisanSize[(sizeof(TItemWeaponPartisan)==0x220)?1:-1];
#endif
extern "C" {
u8 get_slot_count__5TItemFv(TItemWeapon*);
s32 is_mode_two_and_ready__10TObjPlayerFv(TItemWeapon*);
int obj_getPtr2B0_20(u8 *p);
s32 try_spend_actor_meseta(u8 *arg0, s32 arg1);
void show_meseta_label(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void update_active_game_effect__10TObjPlayerFv(TItemWeapon*);
void *spawn_particle_effect(void *pos, s32 id);
extern const f32 lbl_805DAE80 = 3.0f;
}
void TUnk_804A4D70::emit_marker_effects() {
    switch (get_slot_count__5TItemFv(this)) {
    case 6:
        if (is_mode_two_and_ready__10TObjPlayerFv(this) && obj_getPtr2B0_20((u8 *)player) >= 10000) {
            try_spend_actor_meseta((u8 *)player, 10000);
            show_meseta_label((s32)player, (u32)((WeaponVector*)((u8*)player + 0x2FC)), 0, -10000);
            apply_scale_if_active(*(const volatile f32 *)&lbl_805DAE80);
            spawn_particle_effect((WeaponVector*)((u8*)player + 0x2FC), 0x66);
            spawn_particle_effect((WeaponVector*)((u8*)player + 0x2FC), 0x66);
        } else {
            update_active_game_effect__10TObjPlayerFv(this);
        }
        break;
    default:
        update_active_game_effect__10TObjPlayerFv(this);
        break;
    }
}
