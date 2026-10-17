#ifndef PSO_ITEM_TITEMDISPATCH_H
#define PSO_ITEM_TITEMDISPATCH_H

#include "types.h"

extern "C" {
u8 *TItem__ct(u8 *self, void *parent, u8 *item);
s8 sub_80102C30__5TItemFv(u8 *arg0);
void *__dt__5TItemFv(void *arg0, s16 arg1);
void advance_item_system_generation(void);
int get_item_system_generation(void);
}

#endif
