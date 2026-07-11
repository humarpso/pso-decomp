#include "types.h"

extern "C" {

void update_armor__13TItemProArmorFPv(void* p);
int TItemMag__sub_80102C4C(void*);
int fn_80108164(void);

int obj_getField1c(void*);

void update_armor__13TItemProArmorFPv(void* p) { if (TItemMag__sub_80102C4C(p) == 0) { obj_getField1c(*(void**)((char*)p + 0xf0)); fn_80108164(); } }

}
