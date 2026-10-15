#include "types.h"
#include "pso/misc/TShopEquipmentSellWindow.h"

extern "C" {

int init_item_entry__23TAdSinglePlyChrSelectGCFv(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
int copy_entry_bytes__10TObjPlayerFPv(void*, void*);
void TShopWindowBase__sub_802115F0(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
int is_confirmed__18TWindowInputNumberFv(void* p);
void set_position__18TCheckRoomSequenceFff(void* p, f32 a, f32 b);

int TShopEquipmentSellWindow::is_confirmed() { return (*(u16*)((char*)this + 0x60) >> 2) & 0x1; }
s32 TShopEquipmentSellWindow::get_result() { return *(s32*)((char*)this + 0x6c); }

}
