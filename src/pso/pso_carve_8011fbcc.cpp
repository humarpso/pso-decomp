#include "types.h"

extern "C" {

int fn_801208E0(void*, void*);
int fn_80120908(void*);
int fn_80120BBC(void*, void*);
void fn_8011FBCC(void* p, void* a1, void* a2);

void fn_8011FBCC(void* p, void* a1, void* a2) { fn_80120908(p); fn_801208E0(p, a1); fn_80120BBC(p, (void*)35); fn_801208E0(p, a2); }

}
