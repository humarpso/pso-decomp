#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int TItemList__sub_801D3B00(void*, void*, void*, void*);
int TItemList__sub_801D5868(void*, void*);
int TItemList__sub_801D5804(void*);
int TItemList__sub_801D5838(void* a0);
void TTecLuker__sub_801D3728(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

int TItemList__sub_801D35FC(void);
int fn_801D36B4(void);
void fn_801D371C(void* p, void* q);
void insert_item_node__10TObjPlayerFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
int TItemList__sub_801D3B00(void*, void*, void*, void*);
int TItemList__sub_801D5804(void*);
int TItemList__sub_801D5838(void* a0 = 0);
s32 TItemList__sub_801D5844(s32);
s32 TItemList__sub_801D5854(s32, s32);
int TItemList__sub_801D5868(void*, void*);
int __dl__FPv();
s32 copy_item_data__9TItemListFPv(s32, s32);
s32 create_node__9TItemListFPvPvPvPv(s32, s32, s32, s32);
s32 free_if_positive__6TLobbyFis(s32 arg0, s16 arg1);
s32 set_field4__10TObjPlayerFPvi(s32, s32);

void insert_item_node__10TObjPlayerFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = TItemList__sub_801D5868((void*)(arg0), (void*)(0));
    temp_r30 = TItemList__sub_801D5854(arg0, 0);
    if (TItemList__sub_801D5844(temp_r31) != 0) {
        TItemList__sub_801D5838((void*)(temp_r31));
        set_field4__10TObjPlayerFPvi(temp_r30, arg4);
        copy_item_data__9TItemListFPv(temp_r30, arg3);
        create_node__9TItemListFPvPvPvPv(arg0, arg2, arg1, 0);
        TItemList__sub_801D5804((void*)(arg0));
    }
}

int TItemList__sub_801D35FC(void) { return 0; }
int fn_801D36B4(void) { return 0; }
void fn_801D371C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void TTecLuker__sub_801D3728(s32 arg0, s32 arg1, s32 arg2) {
    TItemList__sub_801D5838((void*)((void *)((s32)TItemList__sub_801D5868((void*)(arg0), (void*)(0)))));
    TItemList__sub_801D3B00((void*)(arg0), (void*)(arg2), (void*)(arg1), (void*)(0));
    TItemList__sub_801D5804((void*)((void *) (arg0)));
}

}
