#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_800B98C0 { u8 pad[0x38c]; u16 f38c; u8 pad2[2]; s32 f390; };

struct Obj_800B9958 { u8 pad[0x38c]; u16 id; u8 pad2[2]; s32 ptr; };

struct Obj_800B98D8 { u8 pad[0x38c]; u16 target_id; u8 pad2[2]; void *target; };

extern "C" {
void enemy_init_acquire_period(u8 *arg0, s32 arg1);
s32 enemy_bind_or_clear_target(void *self, u16 x);
void enemy_clear_target(O_800B98C0 *self, u16 _w1);
s32 find_active_entity_by_id(u16);
void enemy_set_target_id(Obj_800B9958 *self, u16 id);
s32 get_game_mode__6TLobbyFv(void);
void *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
void TBoss2DeRolLe__sub_800B98D8(Obj_800B98D8 *self, void *player);
}

extern "C" {

int TObjEneEpsilon__vt101(void* p);
int spawn_part__14TObjEneEpsilonFi(void*);

s32 enemy_bind_or_clear_target(void *self, u16 x) {
    if (x != 0xFFFF) {
        enemy_set_target_id((Obj_800B9958 *)((void *)(self)), x);
        return 1;
    }
    enemy_clear_target((O_800B98C0 *)((void *)(self)), x);
    return 0;
}

int TObjEneEpsilon__vt101(void* p) { return spawn_part__14TObjEneEpsilonFi(p); }

void enemy_init_acquire_period(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) % arg1);
    M2C_FIELD(arg0, s32 *, 0x3B4) = arg1;
}

void enemy_clear_target(O_800B98C0 *self, u16 _w1) {
    self->f390 = 0;
    self->f38c = 0xFFFF;
}

void TBoss2DeRolLe__sub_800B98D8(Obj_800B98D8 *self, void *player) {
    s32 n;
    s32 i;
    self->target_id = 0xFFFF;
    self->target = 0;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        if (player == get_player_data__10TObjPlayerFi(i)) {
            self->target_id = obj_getField1c(player);
            self->target = player;
            return;
        }
    }
}

void enemy_set_target_id(Obj_800B9958 *self, u16 id) {
    self->id = id;
    if (id != 0xFFFF) {
        self->ptr = find_active_entity_by_id(self->id);
    } else {
        self->id = 0xFFFF;
        self->ptr = 0;
    }
}

}
