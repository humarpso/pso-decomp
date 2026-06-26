#include "pso/TPlyItem.h"

extern "C" void fn_801D5B10(void*, int);

TPlyItem::~TPlyItem() {
    fn_801D5B10((char*)this + 0x20, -1);
}
