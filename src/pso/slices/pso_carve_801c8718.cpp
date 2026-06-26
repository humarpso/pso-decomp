#include "types.h"

extern "C" {

int fn_8011E204(void*, void*);
int fn_80154788(void*, void*, void*);
int fn_801B12CC(void*);
int fn_801BE9A8(void*);
int fn_801C5B18(void*);
int fn_801C8770(void* p);
int fn_801B130C(void*);

void fn_801C8718(void* p) { fn_801BE9A8(p); fn_8011E204(p, (void*)5); fn_801B12CC(p); fn_80154788(p, (void*)0, (void*)1); fn_801C5B18((char*)p + 0x608); }
int fn_801C8770(void* p) { return fn_801B130C(p); }
int fn_801C8790(void) { return 0; }
int fn_801C8808(void) { return 0; }
int fn_801C8878(void) { return 0; }

}
