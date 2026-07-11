#include "types.h"

extern "C" {

void bswap_packet__12TBoss8DragonFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int TObjPlayer__sub_8001960C(void*);
void send_swapped_packet__12TBoss8DragonFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TBoss8Dragon__sub_802FDE68(void);
void TBoss8Dragon__sub_802FDE6C(void);
void TBoss8Dragon__sub_802FDE70(void);
void TBoss8Dragon__sub_802FDE74(void);
void TBoss8Dragon__sub_802FDE78(void);
void TBoss8Dragon__sub_802FDE7C(void);
void TBoss8Dragon__sub_802FDE80(void);
void build_6xA8_gol_dragon_boss_actions(void* p);

void TBoss8Dragon__sub_802FDE68(void) {  }
void TBoss8Dragon__sub_802FDE6C(void) {  }
void TBoss8Dragon__sub_802FDE70(void) {  }
void TBoss8Dragon__sub_802FDE74(void) {  }
void TBoss8Dragon__sub_802FDE78(void) {  }
void TBoss8Dragon__sub_802FDE7C(void) {  }
void TBoss8Dragon__sub_802FDE80(void) {  }
void send_swapped_packet__12TBoss8DragonFPv(void* p) { bswap_packet__12TBoss8DragonFPv(p); TLobby__send_and_handle_60(p); }
void bswap_packet__12TBoss8DragonFPv(void* p) { TObjPlayer__sub_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void build_6xA8_gol_dragon_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 168; *(u8*)((char*)p + 0x1) = 6; }

}
