#include "types.h"

extern "C" {

void TItemDrop__sub_80105D1C(void* p, void* a1);
int TItemData__sub_8010C638(void*, void*);
int TObjPlayer__sub_8011C030(void*);

void TItemDrop__sub_80105D1C(void* p, void* a1) { if (TObjPlayer__sub_8011C030(a1) == 1) { TItemData__sub_8010C638(a1, (void*)0); } }

}
