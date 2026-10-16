#include "types.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int TItemMag::get_flag_40() { return this->m_dc & 0x40; }

void TItem::sub_80102C58() { *(u32*)((char*)this + 0xdc) |= 0x40; }
void TItem::sub_80102C68() { *(u32*)((char*)this + 0xdc) &= 0xffffffbf; }

}
