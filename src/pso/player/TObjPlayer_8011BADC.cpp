#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_owner_alive__10TObjPlayerFPv(void *arg0);
u32 query_game_join_id__10TObjPlayerFv(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

s32 is_owner_alive__10TObjPlayerFPv(void *arg0) {
    if (query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x54)) == 0U) {
        return 0;
    }
    return all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0 ? 1 : 0;
}

}
