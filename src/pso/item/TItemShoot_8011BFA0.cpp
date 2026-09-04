#include "types.h"

extern "C" {

void TItemShoot__sub_8011BFA0(void* p, s16 v);

void TItemShoot__sub_8011BFA0(void* p, s16 v) { *(s16*)((char*)p + 0x60) = v; }

}
