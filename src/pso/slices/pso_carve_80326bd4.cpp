#include "types.h"

extern "C" {

int fn_8011E87C(void*, void*);
int fn_80120BBC(void*, void*);
int fn_80326BD4(void* p);
int fn_8010069C(void*);

int fn_80326BD4(void* p) { return fn_8010069C(p); }
void fn_80326BF4(void* p) { fn_80120BBC(p, (void*)48); fn_8011E87C(p, (void*)0); fn_8011E87C(p, (void*)1); fn_8011E87C(p, (void*)2); }

}
