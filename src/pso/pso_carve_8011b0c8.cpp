#include "types.h"

extern "C" {

int fn_8011B0FC(void*);
int fn_801E4570(void*);
void fn_8011B0C8(void* p);

void fn_8011B0C8(void* p) { fn_8011B0FC(p); fn_801E4570(p); }

}
