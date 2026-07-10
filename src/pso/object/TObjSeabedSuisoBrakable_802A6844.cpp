#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjSeabedSuisoBrakable__update_switch_lock(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);
s32 TObjSeabedSuisoBrakable__sub_802A71F8(M2C_UNK);
s32 *TObjSeabedSuisoBrakable__sub_802A7220(M2C_UNK);

extern s32 lbl_805D53A4;
extern s32 lbl_805D6678;

void TObjSeabedSuisoBrakable__update_switch_lock(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r3_3;
    s32 *temp_r3_4;
    s32 *temp_r3_5;
    s32 *temp_r3_6;
    s32 temp_r31;
    s32 temp_r31_2;
    s32 var_r31;
    s32 var_r30;

    var_r31 = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) > 0) {
        var_r30 = 0;
        while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0xCC)) {
            if (TODoorAncient08__sub_80229220((u16) (M2C_FIELD(arg0, s32 *, 0xD0) + var_r30)) == 0) {
                var_r31 = 0;
            }
            var_r30 += 1;
        }
    }
    if (var_r31 != 0) {
        temp_r3 = TObjSeabedSuisoBrakable__sub_802A7220(1);
        if (temp_r3 != NULL) {
            *temp_r3 &= 0xFFFFFFF7;
        }
        temp_r3_2 = TObjSeabedSuisoBrakable__sub_802A7220(2);
        if (temp_r3_2 != NULL) {
            *temp_r3_2 &= 0xFFFFFFF7;
        }
    } else {
        temp_r3_3 = TObjSeabedSuisoBrakable__sub_802A7220(1);
        if (temp_r3_3 != NULL) {
            *temp_r3_3 |= 8;
        }
        temp_r3_4 = TObjSeabedSuisoBrakable__sub_802A7220(2);
        if (temp_r3_4 != NULL) {
            *temp_r3_4 |= 8;
        }
    }
    if ((s32) lbl_805D6678 != (s32) lbl_805D53A4) {
        temp_r31 = TObjSeabedSuisoBrakable__sub_802A71F8(4);
        temp_r3_5 = TObjSeabedSuisoBrakable__sub_802A7220(2);
        if ((temp_r3_5 != NULL) && (temp_r31 != -1)) {
            TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r3_5, s32 *, 4), 0, 1, (u16) temp_r31, 1);
        }
        temp_r31_2 = TObjSeabedSuisoBrakable__sub_802A71F8(3);
        temp_r3_6 = TObjSeabedSuisoBrakable__sub_802A7220(0);
        if ((temp_r3_6 != NULL) && (temp_r31_2 != -1)) {
            TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r3_6, s32 *, 4), 0, 3, (u16) temp_r31_2, 1);
        }
        lbl_805D6678 = lbl_805D53A4;
    }
}

}
