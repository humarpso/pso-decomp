#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80099EF8();
u32 fn_8010147C(s32, M2C_UNK, M2C_UNK);
s32 fn_801019B8(s32, void *, M2C_UNK *);
s32 fn_80101AB0(s32);
u32 fn_80102BE0(s32, M2C_UNK);
u8 TOSwitchItem__sub_80102C44();
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 fn_801C675C(void *, M2C_UNK);
u32 fn_801D4890(s32, M2C_UNK *);
M2C_UNK fn_80266E34(void *);
M2C_UNK fn_80266FCC(void *, M2C_UNK);
M2C_UNK fn_80267580(void *, s32, s32);

void fn_80278AB4(u8 *arg0) {
    M2C_UNK spC[30];
    M2C_UNK sp8;
    s32 temp_r5;
    u32 temp_r30;
    s32 temp_r3_3;
    u8 *temp_r3;
    s32 temp_r3_2;
    u32 i;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != NULL) {
        temp_r30 = fn_801D4890(M2C_FIELD(temp_r3, s32 *, 0xD00), spC);
        for (i = 0; i < temp_r30; i++) {
            temp_r3_2 = fn_80101AB0(spC[i]);
            if ((temp_r3_2 != 0) && (TOSwitchItem__sub_80102C44() == 0) && (fn_801019B8(temp_r3_2, temp_r3, &sp8) != 0) && (fn_80102BE0(temp_r3_2, 8) == 0U) && (fn_8010147C(temp_r3_2, 8, 0) != 0U)) {
                fn_80267580(arg0, temp_r3_2, spC[i]);
            }
        }
        temp_r3_3 = fn_801C675C(temp_r3 + 0xD04, 6);
        if (temp_r3_3 != 0) {
            temp_r5 = fn_80099EF8();
            fn_80267580(arg0, temp_r3_3, temp_r5);
        }
        if (M2C_FIELD(arg0, s16 *, 0x72) <= 0) {
            fn_80266FCC(arg0, -1);
        }
        fn_80266E34(arg0);
    }
}

}
