#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
M2C_UNK TObjVoloptCage__ct(void *, void *, u16, u16, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__nw__7TObjectFUl(M2C_UNK);

extern u16 TBoss3Volopt__data_805D2710;
extern s32 lbl_805D2714;

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, u16 *, 0x338) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
        temp_r3 = __nw__7TObjectFUl(0x394);
        if (temp_r3 != 0) {
            TObjVoloptCage__ct(temp_r3, arg0, arg1, TBoss3Volopt__data_805D2710, lbl_805D2714);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x200000);
    }
}

}
