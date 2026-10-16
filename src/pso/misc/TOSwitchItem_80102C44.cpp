#include "types.h"
#include "pso/item/TItem.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 TItem::get_field_ec() { return *(u8*)((char*)this + 0xec); }

}
