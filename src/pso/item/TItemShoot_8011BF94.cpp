#include "types.h"

extern "C" {

void TItemShoot__sub_8011BF94(void* p, s32 v);

void TItemShoot__sub_8011BF94(void* p, s32 v) { *(s32*)((char*)p + 0x70) = v; }

}
