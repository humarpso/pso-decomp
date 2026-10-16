#include "types.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemProArmor.h"
#include "pso/item/TItemMag.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u16 TItemProArmor::get_id() { return this->m_e4; }

}
