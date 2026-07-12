#include "types.h"

extern "C" {

int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);
void TBoss8Dragon__sub_800BB650(void* p, void* q);
int TObjEneBm3Fly__sub_800BB774(void* p);
void TBoss8Dragon__sub_800BB7D0(void);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int set_player_state_default__12TBoss8DragonFPv(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

int TObjEneBm3Fly__sub_800BB774(void* p) { return (*(u32*)((char*)p + 0x2dc) >> 1) & 0x1; }

}
