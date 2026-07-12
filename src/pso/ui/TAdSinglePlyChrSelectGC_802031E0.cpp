#include "types.h"

extern "C" {

int copy_item_data__6TLobbyFPvPv(void*);
void* copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void* p, void* a1);
int __ct__12TPlyCharDataFv(void*);
int TAdSinglePlyChrSelectGC__sub_80203190(void* a0 = 0);
void* TAdSinglePlyChrSelectGC__sub_80203158(void* p);
int init_guild_card_tag__17TWindowSubComCardFi(void*);
void TAdSinglePlyChrSelectGC__sub_80203210(void* p);

void* init_guild_card_tag__23TAdSinglePlyChrSelectGCFPv(void* p) { init_guild_card_tag__17TWindowSubComCardFi(p); return p; }
void TAdSinglePlyChrSelectGC__sub_80203210(void* p) { *(u32*)((char*)p + 0x4) &= 0xfffffff7; }

}
