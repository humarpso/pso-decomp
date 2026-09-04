#include "types.h"

extern "C" {

int bswap_exit_game_header__9TProtocolFPv(void* p);
void bswap_create_game__9TProtocolFPv(void* p);
void* TProtocol__sub_801DFAEC(void* p);
void bswap_room_change__9TProtocolFPv(void* p);
void bswap_find_user_packet(void* p);
void* init_guild_card_tag__9TProtocolFPv(void* p);
int __ct__16TPlyGuildCardTagFv(void*);
int bswap_32__FPUl(void*);
int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);

int bswap_exit_game_header__9TProtocolFPv(void* p) { return bswap__13packet_headerFv(p); }
void bswap_create_game__9TProtocolFPv(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }
void bswap_find_user_packet(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); bswap_32__FPUl((char*)p + 0xc); }
void* TProtocol__sub_801DFAEC(void* p) { __ct__16TPlyGuildCardTagFv((char*)p + 0x4); return p; }
void bswap_room_change__9TProtocolFPv(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }
void* init_guild_card_tag__9TProtocolFPv(void* p) { __ct__16TPlyGuildCardTagFv((char*)p + 0x4); return p; }

}
