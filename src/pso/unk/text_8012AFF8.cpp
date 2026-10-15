#include "types.h"
struct Obj_8012AFF8 {
    u8 pad0[0xF4];
    s32 unkF4;
    u8 padF8[0x188 - 0xF8];
    s32 unk188;
};

extern "C" {
void set_flags__10TObjPlayerFUl(void *, u32);
void update_trail_slot__11TItemWeaponFPvi(void *, s32);
void draw_weapon_model(void *);
void draw_weapon_at_joint(void *, s32);
s32 is_rand_below_threshold__10TObjPlayerFv(void *);
void TObjPlayer__sub_8012B1F0(void *p, s16 v);
s16 TObjPlayer__sub_8012B1F8(void *p);
extern u8 lbl_805D53EC;
void draw_dual_weapons__10TObjPlayerFPv(Obj_8012AFF8 *arg0);
}

extern "C" {

void draw_dual_weapons__10TObjPlayerFPv(Obj_8012AFF8 *arg0) {
    s32 saved;
    s32 savedF4;
    saved = TObjPlayer__sub_8012B1F8(arg0);
    savedF4 = arg0->unkF4;
    if (is_rand_below_threshold__10TObjPlayerFv(arg0) == 0) {
        TObjPlayer__sub_8012B1F0(arg0, 8);
        set_flags__10TObjPlayerFUl(&lbl_805D53EC, 4);
    }
    draw_weapon_model(arg0);
    if (TObjPlayer__sub_8012B1F8(arg0) != 8) {
        update_trail_slot__11TItemWeaponFPvi(arg0, 0);
    }
    arg0->unkF4 = arg0->unk188;
    if (is_rand_below_threshold__10TObjPlayerFv(arg0) == 0) {
        TObjPlayer__sub_8012B1F0(arg0, 8);
        set_flags__10TObjPlayerFUl(&lbl_805D53EC, 4);
    } else {
        TObjPlayer__sub_8012B1F0(arg0, saved);
    }
    draw_weapon_at_joint(arg0, 0x23);
    if (TObjPlayer__sub_8012B1F8(arg0) != 8) {
        update_trail_slot__11TItemWeaponFPvi(arg0, 1);
    }
    arg0->unkF4 = savedF4;
    TObjPlayer__sub_8012B1F0(arg0, saved);
}

}
