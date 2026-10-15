#include "types.h"
#include "pso/TPlyCharData.h"

extern "C" {

s32 __ct__12TPlyCharDataFv(s32 arg0);
s32 __ct__14TPlyDispConfigFv(s32);
int init__17TPlyInventoryItemFv(void*);

s32 __ct__12TPlyCharDataFv(s32 arg0) {
    __ct__14TPlyDispConfigFv(arg0 + 0x3C0);
    ((TPlyCharData *)arg0)->init_inventory_items();
    return arg0;
}

void TPlyCharData::init_inventory_items() { { int i; for (i = 0; i < 30; i++) { init__17TPlyInventoryItemFv((char*)this + 0x4 + i * 28); } } }

}
