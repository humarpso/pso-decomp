#include "types.h"
#include "pso/item/TItemData.h"

extern "C" {

int initialize_mag_item_data(void*);
int activate_d04_slot__10TObjPlayerFv(void* p);
void clear_fields__20TWindowSubStatusDispFv(void* p);
void fn_801058E8(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);

int TItemData::test_flag3() { return get_slot_value__10TObjPlayerFPvi((char*)this + 0xd04, 3); }
int TItemData::get_item_field_2() { return get_slot_value__10TObjPlayerFPvi((char*)this + 0xd04, 2); }

void*TItemData::initialize_mag_data() { initialize_mag_item_data(this); return this; }

}
