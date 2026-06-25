#include "types.h"

extern "C" {

int fn_8001053C(void*);
int fn_8011E204(void*, void*);
int fn_801BF964(void*);
int fn_801C6FD4(void*, void*);
int fn_801D2630(void*);
int obj_clearFlags30(void*, void*);
void fn_801D0514(void);

void fn_801D04B4(void* p) { obj_clearFlags30(p, (void*)3840); fn_8011E204(p, (void*)128); fn_801C6FD4((char*)p + 0x5e0, (void*)0); fn_801D2630(p); fn_8001053C(p); fn_801BF964((char*)p + 0x5fc); }
void fn_801D0514(void) {  }
int fn_801D0518(void) { return 0; }
int fn_801D05D8(void) { return 0; }

}
