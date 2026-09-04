#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __ct__12TPlyCharDataFv(s32 arg0);
void init_inventory_items__12TPlyCharDataFPv(void* p);
M2C_UNK __ct__14TPlyDispConfigFv(s32);
int init__17TPlyInventoryItemFv(void*);

s32 __ct__12TPlyCharDataFv(s32 arg0) {
    __ct__14TPlyDispConfigFv(arg0 + 0x3C0);
    init_inventory_items__12TPlyCharDataFPv((void*)(arg0));
    return arg0;
}

void init_inventory_items__12TPlyCharDataFPv(void* p) { { int i; for (i = 0; i < 30; i++) { init__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

}
