#include "types.h"

extern "C" {

int get_item_field_2__9TItemDataFPv(void* p);
void* initialize_mag_data__9TItemDataFPv(void* p);
int test_flag3__9TItemDataFPv(void* p);
int reset_initial_stats__11TItemMagSubFPv(void*);
int activate_d04_slot__10TObjPlayerFPv(void* p);
void clear_fields__20TWindowSubStatusDispFPv(void* p);
void fn_801058E8(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

int test_flag3__9TItemDataFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 3); }
int get_item_field_2__9TItemDataFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 2); }

void* initialize_mag_data__9TItemDataFPv(void* p) { reset_initial_stats__11TItemMagSubFPv(p); return p; }

}
