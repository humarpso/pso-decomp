#include "types.h"

extern "C" {

int bswap__13packet_headerFv(void*);
int bswap__16TPlyGuildCardTagFv(void*);
void bswap_action_packet(void* p);

void bswap_action_packet(void* p) { bswap__13packet_headerFv(p); bswap__16TPlyGuildCardTagFv((char*)p + 0x4); }

}
