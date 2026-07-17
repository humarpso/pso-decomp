#include "types.h"

extern "C" {

int TItemMagSub__sub_80114524(void*);
void fn_801058E8(void* p);
int activate_d04_slot__10TObjPlayerFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int get_item_field_2__9TItemDataFPv(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

int test_flag3__9TItemDataFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 3); }
int get_item_field_2__9TItemDataFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 2); }

}
