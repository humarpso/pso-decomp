#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Part_800BB780 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct Obj_800BB780 { u8 pad[0x30]; u32 flags; u8 pad1[0x70]; Part_800BB780 *parts; s32 count; u8 pad2[0x230]; s32 f2dc; u8 pad3[0x4c]; s16 f32c; u8 pad4[0x10]; s16 f33e; };

extern "C" {
void TBoss8Dragon__sub_800BB664(f32 farg0);
int TBoss8Dragon__sub_800BB688(f32 = 0);
void TBoss8Dragon__sub_800BB664(f32 farg0);
void TBoss8Dragon__sub_800BB780(Obj_800BB780 *self);
}

extern "C" {

void TBoss8Dragon__sub_800BB650(void* p, void* q);
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

void TBoss8Dragon__sub_800BB780(Obj_800BB780 *self) {
    s32 i;
    self->f33e = self->f32c;
    self->flags &= ~0x200;
    self->f2dc = 0;
    for (i = 0; i < self->count; i++) {
        self->parts[i].flags &= ~0x04000000;
    }
}

void noop__12TBoss8DragonFv(void) {  }
void TBoss8Dragon__sub_800BB7D4(void) {  }
void TBoss8Dragon__sub_800BB7D8(void) {  }
void TBoss8Dragon__sub_800BB7DC(void) {  }
int set_player_state_default__12TBoss8DragonFPv(void* p) { return TObjPlayer__sub_801B4A18(p, -1); }

}
