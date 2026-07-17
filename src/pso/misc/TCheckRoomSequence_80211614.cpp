#include "types.h"

extern "C" {

void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);
int TAdSinglePlyChrSelectGC__sub_80211584(void* a0 = 0);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void TShopWindowBase__sub_802115F0(void);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);

void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x74) = a; *(f32*)((char*)p + 0x78) = b; }

}
