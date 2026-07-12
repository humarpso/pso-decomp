#include "types.h"

extern "C" {

void init_inventory_items__12TPlyCharDataFPv(void* p);
int init__17TPlyInventoryItemFv(void*);

void init_inventory_items__12TPlyCharDataFPv(void* p) { { int i; for (i = 0; i < 30; i++) { init__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

}
