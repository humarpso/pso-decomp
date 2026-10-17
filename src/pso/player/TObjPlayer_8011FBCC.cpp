#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 draw_weapon_model(void *arg0);
void draw_weapon_at_joint(s32 arg0, s8 arg1);

void TObjPlayer::draw_status_icons(void* a1, void* a2) { draw_weapon_model((void *)this); draw_status_icon((s32)a1); draw_weapon_at_joint((s32)this, (s8)((void*)35)); draw_status_icon((s32)a2); }

}
