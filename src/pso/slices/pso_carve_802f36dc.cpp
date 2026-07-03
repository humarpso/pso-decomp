#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
u32 get_enemy_entity();
M2C_UNK fn_802F3C84(u32, s32);
extern u32 lbl_805D6978;

bool fn_802F36DC(void) {
    s32 i;
    s32 count;

    if (is_split_screen() != 0) {
        return 1;
    }
    if (lbl_805D6978 == 0U) {
        return 0;
    }
    count = 0;
    i = 0;
    do {
        fn_802F3C84(lbl_805D6978, i);
        if (get_enemy_entity() != 0U) {
            count += 1;
        }
        i += 1;
    } while (i < 6);
    return count >= 3;
}

}
