#include "types.h"
#include "pso/items/TItemWeapon.h"

extern "C" {

void TObjPlayer__sub_80121B64(void* p);

void TObjPlayer__sub_80121B64(void* p) { ((TItemWeapon *)p)->roll_technique(); ((TItemWeapon *)p)->roll_technique(); }

}
