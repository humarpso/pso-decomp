#include "types.h"

extern "C" {

void bswap_pair__14TPlyDispConfigFPv(void* p);
void bswap__12TPlyCharDataFv(s32 arg0);
s32 bswap__12player_statsFv(s32);
s32 bswap__15disp_data_part2Fv(s32);
s32 bswap__17TPlyInventoryItemFv(s32);
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
