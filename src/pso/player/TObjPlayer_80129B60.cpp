#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void s_rank_bazooka_slide_barrel(void *arg0);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);

extern f32 lbl_805DAE48;
extern f32 lbl_805DAE4C;

void s_rank_bazooka_slide_barrel(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805DAE48, lbl_805DAE4C * M2C_FIELD(arg0, f32 *, 0x1FC), lbl_805DAE48);
    }
}

}
