#include "types.h"

extern "C" {

s32 __ct__12TPlyCharDataFv(s32 arg0);
void init_inventory_items__12TPlyCharDataFPv(void* p);
s32 __ct__14TPlyDispConfigFv(s32);
int init__17TPlyInventoryItemFv(void*);

s32 __ct__12TPlyCharDataFv(s32 arg0) {
    __ct__14TPlyDispConfigFv(arg0 + 0x3C0);
    init_inventory_items__12TPlyCharDataFPv((void*)(arg0));
    return arg0;
}

void init_inventory_items__12TPlyCharDataFPv(void* p) { { int i; for (i = 0; i < 30; i++) { init__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

}
