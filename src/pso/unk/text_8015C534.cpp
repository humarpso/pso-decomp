#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TLobby__sub_8001FE7C(u32, int);
M2C_UNK free__11TOBoss4RockFUi(u32);
M2C_UNK free_if_valid__10TObjPlayerFi(int);
extern u32 lbl_805D58E8;
extern u32 lbl_805D58EC;
void fn_8015C5F8(void);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_8015C5F8(void) {
    s32 var_r31;
    s32 var_r30;
    u32 p;
    if ((u32) lbl_805D58EC != 0U) {
        var_r30 = 0;
        var_r31 = 0;
        do {
            free_if_valid__10TObjPlayerFi((int) (M2C_FIELD(lbl_805D58EC, M2C_UNK *, var_r31)));
            var_r30 += 1;
            var_r31 += 4;
        } while (var_r30 < 3);
        p = lbl_805D58EC;
        if (p != 0U) {
            free__11TOBoss4RockFUi(p);
            lbl_805D58EC = 0U;
        }
    }
    p = lbl_805D58E8;
    if (p != 0U) {
        TLobby__sub_8001FE7C(p, (int) (1));
        lbl_805D58E8 = 0U;
    }
}
#pragma pop

}
