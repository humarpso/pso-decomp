#include "types.h"

extern "C" {

int fn_8011E618(void*);
void fn_80121B64(void* p);

void fn_80121B64(void* p) { fn_8011E618(p); fn_8011E618(p); }

}
