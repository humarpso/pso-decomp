#include "types.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_matching_id__6TLobbyFiUs(void *, u16);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
int get_slot_value__10TObjPlayerFPvi(void*);

u8 TOSwitchItem::get_field_ec() { return *(u8*)((char*)this + 0xec); }

void bswap_32__FPUl(u32* p);

}
