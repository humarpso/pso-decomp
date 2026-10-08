#include "types.h"

extern "C" {

s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
int init_item_entry__23TAdSinglePlyChrSelectGCFPv(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void TShopWindowBase__sub_802115F0(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int is_confirmed__18TWindowInputNumberFPv(void* p);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

int is_confirmed__24TShopEquipmentSellWindowFPv(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }
s32 get_result__24TShopEquipmentSellWindowFPv(void* p) { return *(s32*)((char*)p + 0x6c); }

}
