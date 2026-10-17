#ifndef PSO_ENEMY_BRINGEREFFECTS_H
#define PSO_ENEMY_BRINGEREFFECTS_H

#include "types.h"

extern "C" {
void TObjEneDf2Bringer__sub_8009A2A0(void);
void *__dt__13TUnk_8048FE08Fv(void *arg0, s16 arg1);
void *__dt__13TUnk_8048FE64Fv(void *arg0, s16 arg1);
void *__dt__13TUnk_8048FE7CFv(void *arg0, s16 arg1);
void *__dt__26TObjEneDf2Bringer_Eff_RushFv(void *arg0, s16 arg1);
void bringer_effect_cleanup_noop(void);
u8 *construct_bringer_rush_effect(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);
u8 *fn_8009A398(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3);
void init_bringer_effect_tables(void);
void render_bringer_rush_effect_noop(void);
void update_bringer_rush_effect(u8 *arg0);
}

#endif
