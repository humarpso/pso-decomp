#include "types.h"

extern "C" {

void draw_status_icons__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2);
int draw_status_icon__10TObjPlayerFPvi(void*, void*);
int TObjPlayer__sub_80120908(void*);
int TObjPlayer__sub_80120BBC(void*, void*);

void draw_status_icons__10TObjPlayerFPvPvPv(void* p, void* a1, void* a2) { TObjPlayer__sub_80120908(p); draw_status_icon__10TObjPlayerFPvi(p, a1); TObjPlayer__sub_80120BBC(p, (void*)35); draw_status_icon__10TObjPlayerFPvi(p, a2); }

}
