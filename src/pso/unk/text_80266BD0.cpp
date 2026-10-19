#include "types.h"
#include "pso/boss/TBoss8Dragon.h"

extern const u8 lbl_8044F34C[][2];

extern "C" {
void fn_80266BD0(s32 index, u8 *first, u8 *second, s32 player);
}

void fn_80266BD0(s32 index, u8 *first, u8 *second, s32 player) {
    const u8 *entry = lbl_8044F34C[index];
    *first = *entry++;
    if (*first == 0x1A && ((TBoss8Dragon *)player)->test_card_flag_2() != 0) {
        *first = 0x1B;
    }
    *second = *entry;
}
