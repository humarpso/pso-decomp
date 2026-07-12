#include "types.h"

extern "C" {

int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D59E8(void* p, void* a1);
int TItemList__sub_801D5814(void* p);
void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void* TItemList__sub_801D587C(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u8 TItemList__sub_801D58D4(void* p);
u16 TItemList__sub_801D58DC(void* p);
int copy_position__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int copy_item_data__6TLobbyFPvPv(void*);

void* TItemList__sub_801D587C(void* p) { return (char*)p + 0x44; }
void TItemList__sub_801D5884(void* p, u8 v) { *(u8*)((char*)p + 0x1d) = v; }

}
