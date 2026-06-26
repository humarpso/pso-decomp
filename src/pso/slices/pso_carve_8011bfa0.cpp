#include "types.h"

extern "C" {

void fn_8011BFA0(void* p, s16 v);

void fn_8011BFA0(void* p, s16 v) { *(s16*)((char*)p + 0x60) = v; }

}
