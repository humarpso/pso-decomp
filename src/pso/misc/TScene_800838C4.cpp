#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TScene__sub_800838C4(void);
s32 check_all_players_ready__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
s32 is_split_screen();

extern s32 some_id_805c6f74;

void TScene__sub_800838C4(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        some_id_805c6f74 &= 0xFFF7FFFF;
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
    }
}

}
