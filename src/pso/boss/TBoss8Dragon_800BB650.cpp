#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TBoss8Dragon__sub_800BB664(f32 farg0);
int TBoss8Dragon__sub_800BB688(f32 = 0);
void TBoss8Dragon__sub_800BB664(f32 farg0);
}

extern "C" {

void TBoss8Dragon__sub_800BB650(void* p, void* q);
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

void TBoss8Dragon__sub_800BB664(f32 farg0) {
    TBoss8Dragon__sub_800BB688(farg0 * farg0);
}

int TBoss8Dragon__sub_800BB688(f32 _w0) { return 0; }

void refresh_and_send_entity_flags__12TBoss8DragonFPv(void* p) { refresh_lobby_state__10TObjPlayerFPv(p); send_entity_set_flags__6TLobbyFPv(p); }

int TObjEneBm3Fly__sub_800BB774(void* p) { return (*(u32*)((char*)p + 0x2dc) >> 1) & 0x1; }

int TBoss8Dragon__sub_800BB780(void) { return 0; }

void noop__12TBoss8DragonFv(void) {  }
void TBoss8Dragon__sub_800BB7D4(void) {  }
void TBoss8Dragon__sub_800BB7D8(void) {  }
void TBoss8Dragon__sub_800BB7DC(void) {  }
int set_player_state_default__12TBoss8DragonFPv(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

}
