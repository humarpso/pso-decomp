#include "types.h"

extern "C" {

void bswap_guild_card_tag__9TProtocolFPv(void* p);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_guild_card_tag__9TProtocolFPv(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

}
