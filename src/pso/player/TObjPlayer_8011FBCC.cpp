#include "types.h"

extern "C" {

void TObjPlayer__sub_8011FBCC(void* p, void* a1, void* a2);
int draw_status_icon__10TObjPlayerFPvi(void*, void*);
int TObjPlayer__sub_80120908(void*);
int TObjPlayer__sub_80120BBC(void*, void*);

void TObjPlayer__sub_8011FBCC(void* p, void* a1, void* a2) { TObjPlayer__sub_80120908(p); draw_status_icon__10TObjPlayerFPvi(p, a1); TObjPlayer__sub_80120BBC(p, (void*)35); draw_status_icon__10TObjPlayerFPvi(p, a2); }

}
