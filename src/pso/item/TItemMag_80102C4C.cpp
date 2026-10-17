#include "types.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

int TItemEquipBase::get_flag_40() { return this->m_dc & 0x40; }

void TItem::sub_80102C58() { this->m_dc |= 0x40; }
void TItem::sub_80102C68() { this->m_dc &= 0xffffffbf; }
