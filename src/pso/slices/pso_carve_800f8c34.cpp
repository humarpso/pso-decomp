#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_800F8C8C();
M2C_UNK TLobby__sub_803CCB5C(s32, s32, u32);
extern s32 *lbl_805D5340;
extern s32 lbl_805D5344;
extern u32 lbl_805D5348;
extern s32 lbl_805D534C;

void TLobby__sub_800F8C34(void) {
    u32 temp_r5;
    s32 temp_r4;
    if ((s32) lbl_805D534C != 0) {
        temp_r5 = lbl_805D5348;
        lbl_805D534C = 0;
        if ((temp_r5 != 0U)) {
            temp_r4 = lbl_805D5344;
            if (temp_r4 != 0) {
                TLobby__sub_803CCB5C(*lbl_805D5340, temp_r4, temp_r5);
            }
        }
        TLobby__sub_800F8C8C();
    }
}

}
