#include "types.h"

extern "C" {

int fn_8010C638(void*, void*);
int fn_8011C030(void*);
void fn_80105D1C(void* p, void* a1);

void fn_80105D1C(void* p, void* a1) { if (fn_8011C030(a1) == 1) { fn_8010C638(a1, (void*)0); } }

}
