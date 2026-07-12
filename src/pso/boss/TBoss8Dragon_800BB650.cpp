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
int TBoss8Dragon__sub_800BB7E0(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

void TBoss8Dragon__sub_800BB650(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

}
