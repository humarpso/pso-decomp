#include "types.h"

extern "C" {

void draw_status_icons__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2);
int draw_status_icon__10TObjPlayerFPvi(void*, void*);
int draw_weapon_model(void*);
int draw_weapon_at_joint(void*, void*);

void draw_status_icons__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2) { draw_weapon_model(p); draw_status_icon__10TObjPlayerFPvi(p, a1); draw_weapon_at_joint(p, (void*)35); draw_status_icon__10TObjPlayerFPvi(p, a2); }

}
