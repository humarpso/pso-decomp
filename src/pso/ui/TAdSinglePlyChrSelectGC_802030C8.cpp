#include "types.h"

extern "C" {

int copy_item_data__6TLobbyFPvPv(void*);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int TAdSinglePlyChrSelectGC__sub_80203190(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int init_guild_card_tag__17TWindowSubComCardFi(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);

void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1) { copy_item_data__6TLobbyFPvPv(p); *(short*)((char*)p + 0x14) = *(short*)((char*)a1 + 0x14); *(short*)((char*)p + 0x16) = *(short*)((char*)a1 + 0x16); return p; }

}
