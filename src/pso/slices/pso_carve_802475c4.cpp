#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_80247080(void *);
s32 fn_80247128(void *);
s32 fn_802471AC(void *);
M2C_UNK fn_802473C8(void *);
M2C_UNK fn_80247534(void *);
s32 fn_80247DF0(void *);
s32 fn_80247EC0(void *);
M2C_UNK fn_8024AD30(s32);
extern s32 lbl_805D53A0;

void fn_802475C4(void *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x1E) & 2) {
            fn_802473C8(arg0);
            if (fn_802471AC(arg0) != 0) {
                fn_80247534(arg0);
            }
        } else {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
            switch ((s8) temp_r0) {
            case 0:
                if ((fn_802471AC(arg0) != 0) && (fn_80247EC0(arg0) != 0)) {
                    if (fn_80247DF0(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        fn_8024AD30(lbl_805D53A0);
                    }
                    fn_80247534(arg0);
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 1:
                if ((fn_80247128(arg0) != 0) && (fn_80247EC0(arg0) != 0)) {
                    if (fn_80247DF0(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        fn_8024AD30(lbl_805D53A0);
                    }
                    fn_80247534(arg0);
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 2:
                if ((fn_80247080(arg0) != 0) && (fn_80247EC0(arg0) != 0)) {
                    if (fn_80247DF0(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        fn_8024AD30(lbl_805D53A0);
                    }
                    fn_80247534(arg0);
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                }
                break;
            }
        }
    }
}

}
