#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248(s32);
M2C_UNK TCameraCtrl__sub_8006A088(M2C_UNK);
M2C_UNK fn_80087350(s32, M2C_UNK);
void *fn_801AA3A0(s32);
M2C_UNK TPhotonMagicSquare__sub_801AD330(void *, s32, s32, s32);
M2C_UNK TObjPlayer__sub_801B5408(s32, s16);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
u32 __nw__7TObjectFUl(M2C_UNK);
extern s32 tl_07;

void fn_801AA220(s32 arg0, u16 arg1) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_nw;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (temp_r3 != 0) {
        temp_r31 = fn_801AA3A0(arg0);
        if (fn_80019248(temp_r3) != 0) {
            TObjPlayer__sub_801B5408(temp_r3, M2C_FIELD(temp_r31, s16 *, 0x20));
        }
        fn_80087350(temp_r3 + 0x38, 0x13D);
        TCameraCtrl__sub_8006A088(0);
        switch (arg0) {
        case 2:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 2, arg1);
                return;
            }
            break;
        case 3:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 3, arg1);
                return;
            }
            break;
        case 4:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 4, arg1);
                return;
            }
            break;
        case 0:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 0, arg1);
                return;
            }
            break;
        case 1:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 1, arg1);
                return;
            }
            break;
        case 5:
            temp_nw = (void *) __nw__7TObjectFUl(0xD0);
            if (temp_nw != NULL) {
                TPhotonMagicSquare__sub_801AD330(temp_nw, tl_07, 5, arg1);
            }
            break;
        }
    }
}

}
