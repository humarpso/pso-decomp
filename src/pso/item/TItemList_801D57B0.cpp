#include "types.h"
#include "pso/TItemList.h"

struct Arr_801D5868 { s32 n; s32 e[1]; };
struct Ent_801D598C { u8 d[0x10]; };
struct Obj_801D598C { u8 pad[0x28]; Ent_801D598C e[1]; };
struct Ent_801D5854 { u8 d[0x1C]; };

struct Obj_801D5854 { u8 pad[0xA8]; Ent_801D5854 arr[1]; };

extern "C" {
void TItemList__sub_801D5804(s32 *arg0);
void TItemList__sub_801D58C8(void* p);
s32 TItemList__sub_801D5868(Arr_801D5868 *, s32);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D59A0(u8 *arg0, s32 arg1);
Ent_801D5854 *TItemList__sub_801D5854(Obj_801D5854 *p, s32 i);
}

extern "C" {

void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
void TItemList__sub_801D5884(void* p, u8 v);
void TItemList__sub_801D58C8(void* p);
u16 TItemList__sub_801D58DC(void* p);
void TItemList__sub_801D591C(u8 *arg0);
s32 TItemList__sub_801D598C(Obj_801D598C *arg0, s32 arg1);
void *__ct__9TItemListFv(void *arg0);
int copy_position__9TItemListFPv(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
int VecCopy__FP3VecPC3Vec(void*);
void __ct__7TObjectFP7TObject(void *);
int copy_item_data__6TLobbyFPv(void*);
void disallow_rendering__7TObjectFv(void *);

extern s32 __vt__9TItemList[];
extern void *TItemList__name;

void *__ct__9TItemListFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TItemList;
    *(void **)((s8 *)arg0 + 0x0) = TItemList__name;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

void TItemList__sub_801D5804(s32 *arg0) {
    *arg0 += 1;
}

int TItemList::copy_item_data() { return copy_item_data__6TLobbyFPv((char*)this + 0x8); }
void TItemList__sub_801D5838(void* p) { *(s32*)((char*)p + 0x0) = 1; }
int TItemList__sub_801D5844(void* p) { return *(u32*)((char*)p + 0x0) == 0; }

Ent_801D5854 *TItemList__sub_801D5854(Obj_801D5854 *p, s32 i) {
    return &p->arr[i];
}

s32 TItemList__sub_801D5868(Arr_801D5868 *arg0, s32 arg1) {
    return (s32)&arg0->e[arg1];
}

void* get_ptr_0x44__9TItemListFPv(void* p) { return (char*)p + 0x44; }
void TItemList__sub_801D5884(void* p, u8 v) { *(u8*)((char*)p + 0x1d) = v; }

void TItemList::lookup_entry_by_count(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    TItemList__sub_801D58C8((void*)(((u8 *)TItemList__sub_801D5868((Arr_801D5868 *)(arg1), (s8)(get_item_count())))));
}

void TItemList__sub_801D58C8(void* p) { *(s32*)((char*)p + 0x0) = 3; }
u8 TItemList::get_item_count() { return *(u8*)((char*)this + 0x1c); }
u16 TItemList__sub_801D58DC(void* p) { return *(u16*)((char*)p + 0x20); }

void TItemList::run_item_count_update() {
    u8 *arg0 = (u8 *)this;
    ((s32)((int)TItemList__sub_801D5854((Obj_801D5854 *)((int)((int) (*(s32 *)((s8 *)arg0 + 0x54)))), (s32)((int)((int) (((s8)get_item_count())))))));
}

void TItemList__sub_801D591C(u8 *arg0) {
    ((void (*)(s32, s32))copy_position__9TItemListFPv)(TItemList__sub_801D598C((Obj_801D598C *)*(s32 *)(arg0 + 0x54), (s8)((TItemList *)arg0)->get_item_count()), ((s32 (*)(void))get_ptr_0x44__9TItemListFPv)());
}

int copy_position__9TItemListFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }

s32 TItemList__sub_801D598C(Obj_801D598C *arg0, s32 arg1) {
    return (s32)&arg0->e[arg1];
}
void TItemList__sub_801D59A0(u8 *arg0, s32 arg1) {
    TItemList__sub_801D59DC((void*)(((u8 *)TItemList__sub_801D5868((Arr_801D5868 *)arg1, (s8)((TItemList *)arg0)->get_item_count()))));
}

}
