#include "types.h"

extern "C" {

void* initialize_mag_data__9TItemDataFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int get_item_field_2__9TItemDataFPv(void* p);
int activate_d04_slot__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
void fn_801058E8(void* p);
int TItemMagSub__sub_80114524(void*);

void* initialize_mag_data__9TItemDataFPv(void* p) { TItemMagSub__sub_80114524(p); return p; }

}
