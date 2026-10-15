#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int draw_status_icon__10TObjPlayerFl(void*, void*);
int draw_weapon_model(void*);
int draw_weapon_at_joint(void*, void*);

void TObjPlayer::draw_status_icons(void* a1, void* a2) { draw_weapon_model(this); draw_status_icon__10TObjPlayerFl(this, a1); draw_weapon_at_joint(this, (void*)35); draw_status_icon__10TObjPlayerFl(this, a2); }

}
