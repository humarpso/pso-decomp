#include "types.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_80102C58(void* p);
void TObjPlayer__sub_80102C68(void* p);
int TObjPlayer__sub_80102BD0(void);
int TObjPlayer__sub_80102BD8(void);
void bswap_32__FPUl(u32* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s32 is_matching_id__6TLobbyFiUs(void *, u16);

int TItemMag::get_flag_40() { return *(u32*)((char*)this + 0xdc) & 0x40; }

void TObjPlayer__sub_80102C58(void* p) { *(u32*)((char*)p + 0xdc) |= 0x40; }
void TObjPlayer__sub_80102C68(void* p) { *(u32*)((char*)p + 0xdc) &= 0xffffffbf; }

}
