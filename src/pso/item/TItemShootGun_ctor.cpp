#include "pso/TItemShootGun.h"
#include "types.h"
#include "pso/TItemShoot.h"
#include "pso/TItemLoad.h"
#include "pso/item/TItem.h"

struct WeaponColor {
    s32 kind;
    f32 r, g, b;
};

struct GunStarLightBlock {
    u32 w0;
    u32 w1;
    u8 kind;
    u8 r, g, b;
    u32 w3;
    u32 w4;
};

extern "C" {
extern const char *item_shoot_gun_class_name;
extern s32 tl_07;
extern const f32 lbl_805DAC64;
extern const GunStarLightBlock gun_shot_star_light_parameters[];
WeaponColor get_weapon_color__11TItemWeaponFPv(void *arg0);
void lookup_item_data__9TItemLoadFlPl(s32, s32 *);
void get_data_entry__9TItemLoadFlPl(s32, s32 *);
u8 get_slot_count__5TItemFv(void *);
u8 *spawn_star_light_2d__Flll(s32 arg0, s32 arg1, s32 arg2);
}

TItemShootGun::TItemShootGun(void *owner, const Vec *pos, const Vec *endpoint, f32 life)
    : TItemShootModel(owner, pos, endpoint, life) {
    this->m_name = item_shoot_gun_class_name;
    WeaponColor color = get_weapon_color__11TItemWeaponFPv(owner);
    GunStarLightBlock blk = gun_shot_star_light_parameters[0];
    blk.r = (u8)(lbl_805DAC64 * color.r);
    blk.g = (u8)(lbl_805DAC64 * color.g);
    blk.b = (u8)(lbl_805DAC64 * color.b);
    this->m_50 = (TObject *)spawn_star_light_2d__Flll((s32)&this->m_pos, (s32)&blk, tl_07);
    TItemLoad::lookup_item_data(0, (s32 *)&this->m_58);
    TItemLoad::get_data_entry(0, (s32 *)&this->m_5C);
    this->m_6C = 0;
    this->m_70 = ((TItem *)owner)->get_slot_count();
    if ((s32)this->m_70 < 0 || (s32)this->m_70 > 4) {
        this->m_70 = 4;
    }
}
