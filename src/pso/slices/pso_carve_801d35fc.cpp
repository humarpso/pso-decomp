#include "types.h"

extern "C" {

s32 set_field4__10TObjPlayerFPvi(s32, s32);
s32 create_node__9TItemListFPvPvPvPv(s32, s32, s32, s32);
s32 copy_item_data__9TItemListFPv(s32, s32);
s32 TItemList__sub_801D5844(s32);
s32 TItemList__sub_801D5854(s32, s32);
s32 free_if_positive__6TLobbyFis(s32 arg0, s16 arg1);
int __dl__FPv();
int TItemList__sub_801D3B00(void*, void*, void*, void*);
int TItemList__sub_801D5804(void*);
int TItemList__sub_801D5838(void* a0 = 0);
int TItemList__sub_801D5868(void*, void*);
void fn_801D371C(void* p, void* q);

int TItemList__sub_801D35FC(void) { return 0; }
int fn_801D36B4(void) { return 0; }
void fn_801D371C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void TTecLuker__sub_801D3728(void* p, void* a1, void* a2) { TItemList__sub_801D5868(p, (void*)0); TItemList__sub_801D5838(); TItemList__sub_801D3B00(p, a2, a1, (void*)0); TItemList__sub_801D5804(p); }

}
