#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct QuestEnemyRow_8020C1F0 { u16 type; s16 flags; u8 reserved[8]; s16 room; u8 tail[58]; };

struct QuestSavedEnemyRow_8020C1F0 { u16 id; s16 flags; s16 room; u16 unused; };

struct QuestSavedEnemyFloor_8020C1F0 { s32 reserved; s32 count; u32 fields[3]; QuestSavedEnemyRow_8020C1F0 *rows; };

struct Ent_8020BFE4 { s16 id; u8 pad[0xA]; s32 fC; };

struct Ent_8020C030 { s16 id; u8 pad[0xA]; s32 fC; };

struct Ent_8020C07C { u8 pad0[2]; s16 flags; u8 pad1[6]; s16 a; s16 b; u8 pad2[0x36]; };

extern "C" {
s32 get_current_floor(void);
extern QuestSavedEnemyFloor_8020C1F0 TLobby__floor_enemy_group_table[];
extern QuestEnemyRow_8020C1F0 *TLobby__data_805D6114;
extern s32 TLobby__current_floor_enemy_set_count;
s32 is_room_enemy_set_cleared(s32 floor, s16 room);
extern Ent_8020BFE4 *enemy_factory_area_table[];
s32 get_enemy_factory_child_count(s32 arg0, s16 *arg1);
extern Ent_8020C030 *TLobby__floor_object_factory_tables[];
s32 find_floor_object_factory__6TLobbyFiPv(s32 arg0, s16 *arg1);
s32 get_current_floor(void);
extern Ent_8020C07C *TLobby__data_805D610C;
extern s32 TLobby__current_floor_object_set_count;
void TLobby__sub_8020C07C(s32 pl, s16 b, s16 a, s32 mask, s32 set);
s32 get_current_floor(void);
extern QuestSavedEnemyFloor_8020C1F0 TLobby__floor_enemy_group_table[];
extern QuestEnemyRow_8020C1F0 *TLobby__data_805D6114;
extern s32 TLobby__current_floor_enemy_set_count;
s32 count_quest_enemies_flag8__6TLobbyFv(void);
}

extern "C" {

s32 get_enemy_factory_child_count(s32 arg0, s16 *arg1) {
    Ent_8020BFE4 *base = enemy_factory_area_table[arg0];
    Ent_8020BFE4 *p = base;
    for (; base != 0 && p->id != -1; p++) {
        if (p->id == *arg1) {
            return p->fC;
        }
    }
    return 0;
}

s32 find_floor_object_factory__6TLobbyFiPv(s32 arg0, s16 *arg1) {
    Ent_8020C030 *base = TLobby__floor_object_factory_tables[arg0];
    Ent_8020C030 *p = base;
    for (; base != 0 && p->id != -1; p++) {
        if (p->id == *arg1) {
            return p->fC;
        }
    }
    return 0;
}

void TLobby__sub_8020C07C(s32 pl, s16 b, s16 a, s32 mask, s32 set) {
    if (pl == get_current_floor()) {
        Ent_8020C07C *p = TLobby__data_805D610C;
        s32 i;
        for (i = 0; i < TLobby__current_floor_object_set_count; i++, p++) {
            if (p->b == b && p->a == a) {
                p->flags &= mask;
                p->flags |= set;
            }
        }
    }
}

s32 count_quest_enemies_flag8__6TLobbyFv(void) {
    s32 n = 0;
    s32 i;
    s32 j;
    if (TLobby__data_805D6114 != NULL) {
        for (j = 0; j < TLobby__current_floor_enemy_set_count; j++) {
            QuestEnemyRow_8020C1F0 *a = &TLobby__data_805D6114[j];
            if (*(s16 *)&a->type != -1 && (a->flags & 8)) {
                n++;
            }
        }
    }
    for (i = 0; i < 0x12; i++) {
        if (i != get_current_floor()) {
            QuestSavedEnemyFloor_8020C1F0 *t = &TLobby__floor_enemy_group_table[i];
            QuestSavedEnemyRow_8020C1F0 *b = t->rows;
            if (b != NULL) {
                for (j = 0; j < t->count; j++) {
                    if (b->flags & 8) {
                        n++;
                    }
                    b++;
                }
            }
        }
    }
    return n;
}

s32 is_room_enemy_set_cleared(s32 floor, s16 room) {
    s32 i;
    if (floor == get_current_floor()) {
        if (TLobby__data_805D6114 != NULL) {
            for (i = 0; i < TLobby__current_floor_enemy_set_count; i++) {
                QuestEnemyRow_8020C1F0 *row = &TLobby__data_805D6114[i];
                if (room == row->room && !(row->flags & 8)) {
                    return 0;
                }
            }
        }
        return 1;
    } else {
        QuestSavedEnemyFloor_8020C1F0 *saved = &TLobby__floor_enemy_group_table[floor];
        QuestSavedEnemyRow_8020C1F0 *row = saved->rows;
        if (row != NULL) {
            for (i = 0; i < saved->count; i++, row++) {
                if (row->room == room && !(row->flags & 8)) {
                    return 0;
                }
            }
        }
        return 1;
    }
}

}
