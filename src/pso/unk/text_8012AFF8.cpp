#include "types.h"
#include "pso/player/TUnk_804A4C78.h"
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
void reserved_53__13TUnk_804A4C78Fv(Obj_8012AFF8 *arg0);
}

extern "C" {

void TUnk_804A4C78::reserved_53() {
    s32 saved;
    s32 savedF4;
    saved = sub_8012B1F8__13TUnk_804A4C78Fv(((Obj_8012AFF8 *)this));
    savedF4 = ((Obj_8012AFF8 *)this)->unkF4;
    if (is_rand_below_threshold__10TObjPlayerFv(((Obj_8012AFF8 *)this)) == 0) {
        sub_8012B1F0__13TUnk_804A4C78Fs(((Obj_8012AFF8 *)this), 8);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(4);
    }
    draw_weapon_model(((Obj_8012AFF8 *)this));
    if (sub_8012B1F8__13TUnk_804A4C78Fv(((Obj_8012AFF8 *)this)) != 8) {
        update_trail_slot__11TItemWeaponFPvi(((Obj_8012AFF8 *)this), 0);
    }
    ((Obj_8012AFF8 *)this)->unkF4 = ((Obj_8012AFF8 *)this)->unk188;
    if (is_rand_below_threshold__10TObjPlayerFv(((Obj_8012AFF8 *)this)) == 0) {
        sub_8012B1F0__13TUnk_804A4C78Fs(((Obj_8012AFF8 *)this), 8);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(4);
    } else {
        sub_8012B1F0__13TUnk_804A4C78Fs(((Obj_8012AFF8 *)this), saved);
    }
    draw_weapon_at_joint(((Obj_8012AFF8 *)this), 0x23);
    if (sub_8012B1F8__13TUnk_804A4C78Fv(((Obj_8012AFF8 *)this)) != 8) {
        update_trail_slot__11TItemWeaponFPvi(((Obj_8012AFF8 *)this), 1);
    }
    ((Obj_8012AFF8 *)this)->unkF4 = savedF4;
    sub_8012B1F0__13TUnk_804A4C78Fs(((Obj_8012AFF8 *)this), saved);
}

}
