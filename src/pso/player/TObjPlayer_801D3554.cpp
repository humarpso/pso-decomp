#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801C2060(s32, s32);
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

void insert_item_node__10TObjPlayerFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = TItemList__sub_801D5868((void*)(arg0), (void*)(0));
    temp_r30 = TItemList__sub_801D5854(arg0, 0);
    if (TItemList__sub_801D5844(temp_r31) != 0) {
        TItemList__sub_801D5838((void*)(temp_r31));
        TObjPlayer__sub_801C2060(temp_r30, arg4);
        copy_item_data__9TItemListFPv(temp_r30, arg3);
        create_node__9TItemListFPvPvPvPv(arg0, arg2, arg1, 0);
        TItemList__sub_801D5804((void*)(arg0));
    }
}

}
