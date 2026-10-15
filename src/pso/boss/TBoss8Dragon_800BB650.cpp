#include "types.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneDD.h"

struct Part_800BB780 { u8 pad[0x18]; u32 flags; u8 pad2[0x10]; };

struct Obj_800BB780 { u8 pad[0x30]; u32 flags; u8 pad1[0x70]; Part_800BB780 *parts; s32 count; u8 pad2[0x230]; s32 f2dc; u8 pad3[0x4c]; s16 f32c; u8 pad4[0x10]; s16 f33e; };

struct Pl_800BB688 { u8 pad0[0x38]; f32 pos[3]; };
extern "C" {
void enemy_find_nearest_player_in_range(f32 farg0);
s32 enemy_nearest_visible_player_sq(u8 *arg0, f32 farg0);
s32 get_player_data__10TObjPlayerFi(int);
s32 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv();
u32 csnLookAt(void *, void *);
s32 is_alive__9TObjEneDDFv(void *);
f32 horizontal_distance_squared(void *, void *);
void enemy_find_nearest_player_in_range(f32 farg0);
void clear_attack_receipts(Obj_800BB780 *self);
}

extern "C" {

void TBoss8Dragon__sub_800BB650(void* p, void* q);
void TBoss8Dragon__sub_800BB7D4(void);
void TBoss8Dragon__sub_800BB7D8(void);
void TBoss8Dragon__sub_800BB7DC(void);
int submit_cursor_candidate(void*, int);
int refresh_lobby_state__10TObjPlayerFv(void*);
int send_entity_set_flags__6TLobbyFPv(void*);

void TBoss8Dragon__sub_800BB650(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); }

void enemy_find_nearest_player_in_range(f32 farg0) {
    ((s32 (*)(f32))enemy_nearest_visible_player_sq)(farg0 * farg0);
}

s32 enemy_nearest_visible_player_sq(u8 *arg0, f32 farg0) {
    f32 d;
    f32 best;
    s32 n;
    u8 *p;
    s32 result;
    s32 i;
    best = farg0;
    result = 0xFFFF;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (is_alive__9TObjEneDDFv(p) != 0) {
            d = horizontal_distance_squared(arg0 + 0x2FC, p + 0x38);
            if (d < best && csnLookAt(arg0 + 0x2FC, p + 0x2FC) == 0) {
                result = obj_getField1c(p);
                best = d;
            }
        }
    }
    return result;
}

void TBoss8Dragon::refresh_and_send_entity_flags() { refresh_lobby_state__10TObjPlayerFv(this); send_entity_set_flags__6TLobbyFPv(this); }

int TObjEneDD::was_hit_by_ranged() { return (*(u32*)((char*)this + 0x2dc) >> 1) & 0x1; }

void clear_attack_receipts(Obj_800BB780 *self) {
    s32 i;
    self->f33e = self->f32c;
    self->flags &= ~0x200;
    self->f2dc = 0;
    for (i = 0; i < self->count; i++) {
        self->parts[i].flags &= ~0x04000000;
    }
}

void TBoss8Dragon::noop() {  }
void TBoss8Dragon__sub_800BB7D4(void) {  }
void TBoss8Dragon__sub_800BB7D8(void) {  }
void TBoss8Dragon__sub_800BB7DC(void) {  }
int TBoss8Dragon::set_player_state_default() { return submit_cursor_candidate(this, -1); }

}
