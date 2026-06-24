#include "types.h"

extern "C" {

int fn_8011E618(void*);
void fn_8012F9BC(void* p);

void fn_8012F9BC(void* p) { fn_8011E618(p); fn_8011E618(p); }

}
