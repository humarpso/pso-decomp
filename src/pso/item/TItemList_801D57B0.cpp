#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TItemList__sub_801D5804(s32 *arg0);
int TItemList__sub_801D5854(int, int);
u8 get_item_count__9TItemListFPv(void* p);
void TItemList__sub_801D58E4(u8 *arg0);
}

extern "C" {

void TItemList__sub_801D5838(void* p);
int TItemList__sub_801D5844(void* p);
int TItemList__sub_801D5868(void);
void TItemList__sub_801D5884(void* p, u8 v);
int TItemList__sub_801D588C(void);
void TItemList__sub_801D58C8(void* p);
u16 TItemList__sub_801D58DC(void* p);
int TItemList__sub_801D591C(void);
int TItemList__sub_801D598C(void);
int TItemList__sub_801D59A0(void);
void *__ct__9TItemListFv(void *arg0);
int copy_item_data__9TItemListFPv(void* p);
int copy_position__9TItemListFPv(void* p);
void* get_ptr_0x44__9TItemListFPv(void* p);
void TItemList__sub_801D59DC(void* p);
void TItemList__sub_801D59E8(void* p, void* a1);
int TItemList__sub_801D5A0C(void* a0 = 0);
void TItemList__sub_801D5A64(void* p);
int VecCopy__FP3VecPC3Vec(void*);
void __ct__7TObjectFP7TObject(void *);
int copy_item_data__6TLobbyFPvPv(void*);
void disallow_rendering__7TObjectFv(void *);

extern M2C_UNK __vt__9TItemList[];
extern void *lbl_805D3568;

void *__ct__9TItemListFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TItemList;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3568;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

void TItemList__sub_801D5804(s32 *arg0) {
    *arg0 += 1;
}

int copy_item_data__9TItemListFPv(void* p) { return copy_item_data__6TLobbyFPvPv((char*)p + 0x8); }
void TItemList__sub_801D5838(void* p) { *(s32*)((char*)p + 0x0) = 1; }
int TItemList__sub_801D5844(void* p) { return *(u32*)((char*)p + 0x0) == 0; }

int TItemList__sub_801D5854(int _w0, int _w1) { return 0; }
int TItemList__sub_801D5868(void) { return 0; }

void* get_ptr_0x44__9TItemListFPv(void* p) { return (char*)p + 0x44; }
void TItemList__sub_801D5884(void* p, u8 v) { *(u8*)((char*)p + 0x1d) = v; }

int TItemList__sub_801D588C(void) { return 0; }

void TItemList__sub_801D58C8(void* p) { *(s32*)((char*)p + 0x0) = 3; }
u8 get_item_count__9TItemListFPv(void* p) { return *(u8*)((char*)p + 0x1c); }
u16 TItemList__sub_801D58DC(void* p) { return *(u16*)((char*)p + 0x20); }

void TItemList__sub_801D58E4(u8 *arg0) {
    ((M2C_UNK)TItemList__sub_801D5854((int)((int) (M2C_FIELD(arg0, s32 *, 0x54))), (int)((int) (((s8)get_item_count__9TItemListFPv(arg0))))));
}

int TItemList__sub_801D591C(void) { return 0; }

int copy_position__9TItemListFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x4); }

int TItemList__sub_801D598C(void) { return 0; }
int TItemList__sub_801D59A0(void) { return 0; }

}
