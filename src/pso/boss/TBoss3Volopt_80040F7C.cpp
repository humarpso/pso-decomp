#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_08000000__12TBoss3VoloptFPv(void *arg0);
void set_player_flag_08000000__12TBoss3VoloptFPv(void *arg0);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void set_player_flag_08000000__12TBoss3VoloptFPv(void *arg0) {
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
}

void set_flag_08000000__12TBoss3VoloptFPv(void *arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
