#include "types.h"
#include "pso/player/TObjPlayer.h"
struct Obj_8012AFF8 {
    u8 pad0[0xF4];
    s32 unkF4;
    u8 padF8[0x188 - 0xF8];
    s32 unk188;
};

extern "C" {
void update_trail_slot__11TItemWeaponFPvi(void *, s32);
void draw_weapon_model(void *);
void draw_weapon_at_joint(void *, s32);
s32 is_rand_below_threshold__10TObjPlayerFv(void *);
void sub_8012B1F0__13TUnk_804A4C78Fs(void *p, s16 v);
s16 sub_8012B1F8__13TUnk_804A4C78Fv(void *p);
extern u8 lbl_805D53EC;
void draw_dual_weapons__10TObjPlayerFPv(Obj_8012AFF8 *arg0);
}

extern "C" {

void draw_dual_weapons__10TObjPlayerFPv(Obj_8012AFF8 *arg0) {
    s32 saved;
    s32 savedF4;
    saved = sub_8012B1F8__13TUnk_804A4C78Fv(arg0);
    savedF4 = arg0->unkF4;
    if (is_rand_below_threshold__10TObjPlayerFv(arg0) == 0) {
        sub_8012B1F0__13TUnk_804A4C78Fs(arg0, 8);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(4);
    }
    draw_weapon_model(arg0);
    if (sub_8012B1F8__13TUnk_804A4C78Fv(arg0) != 8) {
        update_trail_slot__11TItemWeaponFPvi(arg0, 0);
    }
    arg0->unkF4 = arg0->unk188;
    if (is_rand_below_threshold__10TObjPlayerFv(arg0) == 0) {
        sub_8012B1F0__13TUnk_804A4C78Fs(arg0, 8);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(4);
    } else {
        sub_8012B1F0__13TUnk_804A4C78Fs(arg0, saved);
    }
    draw_weapon_at_joint(arg0, 0x23);
    if (sub_8012B1F8__13TUnk_804A4C78Fv(arg0) != 8) {
        update_trail_slot__11TItemWeaponFPvi(arg0, 1);
    }
    arg0->unkF4 = savedF4;
    sub_8012B1F0__13TUnk_804A4C78Fs(arg0, saved);
}

}
