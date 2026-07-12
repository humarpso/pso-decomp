#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_break__23TObjSeabedSuisoBrakableFPv(void *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(u32, M2C_UNK, M2C_UNK, u16, M2C_UNK);
s32 TObjSeabedSuisoBrakable__sub_802A71F8(M2C_UNK);
void *TObjSeabedSuisoBrakable__sub_80131648(s32, M2C_UNK);
M2C_UNK fn_803DC88C(M2C_UNK *);

extern M2C_UNK notify_break__23TObjSeabedSuisoBrakableFUi[];
extern s32 lbl_805D53A4;
extern s32 lbl_805D6678;

void notify_break__23TObjSeabedSuisoBrakableFPv(void *arg0) {
    s32 temp_r3;
    void *temp_r31;

    temp_r31 = TObjSeabedSuisoBrakable__sub_80131648(M2C_FIELD(arg0, s32 *, 0xD4), 4);
    if ((s32) lbl_805D6678 != (s32) lbl_805D53A4) {
        if ((temp_r31 != NULL) && ((u32) M2C_FIELD(temp_r31, u32 *, 4) != 0U)) {
            temp_r3 = TObjSeabedSuisoBrakable__sub_802A71F8(0);
            if (temp_r3 != -1) {
                TOComputerMachine01__sub_8023DDC8(M2C_FIELD(temp_r31, u32 *, 4), 1, 0, (u16) temp_r3, 1);
            }
        }
        lbl_805D6678 = lbl_805D53A4;
    }
    fn_803DC88C(notify_break__23TObjSeabedSuisoBrakableFUi);
}

}
