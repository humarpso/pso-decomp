#include "types.h"

extern "C" {

int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__sub_801E44D8(void*, void*);
s32 get_card_id__17TWindowSubComCardFPv(void* p);
int is_active__17TWindowSubComCardFPv(void* p);
u8 TWindowSubComCard__sub_8007B6EC(void* p);
int bswap_guild_card_tag__17TWindowSubComCardFPv(void* p);
int bswap__16TPlyGuildCardTagFv(void*);

s32 get_card_id__17TWindowSubComCardFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int is_active__17TWindowSubComCardFPv(void* p) { return *(u8*)((char*)p + 0x8c) & 0x1; }
u8 TWindowSubComCard__sub_8007B6EC(void* p) { return *(u8*)((char*)p + 0x8f); }

}
