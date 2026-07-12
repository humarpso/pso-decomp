#include "types.h"

extern "C" {

int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__sub_801E44D8(void*, void*);
s32 TWindowSubComCard__sub_8007B6D8(void* p);
int TWindowSubComCard__sub_8007B6E0(void* p);
u8 TWindowSubComCard__sub_8007B6EC(void* p);
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p);
int bswap__16TPlyGuildCardTagFv(void*);

void bswap_guild_card__17TWindowSubComCardFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_guild_card_tag__17TWindowSubComCardFPv((char*)p + 0x4); }
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p) { return bswap__16TPlyGuildCardTagFv(p); }
void init_card__17TWindowSubComCardFPvPv(void* p, void* a1) { bswap_guild_card__17TWindowSubComCardFPv(p); TLobby__sub_801E44D8(p, a1); }

}
