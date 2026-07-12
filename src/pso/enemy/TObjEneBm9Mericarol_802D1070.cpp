#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm9Mericarol__sub_802D1070(void);
void TLobby__sub_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
M2C_UNK fn_802D1C84();

extern u32 lbl_805D6860;
extern u32 lbl_805D6864;
extern u32 lbl_805D6868;

void TObjEneBm9Mericarol__sub_802D1070(void) {
    if ((u32) lbl_805D6864 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6864, 1);
        lbl_805D6864 = 0U;
    }
    if ((u32) lbl_805D6860 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D6860, 1);
        lbl_805D6860 = 0U;
    }
    fn_802D1C84();
    if ((u32) lbl_805D6868 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6868, 1);
        lbl_805D6868 = 0U;
    }
}

}
