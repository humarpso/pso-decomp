#include "types.h"

struct T_80308328 { u8 pad0[0x40]; u32 flags; u8 pad44[0xC]; s32 f50; u8 pad54[0x1C]; void *f70; void *f74; s32 f78; s32 f7c; };

extern "C" {
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32);
s32 fire_shot_at_target__11TItemWeaponFv(void *, void *, int, int);
void fire_nug2000_from_joint__10TObjPlayerFPv(u8 *arg0);
void spawn_nug2000_hit_explosion();
s32 apply_config_if_valid__13TAdVIConfigGCFii(s32, s32);
void config_nug2000_attack_collider__10TObjPlayerFPvPv(void *self, T_80308328 *p);
}

extern "C" {

void config_nug2000_attack_collider__10TObjPlayerFPvPv(void *self, T_80308328 *p) {
    p->f74 = (void *)spawn_nug2000_hit_explosion;
    p->f70 = (void *)apply_config_if_valid__13TAdVIConfigGCFii;
    p->f50 = -0x4000;
    p->f78 = 0x1bb;
    p->f7c = 0x1bc;
    p->flags |= 0x80;
}

void fire_nug2000_from_joint__10TObjPlayerFPv(u8 *arg0) {
    s32 sp8;
    draw_icon__10TObjPlayerFPvii(arg0, 1, (s32) &sp8);
    fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0x188)), (int) (0));
}

}
