#include "types.h"
#include "pso/misc/TCheckRoomSequence.h"

extern "C" {

int init_item_entry__23TAdSinglePlyChrSelectGCFv(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int copy_entry_bytes__10TObjPlayerFPv(void*, void*);
s32 get_result__24TShopEquipmentSellWindowFv(void* p);
int is_confirmed__18TWindowInputNumberFv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFv(void* p);

void TCheckRoomSequence::set_position(f32 a, f32 b) { *(f32*)((char*)this + 0x74) = a; *(f32*)((char*)this + 0x78) = b; }

    extern int lbl_80513DA8[];
int TCheckRoomSequence::get_room_data(int a0) {  return lbl_80513DA8[a0]; }

    extern int lbl_80513D98[];
int TCheckRoomSequence::get_room_table_entry(int a0) {  return lbl_80513D98[a0]; }

}
