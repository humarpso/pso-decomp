#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK TObjPlayer__sub_800847D4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjFish__sub_803DA798(M2C_UNK *);
M2C_UNK fn_803DC83C(M2C_UNK);
M2C_UNK fn_803DC850(M2C_UNK);
M2C_UNK TObjPlayer__sub_803E1D90(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8048E5B4[];
extern s32 some_id_805c6f74;

void setup_particle_tev(s32 arg0) {
    if (is_split_screen() == 0) {
        GXSetTevOrder(1, 1, 1, 4);
        if (arg0 != 0) {
            GXSetTevOp(1, 0);
        } else {
            GXSetTevOp(1, 1);
        }
        TObjPlayer__sub_800847D4(1, 0, 0, 0x1E);
        TObjFish__sub_803DA798(lbl_8048E5B4);
        TObjPlayer__sub_803E1D90(0, 0, 0, 1);
        some_id_805c6f74 |= 0x80000;
        fn_803DC850(1);
        fn_803DC83C(1);
    }
}

}
