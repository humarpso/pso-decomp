#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_80083F9C(void);
void TObjPlayer__sub_80083FA4(void);
void draw_if_all_ready__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 check_all_players_ready__10TObjPlayerFv();
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);

extern M2C_UNK lbl_8048E5C8[];

void draw_if_all_ready__10TObjPlayerFv(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        set_global_param__8TObjFishFi(lbl_8048E5C8);
        TObjPlayer__sub_803E1D90(0, 0, 0, 1);
    }
}

    extern int lbl_805D4EE0;
int TObjPlayer__sub_80083F9C(void) {  return lbl_805D4EE0; }

    extern int lbl_805D4EE0;
void TObjPlayer__sub_80083FA4(void) { lbl_805D4EE0 = 1; }

}
