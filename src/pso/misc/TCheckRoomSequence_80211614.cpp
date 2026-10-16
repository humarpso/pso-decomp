#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/ui/TWindowInputNumber.h"

extern "C" {

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);

void TCheckRoomSequence::set_position(f32 a, f32 b) { *(f32*)((char*)this + 0x74) = a; *(f32*)((char*)this + 0x78) = b; }

    extern int lbl_80513DA8[];
int TCheckRoomSequence::get_room_data(int a0) {  return lbl_80513DA8[a0]; }

    extern int lbl_80513D98[];
int TCheckRoomSequence::get_room_table_entry(int a0) {  return lbl_80513D98[a0]; }

}
