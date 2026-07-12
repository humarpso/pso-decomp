#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cast_foie__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_80122BE4(void *arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);
M2C_UNK create__8TTecFoieFPvPvPvPv(void *, M2C_UNK *, s32, M2C_UNK);

void cast_foie__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r3;

    draw_icon__10TObjPlayerFPvii(arg0, 2, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 0x1BF);
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
        create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, M2C_FIELD(temp_r3, s32 *, 0x60), 3);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

extern M2C_UNK lbl_804A1380[];

void *TObjPlayer__sub_80122BE4(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1380;
    TObjPlayer__sub_8012106C(arg0, 34);
    return arg0;
}

}
