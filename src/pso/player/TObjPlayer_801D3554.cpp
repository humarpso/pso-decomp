#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
typedef struct Rec_801D35FC {
    u8 b[0x1C];
} Rec_801D35FC;

struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

extern "C" {
int TItemList__sub_801D3B00(void*, void*, void*, void*);
int TItemList__sub_801D5868(void*, void*);
int TItemList__sub_801D5804(void*);
int TItemList__sub_801D5838(void* a0);
void start_placement_search(s32 arg0, s32 arg1, s32 arg2);
void fn_801D371C(void* p, void* q);
u8 *fn_801D36B4(u8 *arg0, u8 *arg1);
}

extern "C" {

void TItemList__sub_801D35FC(void *arg0, void *arg1, void *arg2, Rec_801D35FC *arg3, s32 arg4);
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

void TItemList__sub_801D35FC(void *arg0, void *arg1, void *arg2, Rec_801D35FC *arg3, s32 arg4) {
    s32 i;
    u8 *p;
    Rec_801D35FC *q;

    p = (u8 *)TItemList__sub_801D5868(arg0, 0);
    q = (Rec_801D35FC *)((void *(*)(void *, s32))TItemList__sub_801D5854)(arg0, 0);
    for (i = 0; i < arg4; i++) {
        if (((s32 (*)(void *))TItemList__sub_801D5844)(p) != 0) {
            TItemList__sub_801D5838(p);
            ((void (*)(void *, void *))fn_801D36B4)(q, arg3);
            ((void (*)(void *, void *, void *, s32))create_node__9TItemListFPvPvPvPv)(arg0, arg2, arg1, i);
            TItemList__sub_801D5804(arg0);
            p += 4;
            q++;
            arg3++;
        }
    }
}

u8 *fn_801D36B4(u8 *arg0, u8 *arg1) {
    u8 *temp_r4;
    u8 *temp_r5;
    fn_801D371C((void*)((void *) (arg0)), (void*)((void *) (arg1)));
    temp_r5 = (u8 *)(arg0 + 4);
    temp_r4 = (u8 *)(arg1 + 4);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_14 *)((s32) temp_r5 + 4) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
    return arg0;
}

void fn_801D371C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }
void start_placement_search(s32 arg0, s32 arg1, s32 arg2) {
    TItemList__sub_801D5838((void*)((void *)((s32)TItemList__sub_801D5868((void*)(arg0), (void*)(0)))));
    TItemList__sub_801D3B00((void*)(arg0), (void*)(arg2), (void*)(arg1), (void*)(0));
    TItemList__sub_801D5804((void*)((void *) (arg0)));
}

}
