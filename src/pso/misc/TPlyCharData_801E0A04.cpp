#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void bswap_pair__14TPlyDispConfigFPv(void* p);
void bswap__12TPlyCharDataFv(s32 arg0);
M2C_UNK bswap__12player_statsFv(s32);
M2C_UNK bswap__15disp_data_part2Fv(s32);
M2C_UNK bswap__17TPlyInventoryItemFv(s32);
int bswap__18TPlyDispConfigSmthFv(void*);

void bswap__12TPlyCharDataFv(s32 arg0) {
    s32 off;
    s32 i;

    for (i = 0, off = 0; i < 0x1E; i++, off += 0x1C) {
        bswap__17TPlyInventoryItemFv((s32)((char *)arg0 + off + 4));
    }
    bswap__15disp_data_part2Fv(arg0 + 0x370);
    bswap__12player_statsFv(arg0 + 0x34C);
    bswap_pair__14TPlyDispConfigFPv((void*)(arg0 + 0x3C0));
}

void bswap_pair__14TPlyDispConfigFPv(void* p) { bswap__18TPlyDispConfigSmthFv(p); bswap__18TPlyDispConfigSmthFv((char*)p + 0x24); }

}
