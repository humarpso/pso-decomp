#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_valid_target_player__10TNpcPlayerFv(void);
void *TObjPlayer__sub_80040B28();
s32 is_valid_and_active__10TObjPlayerFUi();

void *get_valid_target_player__10TNpcPlayerFv(void) {
    void *temp_r31;

    temp_r31 = TObjPlayer__sub_80040B28();
    if (is_valid_and_active__10TObjPlayerFUi() != 0) {
        return temp_r31;
    }
    return 0;
}

}
