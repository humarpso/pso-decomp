#include "types.h"
#include "pso/item/TItemMagSub_80114524.h"
#include "pso/item/TItemData.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1);

int TItemData::test_flag3() { return get_slot_value__10TObjPlayerFPvi((s32 *)((char*)this + 0xd04), 3); }
int TItemData::get_item_field_2() { return get_slot_value__10TObjPlayerFPvi((s32 *)((char*)this + 0xd04), 2); }

void*TItemData::initialize_mag_data() { initialize_mag_item_data(this); return this; }

}
