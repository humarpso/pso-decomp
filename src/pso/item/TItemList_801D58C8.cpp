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
int TItemList__sub_801D5968(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int TLobby__sub_80102E68(void*);

void TItemList__sub_801D58C8(void* p) { *(s32*)((char*)p + 0x0) = 3; }
u8 TItemList__sub_801D58D4(void* p) { return *(u8*)((char*)p + 0x1c); }
u16 TItemList__sub_801D58DC(void* p) { return *(u16*)((char*)p + 0x20); }

}
