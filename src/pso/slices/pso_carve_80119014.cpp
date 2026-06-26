#include "types.h"

extern "C" {

void fn_80119014(void* p, f32 v);
f32 TItemProUnit__sub_8011901C(void* p);

void fn_80119014(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 TItemProUnit__sub_8011901C(void* p) { return *(f32*)((char*)p + 0x8); }

}
