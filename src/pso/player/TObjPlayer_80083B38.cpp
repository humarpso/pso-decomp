#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_if_all_ready__10TObjPlayerFv(void);
M2C_UNK TObjFish__sub_803DA798(M2C_UNK *);
s32 check_all_players_ready__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_split_screen();

extern M2C_UNK lbl_8048E5C8[];

void draw_if_all_ready__10TObjPlayerFv(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        TObjFish__sub_803DA798(lbl_8048E5C8);
        TObjPlayer__sub_803E1D90(0, 0, 0, 1);
    }
}

}
