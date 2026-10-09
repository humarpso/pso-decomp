#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all_lobbies__6TLobbyFv(void);
M2C_UNK clear_story_flag(s32);

extern M2C_UNK story_quest_flag_pair_table[];

void update_all_lobbies__6TLobbyFv(void) {
    s32 var_r29;
    M2C_UNK *var_r30;
    s32 var_r31;

    var_r29 = 0;
    var_r30 = story_quest_flag_pair_table;
    var_r31 = 0;
    do {
        clear_story_flag(var_r30[var_r31]);
        var_r29 += 1;
        var_r31 += 2;
    } while (var_r29 < 0x1A);
}

}
