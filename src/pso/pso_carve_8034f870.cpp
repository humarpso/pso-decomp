#include "types.h"

extern "C" {

int fn_8011E87C(void*, void*);
int fn_80120BBC(void*, void*);
void fn_8034F870(void* p);

void fn_8034F870(void* p) { fn_80120BBC(p, (void*)49); fn_8011E87C(p, (void*)0); fn_8011E87C(p, (void*)1); }

}
