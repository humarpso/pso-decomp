#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

bool has_enough_enemies__12TBoss8DragonFv(void);
M2C_UNK TBoss8Dragon__sub_802F3C84(u32, s32);
u32 get_enemy_entity();
s32 is_split_screen();

extern u32 lbl_805D6978;

bool has_enough_enemies__12TBoss8DragonFv(void) {
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
        TBoss8Dragon__sub_802F3C84(lbl_805D6978, i);
        if (get_enemy_entity() != 0U) {
            count += 1;
        }
        i += 1;
    } while (i < 6);
    return count >= 3;
}

}
