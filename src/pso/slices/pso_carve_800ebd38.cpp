#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80020004(void *, s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
void *TAdSinglePlyChrSelectGC__sub_8007EB94(M2C_UNK);
M2C_UNK fn_802D7260(M2C_UNK, s32, s32, f32, f32);
extern M2C_UNK lbl_80496350[];
extern void *lbl_805D52B0;
extern f32 lbl_805DA66C;
extern f32 lbl_805DA6B4;

void fn_800EBD38(void) {
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    temp_r4 = TAdSinglePlyChrSelectGC__sub_8007EB94(0x440);
    if (temp_r4 != NULL) {
        temp_r4 = TLobby__sub_80020004(temp_r4, 1, lbl_80496350, 0, 0, 0);
    }
    lbl_805D52B0 = temp_r4;
    temp_r5 = M2C_FIELD(temp_r4, void **, 0x42C);
    fn_802D7260(0x28, M2C_FIELD(temp_r5, s32 *, 0x48), M2C_FIELD(temp_r5, s32 *, 0x4C), lbl_805DA66C, lbl_805DA6B4);
    temp_r5_2 = M2C_FIELD(lbl_805D52B0, void **, 0x42C);
    fn_802D7260(0x29, M2C_FIELD(temp_r5_2, s32 *, 0x58), M2C_FIELD(temp_r5_2, s32 *, 0x5C), lbl_805DA66C, lbl_805DA6B4);
}

}
