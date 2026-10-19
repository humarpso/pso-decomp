#ifndef PSO_ITEM_TITEMLIST_H
#define PSO_ITEM_TITEMLIST_H

#include "types.h"

class TItemList;
extern "C" {
void TItemList__sub_801D59DC(void *p);
void TItemList__sub_801D5A0C(s32 *arg0);
void TItemList__sub_801D5A64(void *p);
void *TItemList__sub_801D5B10(void *arg0, s16 arg1);
u8 *TItemList__sub_801D5CF8(u8 *arg0);
void *__dt__9TItemListFPvs(void *arg0, s16 arg1);
}
void clear_placement_search_slot(TItemList *arg0, s32 arg1);
void decrement_placement_search_pending(void *p, void *a1);
extern "C" {
void *reset_position__9TItemListFPv(void *a0);
}

// --- C functions defined in TItemList.cpp ---
extern "C" {
void TItemList__sub_801D59DC(void *p);
void TItemList__sub_801D5A0C(s32 *arg0);
void TItemList__sub_801D5A64(void *p);
void *TItemList__sub_801D5B10(void *item_list, s16 arg1);
u8 *TItemList__sub_801D5CF8(u8 *arg0);
}
// --- end of C functions

#endif
