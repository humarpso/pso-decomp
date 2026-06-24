#include "types.h"

extern "C" {

int fn_8011724C(void* p);
int obj_getS16_2BA(void*);

int fn_8011724C(void* p) { return obj_getS16_2BA(*(void**)((char*)p + 0xf0)); }

}
