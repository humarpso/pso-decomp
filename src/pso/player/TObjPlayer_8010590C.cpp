#include "types.h"

extern "C" {

int fn_80114524(void*);
void fn_801058E8(void* p);
int activate_d04_slot__10TObjPlayerFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int get_item_field_2__9TItemDataFPv(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int TObjPlayer__sub_801C675C(void*, int);

int activate_d04_slot__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801C675C((char*)p + 0xd04, 1); }

}
