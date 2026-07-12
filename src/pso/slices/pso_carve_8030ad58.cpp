#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjFish__sub_8001EDB0(M2C_UNK, M2C_UNK);
void *TObjFish__sub_8001EDC4(M2C_UNK, M2C_UNK);
M2C_UNK TBoss4Uro__sub_8004C1A4();
M2C_UNK TBoss4DarkFalz__sub_8030AD08();
extern s32 lbl_805D6A68;
extern u32 lbl_805D6A6C;
extern s32 lbl_805D6A74;

void fn_8030AD58(void) {
    u32 temp_r3_2;
    void *temp_r3;

    lbl_805D6A68 = TObjFish__sub_8001EDB0(TBoss4Uro__sub_8004C1A4(), 8);
    temp_r3 = M2C_FIELD(TObjFish__sub_8001EDC4(TBoss4Uro__sub_8004C1A4(), 8), void **, 0x2C);
    M2C_FIELD(temp_r3, s32 *, 0) = (s32) (M2C_FIELD(temp_r3, s32 *, 0) & 0xFFFFFFFD);
    temp_r3_2 = M2C_FIELD(temp_r3, u32 *, 4);
    if (temp_r3_2 != 0U) {
        lbl_805D6A6C = temp_r3_2;
        lbl_805D6A74 = 0;
        TBoss4DarkFalz__sub_8030AD08();
    }
}

}
