#ifndef PSO_ITEM_TITEMMONEY_H
#define PSO_ITEM_TITEMMONEY_H

#include "types.h"
#include "pso/item/TItem.h"

struct TItemMoney : public TItem {
    virtual ~TItemMoney();
};

extern "C" {
void *__dt__10TItemMoneyFv(void *arg0, s16 arg1);
}

#endif
