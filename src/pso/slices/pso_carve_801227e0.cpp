#include "types.h"

extern "C" {

int fn_8011E618(void*);
void fn_801227E0(void* p);

void fn_801227E0(void* p) { fn_8011E618(p); fn_8011E618(p); }

}
