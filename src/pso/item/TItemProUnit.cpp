#include "types.h"

extern "C" {

void set_evp__12TItemProUnitFPvf(void* p, f32 v);
f32 TItemProUnit__sub_8011901C(void* p);

void set_evp__12TItemProUnitFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
f32 TItemProUnit__sub_8011901C(void* p) { return *(f32*)((char*)p + 0x8); }

}
