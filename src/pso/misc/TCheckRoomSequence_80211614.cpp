#include "types.h"

extern "C" {

int get_room_data__18TCheckRoomSequenceFi(int a0);
int get_room_table_entry__18TCheckRoomSequenceFi(int a0);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);
int init_item_entry__23TAdSinglePlyChrSelectGCFPv(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TShopWindowBase__sub_802115F0(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);

void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x74) = a; *(f32*)((char*)p + 0x78) = b; }

    extern int lbl_80513DA8[];
int get_room_data__18TCheckRoomSequenceFi(int a0) {  return lbl_80513DA8[a0]; }

    extern int lbl_80513D98[];
int get_room_table_entry__18TCheckRoomSequenceFi(int a0) {  return lbl_80513D98[a0]; }

}
