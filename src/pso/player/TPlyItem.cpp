#include "pso/TPlyItem.h"

extern "C" void TItemList__sub_801D5B10(void*, int);

TPlyItem::~TPlyItem() {
    TItemList__sub_801D5B10((char*)this + 0x20, -1);
}
