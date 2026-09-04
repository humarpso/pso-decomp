#include "types.h"

extern "C" {

void TBoss8Dragon__sub_800BB650(void* p, void* q);
int TBoss8Dragon__sub_800BB664(void);
int TBoss8Dragon__sub_800BB688(void);
int TBoss8Dragon__sub_800BB780(void);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int TObjEneBm3Fly__sub_800BB774(void* p);
void noop__12TBoss8DragonFv(void);
void refresh_and_send_entity_flags__12TBoss8DragonFPv(void* p);
int set_player_state_default__12TBoss8DragonFPv(void* p);
int TObjPlayer__sub_801B4A18(void*, int);
int refresh_lobby_state__10TObjPlayerFPv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);

void TBoss8Dragon__sub_800BB650(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

int TBoss8Dragon__sub_800BB664(void) { return 0; }
int TBoss8Dragon__sub_800BB688(void) { return 0; }

void refresh_and_send_entity_flags__12TBoss8DragonFPv(void* p) { refresh_lobby_state__10TObjPlayerFPv(p); send_entity_set_flags__6TLobbyFPv(p); }

int TObjEneBm3Fly__sub_800BB774(void* p) { return (*(u32*)((char*)p + 0x2dc) >> 1) & 0x1; }

int TBoss8Dragon__sub_800BB780(void) { return 0; }

void noop__12TBoss8DragonFv(void) {  }
void TBoss8Dragon__sub_800BB7D4(void) {  }
void TBoss8Dragon__sub_800BB7D8(void) {  }
void TBoss8Dragon__sub_800BB7DC(void) {  }
int set_player_state_default__12TBoss8DragonFPv(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

}
