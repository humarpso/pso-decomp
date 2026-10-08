#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8020B3E4_TLobby__data_80513C80 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_8020B374_TLobby__data_80513CC8 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

extern "C" {
s32 TLobby__sub_8020B970(s32, void *, u32);
extern RecoveredGlobal_8020B3E4_TLobby__data_80513C80 TLobby__data_80513C80;
s32 load_object_set_entries__6TLobbyFiPvUi(s32 arg0, u8 *arg1, u32 arg2);
s32 init_quest_floor_enemies(s32, void *, u32);
extern RecoveredGlobal_8020B374_TLobby__data_80513CC8 TLobby__data_80513CC8;
s32 init_floor_enemy_count__6TLobbyFiPvUi(s32 arg0, u8 *arg1, u32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8020B3E4_TLobby__data_80513C80_size[sizeof(RecoveredGlobal_8020B3E4_TLobby__data_80513C80) == 0x48 ? 1 : -1];

typedef char RecoveredGlobal_8020B374_TLobby__data_80513CC8_size[sizeof(RecoveredGlobal_8020B374_TLobby__data_80513CC8) == 0x90 ? 1 : -1];
s32 init_floor_enemy_count__6TLobbyFiPvUi(s32 arg0, u8 *arg1, u32 arg2) {
    if (init_quest_floor_enemies(arg0, arg1, arg2) == 1) {
        M2C_FIELD(&TLobby__data_80513CC8.value, M2C_UNK *, (arg0 * 4)) = arg2 / 72U;
        return 1;
    }
    M2C_FIELD(&TLobby__data_80513CC8.value, M2C_UNK *, (arg0 * 4)) = -1;
    return 0;
}

s32 load_object_set_entries__6TLobbyFiPvUi(s32 arg0, u8 *arg1, u32 arg2) {
    if (TLobby__sub_8020B970(arg0, arg1, arg2) == 1) {
        M2C_FIELD(&TLobby__data_80513C80.value, M2C_UNK *, (arg0 * 4)) = arg2 / 68U;
        return 1;
    }
    M2C_FIELD(&TLobby__data_80513C80.value, M2C_UNK *, (arg0 * 4)) = -1;
    return 0;
}

}

#include "types.h"

extern "C" {

int get_object_type__6TLobbyFi(int a0) {  return ((int *)&TLobby__data_80513CC8)[a0]; }

int get_obj_table_entry__6TLobbyFi(int a0) {  return ((int *)&TLobby__data_80513C80)[a0]; }

}
