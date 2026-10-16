#include "types.h"
#include "pso/item/TItem.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_matching_id__6TLobbyFiUs(void *, u16);
int get_slot_value__10TObjPlayerFPvi(void*);

u8 TItem::get_field_ec() { return *(u8*)((char*)this + 0xec); }

void bswap_32__FPUl(u32* p);

}
