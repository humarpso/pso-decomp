#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8010B908(void *, s32, s32, s32, s32, s32);
M2C_UNK apply_bonuses(void *, s32, s32, s32, s32, s32);
M2C_UNK fn_8010BD24(void *, s32, s32, s32, s32, s32);
M2C_UNK fn_8010BEC4(void *, s32, s32, s32, s32, s32);
M2C_UNK fn_8010C0A4(void *, s32, s32, s32, s32, s32);
M2C_UNK fn_8010C1E0(void *, s32, s32, s32, s32, s32);
M2C_UNK fn_8010C320(void *, s32, s32, s32, s32, s32);
M2C_UNK fn_8010C5DC(void *, s32);
M2C_UNK fn_8010DD6C(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

void fn_8010DDDC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 temp_r0;
    u8 temp_r0_2;

    if ((arg1 != 0) || (arg1 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0), ((arg1 == 0) == 0))) {
        fn_8010DD6C(arg0, arg1);
        fn_8010C5DC(arg0, arg1);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0);
        switch ((s32) temp_r0) {
        case 0:
            fn_8010C320(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 1);
            switch ((s32) temp_r0_2) {
            case 1:
                fn_8010C1E0(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 2:
                fn_8010C0A4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            case 3:
                fn_8010BEC4(arg0, arg1, arg2, arg3, arg4, arg5);
                break;
            }
            break;
        case 2:
            fn_8010BD24(arg0, arg1, arg2, arg3, arg4, arg5);
            break;
        }
        apply_bonuses(arg0, arg1, arg2, arg3, arg4, arg5);
        fn_8010B908(arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

}
