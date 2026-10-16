#include "types.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemMag.h"
#include "pso/item/TItemProArmor.h"
#include "pso/misc/TOSwitchItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void sub_80102C58__5TItemFv(void* p);
void sub_80102C68__5TItemFv(void* p);
int vfunc_33__5TItemFv(void);
int vfunc_43__5TItemFv(void);
void bswap_32__FPUl(u32* p);
int get_slot_value__10TObjPlayerFPvi(void*);
s32 is_matching_id__6TLobbyFiUs(void *, u16);

int TItemMag::get_flag_40() { return this->m_dc & 0x40; }

void TItem::sub_80102C58() { *(u32*)((char*)this + 0xdc) |= 0x40; }
void TItem::sub_80102C68() { *(u32*)((char*)this + 0xdc) &= 0xffffffbf; }

}
