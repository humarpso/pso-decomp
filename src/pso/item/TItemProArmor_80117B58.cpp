#include "types.h"

extern "C" {

void update_armor__13TItemProArmorFPv(void* p);
int get_flag_40__8TItemMagFPv(void*);
int TObjPlayer__sub_80108164(void);

int obj_getField1c(void*);

void update_armor__13TItemProArmorFPv(void* p) { if (get_flag_40__8TItemMagFPv(p) == 0) { obj_getField1c(*(void**)((char*)p + 0xf0)); TObjPlayer__sub_80108164(); } }

}
