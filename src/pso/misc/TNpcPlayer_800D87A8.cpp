#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *find_active_entity_by_id(void);
void *find_entity_by_id();
s32 is_valid_and_active__10TObjPlayerFUi();
void *find_active_entity_by_id(void);
}

extern "C" {

void *get_valid_target_player__10TNpcPlayerFv(void);
void *get_battle_param__10TObjPlayerFi();
s32 is_valid_and_active__10TObjPlayerFUi();

void *get_valid_target_player__10TNpcPlayerFv(void) {
    void *temp_r31;

    temp_r31 = get_battle_param__10TObjPlayerFi();
    if (is_valid_and_active__10TObjPlayerFUi() != 0) {
        return temp_r31;
    }
    return 0;
}

void *find_active_entity_by_id(void) {
    void *temp_r31;
    temp_r31 = find_entity_by_id();
    if (is_valid_and_active__10TObjPlayerFUi() != 0) {
        return temp_r31;
    }
    return 0;
}

}
