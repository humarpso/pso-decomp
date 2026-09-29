#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct QuestEnemyRow_8020C1F0 { u16 type; s16 flags; u8 reserved[8]; s16 room; u8 tail[58]; };

struct QuestSavedEnemyRow_8020C1F0 { u16 id; s16 flags; s16 room; u16 unused; };

struct QuestSavedEnemyFloor_8020C1F0 { s32 reserved; s32 count; u32 fields[3]; QuestSavedEnemyRow_8020C1F0 *rows; };

extern "C" {
s32 TObjPlayer__sub_800196EC(void);
extern QuestSavedEnemyFloor_8020C1F0 TLobby__data_80513AD0[];
extern QuestEnemyRow_8020C1F0 *TLobby__data_805D6114;
extern s32 TLobby__data_805D6118;
s32 TLobby__sub_8020C1F0(s32 floor, s16 room);
}

extern "C" {

s32 TLobby__sub_8020C1F0(s32 floor, s16 room) {
    s32 i;
    if (floor == TObjPlayer__sub_800196EC()) {
        if (TLobby__data_805D6114 != NULL) {
            for (i = 0; i < TLobby__data_805D6118; i++) {
                QuestEnemyRow_8020C1F0 *row = &TLobby__data_805D6114[i];
                if (room == row->room && !(row->flags & 8)) {
                    return 0;
                }
            }
        }
        return 1;
    } else {
        QuestSavedEnemyFloor_8020C1F0 *saved = &TLobby__data_80513AD0[floor];
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
